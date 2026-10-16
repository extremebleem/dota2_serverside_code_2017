
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoData::~CInfoData  (line 7, @0x0000000001fec760, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Purge, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps, ~CServerOnlyEntity, ~CUtlAttributeList
// calls: operator delete, CBaseEntity::~CBaseEntity
void __fastcall CInfoData::~CInfoData(CInfoData *const this)
{
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::OverflowChunk_t *m_pNext; // r12
  CInfoData *i; // rax
  CUtlAttributeList<Vector,16,Vector>::OverflowChunk_t *v5; // rdi
  CUtlAttributeList<Vector,16,Vector>::OverflowChunk_t *v6; // r12
  CInfoData *j; // rax
  CUtlAttributeList<Color,16,Color>::OverflowChunk_t *v8; // rdi
  CUtlAttributeList<Color,16,Color>::OverflowChunk_t *v9; // r12
  CInfoData *k; // rax
  CUtlAttributeList<int,16,int>::OverflowChunk_t *v11; // rdi
  CUtlAttributeList<int,16,int>::OverflowChunk_t *v12; // r12
  CInfoData *m; // rax
  CUtlAttributeList<float,16,float>::OverflowChunk_t *v14; // rdi
  CUtlAttributeList<float,16,float>::OverflowChunk_t *v15; // r12
  CInfoData *n; // rax

  this->_vptr_IHandleEntity = &off_3FDB630;
  m_pHead = this->m_Strings.m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      operator delete(m_pHead);
      this->m_Strings.m_pOverflow.m_pHead = m_pNext;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  for ( i = &this->m_Strings; this->m_Strings.m_fixedStorage.m_FixedValues != i; i = (i + 16) )
    *&i->_vptr_IHandleEntity = Four_Zeros;
  v5 = this->m_Vectors.m_pOverflow.m_pHead;
  this->m_Strings.m_pParent = 0;
  if ( v5 != 0 )
  {
    while ( 1 )
    {
      v6 = v5->m_pNext;
      operator delete(v5);
      this->m_Vectors.m_pOverflow.m_pHead = v6;
      if ( v6 == 0 )
        break;
      v5 = v6;
    }
  }
  for ( j = &this->m_Vectors; this->m_Vectors.m_fixedStorage.m_FixedValues != j; j = (j + 16) )
    *&j->_vptr_IHandleEntity = Four_Zeros;
  v8 = this->m_Colors.m_pOverflow.m_pHead;
  this->m_Vectors.m_pParent = 0;
  if ( v8 != 0 )
  {
    while ( 1 )
    {
      v9 = v8->m_pNext;
      operator delete(v8);
      this->m_Colors.m_pOverflow.m_pHead = v9;
      if ( v9 == 0 )
        break;
      v8 = v9;
    }
  }
  for ( k = &this->m_Colors; this->m_Colors.m_fixedStorage.m_FixedValues != k; k = (k + 16) )
    *&k->_vptr_IHandleEntity = Four_Zeros;
  v11 = this->m_Ints.m_pOverflow.m_pHead;
  this->m_Colors.m_pParent = 0;
  if ( v11 != 0 )
  {
    while ( 1 )
    {
      v12 = v11->m_pNext;
      operator delete(v11);
      this->m_Ints.m_pOverflow.m_pHead = v12;
      if ( v12 == 0 )
        break;
      v11 = v12;
    }
  }
  for ( m = &this->m_Ints; this->m_Ints.m_fixedStorage.m_FixedValues != m; m = (m + 16) )
    *&m->_vptr_IHandleEntity = Four_Zeros;
  v14 = this->m_Floats.m_pOverflow.m_pHead;
  this->m_Ints.m_pParent = 0;
  if ( v14 != 0 )
  {
    while ( 1 )
    {
      v15 = v14->m_pNext;
      operator delete(v14);
      this->m_Floats.m_pOverflow.m_pHead = v15;
      if ( v15 == 0 )
        break;
      v14 = v15;
    }
  }
  for ( n = &this->m_Floats; this->m_Floats.m_fixedStorage.m_FixedValues != n; n = (n + 16) )
    *&n->_vptr_IHandleEntity = Four_Zeros;
  this->m_Floats.m_pParent = 0;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoData::~CInfoData  (line 7, @0x0000000001fed1c0, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Purge, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps, ~CInfoData, ~CServerOnlyEntity, ~CUtlAttributeList
// calls: operator delete, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoData::~CInfoData(CInfoData *const this)
{
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::OverflowChunk_t *m_pNext; // r12
  CInfoData *i; // rax
  CUtlAttributeList<Vector,16,Vector>::OverflowChunk_t *v5; // rdi
  CUtlAttributeList<Vector,16,Vector>::OverflowChunk_t *v6; // r12
  CInfoData *j; // rax
  CUtlAttributeList<Color,16,Color>::OverflowChunk_t *v8; // rdi
  CUtlAttributeList<Color,16,Color>::OverflowChunk_t *v9; // r12
  CInfoData *k; // rax
  CUtlAttributeList<int,16,int>::OverflowChunk_t *v11; // rdi
  CUtlAttributeList<int,16,int>::OverflowChunk_t *v12; // r12
  CInfoData *m; // rax
  CUtlAttributeList<float,16,float>::OverflowChunk_t *v14; // rdi
  CUtlAttributeList<float,16,float>::OverflowChunk_t *v15; // r12
  CInfoData *n; // rax

  this->_vptr_IHandleEntity = &off_3FDB630;
  m_pHead = this->m_Strings.m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      operator delete(m_pHead);
      this->m_Strings.m_pOverflow.m_pHead = m_pNext;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  for ( i = &this->m_Strings; this->m_Strings.m_fixedStorage.m_FixedValues != i; i = (i + 16) )
    *&i->_vptr_IHandleEntity = Four_Zeros;
  v5 = this->m_Vectors.m_pOverflow.m_pHead;
  this->m_Strings.m_pParent = 0;
  if ( v5 != 0 )
  {
    while ( 1 )
    {
      v6 = v5->m_pNext;
      operator delete(v5);
      this->m_Vectors.m_pOverflow.m_pHead = v6;
      if ( v6 == 0 )
        break;
      v5 = v6;
    }
  }
  for ( j = &this->m_Vectors; this->m_Vectors.m_fixedStorage.m_FixedValues != j; j = (j + 16) )
    *&j->_vptr_IHandleEntity = Four_Zeros;
  v8 = this->m_Colors.m_pOverflow.m_pHead;
  this->m_Vectors.m_pParent = 0;
  if ( v8 != 0 )
  {
    while ( 1 )
    {
      v9 = v8->m_pNext;
      operator delete(v8);
      this->m_Colors.m_pOverflow.m_pHead = v9;
      if ( v9 == 0 )
        break;
      v8 = v9;
    }
  }
  for ( k = &this->m_Colors; this->m_Colors.m_fixedStorage.m_FixedValues != k; k = (k + 16) )
    *&k->_vptr_IHandleEntity = Four_Zeros;
  v11 = this->m_Ints.m_pOverflow.m_pHead;
  this->m_Colors.m_pParent = 0;
  if ( v11 != 0 )
  {
    while ( 1 )
    {
      v12 = v11->m_pNext;
      operator delete(v11);
      this->m_Ints.m_pOverflow.m_pHead = v12;
      if ( v12 == 0 )
        break;
      v11 = v12;
    }
  }
  for ( m = &this->m_Ints; this->m_Ints.m_fixedStorage.m_FixedValues != m; m = (m + 16) )
    *&m->_vptr_IHandleEntity = Four_Zeros;
  v14 = this->m_Floats.m_pOverflow.m_pHead;
  this->m_Ints.m_pParent = 0;
  if ( v14 != 0 )
  {
    while ( 1 )
    {
      v15 = v14->m_pNext;
      operator delete(v14);
      this->m_Floats.m_pOverflow.m_pHead = v15;
      if ( v15 == 0 )
        break;
      v14 = v15;
    }
  }
  for ( n = &this->m_Floats; this->m_Floats.m_fixedStorage.m_FixedValues != n; n = (n + 16) )
    *&n->_vptr_IHandleEntity = Four_Zeros;
  this->m_Floats.m_pParent = 0;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoData::Schema_DynamicBinding  (line 9, @0x0000000001fea8d0, libserver.so)
// globals: CInfoData::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoData::Schema_DynamicBinding(const CInfoData *const this)
{
  return CInfoData::s_pSchemaBinding;
}


// CInfoData::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 9, @0x0000000001fea8e0, libserver.so)
// globals: CInfoData::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoData::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoData::CEntityInstanceEntityClass *const this)
{
  return CInfoData::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoData::CEntityInstanceEntityClass::DestructInstance  (line 9, @0x0000000001fea8f0, libserver.so)  // inlines: Destruct<CInfoData>
void __fastcall CInfoData::CEntityInstanceEntityClass::DestructInstance(
        CInfoData::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoData::CEntityInstanceEntityClass::FreeInstance  (line 9, @0x0000000001fea910, libserver.so)
void __fastcall CInfoData::CEntityInstanceEntityClass::FreeInstance(
        CInfoData::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoData::CEntityInstanceEntityClass::CanAllocate  (line 9, @0x0000000001fea930, libserver.so)
bool __fastcall CInfoData::CEntityInstanceEntityClass::CanAllocate(
        const CInfoData::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoData::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 9, @0x0000000001fea940, libserver.so)
// globals: CInfoData::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoData::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoData::CEntityInstanceEntityClass *const this)
{
  return CInfoData::s_pSchemaBinding;
}


// CInfoData::CEntityInstanceEntityClass::AllocateInstance  (line 9, @0x0000000001febd20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoData::CEntityInstanceEntityClass::AllocateInstance(
        CInfoData::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1696);
  memset(v1, 0, 0x6A0u);
  return v1;
}


// CInfoData::CEntityInstanceEntityClass::ConstructInstance  (line 9, @0x0000000001fec9f0, libserver.so)  // inlines: CInfoData, CServerOnlyEntity, CUtlAttributeList, CUtlAttributeListChunk, CUtlIntrusiveList, CUtlSymbolLarge, Clear, Color, Construct<CInfoData>, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps, memset
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoData::CEntityInstanceEntityClass::ConstructInstance(
        CInfoData::CEntityInstanceEntityClass *const this,
        void *p)
{
  fltx4_0 *v3; // rdx
  fltx4_0 v4; // xmm0
  fltx4_0 *v5; // rdx
  _DWORD *v6; // rdx
  fltx4_0 *v7; // rdx
  fltx4_0 *v8; // rdx
  _QWORD *v9; // rdx
  fltx4_0 *v10; // rdx

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    v3 = (p + 784);
    *p = &off_3FDB630;
    memset(p + 784, 0, 0x40u);
    if ( p + 784 == p + 848 )
    {
      v4 = Four_Zeros;
    }
    else
    {
      v4 = Four_Zeros;
      do
        *v3++ = Four_Zeros;
      while ( p + 848 != v3 );
    }
    v5 = (p + 928);
    *(p + 114) = 0;
    *(p + 115) = 0;
    memset(p + 928, 0, 0x40u);
    if ( p + 928 != p + 992 )
    {
      do
        *v5++ = v4;
      while ( p + 992 != v5 );
    }
    *(p + 132) = 0;
    *(p + 133) = 0;
    v6 = p + 1136;
    do
      *v6++ = 0;
    while ( v6 != (p + 1200) );
    v7 = (p + 1072);
    memset(p + 1072, 0, 0x40u);
    do
      *v7++ = v4;
    while ( p + 1136 != v7 );
    v8 = (p + 1216);
    *(p + 150) = 0;
    *(p + 151) = 0;
    memset(p + 1216, 0, 0x40u);
    do
      *v8++ = v4;
    while ( p + 1280 != v8 );
    *(p + 184) = 0;
    *(p + 185) = 0;
    v9 = p + 1552;
    do
      *v9++ = 0;
    while ( v9 != (p + 1680) );
    v10 = (p + 1488);
    memset(p + 1488, 0, 0x40u);
    do
      *v10++ = v4;
    while ( p + 1552 != v10 );
    *(p + 210) = 0;
    *(p + 211) = 0;
  }
  return p;
}


// CInfoData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 9, @0x0000000001feccc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoData::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 9, @0x0000000001fecce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoData::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoData::GetEntityClassInternal  (line 9, @0x0000000001ff61a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CInfoData>, CServerOnlyEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "info_data", "CInfoData"
// globals: `guard variable for'CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass, CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoData::GetEntityClassInfo(void)::g_EntityCInfoDataClassInfo, CInfoData::GetEntityClassInfo(void)::g_EntityCInfoDataClassInfo
CEntityClass *__cdecl CInfoData::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass) != 0 )
  {
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_designerName.u.m_Id = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass._vptr_CEntityClass = off_3F79390;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_ComponentOffsets.m_Size = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_AllHelpers.m_Size = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_classInputs.m_Size = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_classOutputs.m_Size = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_requiredEHandle.m_Index = -1;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_hNetworkSerializer = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pBaseClassInfo = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pClassInfo = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_flags = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_nAllHelpersFlags = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pScriptClassDesc = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pInputs = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_nInputCount = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pOutputs = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_nOutputCount = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pGameClass = 0;
    CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass._vptr_CEntityClass = off_3FDB5B0;
    __cxa_guard_release(&`guard variable for'CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass);
    __cxa_atexit(
      CInfoData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoDataClass != 0 )
    return &CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass;
  if ( `guard variable for'CInfoData::GetEntityClassInfo(void)::g_EntityCInfoDataClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoData::GetEntityClassInfo(void)::g_EntityCInfoDataClassInfo) != 0 )
  {
    EntityClassInfo = CServerOnlyEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoData::GetEntityClassInfo(void)::g_EntityCInfoDataClassInfo,
      "CInfoData",
      "info_data",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoData::GetEntityClassInfo(void)::g_EntityCInfoDataClassInfo);
  }
  CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pClassInfo = &CInfoData::GetEntityClassInfo(void)::g_EntityCInfoDataClassInfo;
  CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pBaseClassInfo = CInfoData::GetEntityClassInfo(void)::g_EntityCInfoDataClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoDataClass = &CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass;
  CInfoData::GetEntityClassInfo(void)::g_EntityCInfoDataClassInfo.m_pClass = &CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass;
  CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass.m_pScriptClassDesc = GetScriptDesc<CInfoData>(0);
  g_pEntityCInfoDataClass->m_pComponentOverrides = 0;
  return &CInfoData::GetEntityClassInternal(void)::g_EntityCInfoDataClass;
}


