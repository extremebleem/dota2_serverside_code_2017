
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DotaDictMgr  (line 11, @0x00000000024bf700, libserver.so)
// globals: s_DotaDictMgr
CDotaDictManager *__cdecl DotaDictMgr()
{
  return &s_DotaDictMgr;
}


// DotaDictSymbolLessFunc  (line 23, @0x00000000024b4270, libserver.so)  // inlines: operator<
bool __fastcall DotaDictSymbolLessFunc(const CUtlSymbolLarge *const lhs, const CUtlSymbolLarge *const rhs)
{
  return lhs->u.m_Id < rhs->u.m_Id;
}


// DotaDictEntry_t::GetPrintableValue  (line 34, @0x00000000024bf710, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: V_snprintf
// callers: DotaDictEntry_t::Print
// strings: "%4.2f"
// globals: CEntityHandle::gm_pEntityList
void __fastcall DotaDictEntry_t::GetPrintableValue(DotaDictEntry_t *const this, char *pszValue, int nMaxLength)
{
  CEntityIdentity *v4; // rcx
  __int64 v5; // rsi
  CEntityIdentity *v6; // rcx
  float *v7; // rdx
  fieldtype_t m_FieldType; // eax

  *pszValue = 0;
  if ( this->m_hEntity.m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntity.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = nMaxLength;
      v6 = &v4[this->m_hEntity.m_Index & 0x1FF];
      if ( v6 != 0 && this->m_hEntity.m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
      {
        v7 = (v6->m_pInstance + this->m_nFieldOffset);
        m_FieldType = this->m_FieldType;
        if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
        {
          V_snprintf(pszValue, v5, "%4.2f", *v7);
        }
        else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
        {
          V_snprintf(pszValue, v5, "%d", *v7);
        }
      }
    }
  }
}


// DotaDictEntry_t::Print  (line 75, @0x00000000024bf7c0, libserver.so)  // inlines: String
// calls: DotaDictEntry_t::GetPrintableValue, Msg, __stack_chk_fail
// callers: CDotaDict::Dump
// strings: "%s = %s\n"
void __fastcall DotaDictEntry_t::Print(DotaDictEntry_t *const this)
{
  const char *m_pAsString; // rsi
  char szTemp[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v4; // [rsp+108h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  DotaDictEntry_t::GetPrintableValue(this, szTemp, 256);
  m_pAsString = "";
  if ( this->m_symName.u.m_Id != 0 )
    m_pAsString = this->m_symName.u.m_pAsString;
  Msg("%s = %s\n", m_pAsString, szTemp);
}


// CDotaDict::CDotaDict  (line 92, @0x00000000024f7e30, libserver.so)  // inlines: CEntityHandle, CHandle, CNonThreadsafeTree, CUtlMap, CUtlMemory, CUtlRBTree, CUtlSymbolLarge, CUtlSymbolTableLargeBase, CUtlVector, CUtlVectorBase, ResetDbgInfo, SetLessFunc, operator=
// calls: CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::CUtlMemory
// callers: CDotaDictManager::CreateDictionary
// globals: DotaDictSymbolLessFunc(CUtlSymbolLarge const&,CUtlSymbolLarge const&)
void __fastcall CDotaDict::CDotaDict(CDotaDict *const this, CUtlSymbolLarge symName)
{
  CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> *p_m_Elements; // rdi
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> >::Node_t *m_pMemory; // rdx

  this->m_hOwner.m_Index = -1;
  p_m_Elements = &this->m_symNameTable.m_Lookup.m_Elements;
  p_m_Elements[-1].m_pMemory = 0;
  CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::CUtlMemory(
    p_m_Elements,
    0,
    16);
  m_pMemory = this->m_symNameTable.m_Lookup.m_Elements.m_pMemory;
  this->m_Dict.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_symNameTable.m_Lookup.m_Root = -1;
  this->m_symNameTable.m_Lookup.m_NumElements = 0;
  this->m_symNameTable.m_Lookup.m_pElements = m_pMemory;
  this->m_symNameTable.m_Lookup.m_FirstFree = -1;
  this->m_symNameTable.m_Lookup.m_LastAlloc.index = -1;
  this->m_symNameTable.m_StringPools.m_Size = 0;
  this->m_symNameTable.m_StringPools.m_Memory.m_pMemory = 0;
  this->m_symNameTable.m_StringPools.m_Memory.m_nAllocationCount = 0;
  this->m_symNameTable.m_StringPools.m_Memory.m_nGrowSize = 8;
  this->m_Dict.m_Tree.m_Elements.m_pMemory = 0;
  this->m_Dict.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_Dict.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_Dict.m_Tree.m_Root = -1;
  this->m_Dict.m_Tree.m_NumElements = 0;
  this->m_Dict.m_Tree.m_FirstFree = -1;
  this->m_Dict.m_Tree.m_LastAlloc.index = -1;
  this->m_Dict.m_Tree.m_pElements = 0;
  this->m_symDictionaryName.u.m_Id = *symName.u.m_Id;
  this->m_Dict.m_Tree.m_LessFunc.m_LessFunc = DotaDictSymbolLessFunc;
}


// CDotaDict::~CDotaDict  (line 103, @0x00000000024f14d0, libserver.so)  // inlines: Purge, RemoveAll, ~CNonThreadsafeTree, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlSymbolTableLargeBase, ~CUtlVector, ~CUtlVectorBase
// calls: CDotaDict::DestroyAllEntries, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::Purge
// callers: CDotaDictManager::DestroyAllDictionaries, CDotaDictManager::DestroyDictionary
void __fastcall CDotaDict::~CDotaDict(CDotaDict *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v4; // rsi
  bool v5; // zf

  CDotaDict::DestroyAllEntries(this);
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_Dict.m_Tree);
  if ( (this->m_Dict.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_Dict.m_Tree.m_Elements);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_symNameTable.m_Lookup);
  if ( this->m_symNameTable.m_StringPools.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_symNameTable.m_StringPools.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( v3 < this->m_symNameTable.m_StringPools.m_Size );
  }
  v5 = (this->m_symNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_symNameTable.m_StringPools.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_symNameTable.m_StringPools.m_Memory);
    v5 = (this->m_symNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_symNameTable.m_StringPools.m_Size = 0;
    if ( v5 )
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_symNameTable.m_StringPools.m_Memory);
      if ( (this->m_symNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_symNameTable.m_StringPools.m_Memory);
    }
  }
  else
  {
    this->m_symNameTable.m_StringPools.m_Size = 0;
  }
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_symNameTable.m_Lookup);
  if ( (this->m_symNameTable.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&this->m_symNameTable.m_Lookup.m_Elements);
}


// CDotaDict::CreateEntry  (line 114, @0x0000000002531cf0, libserver.so)  // inlines: AddString, CEntityHandle, CHandle, CUtlSymbolLarge, CUtlSymbolLarge_Hash, DotaDictEntry_t, Element, FStrEq, Find, FindInsertionPosition, FindPoolWithSpace, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetSerialNumber, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, RightChild, Set, String, ToSymbol, V_memcpy, V_strlen, _V_strcmp, memcpy, operator!=, operator(), operator=, operator==, operator[]
// calls: strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find, DevMsg, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Find, strcmp, operator new, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int> >::AddToTail, HashString, memcpy, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::NewNode (13 total)
// strings: "DoTADictMgr: Failed to create entry name %s.\n", "DoTADictMgr: %s(%s) was not found in the data map.\n", "DoTADictMgr: No data map found for entity %s.\n"
DotaDictEntry_t *__fastcall CDotaDict::CreateEntry(
        CDotaDict *const this,
        CBaseEntity *pEntity,
        const char *pszVarName,
        const char *pszEntryName)
{
  __int64 v7; // r13
  int v8; // eax
  char *m_Id; // rax
  int v10; // r8d
  int v12; // r8d
  unsigned __int16 v13; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int>::Node_t,short unsigned int> *v14; // rdx
  int v15; // eax
  __int64 v16; // r13
  const char *v17; // rdi
  __int64 v18; // r14
  DotaDictEntry_t *v19; // rax
  DotaDictEntry_t *v20; // r12
  CEntityIdentity *v21; // rax
  int v22; // edx
  __int16 v23; // cx
  UtlSymLargeId_t v24; // rax
  unsigned __int16 v25; // r13
  unsigned __int16 m_Left; // ax
  char v27; // cl
  bool v28; // zf
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int>::Node_t,short unsigned int> *v29; // rax
  unsigned __int16 v30; // ax
  CEntityIdentity *v31; // rax
  const char *v32; // rcx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  int m_Size; // r10d
  signed int v36; // r9d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **m_pMemory; // rsi
  int m_SpaceUsed; // edi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v39; // rsi
  int v40; // ecx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v41; // rax
  unsigned int v42; // edx
  __int64 v43; // rsi
  int v44; // eax
  __int64 m_Root; // rdx
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v46; // r9
  LargeSymbolTableHashDecoration_t v47; // r8
  __int64 m_Right; // rcx
  bool v49; // al
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v50; // r10
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  unsigned int v52; // eax
  unsigned int v53; // eax
  bool v54; // r15
  bool v55; // cl
  __int64 v56; // rax
  bool v57; // cl
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v58; // rcx
  char *s1; // [rsp+0h] [rbp-90h]
  int v60; // [rsp+8h] [rbp-88h]
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v61; // [rsp+8h] [rbp-88h]
  CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)> *p_m_Dict; // [rsp+10h] [rbp-80h]
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int>::Node_t,short unsigned int,CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int>::Node_t,short unsigned int>,short unsigned int> > *v63; // [rsp+10h] [rbp-80h]
  unsigned int pCopyFrom; // [rsp+20h] [rbp-70h]
  CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t *pCopyFroma; // [rsp+20h] [rbp-70h]
  CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t *pCopyFromb; // [rsp+20h] [rbp-70h]
  int isLeft; // [rsp+28h] [rbp-68h]
  bool isLefta[8]; // [rsp+28h] [rbp-68h]
  bool isLeftb[8]; // [rsp+28h] [rbp-68h]
  bool isLeftc[8]; // [rsp+28h] [rbp-68h]
  bool isLeftd; // [rsp+28h] [rbp-68h]
  bool isLefte[8]; // [rsp+28h] [rbp-68h]
  CUtlSymbolLarge symName; // [rsp+30h] [rbp-60h] BYREF
  char *v75; // [rsp+40h] [rbp-50h] BYREF
  CUtlSymbolTableLargeBaseTreeEntry_t *v76; // [rsp+48h] [rbp-48h] BYREF
  CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t search; // [rsp+50h] [rbp-40h] BYREF

  if ( pEntity == 0 )
    return 0;
  v7 = (*(pEntity->_vptr_IHandleEntity + 34))(pEntity);
  if ( v7 == 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    DevMsg(1, "DoTADictMgr: No data map found for entity %s.\n", m_pAsString);
    return 0;
  }
  if ( pszEntryName == 0 )
  {
    CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(&symName, &this->m_symNameTable, 0, 0);
    m_Id = symName.u.m_Id;
    if ( symName.u.m_Id == 0 )
    {
LABEL_7:
      symName.u.m_Id = 0;
LABEL_8:
      DevMsg(1, "DoTADictMgr: Failed to create entry name %s.\n", pszEntryName);
      return 0;
    }
    goto LABEL_11;
  }
  v8 = strlen(pszEntryName);
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
    &symName,
    &this->m_symNameTable,
    pszEntryName,
    v8);
  m_Id = symName.u.m_Id;
  if ( symName.u.m_Id == 0 )
  {
    v10 = strlen(pszEntryName);
    if ( v10 <= 0 || *pszEntryName == 0 )
      goto LABEL_7;
    isLeft = v10;
    CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
      &v75,
      &this->m_symNameTable,
      pszEntryName,
      v10);
    m_Id = v75;
    v12 = isLeft;
    if ( v75 != 0 )
    {
      symName.u.m_Id = v75;
      goto LABEL_11;
    }
    m_Size = this->m_symNameTable.m_StringPools.m_Size;
    v36 = (isLeft + 16) & 0xFFFFFFF8;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_symNameTable.m_StringPools.m_Memory.m_pMemory;
      m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
      if ( v36 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
      {
        v41 = *m_pMemory;
        goto LABEL_49;
      }
      v39 = m_pMemory + 1;
      v40 = 0;
      while ( ++v40 != m_Size )
      {
        v41 = *v39++;
        m_SpaceUsed = v41->m_SpaceUsed;
        if ( v36 <= v41->m_TotalLen - m_SpaceUsed )
        {
          if ( v40 != -1 )
            goto LABEL_49;
          break;
        }
      }
    }
    if ( (v36 + 12LL) <= 0x800 )
    {
      v42 = 2036;
      v43 = 2048;
    }
    else
    {
      v42 = (isLeft + 16) & 0xFFFFFFF8;
      v43 = v36 + 12;
    }
    pCopyFrom = v42;
    search.key.u.m_Id = (**g_pMemAlloc)(g_pMemAlloc, v43);
    *search.key.u.m_Id = pCopyFrom;
    *(search.key.u.m_Id + 4) = 0;
    v44 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>>::AddToTail(
            &this->m_symNameTable.m_StringPools,
            &search);
    v36 = (isLeft + 16) & 0xFFFFFFF8;
    v12 = isLeft;
    v41 = this->m_symNameTable.m_StringPools.m_Memory.m_pMemory[v44];
    m_SpaceUsed = v41->m_SpaceUsed;
LABEL_49:
    v60 = v12;
    v41->m_SpaceUsed = v36 + m_SpaceUsed;
    *isLeftb = v41 + m_SpaceUsed;
    *(*isLeftb + 8LL) = HashString(pszEntryName);
    s1 = (*isLeftb + 16LL);
    memcpy((*isLeftb + 16LL), pszEntryName, v60);
    *(v60 + *isLeftb + 16LL) = 0;
    m_Root = this->m_symNameTable.m_Lookup.m_Root;
    v76 = (*isLeftb + 8LL);
    if ( m_Root == -1 )
    {
      v55 = 0;
    }
    else
    {
      v46 = this->m_symNameTable.m_Lookup.m_Elements.m_pMemory;
      v47 = *(*isLeftb + 8LL);
      while ( 1 )
      {
        v50 = &v46[m_Root];
        m_Data = v50->m_Data;
        LOBYTE(v52) = v47 < m_Data->m_Hash;
        if ( v47 == m_Data->m_Hash )
        {
          v63 = m_Root;
          v61 = &v46[m_Root];
          pCopyFroma = v46;
          *isLeftc = v47;
          v53 = strcmp(s1, m_Data->m_String);
          v47 = *isLeftc;
          v52 = v53 >> 31;
          v46 = pCopyFroma;
          m_Root = v63;
          v50 = v61;
        }
        m_Right = v50->m_Right;
        if ( v52 != 0 )
          m_Right = v50->m_Left;
        v49 = v52 != 0;
        if ( m_Right == -1 )
          break;
        m_Root = m_Right;
      }
      v55 = v49;
    }
    pCopyFromb = m_Root;
    isLeftd = v55;
    v56 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
            &this->m_symNameTable.m_Lookup,
            &v76);
    v57 = isLeftd;
    *isLefte = v56;
    CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
      &this->m_symNameTable.m_Lookup,
      v56,
      pCopyFromb,
      v57);
    v58 = this->m_symNameTable.m_Lookup.m_Elements.m_pMemory;
    ++this->m_symNameTable.m_Lookup.m_NumElements;
    symName.u.m_Id = v58[*isLefte].m_Data->m_String;
    m_Id = symName.u.m_Id;
    if ( symName.u.m_Id == 0 )
      goto LABEL_8;
  }
LABEL_11:
  search.key.u.m_Id = m_Id;
  p_m_Dict = &this->m_Dict;
  v13 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          &this->m_Dict.m_Tree,
          &search);
  if ( v13 < this->m_Dict.m_Tree.m_Elements.m_nAllocationCount
    && v13 <= this->m_Dict.m_Tree.m_LastAlloc.index
    && v13 != 0xFFFF )
  {
    v14 = &this->m_Dict.m_Tree.m_Elements.m_pMemory[v13];
    if ( v13 != v14->m_Left )
      return v14->m_Data.elem;
  }
  v15 = *(v7 + 8);
  if ( v15 <= 0 )
  {
LABEL_34:
    v31 = pEntity->m_pEntity;
    v32 = "";
    if ( v31->m_designerName.u.m_Id != 0 )
      v32 = v31->m_designerName.u.m_pAsString;
    DevMsg(1, "DoTADictMgr: %s(%s) was not found in the data map.\n", pszEntryName, v32);
    return 0;
  }
  v16 = *v7;
  v17 = *(v16 + 8);
  if ( v17 != pszVarName )
  {
    v18 = v16 + 104;
    *isLefta = v16 + 104 + 104LL * (v15 - 1);
    do
    {
      if ( strcmp(v17, pszVarName) == 0 )
        break;
      if ( v18 == *isLefta )
        goto LABEL_34;
      v16 = v18;
      v18 += 104;
      v17 = *(v18 - 96);
    }
    while ( v17 != pszVarName );
  }
  v19 = operator new(0x20u);
  v19->m_hEntity.m_Index = -1;
  v20 = v19;
  v19->m_symName.u.m_Id = 0;
  v19->m_FieldType = fieldtype_t::FIELD_VOID;
  v21 = pEntity->m_pEntity;
  if ( v21 != 0 )
  {
    v22 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
    v23 = 0x7FFF;
    if ( v21->m_EHandle.m_Index != -1 )
      v23 = v21->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v20->m_hEntity.m_Index) = v23 | v20->m_hEntity.m_Index & 0x8000;
    v20->m_hEntity.m_Index = (v22 << 15) | v20->m_hEntity.m_Index & 0x7FFF;
  }
  v24 = symName.u.m_Id;
  v20->m_symName = symName;
  v20->m_FieldType = *v16;
  v20->m_nFieldOffset = *(v16 + 16);
  v20->m_nFieldSize = *(v16 + 20);
  v25 = this->m_Dict.m_Tree.m_Root;
  search.key.u.m_Id = v24;
  search.elem = v20;
  if ( v25 == 0xFFFF )
  {
    v25 = -1;
    v54 = 0;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v28 = !this->m_Dict.m_Tree.m_LessFunc.m_LessFunc(&search, &this->m_Dict.m_Tree.m_Elements.m_pMemory[v25].m_Data);
    v29 = this->m_Dict.m_Tree.m_Elements.m_pMemory;
    if ( v28 )
      break;
    m_Left = v29[v25].m_Left;
    v27 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_32;
LABEL_29:
    v25 = m_Left;
  }
  m_Left = v29[v25].m_Right;
  v27 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_29;
LABEL_32:
  v54 = v27;
LABEL_33:
  v30 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &p_m_Dict->m_Tree,
          &search);
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &p_m_Dict->m_Tree,
    v30,
    v25,
    v54);
  ++this->m_Dict.m_Tree.m_NumElements;
  return v20;
}


// CDotaDict::DestroyEntry  (line 187, @0x00000000024ff6c0, libserver.so)  // inlines: Find, FreeNode, IsIdxValid, IsValidIndex, LeftChild, RemoveAt, SetLeftChild, SetRightChild, String, V_strlen, operator=, operator==, operator[]
// calls: strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find, DevMsg, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Find, operator delete, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Unlink
// strings: "DoTADictMgr: Failed to find entry name %s in %s.\n", "DoTADictMgr: Entry %s not found.\n"
void __fastcall CDotaDict::DestroyEntry(CDotaDict *const this, const char *pszEntryName)
{
  CUtlSymbolTableLarge *p_m_symNameTable; // r13
  int v5; // ecx
  const char *m_pAsString; // rcx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // r13
  __int64 v9; // r15
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int>::Node_t,short unsigned int> *v10; // rax
  CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t elem; // rdi
  CUtlSymbolLarge symName; // [rsp+0h] [rbp-50h] BYREF
  CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  p_m_symNameTable = &this->m_symNameTable;
  if ( pszEntryName != 0 )
    v5 = strlen(pszEntryName);
  else
    v5 = 0;
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(&symName, p_m_symNameTable, pszEntryName, v5);
  if ( symName.u.m_Id != 0 )
  {
    search.key = symName;
    v7 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_Dict.m_Tree,
           &search);
    v8 = v7;
    if ( v7 >= this->m_Dict.m_Tree.m_Elements.m_nAllocationCount
      || v7 > this->m_Dict.m_Tree.m_LastAlloc.index
      || v7 == 0xFFFF
      || (v9 = v7, v10 = &this->m_Dict.m_Tree.m_Elements.m_pMemory[v9], v8 == v10->m_Left) )
    {
      DevMsg(1, "DoTADictMgr: Entry %s not found.\n", pszEntryName);
    }
    else
    {
      elem = v10->m_Data.elem;
      if ( elem != 0 )
        operator delete(elem);
      CUtlRBTree<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
        &this->m_Dict.m_Tree,
        v8);
      this->m_Dict.m_Tree.m_Elements.m_pMemory[v9].m_Left = v8;
      this->m_Dict.m_Tree.m_Elements.m_pMemory[v9].m_Right = this->m_Dict.m_Tree.m_FirstFree;
      --this->m_Dict.m_Tree.m_NumElements;
      this->m_Dict.m_Tree.m_FirstFree = v8;
    }
  }
  else
  {
    m_pAsString = "";
    if ( this->m_symDictionaryName.u.m_Id != 0 )
      m_pAsString = this->m_symDictionaryName.u.m_pAsString;
    DevMsg(1, "DoTADictMgr: Failed to find entry name %s in %s.\n", pszEntryName, m_pAsString);
  }
}


// CDotaDict::DestroyAllEntries  (line 220, @0x00000000024de4d0, libserver.so)  // inlines: Purge
// calls: operator delete, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge
// callers: CDotaDict::~CDotaDict
void __fastcall CDotaDict::DestroyAllEntries(CDotaDict *const this)
{
  int m_NumElements; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CUtlMap<CUtlSymbolLarge,DotaDictEntry_t*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t elem; // rdi

  m_NumElements = this->m_Dict.m_Tree.m_NumElements;
  if ( m_NumElements != 0 )
  {
    v3 = 0;
    v4 = 8 * (3LL * (m_NumElements - 1) + 3);
    do
    {
      elem = this->m_Dict.m_Tree.m_Elements.m_pMemory[v3 / 0x18].m_Data.elem;
      if ( elem != 0 )
        operator delete(elem);
      v3 += 24LL;
    }
    while ( v3 != v4 );
  }
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DotaDictEntry_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_Dict.m_Tree);
}


// CDotaDict::Dump  (line 242, @0x00000000024bf840, libserver.so)
// calls: DotaDictEntry_t::Print
// callers: CDotaDictManager::Dump
void __fastcall CDotaDict::Dump(CDotaDict *const this)
{
  int m_NumElements; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  DotaDictEntry_t *elem; // rdi

  m_NumElements = this->m_Dict.m_Tree.m_NumElements;
  if ( m_NumElements != 0 )
  {
    v3 = 0;
    v4 = 8 * (3LL * (m_NumElements - 1) + 3);
    do
    {
      elem = this->m_Dict.m_Tree.m_Elements.m_pMemory[v3 / 0x18].m_Data.elem;
      if ( elem != 0 )
        DotaDictEntry_t::Print(elem);
      v3 += 24LL;
    }
    while ( v3 != v4 );
  }
}


// CDotaDictManager::CDotaDictManager  (line 267, @0x00000000024f7f00, libserver.so)  // inlines: CNonThreadsafeTree, CUtlMap, CUtlMemory, CUtlRBTree, CUtlSymbolTableLargeBase, CUtlVector, CUtlVectorBase, Purge, ResetDbgInfo, SetLessFunc, ~CUtlMap
// calls: CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::CUtlMemory, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::~CUtlSymbolTableLargeBase, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// globals: DotaDictSymbolLessFunc(CUtlSymbolLarge const&,CUtlSymbolLarge const&)
void __fastcall CDotaDictManager::CDotaDictManager(CDotaDictManager *const this)
{
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> >::Node_t *m_pMemory; // rax

  CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::CUtlMemory(
    &this->m_symDictionaryNameTable.m_Lookup.m_Elements,
    0,
    16);
  m_pMemory = this->m_symDictionaryNameTable.m_Lookup.m_Elements.m_pMemory;
  this->m_DictionaryList.m_Tree.m_FirstFree = -1;
  this->m_symDictionaryNameTable.m_Lookup.m_Root = -1;
  this->m_symDictionaryNameTable.m_Lookup.m_NumElements = 0;
  this->m_symDictionaryNameTable.m_Lookup.m_FirstFree = -1;
  this->m_symDictionaryNameTable.m_Lookup.m_LastAlloc.index = -1;
  this->m_symDictionaryNameTable.m_Lookup.m_pElements = m_pMemory;
  this->m_symDictionaryNameTable.m_StringPools.m_Size = 0;
  this->m_symDictionaryNameTable.m_StringPools.m_Memory.m_pMemory = 0;
  this->m_symDictionaryNameTable.m_StringPools.m_Memory.m_nAllocationCount = 0;
  this->m_symDictionaryNameTable.m_StringPools.m_Memory.m_nGrowSize = 8;
  this->m_DictionaryList.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_DictionaryList.m_Tree.m_Elements.m_pMemory = 0;
  this->m_DictionaryList.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_DictionaryList.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_DictionaryList.m_Tree.m_Root = -1;
  this->m_DictionaryList.m_Tree.m_NumElements = 0;
  this->m_DictionaryList.m_Tree.m_LastAlloc.index = -1;
  this->m_DictionaryList.m_Tree.m_pElements = 0;
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_DictionaryList.m_Tree);
  if ( this->m_DictionaryList.m_Tree.m_LessFunc.m_LessFunc == 0 )
    this->m_DictionaryList.m_Tree.m_LessFunc.m_LessFunc = DotaDictSymbolLessFunc;
}


// CDotaDictManager::~CDotaDictManager  (line 280, @0x00000000024f1640, libserver.so)  // inlines: Purge, RemoveAll, ~CNonThreadsafeTree, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlSymbolTableLargeBase, ~CUtlVector, ~CUtlVectorBase
// calls: CDotaDictManager::DestroyAllDictionaries, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::Purge
void __fastcall CDotaDictManager::~CDotaDictManager(CDotaDictManager *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v4; // rsi
  bool v5; // zf

  CDotaDictManager::DestroyAllDictionaries(this);
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_DictionaryList.m_Tree);
  if ( (this->m_DictionaryList.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_DictionaryList.m_Tree.m_Elements);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_symDictionaryNameTable.m_Lookup);
  if ( this->m_symDictionaryNameTable.m_StringPools.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_symDictionaryNameTable.m_StringPools.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( v3 < this->m_symDictionaryNameTable.m_StringPools.m_Size );
  }
  v5 = (this->m_symDictionaryNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_symDictionaryNameTable.m_StringPools.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_symDictionaryNameTable.m_StringPools.m_Memory);
    v5 = (this->m_symDictionaryNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_symDictionaryNameTable.m_StringPools.m_Size = 0;
    if ( v5 )
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_symDictionaryNameTable.m_StringPools.m_Memory);
      if ( (this->m_symDictionaryNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_symDictionaryNameTable.m_StringPools.m_Memory);
    }
  }
  else
  {
    this->m_symDictionaryNameTable.m_StringPools.m_Size = 0;
  }
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_symDictionaryNameTable.m_Lookup);
  if ( (this->m_symDictionaryNameTable.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&this->m_symDictionaryNameTable.m_Lookup.m_Elements);
}


// CDotaDictManager::CreateDictionary  (line 292, @0x00000000025332c0, libserver.so)  // inlines: AddString, CUtlSymbolLarge, CUtlSymbolLarge_Hash, Element, Find, FindInsertionPosition, FindPoolWithSpace, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator!=, operator(), operator=, operator==, operator[]
// calls: strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find, DevMsg, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Find, operator new, CDotaDict::CDotaDict, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int> >::AddToTail, HashString, memcpy, strcmp (16 total)
// strings: "DoTADictMgr: Failed to create dictionary name %s.\n", "DoTADictMgr: Failed to dictionary %s.\n"
CDotaDict *__fastcall CDotaDictManager::CreateDictionary(CDotaDictManager *const this, const char *pszDictionaryName)
{
  int v4; // eax
  char *m_Id; // rax
  int v6; // eax
  int v7; // r13d
  unsigned __int16 v9; // ax
  CDotaDict *v10; // r15
  unsigned __int16 v11; // r12
  unsigned __int16 m_Left; // ax
  char v13; // cl
  bool v14; // zf
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int>::Node_t,short unsigned int> *v15; // rax
  unsigned __int16 v16; // ax
  __int64 v17; // r13
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int>::Node_t,short unsigned int> *v18; // r8
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int>::Node_t,short unsigned int> *v19; // rdx
  int m_Size; // eax
  signed int v21; // r14d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **m_pMemory; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v23; // rdi
  int m_SpaceUsed; // r8d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v25; // rsi
  int v26; // ecx
  unsigned int v27; // r15d
  __int64 v28; // rsi
  char *v29; // r15
  __int64 m_Root; // r13
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v31; // r14
  LargeSymbolTableHashDecoration_t v32; // r15
  __int64 m_Right; // rdx
  bool v34; // al
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v35; // rcx
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  unsigned int v37; // eax
  unsigned int v38; // eax
  bool v39; // r14
  __int64 v40; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v41; // r9
  bool v42; // r15
  char *s1; // [rsp+0h] [rbp-70h]
  CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)> *p_m_DictionaryList; // [rsp+8h] [rbp-68h]
  CUtlSymbolLarge symName; // [rsp+10h] [rbp-60h] BYREF
  char *v46; // [rsp+20h] [rbp-50h] BYREF
  CUtlSymbolTableLargeBaseTreeEntry_t *pCopyFrom; // [rsp+28h] [rbp-48h] BYREF
  CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t search; // [rsp+30h] [rbp-40h] BYREF

  if ( pszDictionaryName == 0 )
  {
    CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
      &symName,
      &this->m_symDictionaryNameTable,
      0,
      0);
    m_Id = symName.u.m_Id;
    if ( symName.u.m_Id == 0 )
    {
LABEL_5:
      symName.u.m_Id = 0;
LABEL_6:
      DevMsg(1, "DoTADictMgr: Failed to create dictionary name %s.\n", pszDictionaryName);
      return 0;
    }
    goto LABEL_9;
  }
  v4 = strlen(pszDictionaryName);
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
    &symName,
    &this->m_symDictionaryNameTable,
    pszDictionaryName,
    v4);
  m_Id = symName.u.m_Id;
  if ( symName.u.m_Id == 0 )
  {
    v6 = strlen(pszDictionaryName);
    v7 = v6;
    if ( v6 <= 0 || *pszDictionaryName == 0 )
      goto LABEL_5;
    CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
      &v46,
      &this->m_symDictionaryNameTable,
      pszDictionaryName,
      v6);
    m_Id = v46;
    if ( v46 != 0 )
    {
      symName.u.m_Id = v46;
      goto LABEL_9;
    }
    m_Size = this->m_symDictionaryNameTable.m_StringPools.m_Size;
    v21 = (v7 + 16) & 0xFFFFFFF8;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_symDictionaryNameTable.m_StringPools.m_Memory.m_pMemory;
      v23 = *m_pMemory;
      m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
      if ( v21 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
        goto LABEL_31;
      v25 = m_pMemory + 1;
      v26 = 0;
      while ( ++v26 != m_Size )
      {
        v23 = *v25++;
        m_SpaceUsed = v23->m_SpaceUsed;
        if ( v21 <= v23->m_TotalLen - m_SpaceUsed )
        {
          if ( v26 != -1 )
            goto LABEL_31;
          break;
        }
      }
    }
    if ( (v21 + 12LL) <= 0x800 )
    {
      v27 = 2036;
      v28 = 2048;
    }
    else
    {
      v27 = (v7 + 16) & 0xFFFFFFF8;
      v28 = v21 + 12;
    }
    search.key.u.m_Id = (**g_pMemAlloc)(g_pMemAlloc, v28);
    *search.key.u.m_Id = v27;
    *(search.key.u.m_Id + 4) = 0;
    v23 = this->m_symDictionaryNameTable.m_StringPools.m_Memory.m_pMemory[CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>>::AddToTail(
                                                                            &this->m_symDictionaryNameTable.m_StringPools,
                                                                            &search)];
    m_SpaceUsed = v23->m_SpaceUsed;
LABEL_31:
    v29 = v23 + m_SpaceUsed;
    v23->m_SpaceUsed = v21 + m_SpaceUsed;
    *(v29 + 1) = HashString(pszDictionaryName);
    s1 = v29 + 16;
    memcpy(v29 + 16, pszDictionaryName, v7);
    v29[v7 + 16] = 0;
    m_Root = this->m_symDictionaryNameTable.m_Lookup.m_Root;
    pCopyFrom = (v29 + 8);
    if ( m_Root == -1 )
    {
      v39 = 0;
    }
    else
    {
      v31 = this->m_symDictionaryNameTable.m_Lookup.m_Elements.m_pMemory;
      v32 = *(v29 + 1);
      while ( 1 )
      {
        v35 = &v31[m_Root];
        m_Data = v35->m_Data;
        LOBYTE(v37) = m_Data->m_Hash > v32;
        if ( m_Data->m_Hash == v32 )
        {
          v38 = strcmp(s1, m_Data->m_String);
          v35 = &v31[m_Root];
          v37 = v38 >> 31;
        }
        m_Right = v35->m_Right;
        if ( v37 != 0 )
          m_Right = v35->m_Left;
        v34 = v37 != 0;
        if ( m_Right == -1 )
          break;
        m_Root = m_Right;
      }
      v39 = v34;
    }
    v40 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
            &this->m_symDictionaryNameTable.m_Lookup,
            &pCopyFrom);
    CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
      &this->m_symDictionaryNameTable.m_Lookup,
      v40,
      m_Root,
      v39);
    v41 = this->m_symDictionaryNameTable.m_Lookup.m_Elements.m_pMemory;
    ++this->m_symDictionaryNameTable.m_Lookup.m_NumElements;
    symName.u.m_Id = v41[v40].m_Data->m_String;
    m_Id = symName.u.m_Id;
    if ( symName.u.m_Id == 0 )
      goto LABEL_6;
  }
LABEL_9:
  search.key.u.m_Id = m_Id;
  p_m_DictionaryList = &this->m_DictionaryList;
  v9 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_DictionaryList.m_Tree,
         &search);
  if ( v9 < this->m_DictionaryList.m_Tree.m_Elements.m_nAllocationCount
    && v9 <= this->m_DictionaryList.m_Tree.m_LastAlloc.index
    && v9 != 0xFFFF )
  {
    v19 = &this->m_DictionaryList.m_Tree.m_Elements.m_pMemory[v9];
    if ( v9 != v19->m_Left )
      return v19->m_Data.elem;
  }
  search.key = symName;
  v10 = operator new(0x90u);
  CDotaDict::CDotaDict(v10, &search);
  if ( v10 == 0 )
  {
    DevMsg(1, "DoTADictMgr: Failed to dictionary %s.\n", pszDictionaryName);
    return 0;
  }
  v11 = this->m_DictionaryList.m_Tree.m_Root;
  search.elem = v10;
  search.key = symName;
  if ( v11 == 0xFFFF )
  {
    v11 = -1;
    v42 = 0;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v14 = !this->m_DictionaryList.m_Tree.m_LessFunc.m_LessFunc(
             &search,
             &this->m_DictionaryList.m_Tree.m_Elements.m_pMemory[v11].m_Data);
    v15 = this->m_DictionaryList.m_Tree.m_Elements.m_pMemory;
    if ( v14 )
      break;
    m_Left = v15[v11].m_Left;
    v13 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_17;
LABEL_14:
    v11 = m_Left;
  }
  m_Left = v15[v11].m_Right;
  v13 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_14;
LABEL_17:
  v42 = v13;
LABEL_18:
  v16 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &p_m_DictionaryList->m_Tree,
          &search);
  v17 = v16;
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &p_m_DictionaryList->m_Tree,
    v16,
    v11,
    v42);
  v18 = this->m_DictionaryList.m_Tree.m_Elements.m_pMemory;
  ++this->m_DictionaryList.m_Tree.m_NumElements;
  return v18[v17].m_Data.elem;
}


// CDotaDictManager::DestroyDictionary  (line 331, @0x00000000024ff820, libserver.so)  // inlines: Find, FreeNode, IsIdxValid, IsValidIndex, LeftChild, RemoveAt, SetLeftChild, SetRightChild, V_strlen, operator=, operator==, operator[]
// calls: strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find, DevMsg, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Find, CDotaDict::~CDotaDict, operator delete, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Unlink
// strings: "DoTADictMgr: Dictionary %s name not found.\n", "DoTADictMgr: Dictionary %s not found.\n"
void __fastcall CDotaDictManager::DestroyDictionary(CDotaDictManager *const this, const char *pszDictionaryName)
{
  int v4; // ecx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r13
  __int64 v7; // r15
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int>::Node_t,short unsigned int> *v8; // rax
  CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t elem; // r12
  CUtlSymbolLarge symName; // [rsp+0h] [rbp-50h] BYREF
  CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  if ( pszDictionaryName != 0 )
    v4 = strlen(pszDictionaryName);
  else
    v4 = 0;
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
    &symName,
    &this->m_symDictionaryNameTable,
    pszDictionaryName,
    v4);
  if ( symName.u.m_Id != 0 )
  {
    search.key = symName;
    v5 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_DictionaryList.m_Tree,
           &search);
    v6 = v5;
    if ( v5 >= this->m_DictionaryList.m_Tree.m_Elements.m_nAllocationCount
      || v5 > this->m_DictionaryList.m_Tree.m_LastAlloc.index
      || v5 == 0xFFFF
      || (v7 = v5, v8 = &this->m_DictionaryList.m_Tree.m_Elements.m_pMemory[v7], v6 == v8->m_Left) )
    {
      DevMsg(1, "DoTADictMgr: Dictionary %s not found.\n", pszDictionaryName);
    }
    else
    {
      elem = v8->m_Data.elem;
      if ( elem != 0 )
      {
        CDotaDict::~CDotaDict(v8->m_Data.elem);
        operator delete(elem);
      }
      CUtlRBTree<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
        &this->m_DictionaryList.m_Tree,
        v6);
      this->m_DictionaryList.m_Tree.m_Elements.m_pMemory[v7].m_Left = v6;
      this->m_DictionaryList.m_Tree.m_Elements.m_pMemory[v7].m_Right = this->m_DictionaryList.m_Tree.m_FirstFree;
      --this->m_DictionaryList.m_Tree.m_NumElements;
      this->m_DictionaryList.m_Tree.m_FirstFree = v6;
    }
  }
  else
  {
    DevMsg(1, "DoTADictMgr: Dictionary %s name not found.\n", pszDictionaryName);
  }
}


// CDotaDictManager::DestroyAllDictionaries  (line 365, @0x00000000024f15e0, libserver.so)  // inlines: Purge
// calls: CDotaDict::~CDotaDict, operator delete, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge
// callers: CDotaDictManager::~CDotaDictManager
void __fastcall CDotaDictManager::DestroyAllDictionaries(CDotaDictManager *const this)
{
  int m_NumElements; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int>::Node_t,short unsigned int> *m_pMemory; // rax
  CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t elem; // r12

  m_NumElements = this->m_DictionaryList.m_Tree.m_NumElements;
  if ( m_NumElements != 0 )
  {
    v3 = 0;
    v4 = 8 * (3LL * (m_NumElements - 1) + 3);
    do
    {
      m_pMemory = this->m_DictionaryList.m_Tree.m_Elements.m_pMemory;
      elem = m_pMemory[v3 / 0x18].m_Data.elem;
      if ( elem != 0 )
      {
        CDotaDict::~CDotaDict(m_pMemory[v3 / 0x18].m_Data.elem);
        operator delete(elem);
      }
      v3 += 24LL;
    }
    while ( v3 != v4 );
  }
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CDotaDict *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_DictionaryList.m_Tree);
}


// CDotaDictManager::Dump  (line 385, @0x00000000024bf8a0, libserver.so)  // inlines: CUtlSymbolLarge, GetDictionaryNameSymbol
// calls: Msg, CDotaDict::Dump
// strings: "Dictionary: %s...\n"
void __fastcall CDotaDictManager::Dump(CDotaDictManager *const this)
{
  int m_NumElements; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CUtlMap<CUtlSymbolLarge,CDotaDict*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t elem; // r12
  const char *m_pAsString; // rsi

  m_NumElements = this->m_DictionaryList.m_Tree.m_NumElements;
  if ( m_NumElements != 0 )
  {
    v3 = 0;
    v4 = 8 * (3LL * (m_NumElements - 1) + 3);
    do
    {
      elem = this->m_DictionaryList.m_Tree.m_Elements.m_pMemory[v3 / 0x18].m_Data.elem;
      if ( elem != 0 )
      {
        m_pAsString = elem->m_symDictionaryName.u.m_pAsString;
        if ( m_pAsString == 0 )
          m_pAsString = "";
        Msg("Dictionary: %s...\n", m_pAsString);
        CDotaDict::Dump(elem);
      }
      v3 += 24LL;
    }
    while ( v3 != v4 );
  }
}


