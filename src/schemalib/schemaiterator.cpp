
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_schemaiterator.cpp  (line 0, @0x0000000001a67860, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_schemaiterator_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CSchemaInheritanceIterator::CSchemaInheritanceIterator  (line 22, @0x000000000308ea50, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Invalidate, Purge, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume
void __fastcall CSchemaInheritanceIterator::CSchemaInheritanceIterator(CSchemaInheritanceIterator *const this)
{
  AlignedByteArray_t<8ul,CSchemaInheritanceIterator::ClassToTraverse_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_ClassesToTraverse.m_Memory.m_FixedMemory;
  this->m_ClassesToTraverse.m_Size = 0;
  this->m_ClassesToTraverse.m_Memory.m_pMemory = 0;
  this->m_ClassesToTraverse.m_Memory.m_nAllocationCount = 8;
  this->m_ClassesToTraverse.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_ClassesToTraverse.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_ClassesToTraverse.m_Size = 0;
  this->m_CurrentClass = 0;
  this->m_ClassToSkip = 0;
  this->m_nCurrentClassIndex = 0;
  this->m_nCurrentClassOffset = 0;
}


// CSchemaInheritanceIterator::CSchemaInheritanceIterator  (line 30, @0x000000000308f880, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: CSchemaInheritanceIterator::Init, Plat_IsInDebugSessionRaw, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume, CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> >::~CUtlVectorBase
// callers: InitDataDescSchema
void __fastcall CSchemaInheritanceIterator::CSchemaInheritanceIterator(
        CSchemaInheritanceIterator *const this,
        ClassIntrospectionHandle_t classInfo,
        SchemaBaseClassTraversal_t nBaseTraversal)
{
  AlignedByteArray_t<8ul,CSchemaInheritanceIterator::ClassToTraverse_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_ClassesToTraverse.m_Memory.m_FixedMemory;
  this->m_ClassesToTraverse.m_Size = 0;
  this->m_ClassesToTraverse.m_Memory.m_pMemory = 0;
  this->m_ClassesToTraverse.m_Memory.m_nAllocationCount = 8;
  this->m_ClassesToTraverse.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_ClassesToTraverse.m_Memory.m_pMemory = p_m_FixedMemory;
  CSchemaInheritanceIterator::Init(this, classInfo, nBaseTraversal, 0);
}


// CSchemaInheritanceIterator::CSchemaInheritanceIterator  (line 38, @0x000000000308f920, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: CSchemaInheritanceIterator::Init, Plat_IsInDebugSessionRaw, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume, CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> >::~CUtlVectorBase
void __fastcall CSchemaInheritanceIterator::CSchemaInheritanceIterator(
        CSchemaInheritanceIterator *const this,
        const CSchemaClassBindingBase *pClassBinding,
        SchemaBaseClassTraversal_t nBaseTraversal)
{
  AlignedByteArray_t<8ul,CSchemaInheritanceIterator::ClassToTraverse_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_ClassesToTraverse.m_Memory.m_FixedMemory;
  this->m_ClassesToTraverse.m_Size = 0;
  this->m_ClassesToTraverse.m_Memory.m_pMemory = 0;
  this->m_ClassesToTraverse.m_Memory.m_nAllocationCount = 8;
  this->m_ClassesToTraverse.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_ClassesToTraverse.m_Memory.m_pMemory = p_m_FixedMemory;
  CSchemaInheritanceIterator::Init(this, pClassBinding->m_pClassInfo_N, nBaseTraversal, 0);
}


// CSchemaInheritanceIterator::CSchemaInheritanceIterator  (line 46, @0x000000000308f9c0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: CSchemaInheritanceIterator::Init, Plat_IsInDebugSessionRaw, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume, CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> >::~CUtlVectorBase
void __fastcall CSchemaInheritanceIterator::CSchemaInheritanceIterator(
        CSchemaInheritanceIterator *const this,
        ClassIntrospectionHandle_t classInfo,
        SchemaBaseClassTraversal_t nBaseTraversal,
        ClassIntrospectionHandle_t classToSkip)
{
  AlignedByteArray_t<8ul,CSchemaInheritanceIterator::ClassToTraverse_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_ClassesToTraverse.m_Memory.m_FixedMemory;
  this->m_ClassesToTraverse.m_Size = 0;
  this->m_ClassesToTraverse.m_Memory.m_pMemory = 0;
  this->m_ClassesToTraverse.m_Memory.m_nAllocationCount = 8;
  this->m_ClassesToTraverse.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_ClassesToTraverse.m_Memory.m_pMemory = p_m_FixedMemory;
  CSchemaInheritanceIterator::Init(this, classInfo, nBaseTraversal, classToSkip);
}


// CSchemaInheritanceIterator::Init  (line 53, @0x000000000308f530, libserver.so)
// calls: CSchemaInheritanceIterator::PopulateTraversal, CSchemaInheritanceIterator::Advance
// callers: CSchemaFieldIterator::Init, CSchemaFieldIterator::CSchemaFieldIterator, CSchemaInheritanceIterator::CSchemaInheritanceIterator
void __fastcall CSchemaInheritanceIterator::Init(
        CSchemaInheritanceIterator *const this,
        ClassIntrospectionHandle_t classInfo,
        SchemaBaseClassTraversal_t nBaseTraversal,
        ClassIntrospectionHandle_t classToSkip)
{
  this->m_ClassToSkip = classToSkip;
  this->m_CurrentClass = 0;
  this->m_nCurrentClassOffset = 0;
  CSchemaInheritanceIterator::PopulateTraversal(this, classInfo, nBaseTraversal, classToSkip);
  this->m_nCurrentClassIndex = -1;
  CSchemaInheritanceIterator::Advance(this);
}


// CSchemaInheritanceIterator::Reset  (line 66, @0x000000000308eba0, libserver.so)
// calls: CSchemaInheritanceIterator::Advance
void __fastcall CSchemaInheritanceIterator::Reset(CSchemaInheritanceIterator *const this)
{
  this->m_nCurrentClassIndex = -1;
  CSchemaInheritanceIterator::Advance(this);
}


// CSchemaInheritanceIterator::Invalidate  (line 75, @0x000000000308eaf0, libserver.so)  // inlines: RemoveAll
void __fastcall CSchemaInheritanceIterator::Invalidate(CSchemaInheritanceIterator *const this)
{
  this->m_ClassesToTraverse.m_Size = 0;
  this->m_CurrentClass = 0;
  this->m_ClassToSkip = 0;
  this->m_nCurrentClassIndex = 0;
  this->m_nCurrentClassOffset = 0;
}


// CSchemaInheritanceIterator::IsValid  (line 87, @0x000000000308eb30, libserver.so)
// callers: InitDataDescSchema
bool __fastcall CSchemaInheritanceIterator::IsValid(const CSchemaInheritanceIterator *const this)
{
  int m_nCurrentClassIndex; // edx
  bool result; // al

  m_nCurrentClassIndex = this->m_nCurrentClassIndex;
  result = 0;
  if ( m_nCurrentClassIndex >= 0 )
    return m_nCurrentClassIndex < this->m_ClassesToTraverse.m_Size;
  return result;
}


// CSchemaInheritanceIterator::Advance  (line 95, @0x000000000308eb50, libserver.so)  // inlines: operator[]
// callers: InitDataDescSchema, CSchemaInheritanceIterator::Reset, CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers, CSchemaFieldIterator::Reset, CSchemaFieldIterator::Advance, CSchemaInheritanceIterator::Init
void __fastcall CSchemaInheritanceIterator::Advance(CSchemaInheritanceIterator *const this)
{
  int v1; // eax
  bool v2; // cc
  CSchemaInheritanceIterator::ClassToTraverse_t *v3; // rax

  v1 = this->m_nCurrentClassIndex + 1;
  v2 = v1 < this->m_ClassesToTraverse.m_Size;
  this->m_nCurrentClassIndex = v1;
  if ( v2 )
  {
    v3 = &this->m_ClassesToTraverse.m_Memory.m_pMemory[v1];
    this->m_CurrentClass = v3->m_Class;
    this->m_nCurrentClassOffset = v3->m_nClassOffset;
  }
  else
  {
    this->m_CurrentClass = 0;
  }
}


// CSchemaInheritanceIterator::GetClass  (line 113, @0x000000000308ebc0, libserver.so)
// callers: InitDataDescSchema
ClassIntrospectionHandle_t __fastcall CSchemaInheritanceIterator::GetClass(
        const CSchemaInheritanceIterator *const this)
{
  return this->m_CurrentClass;
}


// CSchemaInheritanceIterator::GetClassOffset  (line 121, @0x000000000308ebd0, libserver.so)
uint32 __fastcall CSchemaInheritanceIterator::GetClassOffset(const CSchemaInheritanceIterator *const this)
{
  return this->m_nCurrentClassOffset;
}


// CSchemaInheritanceIterator::PopulateTraversal  (line 129, @0x000000000308f490, libserver.so)  // inlines: AddToTail, GrowMemory, RemoveAll
// calls: CSchemaInheritanceIterator::PopulateTraversal_R, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Grow
// callers: CSchemaInheritanceIterator::Init
void __fastcall CSchemaInheritanceIterator::PopulateTraversal(
        CSchemaInheritanceIterator *const this,
        ClassIntrospectionHandle_t traverseClass,
        SchemaBaseClassTraversal_t nBaseTraversal,
        ClassIntrospectionHandle_t classToSkip)
{
  int v6; // eax
  CSchemaInheritanceIterator::ClassToTraverse_t *m_pMemory; // rax

  this->m_ClassesToTraverse.m_Size = 0;
  if ( nBaseTraversal != SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE )
  {
    CSchemaInheritanceIterator::PopulateTraversal_R(
      this,
      traverseClass,
      classToSkip,
      0,
      nBaseTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL
   || nBaseTraversal == SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL_IN_MEMORY_ORDER,
      (nBaseTraversal - 3) <= 1);
  }
  else if ( traverseClass != classToSkip )
  {
    v6 = 1;
    if ( this->m_ClassesToTraverse.m_Memory.m_nAllocationCount == 0 )
    {
      CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t,int>::Grow(&this->m_ClassesToTraverse.m_Memory, 1);
      v6 = this->m_ClassesToTraverse.m_Size + 1;
    }
    this->m_ClassesToTraverse.m_Size = v6;
    m_pMemory = this->m_ClassesToTraverse.m_Memory.m_pMemory;
    m_pMemory->m_Class = traverseClass;
    m_pMemory->m_nClassOffset = 0;
    m_pMemory->m_nDerivedClassIndex = -1;
  }
}


// CSchemaInheritanceIterator::PopulateTraversal_R  (line 156, @0x000000000308f240, libserver.so)  // inlines: AddToTail, Count, Element, GetBaseClassCount, GetBaseClassInfo, GetBaseClassOffset, GrowMemory, operator[]
// calls: CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Grow, __stack_chk_fail
// callers: CSchemaInheritanceIterator::PopulateTraversal
int __fastcall CSchemaInheritanceIterator::PopulateTraversal_R(
        CSchemaInheritanceIterator *const this,
        ClassIntrospectionHandle_t traverseClass,
        ClassIntrospectionHandle_t classToSkip,
        uint32 nTraversalOffset,
        bool bIncludedNonPrimary,
        bool bInMemoryOrder)
{
  CSchemaInheritanceIterator *v6; // r13
  int v7; // r12d
  unsigned __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rax
  uint32 v15; // esi
  int v17; // eax
  bool v18; // zf
  int v19; // r13d
  void *v20; // rsp
  __int64 v21; // rax
  __int64 v22; // r12
  int v23; // eax
  int m_Size; // eax
  __int64 v26; // [rsp+10h] [rbp-70h] BYREF
  int nThisClassIndex; // [rsp+18h] [rbp-68h]
  bool v28[4]; // [rsp+1Ch] [rbp-64h]
  __int64 v29; // [rsp+20h] [rbp-60h]
  ClassIntrospectionHandle_t classToSkipa; // [rsp+28h] [rbp-58h]
  CSchemaInheritanceIterator *thisa; // [rsp+30h] [rbp-50h]
  bool v32[4]; // [rsp+38h] [rbp-48h]
  uint32 nTraversalOffseta; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v34; // [rsp+48h] [rbp-38h]

  v6 = this;
  v34 = __readfsqword(0x28u);
  classToSkipa = classToSkip;
  nTraversalOffseta = nTraversalOffset;
  HIDWORD(v26) = bInMemoryOrder;
  if ( traverseClass == classToSkip )
    return -1;
  LODWORD(thisa) = traverseClass->m_BaseClasses.m_Data.m_nImplLength;
  v7 = abs32(thisa);
  if ( v7 > 1 )
  {
    nThisClassIndex = -1;
    if ( !bIncludedNonPrimary )
      v7 = 1;
    if ( BYTE4(v26) != 0 )
    {
LABEL_4:
      v8 = 0;
      v9 = 0;
      if ( v7 == 0 )
        goto LABEL_5;
LABEL_15:
      thisa = v6;
      v19 = 0;
      v20 = alloca(((4LL * v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      *v32 = BYTE4(v26);
      v8 = &v26 & 0xFFFFFFFFFFFFFFEFLL;
      *v28 = bIncludedNonPrimary;
      v21 = (v7 - 1) + 1LL;
      v22 = 0;
      v29 = 16 * v21;
      do
      {
        v23 = CSchemaInheritanceIterator::PopulateTraversal_R(
                thisa,
                *(traverseClass->m_BaseClasses.m_Data.m_pImplElements + v22 + 8),
                classToSkipa,
                *(traverseClass->m_BaseClasses.m_Data.m_pImplElements + v22) + nTraversalOffseta,
                v28[0],
                v32[0]);
        *(v8 + 4LL * v19) = v23;
        v22 += 16;
        v19 += v23 != -1;
      }
      while ( v22 != v29 );
      v9 = v19;
      v6 = thisa;
      if ( BYTE4(v26) == 0 )
        goto LABEL_6;
LABEL_18:
      m_Size = v6->m_ClassesToTraverse.m_Size;
      v18 = v6->m_ClassesToTraverse.m_Size == v6->m_ClassesToTraverse.m_Memory.m_nAllocationCount;
      nThisClassIndex = v6->m_ClassesToTraverse.m_Size;
      if ( v18 )
      {
        CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t,int>::Grow(&v6->m_ClassesToTraverse.m_Memory, 1);
        m_Size = v6->m_ClassesToTraverse.m_Size;
      }
      v6->m_ClassesToTraverse.m_Size = m_Size + 1;
      goto LABEL_6;
    }
  }
  else
  {
    nThisClassIndex = -1;
    if ( BYTE4(v26) != 0 )
      goto LABEL_4;
  }
  v17 = this->m_ClassesToTraverse.m_Size;
  v18 = this->m_ClassesToTraverse.m_Size == this->m_ClassesToTraverse.m_Memory.m_nAllocationCount;
  nThisClassIndex = this->m_ClassesToTraverse.m_Size;
  if ( v18 )
  {
    LODWORD(thisa) = bIncludedNonPrimary;
    CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t,int>::Grow(&this->m_ClassesToTraverse.m_Memory, 1);
    v17 = v6->m_ClassesToTraverse.m_Size;
    bIncludedNonPrimary = thisa;
  }
  v8 = 0;
  v9 = 0;
  v6->m_ClassesToTraverse.m_Size = v17 + 1;
  if ( v7 != 0 )
    goto LABEL_15;
LABEL_5:
  if ( BYTE4(v26) != 0 )
    goto LABEL_18;
LABEL_6:
  v10 = 0;
  v11 = nThisClassIndex;
  if ( v9 != 0 )
  {
    do
    {
      v12 = *(v8 + 4 * v10++);
      v6->m_ClassesToTraverse.m_Memory.m_pMemory[v12].m_nDerivedClassIndex = v11;
    }
    while ( v9 > v10 );
  }
  v13 = nThisClassIndex;
  v14 = &v6->m_ClassesToTraverse.m_Memory.m_pMemory[nThisClassIndex];
  *v14 = traverseClass;
  v15 = nTraversalOffseta;
  *(v14 + 12) = -1;
  *(v14 + 8) = v15;
  return v13;
}


// CSchemaFieldIterator::CSchemaFieldIterator  (line 215, @0x000000000308ebe0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CSchemaInheritanceIterator, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Invalidate, Purge, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume
void __fastcall CSchemaFieldIterator::CSchemaFieldIterator(CSchemaFieldIterator *const this)
{
  AlignedByteArray_t<8ul,CSchemaInheritanceIterator::ClassToTraverse_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_FixedMemory;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nAllocationCount = 8;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_CurrentClass = 0;
  this->m_InheritanceIterator.m_ClassToSkip = 0;
  this->m_InheritanceIterator.m_nCurrentClassIndex = 0;
  this->m_InheritanceIterator.m_nCurrentClassOffset = 0;
  this->m_CurrentField = 0;
  this->m_nFieldIndex = 0;
}


// CSchemaFieldIterator::CSchemaFieldIterator  (line 223, @0x000000000308f5c0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CSchemaInheritanceIterator, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Init, Invalidate, Purge, RemoveAll, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: CSchemaInheritanceIterator::Init, CSchemaFieldIterator::Reset, Plat_IsInDebugSessionRaw, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume, CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> >::~CUtlVectorBase
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable
void __fastcall CSchemaFieldIterator::CSchemaFieldIterator(
        CSchemaFieldIterator *const this,
        const CSchemaClassBindingBase *pClassBinding,
        SchemaBaseClassTraversal_t nBaseTraversal)
{
  AlignedByteArray_t<8ul,CSchemaInheritanceIterator::ClassToTraverse_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_FixedMemory;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nAllocationCount = 8;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_CurrentClass = 0;
  this->m_InheritanceIterator.m_ClassToSkip = 0;
  this->m_InheritanceIterator.m_nCurrentClassIndex = 0;
  this->m_InheritanceIterator.m_nCurrentClassOffset = 0;
  CSchemaInheritanceIterator::Init(&this->m_InheritanceIterator, pClassBinding->m_pClassInfo_N, nBaseTraversal, 0);
  this->m_CurrentField = 0;
  this->m_nFieldIndex = 0;
  CSchemaFieldIterator::Reset(this);
}


// CSchemaFieldIterator::CSchemaFieldIterator  (line 231, @0x000000000308f6a0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CSchemaInheritanceIterator, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Init, Invalidate, Purge, RemoveAll, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: CSchemaInheritanceIterator::Init, CSchemaFieldIterator::Reset, Plat_IsInDebugSessionRaw, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume, CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> >::~CUtlVectorBase
// callers: CSchemaClassInfo::FindOrCreateMetadataOverrideForField, SpewClassDescription, CEntitySystem::BuildTablesRecursive, CEntitySystem::BuildComponentUnserializer, CClassVisitInfo::UpdateState
void __fastcall CSchemaFieldIterator::CSchemaFieldIterator(
        CSchemaFieldIterator *const this,
        ClassIntrospectionHandle_t classInfo,
        SchemaBaseClassTraversal_t nBaseTraversal)
{
  AlignedByteArray_t<8ul,CSchemaInheritanceIterator::ClassToTraverse_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_FixedMemory;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nAllocationCount = 8;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_CurrentClass = 0;
  this->m_InheritanceIterator.m_ClassToSkip = 0;
  this->m_InheritanceIterator.m_nCurrentClassIndex = 0;
  this->m_InheritanceIterator.m_nCurrentClassOffset = 0;
  CSchemaInheritanceIterator::Init(&this->m_InheritanceIterator, classInfo, nBaseTraversal, 0);
  this->m_CurrentField = 0;
  this->m_nFieldIndex = 0;
  CSchemaFieldIterator::Reset(this);
}


// CSchemaFieldIterator::CSchemaFieldIterator  (line 239, @0x000000000308f780, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CSchemaInheritanceIterator, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Init, Invalidate, Purge, RemoveAll, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: CSchemaInheritanceIterator::Init, CSchemaFieldIterator::Reset, Plat_IsInDebugSessionRaw, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume, CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> >::~CUtlVectorBase
// callers: CEntitySystem::AddComponentProceduralKeys, CEntitySystem::BuildComponentUnserializer
void __fastcall CSchemaFieldIterator::CSchemaFieldIterator(
        CSchemaFieldIterator *const this,
        ClassIntrospectionHandle_t classInfo,
        SchemaBaseClassTraversal_t nBaseTraversal,
        ClassIntrospectionHandle_t classToSkip)
{
  AlignedByteArray_t<8ul,CSchemaInheritanceIterator::ClassToTraverse_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_FixedMemory;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nAllocationCount = 8;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_CurrentClass = 0;
  this->m_InheritanceIterator.m_ClassToSkip = 0;
  this->m_InheritanceIterator.m_nCurrentClassIndex = 0;
  this->m_InheritanceIterator.m_nCurrentClassOffset = 0;
  CSchemaInheritanceIterator::Init(&this->m_InheritanceIterator, classInfo, nBaseTraversal, classToSkip);
  this->m_CurrentField = 0;
  this->m_nFieldIndex = 0;
  CSchemaFieldIterator::Reset(this);
}


// CSchemaFieldIterator::CSchemaFieldIterator  (line 248, @0x000000000308ec90, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CSchemaInheritanceIterator, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, InitForSingleField, Invalidate, Purge, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, _Unwind_Resume
void __fastcall CSchemaFieldIterator::CSchemaFieldIterator(
        CSchemaFieldIterator *const this,
        FieldIntrospectionHandle_t handle)
{
  AlignedByteArray_t<8ul,CSchemaInheritanceIterator::ClassToTraverse_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_FixedMemory;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = 0;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nAllocationCount = 8;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_CurrentField = handle;
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_CurrentClass = 0;
  this->m_InheritanceIterator.m_ClassToSkip = 0;
  this->m_InheritanceIterator.m_nCurrentClassIndex = 0;
  this->m_InheritanceIterator.m_nCurrentClassOffset = 0;
  this->m_nFieldIndex = 0;
}


// CSchemaFieldIterator::Invalidate  (line 256, @0x000000000308ed50, libserver.so)
void __fastcall CSchemaFieldIterator::Invalidate(CSchemaFieldIterator *const this)
{
  this->m_CurrentField = 0;
  this->m_nFieldIndex = 0;
}


// CSchemaFieldIterator::Init  (line 265, @0x000000000308f580, libserver.so)
// calls: CSchemaInheritanceIterator::Init, CSchemaFieldIterator::Reset
void __fastcall CSchemaFieldIterator::Init(
        CSchemaFieldIterator *const this,
        ClassIntrospectionHandle_t classInfo,
        SchemaBaseClassTraversal_t nBaseTraversal,
        ClassIntrospectionHandle_t classToSkip)
{
  CSchemaInheritanceIterator::Init(&this->m_InheritanceIterator, classInfo, nBaseTraversal, classToSkip);
  this->m_CurrentField = 0;
  this->m_nFieldIndex = 0;
  CSchemaFieldIterator::Reset(this);
}


// CSchemaFieldIterator::InitForSingleField  (line 278, @0x000000000308ed70, libserver.so)  // inlines: Invalidate, RemoveAll
void __fastcall CSchemaFieldIterator::InitForSingleField(
        CSchemaFieldIterator *const this,
        FieldIntrospectionHandle_t handle)
{
  this->m_InheritanceIterator.m_ClassesToTraverse.m_Size = 0;
  this->m_InheritanceIterator.m_CurrentClass = 0;
  this->m_InheritanceIterator.m_ClassToSkip = 0;
  this->m_InheritanceIterator.m_nCurrentClassIndex = 0;
  this->m_InheritanceIterator.m_nCurrentClassOffset = 0;
  this->m_nFieldIndex = 0;
  this->m_CurrentField = handle;
}


// CSchemaFieldIterator::IsSingleFieldRestricted  (line 288, @0x000000000308edc0, libserver.so)  // inlines: IsValid
bool __fastcall CSchemaFieldIterator::IsSingleFieldRestricted(const CSchemaFieldIterator *const this)
{
  int m_nCurrentClassIndex; // eax
  bool result; // al

  result = 0;
  if ( this->m_CurrentField != 0 )
  {
    m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
    if ( m_nCurrentClassIndex < 0 || m_nCurrentClassIndex >= this->m_InheritanceIterator.m_ClassesToTraverse.m_Size )
      return 1;
  }
  return result;
}


// CSchemaFieldIterator::Reset  (line 296, @0x000000000308ee60, libserver.so)  // inlines: IsSingleFieldRestricted, IsValid, Reset
// calls: CSchemaInheritanceIterator::Advance, CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers
// callers: CSchemaFieldIterator::FindField, CSchemaFieldIterator::Init, CSchemaFieldIterator::CSchemaFieldIterator
void __fastcall CSchemaFieldIterator::Reset(CSchemaFieldIterator *const this)
{
  int m_nCurrentClassIndex; // eax

  if ( this->m_CurrentField == 0
    || (m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex) >= 0
    && m_nCurrentClassIndex < this->m_InheritanceIterator.m_ClassesToTraverse.m_Size )
  {
    this->m_InheritanceIterator.m_nCurrentClassIndex = -1;
    CSchemaInheritanceIterator::Advance(&this->m_InheritanceIterator);
    CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers(this);
  }
}


// CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers  (line 309, @0x000000000308edf0, libserver.so)  // inlines: IsValid
// calls: CSchemaInheritanceIterator::Advance
// callers: CSchemaFieldIterator::Reset, CSchemaFieldIterator::Advance
void __fastcall CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers(CSchemaFieldIterator *const this)
{
  int m_nCurrentClassIndex; // eax
  ClassIntrospectionHandle_t m_CurrentClass; // rax

  m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
  if ( m_nCurrentClassIndex >= 0 )
  {
    while ( m_nCurrentClassIndex < this->m_InheritanceIterator.m_ClassesToTraverse.m_Size )
    {
      m_CurrentClass = this->m_InheritanceIterator.m_CurrentClass;
      if ( m_CurrentClass->m_Fields.m_Data.m_nImplLength != 0 )
      {
        this->m_nFieldIndex = 0;
        this->m_CurrentField = m_CurrentClass->m_Fields.m_Data.m_pImplElements;
        return;
      }
      CSchemaInheritanceIterator::Advance(&this->m_InheritanceIterator);
      m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
      if ( m_nCurrentClassIndex < 0 )
        break;
    }
  }
  this->m_nFieldIndex = 0;
  this->m_CurrentField = 0;
}


// CSchemaFieldIterator::FindField  (line 332, @0x000000000308ef30, libserver.so)  // inlines: IsSingleFieldRestricted, IsValid, _V_strcmp
// calls: CSchemaFieldIterator::Reset, strcmp, CSchemaFieldIterator::Advance
// callers: CSchemaClassInfo::FindOrCreateMetadataOverrideForField, CEntitySystem::BuildComponentUnserializer
bool __fastcall CSchemaFieldIterator::FindField(CSchemaFieldIterator *const this, const char *pFieldName)
{
  int v4; // eax
  int m_nCurrentClassIndex; // eax
  FieldIntrospectionHandle_t m_CurrentField; // rax
  int v8; // eax

  if ( this->m_CurrentField == 0
    || (v4 = this->m_InheritanceIterator.m_nCurrentClassIndex) >= 0
    && v4 < this->m_InheritanceIterator.m_ClassesToTraverse.m_Size )
  {
    CSchemaFieldIterator::Reset(this);
    m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
    if ( m_nCurrentClassIndex >= 0 && this->m_InheritanceIterator.m_ClassesToTraverse.m_Size > m_nCurrentClassIndex )
    {
      do
      {
        m_CurrentField = this->m_CurrentField;
        if ( m_CurrentField == 0 )
          break;
        if ( strcmp(m_CurrentField->m_Name.m_pImplChars, pFieldName) == 0 )
          return 1;
        CSchemaFieldIterator::Advance(this);
        v8 = this->m_InheritanceIterator.m_nCurrentClassIndex;
      }
      while ( v8 >= 0 && v8 < this->m_InheritanceIterator.m_ClassesToTraverse.m_Size );
    }
  }
  return 0;
}


// CSchemaFieldIterator::FindField  (line 352, @0x000000000308efc0, libserver.so)  // inlines: IsSingleFieldRestricted, IsValid
// calls: CSchemaFieldIterator::Reset, CSchemaFieldIterator::Advance
bool __fastcall CSchemaFieldIterator::FindField(CSchemaFieldIterator *const this, FieldIntrospectionHandle_t handle)
{
  int v4; // eax
  int m_nCurrentClassIndex; // eax
  const CSchemaClassField *m_CurrentField; // rax
  int v8; // eax

  if ( this->m_CurrentField == 0
    || (v4 = this->m_InheritanceIterator.m_nCurrentClassIndex) >= 0
    && v4 < this->m_InheritanceIterator.m_ClassesToTraverse.m_Size )
  {
    CSchemaFieldIterator::Reset(this);
    m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
    if ( m_nCurrentClassIndex >= 0 && this->m_InheritanceIterator.m_ClassesToTraverse.m_Size > m_nCurrentClassIndex )
    {
      do
      {
        m_CurrentField = this->m_CurrentField;
        if ( m_CurrentField == 0 )
          break;
        if ( handle == m_CurrentField )
          return 1;
        CSchemaFieldIterator::Advance(this);
        v8 = this->m_InheritanceIterator.m_nCurrentClassIndex;
      }
      while ( v8 >= 0 && v8 < this->m_InheritanceIterator.m_ClassesToTraverse.m_Size );
    }
  }
  return 0;
}


// CSchemaFieldIterator::Advance  (line 371, @0x000000000308eeb0, libserver.so)  // inlines: Count, Element, GetClass, GetField, GetFieldCount, IsSingleFieldRestricted, IsValid, operator[]
// calls: CSchemaInheritanceIterator::Advance, CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable, CSchemaFieldIterator::FindField, SpewClassDescription, CEntitySystem::BuildTablesRecursive, CEntitySystem::AddComponentProceduralKeys, CEntitySystem::BuildComponentUnserializer, CClassVisitInfo::UpdateState
void __fastcall CSchemaFieldIterator::Advance(CSchemaFieldIterator *const this)
{
  int m_nCurrentClassIndex; // eax
  ClassIntrospectionHandle_t m_CurrentClass; // rdx
  int v4; // eax

  m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
  if ( m_nCurrentClassIndex >= 0 && m_nCurrentClassIndex < this->m_InheritanceIterator.m_ClassesToTraverse.m_Size )
  {
    m_CurrentClass = this->m_InheritanceIterator.m_CurrentClass;
    v4 = this->m_nFieldIndex + 1;
    this->m_nFieldIndex = v4;
    if ( v4 >= abs32(m_CurrentClass->m_Fields.m_Data.m_nImplLength) )
    {
      CSchemaInheritanceIterator::Advance(&this->m_InheritanceIterator);
      CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers(this);
    }
    else
    {
      this->m_CurrentField = (m_CurrentClass->m_Fields.m_Data.m_pImplElements + 64 * v4);
    }
  }
}


// CSchemaFieldIterator::IsValid  (line 396, @0x000000000308f050, libserver.so)  // inlines: IsValid
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable, SpewClassDescription, CEntitySystem::BuildTablesRecursive, CEntitySystem::AddComponentProceduralKeys, CEntitySystem::BuildComponentUnserializer, CClassVisitInfo::UpdateState
bool __fastcall CSchemaFieldIterator::IsValid(const CSchemaFieldIterator *const this)
{
  int m_nCurrentClassIndex; // edx
  bool result; // al

  m_nCurrentClassIndex = this->m_InheritanceIterator.m_nCurrentClassIndex;
  result = 0;
  if ( m_nCurrentClassIndex >= 0 && m_nCurrentClassIndex < this->m_InheritanceIterator.m_ClassesToTraverse.m_Size )
    return this->m_CurrentField != 0;
  return result;
}


// CSchemaFieldIterator::PointerFromClass  (line 404, @0x000000000308f080, libserver.so)  // inlines: GetFieldMemoryOffset
void *__fastcall CSchemaFieldIterator::PointerFromClass(const CSchemaFieldIterator *const this, void *pClass)
{
  return pClass + this->m_InheritanceIterator.m_nCurrentClassOffset + this->m_CurrentField->m_nSingleInheritanceOffset;
}


// CSchemaFieldIterator::PointerFromClass  (line 413, @0x000000000308f0a0, libserver.so)  // inlines: GetFieldMemoryOffset
const void *__fastcall CSchemaFieldIterator::PointerFromClass(
        const CSchemaFieldIterator *const this,
        const void *pClass)
{
  return pClass + this->m_InheritanceIterator.m_nCurrentClassOffset + this->m_CurrentField->m_nSingleInheritanceOffset;
}


// CSchemaFieldIterator::GetFieldMemoryOffset  (line 422, @0x000000000308f0c0, libserver.so)
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable, SpewClassDescription, CEntitySystem::BuildTablesRecursive, CEntitySystem::BuildComponentUnserializer, CClassVisitInfo::UpdateState
uint32 __fastcall CSchemaFieldIterator::GetFieldMemoryOffset(const CSchemaFieldIterator *const this)
{
  return this->m_InheritanceIterator.m_nCurrentClassOffset + this->m_CurrentField->m_nSingleInheritanceOffset;
}


// CSchemaFieldIterator::GetFieldName  (line 431, @0x000000000308f0e0, libserver.so)
// callers: CSchemaFieldIterator::IsMetaPresent, CSchemaFieldIterator::GetMetaPtr, CSchemaFieldIterator::GetAllMetaPtrsInternal
const char *__fastcall CSchemaFieldIterator::GetFieldName(const CSchemaFieldIterator *const this)
{
  return this->m_CurrentField->m_Name.m_pImplChars;
}


// CSchemaFieldIterator::GetFullyQualifiedFieldName  (line 451, @0x000000000308f0f0, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::Set, CUtlString::operator+, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: SpewClassDescription
// strings: "::"
CUtlString __fastcall CSchemaFieldIterator::GetFullyQualifiedFieldName(
        CUtlString *a1,
        const CSchemaFieldIterator *const this)
{
  const char *m_pImplChars; // r14
  const char *v4; // rsi
  CUtlString v6; // [rsp+0h] [rbp-40h] BYREF
  CUtlString v7; // [rsp+10h] [rbp-30h] BYREF

  m_pImplChars = this->m_CurrentField->m_Name.m_pImplChars;
  v4 = this->m_InheritanceIterator.m_CurrentClass->m_Name.m_pImplChars;
  v6.m_pString = 0;
  CUtlString::Set(&v6, v4);
  CUtlString::operator+(&v7, &v6, "::");
  CUtlString::operator+(a1, &v7, m_pImplChars);
  if ( v7.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v7);
  if ( v6.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v6);
  return a1;
}


// CSchemaFieldIterator::GetRawFieldHandle  (line 462, @0x000000000308f1b0, libserver.so)
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable, CEntitySystem::BuildComponentUnserializer, CClassVisitInfo::UpdateState
FieldIntrospectionHandle_t __fastcall CSchemaFieldIterator::GetRawFieldHandle(const CSchemaFieldIterator *const this)
{
  return this->m_CurrentField;
}


// CSchemaFieldIterator::GetType  (line 471, @0x000000000308f1c0, libserver.so)
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable, SpewClassDescription, CEntitySystem::BuildTablesRecursive, CEntitySystem::AddComponentProceduralKeys, CClassVisitInfo::UpdateState
CSchemaType *__fastcall CSchemaFieldIterator::GetType(const CSchemaFieldIterator *const this)
{
  FieldIntrospectionHandle_t m_CurrentField; // rax

  m_CurrentField = this->m_CurrentField;
  if ( m_CurrentField != 0 )
    return m_CurrentField->m_pType;
  else
    return 0;
}


// CSchemaFieldIterator::GetFieldMemorySize  (line 482, @0x000000000308f1f0, libserver.so)
int32 __fastcall CSchemaFieldIterator::GetFieldMemorySize(const CSchemaFieldIterator *const this)
{
  FieldIntrospectionHandle_t m_CurrentField; // rax

  m_CurrentField = this->m_CurrentField;
  if ( m_CurrentField != 0 )
    return (*(*m_CurrentField->m_pType + 64LL))(m_CurrentField->m_pType);
  else
    return 0;
}


// CSchemaFieldIterator::CurrentClass  (line 492, @0x000000000308f220, libserver.so)
// callers: CEntitySystem::BuildComponentUnserializer
ClassIntrospectionHandle_t __fastcall CSchemaFieldIterator::CurrentClass(CSchemaFieldIterator *const this)
{
  return this->m_InheritanceIterator.m_CurrentClass;
}


// CSchemaFieldIterator::CurrentFieldIndex  (line 500, @0x000000000308f230, libserver.so)
int __fastcall CSchemaFieldIterator::CurrentFieldIndex(CSchemaFieldIterator *const this)
{
  return this->m_nFieldIndex;
}


