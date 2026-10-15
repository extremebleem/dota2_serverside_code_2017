
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// BStringsEqual  (line 14, @0x0000000002e6fab0, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
// callers: CEconSharedToolSupport::ToolCanApplyToDefinition
bool __fastcall BStringsEqual(const char *pszA, const char *pszB)
{
  if ( pszA == 0 )
    return pszB == 0;
  if ( pszB != 0 )
    return strcmp(pszA, pszB) == 0;
  return 0;
}


// IEconTool::IEconTool  (line 92, @0x0000000002e6faf0, libserver.so)  // inlines: CEconSchemaSymbol, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase
// callers: CDOTAItemSchema::CreateEconToolImpl, CEconItemSchema::CreateEconToolImpl
void __fastcall IEconTool::IEconTool(IEconTool *const this)
{
  this->_vptr_IEconTool = off_47A8E30;
  this->m_symTypeName.u.m_Id = 0;
  this->m_symUseString.u.m_Id = 0;
  this->m_symUsageRestriction.u.m_Id = 0;
  this->m_unCapabilities = item_capabilities_t::ITEM_CAP_NONE;
  this->m_vecBonusItemDef.m_Size = 0;
  this->m_vecBonusItemDef.m_Memory.m_pMemory = 0;
  this->m_vecBonusItemDef.m_Memory.m_nAllocationCount = 0;
  this->m_vecBonusItemDef.m_Memory.m_nGrowSize = 0;
  this->m_bUnserializeStandardKeys = 1;
}


// IEconTool::IEconTool  (line 97, @0x0000000002e83df0, libserver.so)  // inlines: AddString, CEconSchemaSymbol, CUtlMemory, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CUtlVector, CUtlVectorBase, Element, FindInsertionPosition, FindPoolWithSpace, HashStringFastCaseless, Insert, InsertAt, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator!=, operator(), operator=, operator[], ~CUtlVector
// calls: strlen, IEconTool::UnserializeStandardUsageKeys, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::NewNode, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::LinkToParent, CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEconTool_VictoryPrediction::CEconTool_VictoryPrediction, CEconTool_DropRateBooster::CEconTool_DropRateBooster, CEconTool_PlayerCard::CEconTool_PlayerCard, CEconTool_PennantUpgrade::CEconTool_PennantUpgrade, CEconTool_EggEssence::CEconTool_EggEssence, CEconTool_Compendium::CEconTool_Compendium, CEconTool_LeagueViewPass::CEconTool_LeagueViewPass, CEconTool_PlayerCardPack::CEconTool_PlayerCardPack, CDOTAItemSchema::CreateEconToolImpl, CEconTool_StrangePart::CEconTool_StrangePart, CEconTool_SocketChisel::CEconTool_SocketChisel, CEconTool_StyleUnlock::CEconTool_StyleUnlock (14 total)
// globals: g_pEconSchemaSymbolTable
void __fastcall IEconTool::IEconTool(
        IEconTool *const this,
        const char *pszTypeName,
        const char *pszUseString,
        const char *pszUsageRestriction,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  CUtlSymbolTableLarge_CI *v10; // rax
  CUtlSymbolTableLarge_CI *v11; // r15
  UtlSymLargeId_t m_String; // rax
  int v13; // r14d
  UtlSymLargeId_t v14; // rax
  int v15; // r13d
  UtlSymLargeId_t v16; // rax
  int v17; // r8d
  signed int v18; // r14d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v19; // rcx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v20; // rsi
  int v21; // edi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v22; // rcx
  int v23; // edx
  __int64 v24; // rsi
  CUtlSymbolTableLargeBaseTreeEntry_t *v25; // r14
  __int64 v26; // r12
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v27; // rdx
  CUtlSymbolTableLargeBaseTreeEntry_t *v28; // rdi
  __int64 *v29; // rcx
  LargeSymbolTableHashDecoration_t *v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rsi
  bool v33; // r14
  int m_Size; // r8d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v35; // rcx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v36; // rsi
  int m_SpaceUsed; // edi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v38; // rcx
  int v39; // edx
  __int64 v40; // rsi
  __int64 v41; // r13
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v42; // rdx
  CUtlSymbolTableLargeBaseTreeEntry_t *v43; // rdi
  __int64 *v44; // rcx
  LargeSymbolTableHashDecoration_t *v45; // rsi
  unsigned int v46; // eax
  __int64 v47; // rsi
  signed int v48; // r15d
  int v49; // r8d
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *m_pMemory; // rcx
  _DWORD *m_Left; // rsi
  int v52; // edi
  __int64 *p_m_Right; // rcx
  int v54; // edx
  __int64 v55; // rsi
  __int64 m_Root; // r14
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v57; // rdx
  CUtlSymbolTableLargeBaseTreeEntry_t *v58; // rdi
  __int64 *p_m_Left; // rcx
  LargeSymbolTableHashDecoration_t *v60; // rsi
  unsigned int v61; // eax
  __int64 v62; // rsi
  unsigned int v63; // eax
  unsigned int v64; // eax
  __int64 v65; // r14
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v66; // r11
  __int64 v67; // r15
  __int64 v68; // rax
  __int64 v69; // r13
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v70; // r10
  int v71; // [rsp+10h] [rbp-B0h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v72; // [rsp+10h] [rbp-B0h]
  int nStringLen; // [rsp+18h] [rbp-A8h]
  int nStringLena; // [rsp+18h] [rbp-A8h]
  CUtlSymbolTableLargeBaseTreeEntry_t *nStringLenb; // [rsp+18h] [rbp-A8h]
  bool nStringLenc; // [rsp+18h] [rbp-A8h]
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> > *p_m_Lookup; // [rsp+20h] [rbp-A0h]
  int v78; // [rsp+20h] [rbp-A0h]
  signed int v79; // [rsp+20h] [rbp-A0h]
  bool v80; // [rsp+20h] [rbp-A0h]
  UtlSymLargeId_t v82; // [rsp+30h] [rbp-90h]
  UtlSymLargeId_t v83; // [rsp+40h] [rbp-80h]
  UtlSymLargeId_t v84; // [rsp+50h] [rbp-70h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v85; // [rsp+60h] [rbp-60h] BYREF
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v86; // [rsp+68h] [rbp-58h] BYREF
  CUtlSymbolTableLargeBaseTreeEntry_t *pCopyFrom; // [rsp+70h] [rbp-50h] BYREF
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v88; // [rsp+78h] [rbp-48h] BYREF
  CUtlSymbolTableLargeBaseTreeEntry_t *v89; // [rsp+80h] [rbp-40h] BYREF
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *src; // [rsp+88h] [rbp-38h] BYREF

  this->_vptr_IEconTool = off_47A8E30;
  v10 = g_pEconSchemaSymbolTable;
  this->m_symTypeName.u.m_Id = 0;
  this->m_symUseString.u.m_Id = 0;
  this->m_symUsageRestriction.u.m_Id = 0;
  this->m_unCapabilities = unCapabilities;
  v11 = v10;
  this->m_vecBonusItemDef.m_Size = 0;
  this->m_vecBonusItemDef.m_Memory.m_pMemory = 0;
  this->m_vecBonusItemDef.m_Memory.m_nAllocationCount = 0;
  this->m_vecBonusItemDef.m_Memory.m_nGrowSize = 0;
  this->m_bUnserializeStandardKeys = 0;
  p_m_Lookup = &v10->m_Lookup;
  if ( pszTypeName == 0 || (nStringLen = strlen(pszTypeName)) <= 0 )
  {
    v11 = p_m_Lookup;
    m_String = 0;
    goto LABEL_4;
  }
  m_String = 0;
  if ( *pszTypeName == 0 )
    goto LABEL_4;
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v11, pszTypeName, nStringLen);
  if ( v82 != 0 )
  {
    v11 = g_pEconSchemaSymbolTable;
    this->m_symTypeName.u.m_Id = v82;
    if ( pszUseString != 0 )
      goto LABEL_5;
LABEL_33:
    v14 = 0;
    goto LABEL_7;
  }
  v48 = (nStringLen + 16) & 0xFFFFFFF8;
  v49 = *&p_m_Lookup[1].m_LessFunc.gap0;
  if ( v49 <= 0 )
    goto LABEL_56;
  m_pMemory = p_m_Lookup[1].m_Elements.m_pMemory;
  m_Left = m_pMemory->m_Left;
  v52 = *(m_pMemory->m_Left + 4);
  if ( v48 > *m_pMemory->m_Left - v52 )
  {
    p_m_Right = &m_pMemory->m_Right;
    v54 = 0;
    while ( ++v54 != v49 )
    {
      m_Left = *p_m_Right++;
      v52 = m_Left[1];
      if ( v48 <= *m_Left - v52 )
      {
        if ( v54 != -1 )
          goto LABEL_59;
        break;
      }
    }
LABEL_56:
    if ( (v48 + 12LL) <= 0x800 )
    {
      v71 = 2048;
      v55 = 2048;
    }
    else
    {
      v71 = v48 + 12;
      v55 = v48 + 12;
    }
    v86 = (**g_pMemAlloc)(g_pMemAlloc, v55);
    v86->m_TotalLen = v71 - 12;
    v86->m_SpaceUsed = 0;
    m_Left = *(&p_m_Lookup[1].m_Elements.m_pMemory->m_Left
             + CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                 &p_m_Lookup[1],
                 &v86));
    v52 = m_Left[1];
  }
LABEL_59:
  m_Left[1] = v52 + v48;
  v72 = (m_Left + v52 + 8);
  v72->m_Hash = MurmurHash2LowerCase(pszTypeName, 0x3501A674u);
  memcpy(v72->m_String, pszTypeName, nStringLen);
  v72->m_String[nStringLen] = 0;
  m_Root = p_m_Lookup->m_Root;
  v85 = v72;
  if ( m_Root == -1 )
  {
    nStringLenc = 0;
  }
  else
  {
    v57 = p_m_Lookup->m_Elements.m_pMemory;
    v58 = v72;
    while ( 1 )
    {
      p_m_Left = &v57[m_Root].m_Left;
      v60 = p_m_Left[4];
      if ( v58->m_Hash == *v60 )
      {
        v61 = V_stricmp_fast(v58->m_String, v60 + 1) >> 31;
        v57 = p_m_Lookup->m_Elements.m_pMemory;
        p_m_Left = &v57[m_Root].m_Left;
      }
      else
      {
        LOBYTE(v61) = v58->m_Hash < *v60;
      }
      v62 = p_m_Left[1];
      nStringLenc = v61 != 0;
      if ( v61 != 0 )
        v62 = *p_m_Left;
      if ( v62 == -1 )
        break;
      v58 = v85;
      m_Root = v62;
    }
  }
  v67 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
          p_m_Lookup,
          &v85);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
    p_m_Lookup,
    v67,
    m_Root,
    nStringLenc);
  v68 = v67;
  v11 = g_pEconSchemaSymbolTable;
  ++p_m_Lookup->m_NumElements;
  m_String = p_m_Lookup->m_Elements.m_pMemory[v68].m_Data->m_String;
LABEL_4:
  this->m_symTypeName.u.m_Id = m_String;
  if ( pszUseString == 0 )
    goto LABEL_33;
LABEL_5:
  v13 = strlen(pszUseString);
  v14 = 0;
  if ( v13 <= 0 || *pszUseString == 0 )
    goto LABEL_7;
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v11, pszUseString, v13);
  if ( v83 != 0 )
  {
    v11 = g_pEconSchemaSymbolTable;
    this->m_symUseString.u.m_Id = v83;
    if ( pszUsageRestriction != 0 )
      goto LABEL_8;
LABEL_30:
    v16 = 0;
    goto LABEL_10;
  }
  m_Size = v11->m_StringPools.m_Size;
  v79 = (v13 + 16) & 0xFFFFFFF8;
  if ( m_Size <= 0 )
    goto LABEL_40;
  v35 = v11->m_StringPools.m_Memory.m_pMemory;
  v36 = *v35;
  m_SpaceUsed = (*v35)->m_SpaceUsed;
  if ( v79 > (*v35)->m_TotalLen - m_SpaceUsed )
  {
    v38 = v35 + 1;
    v39 = 0;
    while ( ++v39 != m_Size )
    {
      v36 = *v38++;
      m_SpaceUsed = v36->m_SpaceUsed;
      if ( v79 <= v36->m_TotalLen - m_SpaceUsed )
      {
        if ( v39 != -1 )
          goto LABEL_43;
        break;
      }
    }
LABEL_40:
    if ( (v79 + 12LL) <= 0x800 )
    {
      nStringLena = 2048;
      v40 = 2048;
    }
    else
    {
      nStringLena = v79 + 12;
      v40 = v79 + 12;
    }
    v88 = (**g_pMemAlloc)(g_pMemAlloc, v40);
    v88->m_TotalLen = nStringLena - 12;
    v88->m_SpaceUsed = 0;
    v36 = v11->m_StringPools.m_Memory.m_pMemory[CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                                                  &v11->m_StringPools,
                                                  &v88)];
    m_SpaceUsed = v36->m_SpaceUsed;
  }
LABEL_43:
  nStringLenb = &v36->m_Data[m_SpaceUsed];
  v36->m_SpaceUsed = v79 + m_SpaceUsed;
  nStringLenb->m_Hash = MurmurHash2LowerCase(pszUseString, 0x3501A674u);
  memcpy(nStringLenb->m_String, pszUseString, v13);
  nStringLenb->m_String[v13] = 0;
  v41 = v11->m_Lookup.m_Root;
  pCopyFrom = nStringLenb;
  if ( v41 == -1 )
  {
    v80 = 0;
  }
  else
  {
    v42 = v11->m_Lookup.m_Elements.m_pMemory;
    v43 = nStringLenb;
    while ( 1 )
    {
      v44 = &v42[v41].m_Left;
      v45 = v44[4];
      if ( v43->m_Hash == *v45 )
      {
        v63 = V_stricmp_fast(v43->m_String, v45 + 1);
        v42 = v11->m_Lookup.m_Elements.m_pMemory;
        v46 = v63 >> 31;
        v44 = &v42[v41].m_Left;
      }
      else
      {
        LOBYTE(v46) = v43->m_Hash < *v45;
      }
      v47 = v44[1];
      v80 = v46 != 0;
      if ( v46 != 0 )
        v47 = *v44;
      if ( v47 == -1 )
        break;
      v43 = pCopyFrom;
      v41 = v47;
    }
  }
  v65 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
          &v11->m_Lookup,
          &pCopyFrom);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
    &v11->m_Lookup,
    v65,
    v41,
    v80);
  v66 = v11->m_Lookup.m_Elements.m_pMemory;
  ++v11->m_Lookup.m_NumElements;
  v11 = g_pEconSchemaSymbolTable;
  v14 = v66[v65].m_Data->m_String;
LABEL_7:
  this->m_symUseString.u.m_Id = v14;
  if ( pszUsageRestriction == 0 )
    goto LABEL_30;
LABEL_8:
  v15 = strlen(pszUsageRestriction);
  v16 = 0;
  if ( v15 <= 0 )
    goto LABEL_10;
  if ( *pszUsageRestriction == 0 )
    goto LABEL_10;
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v11, pszUsageRestriction, v15);
  v16 = v84;
  if ( v84 != 0 )
    goto LABEL_10;
  v17 = v11->m_StringPools.m_Size;
  v18 = (v15 + 16) & 0xFFFFFFF8;
  if ( v17 <= 0 )
    goto LABEL_17;
  v19 = v11->m_StringPools.m_Memory.m_pMemory;
  v20 = *v19;
  v21 = (*v19)->m_SpaceUsed;
  if ( v18 > (*v19)->m_TotalLen - v21 )
  {
    v22 = v19 + 1;
    v23 = 0;
    while ( ++v23 != v17 )
    {
      v20 = *v22++;
      v21 = v20->m_SpaceUsed;
      if ( v18 <= v20->m_TotalLen - v21 )
      {
        if ( v23 != -1 )
          goto LABEL_20;
        break;
      }
    }
LABEL_17:
    if ( (v18 + 12LL) <= 0x800 )
    {
      v78 = 2048;
      v24 = 2048;
    }
    else
    {
      v78 = v18 + 12;
      v24 = v18 + 12;
    }
    src = (**g_pMemAlloc)(g_pMemAlloc, v24);
    src->m_TotalLen = v78 - 12;
    src->m_SpaceUsed = 0;
    v20 = v11->m_StringPools.m_Memory.m_pMemory[CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                                                  &v11->m_StringPools,
                                                  &src)];
    v21 = v20->m_SpaceUsed;
  }
LABEL_20:
  v20->m_SpaceUsed = v21 + v18;
  v25 = &v20->m_Data[v21];
  v25->m_Hash = MurmurHash2LowerCase(pszUsageRestriction, 0x3501A674u);
  memcpy(v25->m_String, pszUsageRestriction, v15);
  v25->m_String[v15] = 0;
  v26 = v11->m_Lookup.m_Root;
  v89 = v25;
  if ( v26 == -1 )
  {
    v33 = 0;
  }
  else
  {
    v27 = v11->m_Lookup.m_Elements.m_pMemory;
    v28 = v25;
    while ( 1 )
    {
      v29 = &v27[v26].m_Left;
      v30 = v29[4];
      if ( v28->m_Hash == *v30 )
      {
        v64 = V_stricmp_fast(v28->m_String, v30 + 1);
        v27 = v11->m_Lookup.m_Elements.m_pMemory;
        v31 = v64 >> 31;
        v29 = &v27[v26].m_Left;
      }
      else
      {
        LOBYTE(v31) = v28->m_Hash < *v30;
      }
      v32 = v29[1];
      v33 = v31 != 0;
      if ( v31 != 0 )
        v32 = *v29;
      if ( v32 == -1 )
        break;
      v28 = v89;
      v26 = v32;
    }
  }
  v69 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
          &v11->m_Lookup,
          &v89);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
    &v11->m_Lookup,
    v69,
    v26,
    v33);
  v70 = v11->m_Lookup.m_Elements.m_pMemory;
  ++v11->m_Lookup.m_NumElements;
  v16 = v70[v69].m_Data->m_String;
LABEL_10:
  this->m_symUsageRestriction.u.m_Id = v16;
  IEconTool::UnserializeStandardUsageKeys(this, pUsageKV);
}


// IEconTool::BInitFromKV  (line 108, @0x0000000002e811d0, libserver.so)  // inlines: GetString, operator(), operator=
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetString, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::AddString, KeyValues::GetFirstSubKey, ParseCapability, KeyValues::GetNextKey, IEconTool::UnserializeStandardUsageKeys, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: IEconTool::BInitFromKV, CEconTool_BackpackExpander::BInitFromKV, CEconTool_SocketHammer::BInitFromKV, CEconTool_SocketChisel::BInitFromKV, CEconTool_StyleUnlock::BInitFromKV, CEconTool_SupplyCrate::BInitFromKV, CEconTool_ItemRedemption::BInitFromKV, CEconTool_ItemDynamicRecipe::BInitFromKV, CEconTool_StrangePart::BInitFromKV
// strings: "usage", "usage_capabilities", "use_string"
// globals: `guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char cons, IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym, g_pEconSchemaSymbolTable, `guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char cons, IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym, `guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char cons, IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym, `guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#4}::operator() const(char cons (11 total)
void __fastcall IEconTool::BInitFromKV(
        IEconTool *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  KeyValues *Key; // rax
  const char *String; // rdx
  bool v7; // zf
  KeyValues *v8; // rax
  const char *v9; // rdx
  KeyValues *v10; // rax
  const char *v11; // rdx
  UtlSymLargeId_t v12; // rax
  KeyValues *v13; // rax
  KeyValues *i; // rbx
  KeyValues *v15; // rax
  UtlSymLargeId_t usageCapabilities[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( `guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "type");
    __cxa_guard_release(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  String = 0;
  if ( Key != 0 )
    String = CKeyValues_Data::Internal_GetString(Key, 0, 0, 0);
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::AddString(
    usageCapabilities,
    g_pEconSchemaSymbolTable,
    String);
  v7 = `guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym == 0;
  this->m_symTypeName.u.m_Id = usageCapabilities[0];
  if ( v7
    && __cxa_guard_acquire(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym,
      "use_string");
    __cxa_guard_release(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym);
  }
  v8 = KeyValues::FindKey(
         pToolKV,
         IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#2}::operator() const(char const*)::s_sym);
  v9 = 0;
  if ( v8 != 0 )
    v9 = CKeyValues_Data::Internal_GetString(v8, 0, 0, 0);
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::AddString(
    usageCapabilities,
    g_pEconSchemaSymbolTable,
    v9);
  v7 = `guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym == 0;
  this->m_symUseString.u.m_Id = usageCapabilities[0];
  if ( v7
    && __cxa_guard_acquire(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym,
      "restriction");
    __cxa_guard_release(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym);
  }
  v10 = KeyValues::FindKey(
          pToolKV,
          IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#3}::operator() const(char const*)::s_sym);
  v11 = 0;
  if ( v10 != 0 )
    v11 = CKeyValues_Data::Internal_GetString(v10, 0, 0, 0);
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::AddString(
    usageCapabilities,
    g_pEconSchemaSymbolTable,
    v11);
  v12 = usageCapabilities[0];
  LODWORD(usageCapabilities[0]) = 0;
  v7 = `guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#4}::operator() const(char const*)::s_sym == 0;
  this->m_symUsageRestriction.u.m_Id = v12;
  if ( v7
    && __cxa_guard_acquire(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#4}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#4}::operator() const(char const*)::s_sym,
      "usage_capabilities");
    __cxa_guard_release(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#4}::operator() const(char const*)::s_sym);
  }
  v13 = KeyValues::FindKey(
          pToolKV,
          IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#4}::operator() const(char const*)::s_sym);
  if ( v13 != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(v13); i != 0; i = KeyValues::GetNextKey(i) )
      ParseCapability(usageCapabilities, i);
  }
  if ( `guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#5}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#5}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#5}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#5}::operator() const(char const*)::s_sym);
  }
  v15 = KeyValues::FindKey(
          pToolKV,
          IEconTool::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#5}::operator() const(char const*)::s_sym);
  if ( v15 != 0 )
    IEconTool::UnserializeStandardUsageKeys(this, v15);
}


// IEconTool::BInitFromKV  (line 108, @0x0000000002e814f0, libserver.so)
// calls: IEconTool::BInitFromKV
// callers: CEconTool_GemCombiner::BInitFromKV, CEconTool_HeroStatueForge::BInitFromKV, CEconTool_Gift::BInitFromKV, CEconTool_VictoryPrediction::BInitFromKV, CEconTool_EventTicket::BInitFromKV, CEconTool_TournamentPassport::BInitFromKV, CEconTool_DropRateBooster::BInitFromKV, CEconTool_TeamShowcaseForge::BInitFromKV, CEconTool_CompendiumSetSelection::BInitFromKV, CEconTool_FantasyTicket::BInitFromKV, CEconTool_AwardEventPoints::BInitFromKV, CEconTool_EmoticonUnlock::BInitFromKV (19 total)
bool __fastcall IEconTool::BInitFromKV(
        IEconTool *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  if ( this->m_bUnserializeStandardKeys )
    IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  return 1;
}


// IEconTool::UnserializeStandardUsageKeys  (line 145, @0x0000000002e75390, libserver.so)  // inlines: AddToTail, CopyConstruct<item_definition_index_t>, Element, GrowMemory, operator[]
// calls: KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, V_atoi, CUtlMemory<item_definition_index_t, int>::Grow
// callers: IEconTool::BInitFromKV, IEconTool::IEconTool
// strings: "bonus_itemdefs"
void __fastcall IEconTool::UnserializeStandardUsageKeys(IEconTool *const this, KeyValues *pUsageKV)
{
  KeyValues *Key; // rax
  KeyValues *i; // r12
  item_definition_index_t *v5; // rdx
  const char *Name; // rax
  uint16 v7; // ax
  __int64 m_Size; // r13
  uint16 v9; // r15
  int v10; // edx

  if ( pUsageKV != 0 )
  {
    Key = KeyValues::FindKey(pUsageKV, "bonus_itemdefs", 0);
    if ( Key != 0 )
    {
      for ( i = KeyValues::GetFirstSubKey(Key); i != 0; i = KeyValues::GetNextKey(i) )
      {
        Name = KeyValues::GetName(i);
        v7 = V_atoi(Name);
        m_Size = this->m_vecBonusItemDef.m_Size;
        v9 = v7;
        v10 = this->m_vecBonusItemDef.m_Size;
        if ( m_Size == this->m_vecBonusItemDef.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<item_definition_index_t,int>::Grow(&this->m_vecBonusItemDef.m_Memory, 1);
          v10 = this->m_vecBonusItemDef.m_Size;
        }
        this->m_vecBonusItemDef.m_Size = v10 + 1;
        v5 = &this->m_vecBonusItemDef.m_Memory.m_pMemory[m_Size];
        if ( v5 != 0 )
          v5->m_Data = v9;
      }
    }
  }
}


// IEconTool::ShouldDisplayQuantity  (line 160, @0x0000000002e9bef0, libserver.so)  // inlines: CAttributeIterator_HasAttribute, CSchemaFieldHandle, FindAttribute, FindAttribute<IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, ShouldHideQuantity, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "unlimited quantity"
// globals: `guard variable for'IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)::pAttrDef_UnlimitedQuantity, IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)::pAttrDef_UnlimitedQuantity, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall IEconTool::ShouldDisplayQuantity(const IEconTool *const this, const IEconItemInterface *pTool)
{
  __int64 v3; // r13
  uint32 v4; // ebx
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSystem *v7; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  bool v9; // bl
  CEconItemSystem *v11; // rax
  uint32 m_unResetCount; // eax
  _QWORD v13[2]; // [rsp+0h] [rbp-40h] BYREF
  char v14; // [rsp+10h] [rbp-30h]

  v3 = (*(pTool->_vptr_IEconItemInterface + 12))(pTool);
  if ( v3 == 0 )
    return 0;
  if ( `guard variable for'IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)::pAttrDef_UnlimitedQuantity == 0
    && __cxa_guard_acquire(&`guard variable for'IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)::pAttrDef_UnlimitedQuantity) != 0 )
  {
    IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_szName = "unlimited quantity";
    v11 = ItemSystem();
    IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v11->m_itemSchema, "unlimited quantity");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_bDestructName = 0;
    IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)::pAttrDef_UnlimitedQuantity);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity,
      &_dso_handle);
  }
  if ( IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_szName != 0 )
  {
    v4 = ItemSystem()->m_itemSchema.m_unResetCount;
    m_pRef = IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_pRef;
    if ( v4 != IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_unSchemaGeneration )
    {
      m_szName = IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_szName;
      v7 = ItemSystem();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v7->m_itemSchema, m_szName);
      IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_unSchemaGeneration = v4;
      IEconTool::ShouldDisplayQuantity(IEconItemInterface const*)const::pAttrDef_UnlimitedQuantity.m_pRef = m_pRef;
    }
    if ( m_pRef != 0 )
    {
      v13[1] = m_pRef;
      vptr_IEconItemInterface = pTool->_vptr_IEconItemInterface;
      v13[0] = off_40F17F0;
      v14 = 0;
      vptr_IEconItemInterface[28](pTool, v13);
      if ( v14 != 0 )
        return 0;
    }
  }
  v9 = (*(v3 + 273) & 0x10) != 0;
  if ( (*(v3 + 273) & 0x10) != 0 )
    return 0;
  if ( (*(pTool->_vptr_IEconItemInterface + 19))(pTool) != 0 && ((*(v3 + 36) & 0x40) != 0 || *(v3 + 192) != 0) )
    return 1;
  return v9;
}


// IEconTool::GetLevelRequirementToUse  (line 191, @0x0000000002e9bd70, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "usage level requirement"
// globals: `guard variable for'IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)::pAttrDef_UsageLevel, IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)::pAttrDef_UsageLevel, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
uint32 __fastcall IEconTool::GetLevelRequirementToUse(const IEconTool *const this, const IEconItemInterface *pTool)
{
  uint32 v3; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v6; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  CEconItemSystem *v9; // rax
  uint32 m_unResetCount; // eax
  uint32 unLevel; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v12[3]; // [rsp+10h] [rbp-40h] BYREF
  char v13; // [rsp+28h] [rbp-28h]

  if ( (*(pTool->_vptr_IEconItemInterface + 12))(pTool) == 0 )
    return 0;
  if ( `guard variable for'IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)::pAttrDef_UsageLevel == 0
    && __cxa_guard_acquire(&`guard variable for'IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)::pAttrDef_UsageLevel) != 0 )
  {
    IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_szName = "usage level requirement";
    v9 = ItemSystem();
    IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v9->m_itemSchema, "usage level requirement");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_bDestructName = 0;
    IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)::pAttrDef_UsageLevel);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel,
      &_dso_handle);
  }
  if ( IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_szName == 0 )
    return 0;
  v3 = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_pRef;
  if ( v3 != IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_unSchemaGeneration )
  {
    m_szName = IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_szName;
    v6 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v6->m_itemSchema, m_szName);
    IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_unSchemaGeneration = v3;
    IEconTool::GetLevelRequirementToUse(IEconItemInterface const*)const::pAttrDef_UsageLevel.m_pRef = m_pRef;
  }
  if ( m_pRef != 0
    && (v12[1] = m_pRef,
        v12[2] = &unLevel,
        vptr_IEconItemInterface = pTool->_vptr_IEconItemInterface,
        v12[0] = &wrapper,
        v13 = 0,
        vptr_IEconItemInterface[28](pTool, v12),
        v13 != 0) )
  {
    return unLevel;
  }
  else
  {
    return 0;
  }
}


// CEconTool_GiftWrap::CanApplyTo  (line 210, @0x0000000002e69e40, libserver.so)
bool __fastcall CEconTool_GiftWrap::CanApplyTo(
        const CEconTool_GiftWrap *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  return (*(pToolSubject->_vptr_IEconItemInterface + 15))(pToolSubject, pTool) != 7
      && (*(pToolSubject->_vptr_IEconItemInterface + 15))(pToolSubject) != 5
      && ((*(pToolSubject->_vptr_IEconItemInterface + 17))(pToolSubject) & 8) == 0
      && (*(pToolSubject->_vptr_IEconItemInterface + 10))(pToolSubject);
}


// CEconTool_StrangePart::CanApplyTo  (line 235, @0x0000000002e9e060, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CAttributeIterator_HasAttribute, CSchemaFieldHandle, FindAttribute, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<IEconItemInterface>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, HasEconTag, IsValidIndex, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, GetKillEaterAttrPair_Type, GetKillEaterAttrPairCount, GetKillEaterAttrPair_IsUserCustomizable, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CEconItemDefinition::HasHeroID, __cxa_guard_abort, _Unwind_Resume
// strings: "strange part new counter ID"
// globals: `guard variable for'CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_StrangePartCounterID, CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_StrangePartCounterID, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall CEconTool_StrangePart::CanApplyTo(
        const CEconTool_StrangePart *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  bool IsUserCustomizable; // r15
  CEconItemSystem *v8; // rax
  uint32 m_unResetCount; // eax
  uint32 v10; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r15
  CEconItemSystem *v13; // rax
  const IEconItemInterface *v14; // rdi
  int (**vptr_IEconItemInterface)(...); // rax
  int v16; // ebx
  const CEconItemAttributeDefinition *KillEaterAttrPair_Type; // rax
  int (**v18)(...); // rax
  int i; // ebx
  const CEconItemAttributeDefinition *v20; // rax
  int (**v21)(...); // rax
  const CEconItemDefinition *v22; // r12
  int m_Size; // eax
  int *m_pMemory; // rbx
  int v25; // eax
  int m_iHeroRestriction; // esi
  __int64 v27; // [rsp+0h] [rbp-70h]
  uint32 unNewScoreType; // [rsp+18h] [rbp-58h] BYREF
  uint32 unScoreType; // [rsp+1Ch] [rbp-54h] BYREF
  int src[2]; // [rsp+20h] [rbp-50h] BYREF
  const CEconItemAttributeDefinition *pAttrDef; // [rsp+28h] [rbp-48h]
  uint32 *bFoundTypeAttribute; // [rsp+30h] [rbp-40h]
  char v33; // [rsp+38h] [rbp-38h]

  IsUserCustomizable = 0;
  if ( (*(pToolSubject->_vptr_IEconItemInterface + 15))(pToolSubject) == 9 )
  {
    if ( `guard variable for'CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_StrangePartCounterID == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_StrangePartCounterID) != 0 )
    {
      CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_szName = "strange part new counter ID";
      v8 = ItemSystem();
      CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v8->m_itemSchema, "strange part new counter ID");
      m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
      CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_bDestructName = 0;
      CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_unSchemaGeneration = m_unResetCount;
      __cxa_guard_release(&`guard variable for'CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_StrangePartCounterID);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID,
        &_dso_handle);
    }
    if ( CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_szName != 0 )
    {
      v10 = ItemSystem()->m_itemSchema.m_unResetCount;
      m_pRef = CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_pRef;
      if ( v10 != CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_unSchemaGeneration )
      {
        m_szName = CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_szName;
        v13 = ItemSystem();
        m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v13->m_itemSchema, m_szName);
        CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_unSchemaGeneration = v10;
        CEconTool_StrangePart::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_StrangePartCounterID.m_pRef = m_pRef;
      }
      if ( m_pRef != 0 )
      {
        pAttrDef = m_pRef;
        v14 = pTool;
        bFoundTypeAttribute = &unNewScoreType;
        vptr_IEconItemInterface = pTool->_vptr_IEconItemInterface;
        *src = &wrapper;
        v16 = 0;
        v33 = 0;
        vptr_IEconItemInterface[28](v14, src);
        if ( v33 != 0 )
        {
          while ( v16 < GetKillEaterAttrPairCount() )
          {
            KillEaterAttrPair_Type = GetKillEaterAttrPair_Type(v16);
            if ( KillEaterAttrPair_Type != 0 )
            {
              pAttrDef = KillEaterAttrPair_Type;
              v18 = pToolSubject->_vptr_IEconItemInterface;
              *src = &wrapper;
              bFoundTypeAttribute = &unScoreType;
              v33 = 0;
              v18[28](pToolSubject, src);
              if ( v33 != 0 && unScoreType == unNewScoreType )
                return 0;
            }
            ++v16;
          }
          for ( i = 0; i < GetKillEaterAttrPairCount(); ++i )
          {
            IsUserCustomizable = GetKillEaterAttrPair_IsUserCustomizable(i);
            if ( IsUserCustomizable )
            {
              v20 = GetKillEaterAttrPair_Type(i);
              if ( v20 == 0
                || (pAttrDef = v20,
                    v21 = pToolSubject->_vptr_IEconItemInterface,
                    *src = off_40F17F0,
                    LOBYTE(bFoundTypeAttribute) = 0,
                    v21[28](pToolSubject, src),
                    bFoundTypeAttribute == 0) )
              {
                v22 = (*(pToolSubject->_vptr_IEconItemInterface + 12))(pToolSubject);
                if ( v22 == 0 )
                  return 0;
                m_Size = this->m_vecRequiredTags.m_Size;
                if ( m_Size > 0 )
                {
                  m_pMemory = this->m_vecRequiredTags.m_Memory.m_pMemory;
                  v27 = &m_pMemory[m_Size - 1 + 1];
                  do
                  {
                    src[0] = *m_pMemory;
                    v25 = CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&v22->m_vecTags, src);
                    if ( v25 < 0 || v25 >= v22->m_vecTags.m_Size )
                      return 0;
                    ++m_pMemory;
                  }
                  while ( m_pMemory != v27 );
                }
                m_iHeroRestriction = this->m_iHeroRestriction;
                if ( m_iHeroRestriction != 0 && !CEconItemDefinition::HasHeroID(v22, m_iHeroRestriction) )
                  return 0;
                if ( this->m_iItemSlotRestriction != 0 )
                  return (*(v22->_vptr_IEconItemDefinition + 8))(v22) == this->m_iItemSlotRestriction;
                return IsUserCustomizable;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  return IsUserCustomizable;
}


// CEconTool_Autograph::CanApplyTo  (line 316, @0x0000000002e9c9e0, libserver.so)  // inlines: CAttributeIterator_HasAttribute, FindAttribute, FindAttribute<IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "autograph attribute"
// globals: `guard variable for'CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_Autograph, CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_Autograph, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall CEconTool_Autograph::CanApplyTo(
        const CEconTool_Autograph *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  __int64 v4; // rdx
  bool result; // al
  uint32 m_unResetCount; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v9; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-40h] BYREF
  char v12; // [rsp+10h] [rbp-30h]

  v4 = (*(pToolSubject->_vptr_IEconItemInterface + 12))(pToolSubject, pTool);
  result = 0;
  if ( v4 != 0 && *(v4 + 192) == 0 )
  {
    if ( `guard variable for'CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_Autograph == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_Autograph) != 0 )
    {
      CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
        &CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_Autograph,
        "autograph attribute");
      __cxa_guard_release(&`guard variable for'CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_Autograph);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_Autograph,
        &_dso_handle);
    }
    if ( CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_Autograph.m_szName == 0 )
      return 1;
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    m_pRef = CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_Autograph.m_pRef;
    if ( m_unResetCount != CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_Autograph.m_unSchemaGeneration )
    {
      m_szName = CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_Autograph.m_szName;
      v9 = ItemSystem();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v9->m_itemSchema, m_szName);
      CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_Autograph.m_unSchemaGeneration = m_unResetCount;
      CEconTool_Autograph::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_Autograph.m_pRef = m_pRef;
    }
    if ( m_pRef == 0 )
      return 1;
    v11[1] = m_pRef;
    vptr_IEconItemInterface = pToolSubject->_vptr_IEconItemInterface;
    v11[0] = off_40F17F0;
    v12 = 0;
    vptr_IEconItemInterface[28](pToolSubject, v11);
    result = 0;
    if ( v12 == 0 )
      return 1;
  }
  return result;
}


// CEconTool_StyleUnlock::CanApplyTo  (line 340, @0x0000000002e6fba0, libserver.so)  // inlines: style_index_t
// calls: CEconTool_StyleUnlock::GetStyleUnlockForItem
bool __fastcall CEconTool_StyleUnlock::CanApplyTo(
        const CEconTool_StyleUnlock *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  __int64 (__fastcall ***v5)(_QWORD); // rax
  item_definition_index_t v6; // ax
  style_index_t unStyle; // [rsp+Fh] [rbp-11h] BYREF

  v5 = (*(pToolSubject->_vptr_IEconItemInterface + 12))(pToolSubject, pTool);
  if ( v5 != 0
    && (unStyle.m_Data = -1, v6.m_Data = (**v5)(v5), CEconTool_StyleUnlock::GetStyleUnlockForItem(this, v6, &unStyle)) )
  {
    return (*(pToolSubject->_vptr_IEconItemInterface + 24))(pToolSubject, unStyle.m_Data) ^ 1;
  }
  else
  {
    return 0;
  }
}


// CEconTool_StyleUnlock::GetStyleUnlockForItem  (line 361, @0x0000000002e6fb40, libserver.so)  // inlines: operator[]
// callers: CEconTool_StyleUnlock::CanApplyTo
bool __fastcall CEconTool_StyleUnlock::GetStyleUnlockForItem(
        const CEconTool_StyleUnlock *const this,
        item_definition_index_t unDefIndex,
        style_index_t *pnStyleIndex)
{
  int m_Size; // ecx
  CEconTool_StyleUnlock::StyleUnlock_t *m_pMemory; // rax
  CEconTool_StyleUnlock::StyleUnlock_t *v5; // rax
  CEconTool_StyleUnlock::StyleUnlock_t *v6; // rcx
  CEconTool_StyleUnlock::StyleUnlock_t *v7; // rdi

  m_Size = this->m_vecUnlocks.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_vecUnlocks.m_Memory.m_pMemory;
  if ( unDefIndex.m_Data != m_pMemory->m_unDefIndex.m_Data )
  {
    v5 = m_pMemory + 1;
    v6 = &v5[m_Size - 1];
    while ( v5 != v6 )
    {
      v7 = v5++;
      if ( unDefIndex.m_Data == v5[-1].m_unDefIndex.m_Data )
        goto LABEL_8;
    }
    return 0;
  }
  v7 = this->m_vecUnlocks.m_Memory.m_pMemory;
LABEL_8:
  pnStyleIndex->m_Data = v7->m_unStyleIndex;
  return 1;
}


// CEconTool_ItemDynamicRecipe::CEconTool_ItemDynamicRecipe  (line 377, @0x0000000002e84680, libserver.so)  // inlines: CEconSchemaSymbol, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase
// calls: IEconTool::IEconTool
// callers: CEconItemSchema::CreateEconToolImpl
void __fastcall CEconTool_ItemDynamicRecipe::CEconTool_ItemDynamicRecipe(
        CEconTool_ItemDynamicRecipe *const this,
        const char *pszTypeName,
        const char *pszUseString,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, unCapabilities, pUsageKV);
  this->m_bStaticRecipe = 0;
  this->_vptr_IEconTool = off_47A9250;
  this->m_symContextMenuPrompt.u.m_Id = 0;
  this->m_symContextMenuConfirm.u.m_Id = 0;
  this->m_symContextMenuConfirmTitle.u.m_Id = 0;
  this->m_vecComponents.m_Size = 0;
  this->m_vecComponents.m_Memory.m_pMemory = 0;
  this->m_vecComponents.m_Memory.m_nAllocationCount = 0;
  this->m_vecComponents.m_Memory.m_nGrowSize = 0;
  this->m_vecErrors.m_Size = 0;
  this->m_vecErrors.m_Memory.m_pMemory = 0;
  this->m_vecErrors.m_Memory.m_nAllocationCount = 0;
  this->m_vecErrors.m_Memory.m_nGrowSize = 0;
  this->m_vecWeights.m_Size = 0;
  this->m_vecWeights.m_Memory.m_pMemory = 0;
  this->m_vecWeights.m_Memory.m_nAllocationCount = 0;
  this->m_vecWeights.m_Memory.m_nGrowSize = 0;
}


// CEconTool_ItemDynamicRecipe::BFinishInitialization  (line 421, @0x0000000002e8da70, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<const CEconItemAttributeDefinition*>, Element, Find, GEconItemSchema, GetNextAvailableAttributeWithBaseName, GrowMemory, HasElement, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CFmtStrN<256, false>::CFmtStrN, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, CUtlMemory<const CEconItemAttributeDefinition*, int>::Purge, CUtlString::Format, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail, CUtlString::FreeMemoryBlock, CUtlMemory<const CEconItemAttributeDefinition*, int>::Grow, _Unwind_Resume, __stack_chk_fail
// strings: "%s %d", "Unable to find enough dynamic attributes to hold all the attributes of name %s!"
bool __fastcall CEconTool_ItemDynamicRecipe::BFinishInitialization(CEconTool_ItemDynamicRecipe *const this)
{
  __int64 k; // rbx
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *v2; // rdi
  int m_Size; // esi
  const char *v5; // r13
  int j; // ecx
  int v7; // r12d
  CEconItemSystem *v8; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const CEconItemAttributeDefinition *v10; // rbx
  int v11; // ecx
  const CEconItemAttributeDefinition **v12; // rdx
  int v13; // eax
  __int64 v14; // r12
  const CEconItemAttributeDefinition **v15; // rax
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors; // [rsp+10h] [rbp-2B0h]
  __int64 v17; // [rsp+18h] [rbp-2A8h]
  bool m_bStaticRecipe; // [rsp+23h] [rbp-29Dh]
  int i; // [rsp+24h] [rbp-29Ch]
  CUtlString msg; // [rsp+30h] [rbp-290h] BYREF
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ComponentAttribVector_t attribVec; // [rsp+40h] [rbp-280h] BYREF
  CFmtStrN<256,false> v23; // [rsp+60h] [rbp-260h] BYREF
  CFmtStrN<256,false> v24; // [rsp+170h] [rbp-150h] BYREF
  unsigned __int64 v25; // [rsp+288h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  pVecErrors = &this->m_vecErrors;
  m_bStaticRecipe = this->m_bStaticRecipe;
  if ( !m_bStaticRecipe )
  {
    attribVec.m_Size = 0;
    m_Size = this->m_vecComponents.m_Size;
    attribVec.m_Memory.m_pMemory = 0;
    attribVec.m_Memory.m_nAllocationCount = 0;
    attribVec.m_Memory.m_nGrowSize = 0;
    if ( m_Size <= 0 )
    {
      attribVec.m_Size = 0;
    }
    else
    {
      v17 = 0;
      i = 0;
      while ( 2 )
      {
        v5 = (*(this->m_vecComponents.m_Memory.m_pMemory[v17]->_vptr_CBaseRecipeComponent + 5))(this->m_vecComponents.m_Memory.m_pMemory[v17]);
        for ( j = 1; ; j = v7 )
        {
          v7 = j + 1;
          CFmtStrN<256,false>::CFmtStrN(&v24, "%s %d", v5, j);
          v8 = ItemSystem();
          AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v8->m_itemSchema, v24.m_szBuf);
          v10 = AttributeDefinitionByName;
          if ( AttributeDefinitionByName == 0 )
          {
            msg.m_pString = 0;
            CFmtStrN<256,false>::CFmtStrN(
              &v23,
              "Unable to find enough dynamic attributes to hold all the attributes of name %s!",
              v5);
            CUtlString::Format(&msg, v23.m_szBuf);
            if ( pVecErrors != 0 )
              CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
            if ( msg.m_pString != 0 )
              CUtlString::FreeMemoryBlock(&msg);
            attribVec.m_Size = 0;
            if ( (attribVec.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&attribVec.m_Memory);
              if ( (attribVec.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&attribVec.m_Memory);
            }
            return m_bStaticRecipe;
          }
          v11 = attribVec.m_Size;
          if ( attribVec.m_Size <= 0 )
            break;
          if ( AttributeDefinitionByName != *attribVec.m_Memory.m_pMemory )
          {
            v12 = attribVec.m_Memory.m_pMemory + 1;
            v13 = 0;
            while ( ++v13 != attribVec.m_Size )
            {
              if ( v10 == *v12++ )
              {
                if ( v13 < 0 )
                  goto LABEL_15;
                goto LABEL_24;
              }
            }
            break;
          }
LABEL_24:
          ;
        }
LABEL_15:
        v14 = attribVec.m_Size;
        if ( attribVec.m_Memory.m_nAllocationCount == attribVec.m_Size )
        {
          CUtlMemory<CEconItemAttributeDefinition const*,int>::Grow(&attribVec.m_Memory, 1);
          v11 = attribVec.m_Size;
        }
        attribVec.m_Size = v11 + 1;
        v15 = &attribVec.m_Memory.m_pMemory[v14];
        if ( v15 != 0 )
          *v15 = v10;
        ++i;
        ++v17;
        if ( this->m_vecComponents.m_Size > i )
          continue;
        break;
      }
      attribVec.m_Size = 0;
      if ( (attribVec.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_2;
    }
    CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&attribVec.m_Memory);
    if ( (attribVec.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&attribVec.m_Memory);
  }
LABEL_2:
  for ( k = 0; this->m_vecComponents.m_Size > k; ++k )
  {
    v2 = this->m_vecComponents.m_Memory.m_pMemory[k];
    (*(v2->_vptr_CBaseRecipeComponent + 3))(v2, pVecErrors);
  }
  return this->m_vecErrors.m_Size <= 0;
}


// CEconTool_ItemDynamicRecipe::CanApplyTo  (line 467, @0x0000000002e6bff0, libserver.so)  // inlines: Purge, RemoveAll, ~CRecipeComponentMatchingIterator, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CRecipeComponentMatchingIterator::CRecipeComponentMatchingIterator, CUtlMemory<const CEconItemAttributeDefinition*, int>::Purge, CRecipeComponentMatchingIterator::~CRecipeComponentMatchingIterator, _Unwind_Resume
bool __fastcall CEconTool_ItemDynamicRecipe::CanApplyTo(
        const CEconTool_ItemDynamicRecipe *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  bool v4; // bl
  CRecipeComponentMatchingIterator matchingIterator; // [rsp+0h] [rbp-80h] BYREF

  CRecipeComponentMatchingIterator::CRecipeComponentMatchingIterator(&matchingIterator, pTool, pToolSubject);
  (*(pTool->_vptr_IEconItemInterface + 28))(pTool, &matchingIterator);
  matchingIterator.m_vecMatchingOutputs.m_Size = 0;
  v4 = matchingIterator.m_vecMatchingInputs.m_Size != 0;
  matchingIterator._vptr_IEconItemAttributeIterator = off_47A2770;
  if ( (matchingIterator.m_vecMatchingOutputs.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&matchingIterator.m_vecMatchingOutputs.m_Memory),
        (matchingIterator.m_vecMatchingOutputs.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    matchingIterator.m_vecMatchingInputs.m_Size = 0;
    if ( (matchingIterator.m_vecMatchingInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      goto LABEL_6;
    return v4;
  }
  CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&matchingIterator.m_vecMatchingOutputs.m_Memory);
  matchingIterator.m_vecMatchingInputs.m_Size = 0;
  if ( (matchingIterator.m_vecMatchingInputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v4;
LABEL_6:
  CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&matchingIterator.m_vecMatchingInputs.m_Memory);
  if ( (matchingIterator.m_vecMatchingInputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v4;
  CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&matchingIterator.m_vecMatchingInputs.m_Memory);
  return v4;
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent  (line 490, @0x0000000002e6fc10, libserver.so)  // inlines: CEconSchemaSymbol, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase
// callers: CDOTAStaticRecipeComponentEvent::CDOTAStaticRecipeComponentEvent, CreateGameSpecificRecipeComponent, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponents
void __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent(
        CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *const this,
        bool bIsOutput)
{
  this->_vptr_CBaseRecipeComponent = off_47A9010;
  this->m_unSlotID = 0;
  this->m_flChanceOfApplying = 1.0;
  this->m_bIsOutput = bIsOutput;
  this->m_vecCountChances.m_Size = 0;
  this->m_vecCountChances.m_Memory.m_pMemory = 0;
  this->m_vecCountChances.m_Memory.m_nAllocationCount = 0;
  this->m_vecCountChances.m_Memory.m_nGrowSize = 0;
  this->m_flTotalWeights = 0.0;
  this->m_unFlags = 0;
  this->m_symRarity.u.m_Id = 0;
  this->m_eQuality = EEconItemQuality::AE_UNIQUE;
  this->m_vecDynamicAttributes.m_Size = 0;
  this->m_vecDynamicAttributes.m_Memory.m_pMemory = 0;
  this->m_vecDynamicAttributes.m_Memory.m_nAllocationCount = 0;
  this->m_vecDynamicAttributes.m_Memory.m_nGrowSize = 0;
  this->m_bCannotMatchInput = 0;
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent  (line 503, @0x0000000002e73470, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
// callers: CDOTAStaticRecipeComponentLeagueOwnership::~CDOTAStaticRecipeComponentLeagueOwnership, CDOTAStaticRecipeComponentEvent::~CDOTAStaticRecipeComponentEvent
void __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent(
        CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;
  v2 = this->m_vecDynamicAttributes.m_Size - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      v4 = &this->m_vecDynamicAttributes.m_Memory.m_pMemory[v3--];
      CUtlConstStringBase<char>::Set(&v4->m_symAttrData, 0);
    }
    while ( v2 != -1 );
  }
  v5 = (this->m_vecDynamicAttributes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecDynamicAttributes.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t,int>::Purge(&this->m_vecDynamicAttributes.m_Memory);
    if ( (this->m_vecDynamicAttributes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t,int>::Purge(&this->m_vecDynamicAttributes.m_Memory);
  }
  v5 = (this->m_vecCountChances.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecCountChances.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t,int>::Purge(&this->m_vecCountChances.m_Memory);
    if ( (this->m_vecCountChances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t,int>::Purge(&this->m_vecCountChances.m_Memory);
  }
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent  (line 503, @0x0000000002e73540, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, operator delete, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::~CBaseRecipeComponent(
        CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;
  v2 = this->m_vecDynamicAttributes.m_Size - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      v4 = &this->m_vecDynamicAttributes.m_Memory.m_pMemory[v3--];
      CUtlConstStringBase<char>::Set(&v4->m_symAttrData, 0);
    }
    while ( v2 != -1 );
  }
  v5 = (this->m_vecDynamicAttributes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecDynamicAttributes.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t,int>::Purge(&this->m_vecDynamicAttributes.m_Memory);
    if ( (this->m_vecDynamicAttributes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t,int>::Purge(&this->m_vecDynamicAttributes.m_Memory);
  }
  v5 = (this->m_vecCountChances.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecCountChances.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t,int>::Purge(&this->m_vecCountChances.m_Memory);
    if ( (this->m_vecCountChances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t,int>::Purge(&this->m_vecCountChances.m_Memory);
  }
  operator delete(this);
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::BuildFullAttribute  (line 507, @0x0000000002e969a0, libserver.so)  // inlines: CUtlString, Get, GetItemSchema, Length, String, V_strlen, assign, length, set_attributes_string, set_has_attributes_string, set_has_item_count, set_has_item_flags, set_has_item_quality, set_has_item_rarity, set_has_items_fulfilled, set_item_count, set_item_flags, set_item_quality, set_item_rarity, set_items_fulfilled, ~CUtlString
// calls: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::RollCount, CUtlString::Append, CFmtStrN<256, false>::CFmtStrN, strlen, CUtlString::FreeMemoryBlock, ItemSystem, CEconItemSchema::GetRarityDefinitionByName, CUtlString::Get, std::string::assign(char const*,ulong), _Unwind_Resume, __stack_chk_fail
bool __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::BuildFullAttribute(
        const CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *const this,
        CAttribute_ItemDynamicRecipeComponent *const typedValue,
        uint32 *const unFlags)
{
  uint32 m_unFlags; // eax
  uint32 v6; // eax
  uint32 v7; // edx
  uint32 v8; // eax
  int v9; // eax
  int v10; // edx
  __int64 v11; // r13
  int v12; // r12d
  const char *m_pString; // rsi
  EEconItemQuality m_eQuality; // eax
  const char *m_pAsString; // r12
  CEconItemSystem *v17; // rax
  const CEconItemRarityDefinition *RarityDefinitionByName; // rax
  int32 m_nValue; // eax
  const char *v20; // rbx
  size_t v21; // rax
  char v23; // [rsp+Fh] [rbp-171h]
  CUtlString strAttribs; // [rsp+20h] [rbp-160h] BYREF
  CFmtStrN<256,false> v25; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v26; // [rsp+148h] [rbp-38h]

  *unFlags = 0;
  v26 = __readfsqword(0x28u);
  v23 = (*(this->_vptr_CBaseRecipeComponent + 6))(this);
  if ( v23 == 0 )
    return 0;
  m_unFlags = this->m_unFlags;
  if ( (m_unFlags & 0x10) != 0 )
  {
    m_pAsString = "";
    if ( this->m_symRarity.u.m_Id != 0 )
      m_pAsString = this->m_symRarity.u.m_pAsString;
    v17 = ItemSystem();
    RarityDefinitionByName = CEconItemSchema::GetRarityDefinitionByName(&v17->m_itemSchema, m_pAsString);
    if ( RarityDefinitionByName != 0 )
    {
      m_nValue = RarityDefinitionByName->m_nValue;
      *(typedValue + 4) |= 0x40u;
      *(typedValue + 13) = m_nValue;
      *unFlags |= 0x10u;
      if ( (this->m_unFlags & 8) == 0 )
        goto LABEL_4;
      goto LABEL_18;
    }
    return 0;
  }
  if ( (m_unFlags & 8) == 0 )
  {
LABEL_4:
    v6 = *unFlags;
    goto LABEL_5;
  }
LABEL_18:
  m_eQuality = this->m_eQuality;
  *(typedValue + 4) |= 2u;
  *(typedValue + 7) = m_eQuality;
  v6 = *unFlags | 8;
  *unFlags = v6;
LABEL_5:
  v7 = v6 | this->m_bIsOutput;
  *unFlags = v7;
  v8 = v7 | (this->m_bCannotMatchInput ? 0x20 : 0);
  *unFlags = v8;
  *(typedValue + 4) |= 4u;
  *(typedValue + 10) = v8;
  v9 = CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::RollCount(this);
  v10 = *(typedValue + 4);
  *(typedValue + 12) = 0;
  *(typedValue + 11) = v9;
  strAttribs.m_pString = 0;
  *(typedValue + 4) = v10 | 0x30;
  if ( this->m_vecDynamicAttributes.m_Size <= 0 )
    goto LABEL_25;
  v11 = 0;
  v12 = 0;
  CFmtStrN<256,false>::CFmtStrN(&v25, "%d", this->m_vecDynamicAttributes.m_Memory.m_pMemory->m_AttrIndex);
  while ( 1 )
  {
    CUtlString::Append(&strAttribs, v25.m_szBuf);
    CUtlString::Append(&strAttribs, g_pszAttrEncodeSeparator);
    m_pString = this->m_vecDynamicAttributes.m_Memory.m_pMemory[v11].m_symAttrData.m_pString;
    if ( m_pString == 0 )
      m_pString = "";
    CUtlString::Append(&strAttribs, m_pString);
    if ( this->m_vecDynamicAttributes.m_Size <= ++v12 )
      break;
    if ( v12 != 0 )
      CUtlString::Append(&strAttribs, g_pszAttrEncodeSeparator);
    CFmtStrN<256,false>::CFmtStrN(&v25, "%d", this->m_vecDynamicAttributes.m_Memory.m_pMemory[++v11].m_AttrIndex);
  }
  if ( strAttribs.m_pString != 0 && strlen(strAttribs.m_pString) > 1023 )
  {
    v23 = 0;
  }
  else
  {
LABEL_25:
    v20 = CUtlString::Get(&strAttribs);
    *(typedValue + 4) |= 8u;
    v21 = strlen(v20);
    std::string::assign(*(typedValue + 4), v20, v21);
    if ( strAttribs.m_pString == 0 )
      return v23;
  }
  CUtlString::FreeMemoryBlock(&strAttribs);
  return v23;
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::RollCount  (line 567, @0x0000000002e6fc90, libserver.so)  // inlines: operator[]
// calls: RandomFloat, RandomInt
// callers: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::BuildFullAttribute
int __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::RollCount(
        const CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *const this)
{
  float v3; // xmm0_4
  int m_Size; // edx
  float v5; // xmm0_4
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t *m_pMemory; // rax
  float v7; // xmm1_4
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t *v8; // rax
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t *v9; // rdx
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t *v10; // rcx

  if ( this->m_vecCountChances.m_Size == 0 )
    return 1;
  v3 = RandomFloat(0.0, 1.0);
  m_Size = this->m_vecCountChances.m_Size;
  v5 = v3 * this->m_flTotalWeights;
  if ( m_Size <= 0 )
    return 1;
  m_pMemory = this->m_vecCountChances.m_Memory.m_pMemory;
  v7 = m_pMemory->m_flChance + 0.0;
  if ( v7 < v5 )
  {
    v8 = m_pMemory + 1;
    v9 = &v8[m_Size - 1];
    while ( v8 != v9 )
    {
      v7 = v7 + v8->m_flChance;
      v10 = v8++;
      if ( v7 >= v5 )
        return RandomInt(v10->m_nMinCount, v10->m_nMaxCount);
    }
    return 1;
  }
  v10 = this->m_vecCountChances.m_Memory.m_pMemory;
  return RandomInt(v10->m_nMinCount, v10->m_nMaxCount);
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::SetChanceOfApplying  (line 660, @0x0000000002e6fd20, libserver.so)
void __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::SetChanceOfApplying(
        CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *const this,
        float a2,
        float flChance)
{
  this->m_flChanceOfApplying = a2;
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::BFinishInitialization_Internal  (line 670, @0x0000000002e69520, libserver.so)
bool __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::BFinishInitialization_Internal(
        CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::ParseKV  (line 684, @0x0000000002e97fb0, libserver.so)  // inlines: AddString, AddToTail, CUtlString, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CopyConstruct<CUtlString>, Element, FindInsertionPosition, FindPoolWithSpace, GrowMemory, HashStringFastCaseless, Insert, InsertAt, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator(), operator=, operator[], ~CUtlString
// calls: KeyValues::GetString, strlen, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, CFmtStrN<256, false>::CFmtStrN, CUtlString::Format, CUtlString::Get, CUtlString::Set (18 total)
// strings: "Missing item name in recipe component"
// globals: g_pEconSchemaSymbolTable
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::ParseKV(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem *const this,
        KeyValues *pKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  const char *String; // r15
  int v9; // r9d
  UtlSymLargeId_t m_String; // rax
  int v12; // r9d
  signed int v13; // edx
  int m_Size; // r11d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **m_pMemory; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v16; // r10
  int m_SpaceUsed; // edi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v18; // rax
  int v19; // esi
  unsigned int v20; // ecx
  __int64 v21; // rsi
  int v22; // eax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v23; // rax
  char *m_pString; // rcx
  __int64 m_Root; // rdx
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v26; // r9
  unsigned int v27; // eax
  __int64 m_Right; // rsi
  bool v29; // cl
  __int64 v30; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v31; // r8
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  __int64 v33; // rbx
  int v34; // eax
  CUtlString *v35; // rbx
  const char *v36; // rax
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> > *p_m_Lookup; // r15
  int v38; // [rsp+0h] [rbp-1A0h]
  char *v39; // [rsp+8h] [rbp-198h]
  int isLeft; // [rsp+10h] [rbp-190h]
  bool isLefta; // [rsp+10h] [rbp-190h]
  unsigned int parent; // [rsp+18h] [rbp-188h]
  __int64 parenta; // [rsp+18h] [rbp-188h]
  __int64 parentb; // [rsp+18h] [rbp-188h]
  __int64 parentc; // [rsp+18h] [rbp-188h]
  int pCopyFrom; // [rsp+20h] [rbp-180h]
  unsigned int pCopyFroma; // [rsp+20h] [rbp-180h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul> *v48; // [rsp+28h] [rbp-178h]
  __int64 v49; // [rsp+28h] [rbp-178h]
  UtlSymLargeId_t v50; // [rsp+30h] [rbp-170h]
  CUtlString msg; // [rsp+40h] [rbp-160h] BYREF
  CFmtStrN<256,false> v52; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v53; // [rsp+168h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  if ( KeyValues::GetString(pKV, "item", "", 0, 0) != 0 )
  {
    String = KeyValues::GetString(pKV, "item", 0, 0, 0);
    v48 = g_pEconSchemaSymbolTable;
    if ( String != 0 )
    {
      v9 = strlen(String);
      m_String = 0;
      if ( v9 > 0 && *String != 0 )
      {
        pCopyFrom = v9;
        CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v48, String, v9);
        m_String = v50;
        v12 = pCopyFrom;
        if ( v50 == 0 )
        {
          v13 = (pCopyFrom + 16) & 0xFFFFFFF8;
          m_Size = v48->m_StringPools.m_Size;
          if ( m_Size > 0 )
          {
            m_pMemory = v48->m_StringPools.m_Memory.m_pMemory;
            v16 = *m_pMemory;
            m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
            if ( v13 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
            {
LABEL_35:
              v23 = v16;
LABEL_15:
              v23->m_SpaceUsed = m_SpaceUsed + v13;
              v38 = v12;
              v39 = &v23->m_Data[m_SpaceUsed];
              parenta = v23 + m_SpaceUsed;
              *(parenta + 8) = MurmurHash2LowerCase(String, 0x3501A674u);
              memcpy((parenta + 16), String, v38);
              m_pString = v39;
              *(v38 + parenta + 16) = 0;
              msg.m_pString = v39;
              m_Root = v48->m_Lookup.m_Root;
              if ( m_Root == -1 )
              {
                v29 = 0;
              }
              else
              {
                v26 = v48->m_Lookup.m_Elements.m_pMemory;
                while ( 1 )
                {
                  v30 = m_Root;
                  v31 = &v26[m_Root];
                  m_Data = v31->m_Data;
                  if ( *m_pString == m_Data->m_Hash )
                  {
                    parentb = m_Root;
                    v27 = V_stricmp_fast(m_pString + 8, m_Data->m_String) >> 31;
                    v26 = v48->m_Lookup.m_Elements.m_pMemory;
                    m_Root = parentb;
                    v31 = &v26[v30];
                  }
                  else
                  {
                    LOBYTE(v27) = *m_pString < m_Data->m_Hash;
                  }
                  m_Right = v31->m_Right;
                  v29 = v27 != 0;
                  if ( v27 != 0 )
                    m_Right = v31->m_Left;
                  if ( m_Right == -1 )
                    break;
                  m_pString = msg.m_pString;
                  m_Root = m_Right;
                }
              }
              p_m_Lookup = &v48->m_Lookup;
              isLefta = v29;
              parentc = m_Root;
              v49 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                      &v48->m_Lookup,
                      &msg);
              CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
                p_m_Lookup,
                v49,
                parentc,
                isLefta);
              ++p_m_Lookup->m_NumElements;
              m_String = p_m_Lookup->m_Elements.m_pMemory[v49].m_Data->m_String;
              goto LABEL_5;
            }
            v18 = m_pMemory + 1;
            v19 = 0;
            while ( ++v19 != m_Size )
            {
              v16 = *v18++;
              m_SpaceUsed = v16->m_SpaceUsed;
              if ( v13 <= v16->m_TotalLen - m_SpaceUsed )
              {
                if ( v19 == -1 )
                  break;
                goto LABEL_35;
              }
            }
          }
          if ( (v13 + 12LL) <= 0x800 )
          {
            v20 = 2036;
            v21 = 2048;
          }
          else
          {
            v20 = (pCopyFrom + 16) & 0xFFFFFFF8;
            v21 = v13 + 12;
          }
          isLeft = pCopyFrom;
          pCopyFroma = v20;
          parent = (v12 + 16) & 0xFFFFFFF8;
          msg.m_pString = (**g_pMemAlloc)(g_pMemAlloc, v21);
          *msg.m_pString = pCopyFroma;
          *(msg.m_pString + 1) = 0;
          v22 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                  &v48->m_StringPools,
                  &msg);
          v12 = isLeft;
          v13 = parent;
          v23 = v48->m_StringPools.m_Memory.m_pMemory[v22];
          m_SpaceUsed = v23->m_SpaceUsed;
          goto LABEL_15;
        }
      }
    }
    else
    {
      m_String = 0;
    }
LABEL_5:
    this->m_symItemName.u.m_Id = m_String;
    return CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV(this, pKV, pVecErrors, pTool);
  }
  msg.m_pString = 0;
  CFmtStrN<256,false>::CFmtStrN(&v52, "Missing item name in recipe component");
  CUtlString::Format(&msg, v52.m_szBuf);
  if ( pVecErrors != 0 )
  {
    v33 = pVecErrors->m_Size;
    v34 = pVecErrors->m_Size;
    if ( v33 == pVecErrors->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
      v34 = pVecErrors->m_Size;
    }
    pVecErrors->m_Size = v34 + 1;
    v35 = &pVecErrors->m_Memory.m_pMemory[v33];
    if ( v35 != 0 )
    {
      v35->m_pString = 0;
      v36 = CUtlString::Get(&msg);
      CUtlString::Set(v35, v36);
    }
  }
  if ( msg.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&msg);
  return 0;
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::BFinishInitialization_Internal  (line 698, @0x0000000002e96c50, libserver.so)  // inlines: AddToTail, BFinishInitialization_Internal, CEconSchemaSymbol, CUtlString, CUtlSymbolLarge, CopyConstruct<CUtlString>, Element, Get, GetItemSchema, GrowMemory, String, operator[], ~CUtlString
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionBySymbol, CFmtStrN<256, false>::CFmtStrN, CUtlString::Format, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, __stack_chk_fail, _Unwind_Resume
// strings: "CDynamicRecipeComponentSpecificItem has invalid item name: %s"
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::BFinishInitialization_Internal(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  CEconItemSystem *v4; // rax
  CEconItemDefinition *ItemDefinitionBySymbol; // rax
  bool v7; // zf
  const char *m_pAsString; // rdx
  __int64 m_Size; // rbx
  int v10; // eax
  CUtlString *v11; // rbx
  const char *v12; // rax
  CUtlString msg; // [rsp+0h] [rbp-150h] BYREF
  CFmtStrN<256,false> v14; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v15; // [rsp+128h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  msg.m_pString = this->m_symItemName.u.m_Id;
  v4 = ItemSystem();
  ItemDefinitionBySymbol = CEconItemSchema::GetItemDefinitionBySymbol(&v4->m_itemSchema, &msg);
  if ( ItemDefinitionBySymbol != 0 )
  {
    this->m_unDefIndex.m_Data = (*ItemDefinitionBySymbol->_vptr_IEconItemDefinition)(ItemDefinitionBySymbol);
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  else
  {
    v7 = this->m_symItemName.u.m_Id == 0;
    m_pAsString = "";
    msg.m_pString = 0;
    if ( !v7 )
      m_pAsString = this->m_symItemName.u.m_pAsString;
    CFmtStrN<256,false>::CFmtStrN(&v14, "CDynamicRecipeComponentSpecificItem has invalid item name: %s", m_pAsString);
    CUtlString::Format(&msg, v14.m_szBuf);
    if ( pVecErrors != 0 )
    {
      m_Size = pVecErrors->m_Size;
      v10 = pVecErrors->m_Size;
      if ( m_Size == pVecErrors->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
        v10 = pVecErrors->m_Size;
      }
      pVecErrors->m_Size = v10 + 1;
      v11 = &pVecErrors->m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
      {
        v11->m_pString = 0;
        v12 = CUtlString::Get(&msg);
        CUtlString::Set(v11, v12);
      }
    }
    if ( msg.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&msg);
    return 0;
  }
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::FilloutAttribute  (line 714, @0x0000000002e69540, libserver.so)  // inlines: operator==, set_has_item_def, set_item_def
// globals: INVALID_ITEM_DEF_INDEX
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::FilloutAttribute(
        const CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem *const this,
        CAttribute_ItemDynamicRecipeComponent *const typedValue,
        uint32 *const unFlags)
{
  int m_Data; // eax

  m_Data = this->m_unDefIndex.m_Data;
  if ( INVALID_ITEM_DEF_INDEX.m_Data == m_Data )
    return 0;
  *(typedValue + 4) |= 1u;
  *(typedValue + 6) = m_Data;
  *unFlags |= 4u;
  return 1;
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::ParseKV  (line 754, @0x0000000002e98470, libserver.so)  // inlines: GetBool
// calls: KeyValues::GetInt, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV
// strings: "allow_bundles"
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::ParseKV(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch *const this,
        KeyValues *pKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  this->m_bAllowBundles = KeyValues::GetInt(pKV, "allow_bundles", 1) != 0;
  return CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV(this, pKV, pVecErrors, pTool);
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::BFinishInitialization_Internal  (line 761, @0x0000000002e96dd0, libserver.so)  // inlines: AddToTail, BFinishInitialization_Internal, CUtlString, CopyConstruct<CUtlString>, Element, Get, GetItemSchema, GrowMemory, String, operator[], ~CUtlString
// calls: CFmtStrN<256, false>::CFmtStrN, CUtlString::Format, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, ItemSystem, CEconItemSchema::GetRarityDefinitionByName, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail, CUtlMemory<CUtlString, int>::Grow, __stack_chk_fail, _Unwind_Resume
// strings: "CDynamicRecipeComponentCriteriaMatch has invalid item quality: %s", "CDynamicRecipeComponentCriteriaMatch has invalid item rarity: %s"
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::BFinishInitialization_Internal(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  uint32 m_unFlags; // eax
  bool v6; // zf
  const char *v7; // rdx
  __int64 m_Size; // r13
  int v9; // eax
  CUtlString *v10; // r12
  const char *v11; // rax
  const char *m_pAsString; // r13
  CEconItemSystem *v13; // rax
  const char *v14; // rdx
  CUtlString msg; // [rsp+0h] [rbp-150h] BYREF
  CFmtStrN<256,false> v16; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v17; // [rsp+128h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  m_unFlags = this->m_unFlags;
  if ( (m_unFlags & 0x10) != 0 )
  {
    m_pAsString = "";
    if ( this->m_symRarity.u.m_Id != 0 )
      m_pAsString = this->m_symRarity.u.m_pAsString;
    v13 = ItemSystem();
    if ( CEconItemSchema::GetRarityDefinitionByName(&v13->m_itemSchema, m_pAsString) == 0 )
    {
      v6 = this->m_symRarity.u.m_Id == 0;
      v14 = "";
      msg.m_pString = 0;
      if ( !v6 )
        v14 = this->m_symRarity.u.m_pAsString;
      CFmtStrN<256,false>::CFmtStrN(&v16, "CDynamicRecipeComponentCriteriaMatch has invalid item rarity: %s", v14);
      CUtlString::Format(&msg, v16.m_szBuf);
      if ( pVecErrors != 0 )
        CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
      if ( msg.m_pString == 0 )
        return 0;
      CUtlString::FreeMemoryBlock(&msg);
      return 0;
    }
    m_unFlags = this->m_unFlags;
  }
  if ( (m_unFlags & 8) != 0 && this->m_eQuality == EEconItemQuality::AE_UNDEFINED )
  {
    v6 = this->m_symRarity.u.m_Id == 0;
    v7 = "";
    msg.m_pString = 0;
    if ( !v6 )
      v7 = this->m_symRarity.u.m_pAsString;
    CFmtStrN<256,false>::CFmtStrN(&v16, "CDynamicRecipeComponentCriteriaMatch has invalid item quality: %s", v7);
    CUtlString::Format(&msg, v16.m_szBuf);
    if ( pVecErrors != 0 )
    {
      m_Size = pVecErrors->m_Size;
      v9 = pVecErrors->m_Size;
      if ( m_Size == pVecErrors->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
        v9 = pVecErrors->m_Size;
      }
      pVecErrors->m_Size = v9 + 1;
      v10 = &pVecErrors->m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
      {
        v10->m_pString = 0;
        v11 = CUtlString::Get(&msg);
        CUtlString::Set(v10, v11);
      }
    }
    if ( msg.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&msg);
    return 0;
  }
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::FilloutAttribute  (line 779, @0x0000000002e69570, libserver.so)
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::FilloutAttribute(
        const CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch *const this,
        CAttribute_ItemDynamicRecipeComponent *const typedValue,
        uint32 *const unFlags)
{
  uint32 v3; // eax

  v3 = *unFlags;
  *unFlags |= 0x40u;
  if ( !this->m_bAllowBundles )
  {
    LOBYTE(v3) = v3 | 0xC0;
    *unFlags = v3;
  }
  return 1;
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::ParseKV  (line 840, @0x0000000002e984c0, libserver.so)  // inlines: AddString, AddToTail, CUtlString, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CopyConstruct<CUtlString>, Element, FindInsertionPosition, FindPoolWithSpace, GrowMemory, HashStringFastCaseless, Insert, InsertAt, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator(), operator=, operator[], ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, KeyValues::GetString, strlen, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast (18 total)
// strings: "Using a specific item loot list as part of a static recipe. Use the general loot list ver, "lootlist", "Missing lootlist name in lootlist recipe component"
// globals: g_pEconSchemaSymbolTable
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::ParseKV(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList *const this,
        KeyValues *pKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  bool m_bStaticRecipe; // bl
  __int64 m_Size; // rbx
  int v8; // eax
  CUtlString *v9; // rbx
  const char *v10; // rax
  const char *String; // rbx
  int v15; // r9d
  UtlSymLargeId_t m_String; // rax
  int v17; // r9d
  signed int v18; // r10d
  int v19; // r11d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **m_pMemory; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v21; // rdi
  int m_SpaceUsed; // esi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v23; // rax
  int v24; // ecx
  __int64 v25; // rsi
  int v26; // eax
  char *m_pString; // rcx
  __int64 m_Root; // rdx
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v29; // r9
  unsigned int v30; // eax
  __int64 m_Right; // rsi
  bool v32; // cl
  __int64 v33; // rbx
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v34; // r8
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  __int64 v36; // r13
  int v37; // eax
  CUtlString *v38; // r12
  const char *v39; // rax
  int v40; // [rsp+0h] [rbp-1A0h]
  int parent; // [rsp+10h] [rbp-190h]
  __int64 parenta; // [rsp+10h] [rbp-190h]
  unsigned int isLeft; // [rsp+18h] [rbp-188h]
  bool isLefta[8]; // [rsp+18h] [rbp-188h]
  bool isLeftb[8]; // [rsp+18h] [rbp-188h]
  bool isLeftc; // [rsp+18h] [rbp-188h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul> *v47; // [rsp+20h] [rbp-180h]
  int pCopyFrom; // [rsp+28h] [rbp-178h]
  unsigned int pCopyFroma; // [rsp+28h] [rbp-178h]
  __int64 pCopyFromb; // [rsp+28h] [rbp-178h]
  UtlSymLargeId_t v51; // [rsp+30h] [rbp-170h]
  CUtlString msg; // [rsp+40h] [rbp-160h] BYREF
  CFmtStrN<256,false> v53; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v54; // [rsp+168h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  m_bStaticRecipe = pTool->m_bStaticRecipe;
  if ( m_bStaticRecipe )
  {
    msg.m_pString = 0;
    CUtlString::Format(
      &msg,
      "Using a specific item loot list as part of a static recipe. Use the general loot list version instead");
    if ( pVecErrors != 0 )
    {
      m_Size = pVecErrors->m_Size;
      v8 = pVecErrors->m_Size;
      if ( m_Size == pVecErrors->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
        v8 = pVecErrors->m_Size;
      }
      pVecErrors->m_Size = v8 + 1;
      v9 = &pVecErrors->m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
      {
        v9->m_pString = 0;
        v10 = CUtlString::Get(&msg);
        CUtlString::Set(v9, v10);
      }
    }
    if ( msg.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&msg);
    return 0;
  }
  if ( KeyValues::GetString(pKV, "lootlist", "", 0, 0) != 0 )
  {
    String = KeyValues::GetString(pKV, "lootlist", "", 0, 0);
    v47 = g_pEconSchemaSymbolTable;
    if ( String != 0 )
    {
      v15 = strlen(String);
      m_String = 0;
      if ( v15 > 0 && *String != 0 )
      {
        pCopyFrom = v15;
        CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v47, String, v15);
        m_String = v51;
        v17 = pCopyFrom;
        if ( v51 == 0 )
        {
          v18 = (pCopyFrom + 16) & 0xFFFFFFF8;
          v19 = v47->m_StringPools.m_Size;
          if ( v19 > 0 )
          {
            m_pMemory = v47->m_StringPools.m_Memory.m_pMemory;
            v21 = *m_pMemory;
            m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
            if ( v18 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
            {
LABEL_25:
              v40 = v17;
              v21->m_SpaceUsed = v18 + m_SpaceUsed;
              *isLefta = v21 + m_SpaceUsed;
              *(*isLefta + 8LL) = MurmurHash2LowerCase(String, 0x3501A674u);
              memcpy((*isLefta + 16LL), String, v40);
              m_pString = (*isLefta + 8LL);
              *(v40 + *isLefta + 16LL) = 0;
              msg.m_pString = (*isLefta + 8LL);
              m_Root = v47->m_Lookup.m_Root;
              if ( m_Root == -1 )
              {
                v32 = 0;
              }
              else
              {
                v29 = v47->m_Lookup.m_Elements.m_pMemory;
                while ( 1 )
                {
                  v33 = m_Root;
                  v34 = &v29[m_Root];
                  m_Data = v34->m_Data;
                  if ( *m_pString == m_Data->m_Hash )
                  {
                    *isLeftb = m_Root;
                    v30 = V_stricmp_fast(m_pString + 8, m_Data->m_String) >> 31;
                    v29 = v47->m_Lookup.m_Elements.m_pMemory;
                    m_Root = *isLeftb;
                    v34 = &v29[v33];
                  }
                  else
                  {
                    LOBYTE(v30) = *m_pString < m_Data->m_Hash;
                  }
                  m_Right = v34->m_Right;
                  v32 = v30 != 0;
                  if ( v30 != 0 )
                    m_Right = v34->m_Left;
                  if ( m_Right == -1 )
                    break;
                  m_pString = msg.m_pString;
                  m_Root = m_Right;
                }
              }
              parenta = m_Root;
              isLeftc = v32;
              pCopyFromb = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                             &v47->m_Lookup,
                             &msg);
              CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
                &v47->m_Lookup,
                pCopyFromb,
                parenta,
                isLeftc);
              ++v47->m_Lookup.m_NumElements;
              m_String = v47->m_Lookup.m_Elements.m_pMemory[pCopyFromb].m_Data->m_String;
              goto LABEL_15;
            }
            v23 = m_pMemory + 1;
            v24 = 0;
            while ( ++v24 != v19 )
            {
              v21 = *v23++;
              m_SpaceUsed = v21->m_SpaceUsed;
              if ( v18 <= v21->m_TotalLen - m_SpaceUsed )
              {
                if ( v24 == -1 )
                  break;
                goto LABEL_25;
              }
            }
          }
          if ( (v18 + 12LL) <= 0x800 )
          {
            pCopyFroma = 2036;
            v25 = 2048;
          }
          else
          {
            pCopyFroma = (pCopyFrom + 16) & 0xFFFFFFF8;
            v25 = v18 + 12;
          }
          parent = v17;
          isLeft = (v17 + 16) & 0xFFFFFFF8;
          msg.m_pString = (**g_pMemAlloc)(g_pMemAlloc, v25);
          *msg.m_pString = pCopyFroma;
          *(msg.m_pString + 1) = 0;
          v26 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                  &v47->m_StringPools,
                  &msg);
          v18 = isLeft;
          v17 = parent;
          v21 = v47->m_StringPools.m_Memory.m_pMemory[v26];
          m_SpaceUsed = v21->m_SpaceUsed;
          goto LABEL_25;
        }
      }
    }
    else
    {
      m_String = 0;
    }
LABEL_15:
    this->m_symLootList.u.m_Id = m_String;
    return CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV(this, pKV, pVecErrors, pTool);
  }
  msg.m_pString = 0;
  CFmtStrN<256,false>::CFmtStrN(&v53, "Missing lootlist name in lootlist recipe component");
  CUtlString::Format(&msg, v53.m_szBuf);
  if ( pVecErrors != 0 )
  {
    v36 = pVecErrors->m_Size;
    v37 = pVecErrors->m_Size;
    if ( v36 == pVecErrors->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
      v37 = pVecErrors->m_Size;
    }
    pVecErrors->m_Size = v37 + 1;
    v38 = &pVecErrors->m_Memory.m_pMemory[v36];
    if ( v38 != 0 )
    {
      v38->m_pString = 0;
      v39 = CUtlString::Get(&msg);
      CUtlString::Set(v38, v39);
    }
  }
  if ( msg.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&msg);
  return m_bStaticRecipe;
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::BFinishInitialization_Internal  (line 855, @0x0000000002e6a2c0, libserver.so)  // inlines: BFinishInitialization_Internal
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::BFinishInitialization_Internal(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::ParseKV  (line 984, @0x0000000002e98a60, libserver.so)  // inlines: AddString, AddToTail, CUtlString, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CopyConstruct<CUtlString>, Element, FindInsertionPosition, FindPoolWithSpace, GrowMemory, HashStringFastCaseless, Insert, InsertAt, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator(), operator=, operator[], ~CUtlString
// calls: KeyValues::GetString, strlen, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, CFmtStrN<256, false>::CFmtStrN, CUtlString::Format, CUtlString::Get, CUtlString::Set (18 total)
// strings: "lootlist", "Missing lootlist name in lootlist recipe component"
// globals: g_pEconSchemaSymbolTable
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::ParseKV(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList *const this,
        KeyValues *pKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  const char *String; // r15
  int v9; // r9d
  UtlSymLargeId_t m_String; // rax
  int v12; // r9d
  signed int v13; // edx
  int m_Size; // r11d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **m_pMemory; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v16; // r10
  int m_SpaceUsed; // edi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v18; // rax
  int v19; // esi
  unsigned int v20; // ecx
  __int64 v21; // rsi
  int v22; // eax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v23; // rax
  char *m_pString; // rcx
  __int64 m_Root; // rdx
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v26; // r9
  unsigned int v27; // eax
  __int64 m_Right; // rsi
  bool v29; // cl
  __int64 v30; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v31; // r8
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  __int64 v33; // rbx
  int v34; // eax
  CUtlString *v35; // rbx
  const char *v36; // rax
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> > *p_m_Lookup; // r15
  int v38; // [rsp+0h] [rbp-1A0h]
  char *v39; // [rsp+8h] [rbp-198h]
  int isLeft; // [rsp+10h] [rbp-190h]
  bool isLefta; // [rsp+10h] [rbp-190h]
  unsigned int parent; // [rsp+18h] [rbp-188h]
  __int64 parenta; // [rsp+18h] [rbp-188h]
  __int64 parentb; // [rsp+18h] [rbp-188h]
  __int64 parentc; // [rsp+18h] [rbp-188h]
  int pCopyFrom; // [rsp+20h] [rbp-180h]
  unsigned int pCopyFroma; // [rsp+20h] [rbp-180h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul> *v48; // [rsp+28h] [rbp-178h]
  __int64 v49; // [rsp+28h] [rbp-178h]
  UtlSymLargeId_t v50; // [rsp+30h] [rbp-170h]
  CUtlString msg; // [rsp+40h] [rbp-160h] BYREF
  CFmtStrN<256,false> v52; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v53; // [rsp+168h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  if ( KeyValues::GetString(pKV, "lootlist", "", 0, 0) != 0 )
  {
    String = KeyValues::GetString(pKV, "lootlist", "", 0, 0);
    v48 = g_pEconSchemaSymbolTable;
    if ( String != 0 )
    {
      v9 = strlen(String);
      m_String = 0;
      if ( v9 > 0 && *String != 0 )
      {
        pCopyFrom = v9;
        CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v48, String, v9);
        m_String = v50;
        v12 = pCopyFrom;
        if ( v50 == 0 )
        {
          v13 = (pCopyFrom + 16) & 0xFFFFFFF8;
          m_Size = v48->m_StringPools.m_Size;
          if ( m_Size > 0 )
          {
            m_pMemory = v48->m_StringPools.m_Memory.m_pMemory;
            v16 = *m_pMemory;
            m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
            if ( v13 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
            {
LABEL_35:
              v23 = v16;
LABEL_15:
              v23->m_SpaceUsed = m_SpaceUsed + v13;
              v38 = v12;
              v39 = &v23->m_Data[m_SpaceUsed];
              parenta = v23 + m_SpaceUsed;
              *(parenta + 8) = MurmurHash2LowerCase(String, 0x3501A674u);
              memcpy((parenta + 16), String, v38);
              m_pString = v39;
              *(v38 + parenta + 16) = 0;
              msg.m_pString = v39;
              m_Root = v48->m_Lookup.m_Root;
              if ( m_Root == -1 )
              {
                v29 = 0;
              }
              else
              {
                v26 = v48->m_Lookup.m_Elements.m_pMemory;
                while ( 1 )
                {
                  v30 = m_Root;
                  v31 = &v26[m_Root];
                  m_Data = v31->m_Data;
                  if ( *m_pString == m_Data->m_Hash )
                  {
                    parentb = m_Root;
                    v27 = V_stricmp_fast(m_pString + 8, m_Data->m_String) >> 31;
                    v26 = v48->m_Lookup.m_Elements.m_pMemory;
                    m_Root = parentb;
                    v31 = &v26[v30];
                  }
                  else
                  {
                    LOBYTE(v27) = *m_pString < m_Data->m_Hash;
                  }
                  m_Right = v31->m_Right;
                  v29 = v27 != 0;
                  if ( v27 != 0 )
                    m_Right = v31->m_Left;
                  if ( m_Right == -1 )
                    break;
                  m_pString = msg.m_pString;
                  m_Root = m_Right;
                }
              }
              p_m_Lookup = &v48->m_Lookup;
              isLefta = v29;
              parentc = m_Root;
              v49 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                      &v48->m_Lookup,
                      &msg);
              CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
                p_m_Lookup,
                v49,
                parentc,
                isLefta);
              ++p_m_Lookup->m_NumElements;
              m_String = p_m_Lookup->m_Elements.m_pMemory[v49].m_Data->m_String;
              goto LABEL_5;
            }
            v18 = m_pMemory + 1;
            v19 = 0;
            while ( ++v19 != m_Size )
            {
              v16 = *v18++;
              m_SpaceUsed = v16->m_SpaceUsed;
              if ( v13 <= v16->m_TotalLen - m_SpaceUsed )
              {
                if ( v19 == -1 )
                  break;
                goto LABEL_35;
              }
            }
          }
          if ( (v13 + 12LL) <= 0x800 )
          {
            v20 = 2036;
            v21 = 2048;
          }
          else
          {
            v20 = (pCopyFrom + 16) & 0xFFFFFFF8;
            v21 = v13 + 12;
          }
          isLeft = pCopyFrom;
          pCopyFroma = v20;
          parent = (v12 + 16) & 0xFFFFFFF8;
          msg.m_pString = (**g_pMemAlloc)(g_pMemAlloc, v21);
          *msg.m_pString = pCopyFroma;
          *(msg.m_pString + 1) = 0;
          v22 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                  &v48->m_StringPools,
                  &msg);
          v12 = isLeft;
          v13 = parent;
          v23 = v48->m_StringPools.m_Memory.m_pMemory[v22];
          m_SpaceUsed = v23->m_SpaceUsed;
          goto LABEL_15;
        }
      }
    }
    else
    {
      m_String = 0;
    }
LABEL_5:
    this->m_symLootList.u.m_Id = m_String;
    return CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV(this, pKV, pVecErrors, pTool);
  }
  msg.m_pString = 0;
  CFmtStrN<256,false>::CFmtStrN(&v52, "Missing lootlist name in lootlist recipe component");
  CUtlString::Format(&msg, v52.m_szBuf);
  if ( pVecErrors != 0 )
  {
    v33 = pVecErrors->m_Size;
    v34 = pVecErrors->m_Size;
    if ( v33 == pVecErrors->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
      v34 = pVecErrors->m_Size;
    }
    pVecErrors->m_Size = v34 + 1;
    v35 = &pVecErrors->m_Memory.m_pMemory[v33];
    if ( v35 != 0 )
    {
      v35->m_pString = 0;
      v36 = CUtlString::Get(&msg);
      CUtlString::Set(v35, v36);
    }
  }
  if ( msg.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&msg);
  return 0;
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::BFinishInitialization_Internal  (line 996, @0x0000000002e97000, libserver.so)  // inlines: AddToTail, BFinishInitialization_Internal, CUtlString, CopyConstruct<CUtlString>, Element, Get, GetItemSchema, GrowMemory, String, operator[], ~CUtlString
// calls: ItemSystem, CEconItemSchema::GetLootListByName, CFmtStrN<256, false>::CFmtStrN, CUtlString::Format, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, __stack_chk_fail, _Unwind_Resume
// strings: "CDynamicRecipeComponentLootList references invalid loot list: '%s'"
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::BFinishInitialization_Internal(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  const char *m_pAsString; // r13
  CEconItemSystem *v5; // rax
  bool v7; // zf
  const char *v8; // rdx
  __int64 m_Size; // r13
  int v10; // eax
  CUtlString *v11; // rbx
  const char *v12; // rax
  CUtlString msg; // [rsp+0h] [rbp-150h] BYREF
  CFmtStrN<256,false> v14; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v15; // [rsp+128h] [rbp-28h]

  m_pAsString = "";
  v15 = __readfsqword(0x28u);
  if ( this->m_symLootList.u.m_Id != 0 )
    m_pAsString = this->m_symLootList.u.m_pAsString;
  v5 = ItemSystem();
  if ( CEconItemSchema::GetLootListByName(&v5->m_itemSchema, m_pAsString, 0) != 0 )
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  v7 = this->m_symLootList.u.m_Id == 0;
  v8 = "";
  msg.m_pString = 0;
  if ( !v7 )
    v8 = this->m_symLootList.u.m_pAsString;
  CFmtStrN<256,false>::CFmtStrN(&v14, "CDynamicRecipeComponentLootList references invalid loot list: '%s'", v8);
  CUtlString::Format(&msg, v14.m_szBuf);
  if ( pVecErrors != 0 )
  {
    m_Size = pVecErrors->m_Size;
    v10 = pVecErrors->m_Size;
    if ( m_Size == pVecErrors->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
      v10 = pVecErrors->m_Size;
    }
    pVecErrors->m_Size = v10 + 1;
    v11 = &pVecErrors->m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
    {
      v11->m_pString = 0;
      v12 = CUtlString::Get(&msg);
      CUtlString::Set(v11, v12);
    }
  }
  if ( msg.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&msg);
  return 0;
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::FilloutAttribute  (line 1007, @0x0000000002e97170, libserver.so)  // inlines: Get, GetItemSchema, String, assign, length, set_has_lootlist, set_lootlist
// calls: ItemSystem, CEconItemSchema::GetLootListByName, strlen, std::string::assign(char const*,ulong)
bool __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::FilloutAttribute(
        const CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList *const this,
        CAttribute_ItemDynamicRecipeComponent *const typedValue,
        uint32 *const unFlags)
{
  const char *m_pAsString; // r13
  CEconItemSystem *v6; // rax
  const CEconLootListDefinition *LootListByName; // rax
  bool v8; // dl
  const char *v9; // r13
  size_t v10; // rax

  m_pAsString = "";
  if ( this->m_symLootList.u.m_Id != 0 )
    m_pAsString = this->m_symLootList.u.m_pAsString;
  v6 = ItemSystem();
  LootListByName = CEconItemSchema::GetLootListByName(&v6->m_itemSchema, m_pAsString, 0);
  v8 = 0;
  if ( LootListByName != 0 )
  {
    v9 = "";
    if ( this->m_symLootList.u.m_Id != 0 )
      v9 = this->m_symLootList.u.m_pAsString;
    *(typedValue + 4) |= 0x80u;
    v10 = strlen(v9);
    std::string::assign(*(typedValue + 7), v9, v10);
    return 1;
  }
  return v8;
}


// CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::ParseKV  (line 1040, @0x0000000002e98f20, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
// callers: CDOTAStaticRecipeComponentLeagueOwnership::ParseKV, CDOTAStaticRecipeComponentEvent::ParseKV
// strings: "Encountered recipe that includes an event reward but is not a static recipe"
bool __fastcall CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::ParseKV(
        CEconTool_ItemDynamicRecipe::CStaticRecipeComponent *const this,
        KeyValues *pKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  __int64 m_Size; // r14
  int v6; // eax
  CUtlString *v7; // r12
  const char *v8; // rax
  CUtlString msg; // [rsp+0h] [rbp-30h] BYREF

  if ( pTool->m_bStaticRecipe )
    return CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV(this, pKV, pVecErrors, pTool);
  msg.m_pString = 0;
  CUtlString::Format(&msg, "Encountered recipe that includes an event reward but is not a static recipe");
  if ( pVecErrors != 0 )
  {
    m_Size = pVecErrors->m_Size;
    v6 = pVecErrors->m_Size;
    if ( m_Size == pVecErrors->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
      v6 = pVecErrors->m_Size;
    }
    pVecErrors->m_Size = v6 + 1;
    v7 = &pVecErrors->m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
    {
      v7->m_pString = 0;
      v8 = CUtlString::Get(&msg);
      CUtlString::Set(v7, v8);
    }
  }
  if ( msg.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&msg);
  return 0;
}


// CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::FilloutAttribute  (line 1046, @0x0000000002e69590, libserver.so)
bool __fastcall CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::FilloutAttribute(
        const CEconTool_ItemDynamicRecipe::CStaticRecipeComponent *const this,
        CAttribute_ItemDynamicRecipeComponent *const typedValue,
        uint32 *const unFlags)
{
  return 0;
}


// CEconTool_ItemDynamicRecipe::~CEconTool_ItemDynamicRecipe  (line 1064, @0x0000000002e72690, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, PurgeAndDeleteElements, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*, int>::Purge, CUtlString::FreeMemoryBlock, CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<float, int>::Purge
// callers: CEconTool_ItemDynamicRecipe::~CEconTool_ItemDynamicRecipe
void __fastcall CEconTool_ItemDynamicRecipe::~CEconTool_ItemDynamicRecipe(CEconTool_ItemDynamicRecipe *const this)
{
  __int64 v1; // r13
  int v2; // r12d
  int m_Size; // r8d
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *v5; // rdi
  bool v6; // zf
  int v7; // r12d
  __int64 i; // r13
  CUtlString *v9; // rdi

  v1 = 0;
  v2 = 0;
  m_Size = this->m_vecComponents.m_Size;
  this->_vptr_IEconTool = off_47A9250;
  if ( m_Size > 0 )
  {
    do
    {
      v5 = this->m_vecComponents.m_Memory.m_pMemory[v1];
      if ( v5 != 0 )
        (*(v5->_vptr_CBaseRecipeComponent + 1))(v5);
      ++v2;
      ++v1;
    }
    while ( v2 < this->m_vecComponents.m_Size );
  }
  v6 = (this->m_vecComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecComponents.m_Size = 0;
  if ( v6 )
    CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *,int>::Purge(&this->m_vecComponents.m_Memory);
  v6 = (this->m_vecWeights.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecWeights.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<float,int>::Purge(&this->m_vecWeights.m_Memory);
    if ( (this->m_vecWeights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(&this->m_vecWeights.m_Memory);
  }
  v7 = this->m_vecErrors.m_Size;
  for ( i = 8LL * v7 - 8; --v7 >= 0; i -= 8 )
  {
    v9 = (this->m_vecErrors.m_Memory.m_pMemory + i);
    if ( v9->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v9);
  }
  v6 = (this->m_vecErrors.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecErrors.m_Size = 0;
  if ( !v6
    || (CUtlMemory<CUtlString,int>::Purge(&this->m_vecErrors.m_Memory),
        (this->m_vecErrors.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v6 = (this->m_vecComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecComponents.m_Size = 0;
    if ( !v6 )
      goto LABEL_15;
  }
  else
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_vecErrors.m_Memory);
    v6 = (this->m_vecComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecComponents.m_Size = 0;
    if ( !v6 )
      goto LABEL_15;
  }
  CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *,int>::Purge(&this->m_vecComponents.m_Memory);
  if ( (this->m_vecComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *,int>::Purge(&this->m_vecComponents.m_Memory);
LABEL_15:
  this->_vptr_IEconTool = off_47A8E30;
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_ItemDynamicRecipe::~CEconTool_ItemDynamicRecipe  (line 1064, @0x0000000002e72850, libserver.so)
// calls: CEconTool_ItemDynamicRecipe::~CEconTool_ItemDynamicRecipe, operator delete
void __fastcall CEconTool_ItemDynamicRecipe::~CEconTool_ItemDynamicRecipe(CEconTool_ItemDynamicRecipe *const this)
{
  CEconTool_ItemDynamicRecipe::~CEconTool_ItemDynamicRecipe(this);
  operator delete(this);
}


// CEconTool_ItemDynamicRecipe::BInitFromKV  (line 1072, @0x0000000002e88160, libserver.so)  // inlines: AddString, BInitFromKV, CUtlSymbolLarge, CUtlSymbolLarge_Hash, Element, FindInsertionPosition, FindPoolWithSpace, GetBool, HashStringFastCaseless, Insert, InsertAt, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator(), operator=, operator[]
// calls: KeyValues::FindKey, KeyValues::GetInt, KeyValues::GetString, strlen, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponentsBlock, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, __cxa_guard_acquire, CKeySymbol::CKeySymbol (18 total)
// strings: "static_recipe", "disable_delete", "context_menu_prompt", "context_menu_confirm", "context_menu_confirm_title", "usage"
// globals: `guard variable for'CEconTool_ItemDynamicRecipe::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator, CEconTool_ItemDynamicRecipe::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*, g_pEconSchemaSymbolTable
bool __fastcall CEconTool_ItemDynamicRecipe::BInitFromKV(
        CEconTool_ItemDynamicRecipe *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v6; // zf
  KeyValues *Key; // r12
  const char *String; // rax
  CUtlSymbolTableLarge_CI *v9; // r14
  const char *v10; // r15
  CUtlSymbolTableLargeBaseTreeEntry_t *m_String; // rax
  int v12; // r9d
  const char *v13; // rax
  CUtlSymbolTableLarge_CI *v14; // r14
  const char *v15; // r15
  int v16; // r9d
  UtlSymLargeId_t v17; // rax
  const char *v18; // rax
  CUtlSymbolTableLarge_CI *v19; // r14
  const char *v20; // r15
  int v21; // r9d
  UtlSymLargeId_t v22; // rax
  bool result; // al
  int v24; // r9d
  int v25; // r11d
  signed int v26; // edx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v27; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v28; // r10
  int v29; // edi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v30; // rax
  int v31; // esi
  unsigned int v32; // ecx
  __int64 v33; // rsi
  int v34; // eax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v35; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v36; // rcx
  __int64 v37; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v38; // r8
  unsigned int v39; // eax
  __int64 v40; // rsi
  bool v41; // cl
  __int64 *v42; // r9
  _QWORD *v43; // rsi
  unsigned int v44; // eax
  int v45; // r9d
  int v46; // r11d
  signed int v47; // edx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v48; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v49; // rdi
  int v50; // r10d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v51; // rax
  int v52; // esi
  unsigned int v53; // ecx
  __int64 v54; // rsi
  int v55; // eax
  __int64 v56; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v57; // rdx
  CUtlSymbolTableLargeBaseTreeEntry_t *v58; // rdi
  __int64 *v59; // rcx
  LargeSymbolTableHashDecoration_t *v60; // rsi
  unsigned int v61; // eax
  __int64 v62; // rsi
  int v63; // r9d
  int m_Size; // r11d
  signed int v65; // edx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **m_pMemory; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v67; // rdi
  int m_SpaceUsed; // r10d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v69; // rax
  int v70; // esi
  unsigned int v71; // ecx
  __int64 v72; // rsi
  int v73; // eax
  __int64 m_Root; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v75; // rdx
  CUtlSymbolTableLargeBaseTreeEntry_t *v76; // rdi
  __int64 *p_m_Left; // rcx
  LargeSymbolTableHashDecoration_t *v78; // rsi
  unsigned int v79; // eax
  __int64 v80; // rsi
  unsigned int v81; // eax
  unsigned int v82; // eax
  bool v83; // cl
  __int64 v84; // rax
  bool v85; // cl
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v86; // rcx
  bool v87; // cl
  __int64 v88; // rax
  bool v89; // cl
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v90; // rdx
  __int64 v91; // rax
  bool v92; // cl
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v93; // r15
  int v94; // [rsp+10h] [rbp-70h]
  int v95; // [rsp+10h] [rbp-70h]
  int v96; // [rsp+10h] [rbp-70h]
  int v97; // [rsp+18h] [rbp-68h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v98; // [rsp+18h] [rbp-68h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v99; // [rsp+18h] [rbp-68h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v100; // [rsp+18h] [rbp-68h]
  unsigned int v101; // [rsp+20h] [rbp-60h]
  int v102; // [rsp+20h] [rbp-60h]
  int v103; // [rsp+20h] [rbp-60h]
  int isLeft; // [rsp+28h] [rbp-58h]
  int isLeftc; // [rsp+28h] [rbp-58h]
  bool isLeftd[8]; // [rsp+28h] [rbp-58h]
  int isLefta; // [rsp+28h] [rbp-58h]
  bool isLefte[8]; // [rsp+28h] [rbp-58h]
  int isLeftb; // [rsp+28h] [rbp-58h]
  bool isLeftf[8]; // [rsp+28h] [rbp-58h]
  bool isLeftg; // [rsp+28h] [rbp-58h]
  bool isLefth[8]; // [rsp+28h] [rbp-58h]
  bool isLefti; // [rsp+28h] [rbp-58h]
  bool isLeftj[8]; // [rsp+28h] [rbp-58h]
  bool isLeftk; // [rsp+28h] [rbp-58h]
  bool isLeftl[8]; // [rsp+28h] [rbp-58h]
  UtlSymLargeId_t v117; // [rsp+30h] [rbp-50h]
  CUtlSymbolTableLargeBaseTreeEntry_t *pCopyFrom; // [rsp+38h] [rbp-48h] BYREF
  CUtlSymbolTableLargeBaseTreeEntry_t *v119; // [rsp+40h] [rbp-40h] BYREF
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *src[7]; // [rsp+48h] [rbp-38h] BYREF

  this->m_bStaticRecipe = 0;
  v6 = !this->m_bUnserializeStandardKeys;
  this->m_bDisableDelete = 0;
  if ( !v6 )
    IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( `guard variable for'CEconTool_ItemDynamicRecipe::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CEconTool_ItemDynamicRecipe::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_ItemDynamicRecipe::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'CEconTool_ItemDynamicRecipe::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_ItemDynamicRecipe::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  this->m_bStaticRecipe = KeyValues::GetInt(Key, "static_recipe", 0) != 0;
  this->m_bDisableDelete = KeyValues::GetInt(Key, "disable_delete", 0) != 0;
  String = KeyValues::GetString(Key, "context_menu_prompt", 0, 0, 0);
  v9 = g_pEconSchemaSymbolTable;
  v10 = String;
  m_String = 0;
  if ( v10 != 0 )
  {
    v12 = strlen(v10);
    m_String = 0;
    if ( v12 > 0 && *v10 != 0 )
    {
      isLeftb = v12;
      CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v9, v10, v12);
      m_String = v119;
      v63 = isLeftb;
      if ( v119 == 0 )
      {
        m_Size = v9->m_StringPools.m_Size;
        v65 = (isLeftb + 16) & 0xFFFFFFF8;
        if ( m_Size > 0 )
        {
          m_pMemory = v9->m_StringPools.m_Memory.m_pMemory;
          v67 = *m_pMemory;
          m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
          if ( v65 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
          {
LABEL_60:
            v67->m_SpaceUsed = m_SpaceUsed + v65;
            v96 = v63;
            v100 = &v67->m_Data[m_SpaceUsed];
            *isLeftf = v67 + m_SpaceUsed;
            *(*isLeftf + 8LL) = MurmurHash2LowerCase(v10, 0x3501A674u);
            memcpy((*isLeftf + 16LL), v10, v96);
            *(v96 + *isLeftf + 16LL) = 0;
            m_Root = v9->m_Lookup.m_Root;
            pCopyFrom = v100;
            if ( m_Root == -1 )
            {
              v83 = 0;
            }
            else
            {
              v75 = v9->m_Lookup.m_Elements.m_pMemory;
              v76 = v100;
              while ( 1 )
              {
                p_m_Left = &v75[m_Root].m_Left;
                v78 = p_m_Left[4];
                if ( v76->m_Hash == *v78 )
                {
                  v81 = V_stricmp_fast(v76->m_String, v78 + 1);
                  v75 = v9->m_Lookup.m_Elements.m_pMemory;
                  v79 = v81 >> 31;
                  p_m_Left = &v75[m_Root].m_Left;
                }
                else
                {
                  LOBYTE(v79) = v76->m_Hash < *v78;
                }
                v80 = p_m_Left[1];
                if ( v79 != 0 )
                  v80 = *p_m_Left;
                if ( v80 == -1 )
                  break;
                v76 = pCopyFrom;
                m_Root = v80;
              }
              v83 = v79 != 0;
            }
            isLeftg = v83;
            v84 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                    &v9->m_Lookup,
                    &pCopyFrom);
            v85 = isLeftg;
            *isLefth = v84;
            CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
              &v9->m_Lookup,
              v84,
              m_Root,
              v85);
            v86 = v9->m_Lookup.m_Elements.m_pMemory;
            ++v9->m_Lookup.m_NumElements;
            m_String = v86[*isLefth].m_Data->m_String;
            goto LABEL_7;
          }
          v69 = m_pMemory + 1;
          v70 = 0;
          while ( ++v70 != m_Size )
          {
            v67 = *v69++;
            m_SpaceUsed = v67->m_SpaceUsed;
            if ( v65 <= v67->m_TotalLen - m_SpaceUsed )
            {
              if ( v70 != -1 )
                goto LABEL_60;
              break;
            }
          }
        }
        if ( (v65 + 12LL) <= 0x800 )
        {
          v71 = 2036;
          v72 = 2048;
        }
        else
        {
          v71 = (isLeftb + 16) & 0xFFFFFFF8;
          v72 = v65 + 12;
        }
        v103 = v71;
        src[0] = (**g_pMemAlloc)(g_pMemAlloc, v72);
        src[0]->m_TotalLen = v103;
        src[0]->m_SpaceUsed = 0;
        v73 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                &v9->m_StringPools,
                src);
        v65 = (isLeftb + 16) & 0xFFFFFFF8;
        v63 = isLeftb;
        v67 = v9->m_StringPools.m_Memory.m_pMemory[v73];
        m_SpaceUsed = v67->m_SpaceUsed;
        goto LABEL_60;
      }
    }
  }
LABEL_7:
  this->m_symContextMenuPrompt.u.m_Id = m_String;
  v13 = KeyValues::GetString(Key, "context_menu_confirm", 0, 0, 0);
  v14 = g_pEconSchemaSymbolTable;
  v15 = v13;
  if ( v13 == 0 )
  {
    v17 = 0;
    goto LABEL_10;
  }
  v16 = strlen(v13);
  v17 = 0;
  if ( v16 > 0 && *v15 != 0 )
  {
    isLefta = v16;
    CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v14, v15, v16);
    v17 = v117;
    v45 = isLefta;
    if ( v117 == 0 )
    {
      v46 = v14->m_StringPools.m_Size;
      v47 = (isLefta + 16) & 0xFFFFFFF8;
      if ( v46 > 0 )
      {
        v48 = v14->m_StringPools.m_Memory.m_pMemory;
        v49 = *v48;
        v50 = (*v48)->m_SpaceUsed;
        if ( v47 <= (*v48)->m_TotalLen - v50 )
        {
LABEL_43:
          v49->m_SpaceUsed = v50 + v47;
          v95 = v45;
          v99 = &v49->m_Data[v50];
          *isLefte = v49 + v50;
          *(*isLefte + 8LL) = MurmurHash2LowerCase(v15, 0x3501A674u);
          memcpy((*isLefte + 16LL), v15, v95);
          *(v95 + *isLefte + 16LL) = 0;
          v119 = v99;
          v56 = v14->m_Lookup.m_Root;
          if ( v56 == -1 )
          {
            v87 = 0;
          }
          else
          {
            v57 = v14->m_Lookup.m_Elements.m_pMemory;
            v58 = v99;
            while ( 1 )
            {
              v59 = &v57[v56].m_Left;
              v60 = v59[4];
              if ( v58->m_Hash == *v60 )
              {
                v82 = V_stricmp_fast(v58->m_String, v60 + 1);
                v57 = v14->m_Lookup.m_Elements.m_pMemory;
                v61 = v82 >> 31;
                v59 = &v57[v56].m_Left;
              }
              else
              {
                LOBYTE(v61) = v58->m_Hash < *v60;
              }
              v62 = v59[1];
              if ( v61 != 0 )
                v62 = *v59;
              if ( v62 == -1 )
                break;
              v58 = v119;
              v56 = v62;
            }
            v87 = v61 != 0;
          }
          isLefti = v87;
          v88 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                  &v14->m_Lookup,
                  &v119);
          v89 = isLefti;
          *isLeftj = v88;
          CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
            &v14->m_Lookup,
            v88,
            v56,
            v89);
          v90 = v14->m_Lookup.m_Elements.m_pMemory;
          ++v14->m_Lookup.m_NumElements;
          v17 = v90[*isLeftj].m_Data->m_String;
          goto LABEL_10;
        }
        v51 = v48 + 1;
        v52 = 0;
        while ( ++v52 != v46 )
        {
          v49 = *v51++;
          v50 = v49->m_SpaceUsed;
          if ( v47 <= v49->m_TotalLen - v50 )
          {
            if ( v52 != -1 )
              goto LABEL_43;
            break;
          }
        }
      }
      if ( (v47 + 12LL) <= 0x800 )
      {
        v53 = 2036;
        v54 = 2048;
      }
      else
      {
        v53 = (isLefta + 16) & 0xFFFFFFF8;
        v54 = v47 + 12;
      }
      v102 = v53;
      src[0] = (**g_pMemAlloc)(g_pMemAlloc, v54);
      src[0]->m_TotalLen = v102;
      src[0]->m_SpaceUsed = 0;
      v55 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
              &v14->m_StringPools,
              src);
      v47 = (isLefta + 16) & 0xFFFFFFF8;
      v45 = isLefta;
      v49 = v14->m_StringPools.m_Memory.m_pMemory[v55];
      v50 = v49->m_SpaceUsed;
      goto LABEL_43;
    }
  }
LABEL_10:
  this->m_symContextMenuConfirm.u.m_Id = v17;
  v18 = KeyValues::GetString(Key, "context_menu_confirm_title", 0, 0, 0);
  v19 = g_pEconSchemaSymbolTable;
  v20 = v18;
  if ( v18 == 0 )
  {
    v22 = 0;
    goto LABEL_13;
  }
  v21 = strlen(v18);
  v22 = 0;
  if ( v21 <= 0 )
    goto LABEL_13;
  if ( *v20 == 0 )
    goto LABEL_13;
  isLeft = v21;
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v19, v20, v21);
  v22 = v117;
  v24 = isLeft;
  if ( v117 != 0 )
    goto LABEL_13;
  v25 = v19->m_StringPools.m_Size;
  v26 = (isLeft + 16) & 0xFFFFFFF8;
  if ( v25 <= 0 )
    goto LABEL_22;
  v27 = v19->m_StringPools.m_Memory.m_pMemory;
  v28 = *v27;
  v29 = (*v27)->m_SpaceUsed;
  if ( (*v27)->m_TotalLen - v29 < v26 )
  {
    v30 = v27 + 1;
    v31 = 0;
    while ( ++v31 != v25 )
    {
      v28 = *v30++;
      v29 = v28->m_SpaceUsed;
      if ( v26 <= v28->m_TotalLen - v29 )
      {
        if ( v31 == -1 )
          break;
        goto LABEL_80;
      }
    }
LABEL_22:
    if ( (v26 + 12LL) <= 0x800 )
    {
      v32 = 2036;
      v33 = 2048;
    }
    else
    {
      v32 = (isLeft + 16) & 0xFFFFFFF8;
      v33 = v26 + 12;
    }
    v97 = isLeft;
    v101 = (isLeft + 16) & 0xFFFFFFF8;
    isLeftc = v32;
    src[0] = (**g_pMemAlloc)(g_pMemAlloc, v33);
    src[0]->m_TotalLen = isLeftc;
    src[0]->m_SpaceUsed = 0;
    v34 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
            &v19->m_StringPools,
            src);
    v26 = v101;
    v24 = v97;
    v35 = v19->m_StringPools.m_Memory.m_pMemory[v34];
    v29 = v35->m_SpaceUsed;
    goto LABEL_25;
  }
LABEL_80:
  v35 = v28;
LABEL_25:
  v35->m_SpaceUsed = v29 + v26;
  v94 = v24;
  v98 = &v35->m_Data[v29];
  *isLeftd = v35 + v29;
  *(*isLeftd + 8LL) = MurmurHash2LowerCase(v20, 0x3501A674u);
  memcpy((*isLeftd + 16LL), v20, v94);
  v36 = v98;
  *(v94 + *isLeftd + 16LL) = 0;
  src[0] = v98;
  v37 = v19->m_Lookup.m_Root;
  if ( v37 == -1 )
  {
    v41 = 0;
  }
  else
  {
    v38 = v19->m_Lookup.m_Elements.m_pMemory;
    while ( 1 )
    {
      v42 = &v38[v37].m_Left;
      v43 = v42[4];
      if ( *&v36->m_TotalLen == *v43 )
      {
        v44 = V_stricmp_fast(v36->m_Data, v43 + 1);
        v38 = v19->m_Lookup.m_Elements.m_pMemory;
        v39 = v44 >> 31;
        v42 = &v38[v37].m_Left;
      }
      else
      {
        LOBYTE(v39) = *&v36->m_TotalLen < *v43;
      }
      v40 = v42[1];
      v41 = v39 != 0;
      if ( v39 != 0 )
        v40 = *v42;
      if ( v40 == -1 )
        break;
      v36 = src[0];
      v37 = v40;
    }
  }
  isLeftk = v41;
  v91 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
          &v19->m_Lookup,
          src);
  v92 = isLeftk;
  *isLeftl = v91;
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
    &v19->m_Lookup,
    v91,
    v37,
    v92);
  v93 = v19->m_Lookup.m_Elements.m_pMemory;
  ++v19->m_Lookup.m_NumElements;
  v22 = v93[*isLeftl].m_Data->m_String;
LABEL_13:
  this->m_symContextMenuConfirmTitle.u.m_Id = v22;
  result = CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponentsBlock(
             Key,
             &this->m_vecComponents,
             pVecErrors,
             this);
  if ( pVecErrors != 0 )
    return pVecErrors->m_Size == 0;
  return result;
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponentsBlock  (line 1101, @0x0000000002e76f30, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: KeyValues::FindKey, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponents, CFmtStrN<256, false>::CFmtStrN, CUtlString::Format, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, __stack_chk_fail, _Unwind_Resume
// callers: CEconTool_ItemDynamicRecipe::BInitFromKV
// strings: "Did not find both an input and ouput field within root components block", "Failed to parse components block in dynamic recipe"
bool __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponentsBlock(
        KeyValues *pKV,
        CUtlVector<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*,CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*,int> > *const vecComponents,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  KeyValues *Key; // rax
  KeyValues *v8; // r12
  bool v9; // r15
  KeyValues *v10; // rax
  KeyValues *v11; // rax
  __int64 v13; // r13
  int v14; // eax
  CUtlString *v15; // rbx
  const char *v16; // rax
  __int64 m_Size; // r13
  int v18; // eax
  CUtlString *v19; // rbx
  const char *v20; // rax
  CUtlString msg; // [rsp+0h] [rbp-160h] BYREF
  CFmtStrN<256,false> v22; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v23; // [rsp+128h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  Key = KeyValues::FindKey(pKV, "components", 0);
  v8 = Key;
  if ( Key == 0 )
  {
    msg.m_pString = 0;
    CFmtStrN<256,false>::CFmtStrN(&v22, "Failed to parse components block in dynamic recipe");
    CUtlString::Format(&msg, v22.m_szBuf);
    if ( pVecErrors != 0 )
    {
      m_Size = pVecErrors->m_Size;
      v18 = pVecErrors->m_Size;
      if ( m_Size == pVecErrors->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
        v18 = pVecErrors->m_Size;
      }
      pVecErrors->m_Size = v18 + 1;
      v19 = &pVecErrors->m_Memory.m_pMemory[m_Size];
      if ( v19 != 0 )
      {
        v19->m_pString = 0;
        v20 = CUtlString::Get(&msg);
        CUtlString::Set(v19, v20);
      }
    }
    if ( msg.m_pString != 0 )
    {
      CUtlString::FreeMemoryBlock(&msg);
      return 0;
    }
    return 0;
  }
  v9 = 0;
  v10 = KeyValues::FindKey(Key, "input", 0);
  if ( v10 != 0 )
    v9 = CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponents(v10, vecComponents, 0, pVecErrors, pTool);
  v11 = KeyValues::FindKey(v8, "output", 0);
  if ( v11 == 0
    || !CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponents(v11, vecComponents, 1, pVecErrors, pTool)
    || !v9 )
  {
    msg.m_pString = 0;
    CFmtStrN<256,false>::CFmtStrN(&v22, "Did not find both an input and ouput field within root components block");
    CUtlString::Format(&msg, v22.m_szBuf);
    if ( pVecErrors != 0 )
    {
      v13 = pVecErrors->m_Size;
      v14 = pVecErrors->m_Size;
      if ( v13 == pVecErrors->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
        v14 = pVecErrors->m_Size;
      }
      pVecErrors->m_Size = v14 + 1;
      v15 = &pVecErrors->m_Memory.m_pMemory[v13];
      if ( v15 != 0 )
      {
        v15->m_pString = 0;
        v16 = CUtlString::Get(&msg);
        CUtlString::Set(v15, v16);
      }
    }
    if ( msg.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&msg);
    return 0;
  }
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponents  (line 1146, @0x0000000002e768d0, libserver.so)  // inlines: AddComponentWeight, AddToTail, CDynamicRecipeComponentCriteriaMatch, CDynamicRecipeComponentLootList, CDynamicRecipeComponentSpecificItem, CDynamicRecipeComponentSpecificItemFromLootList, CEconSchemaSymbol, CUtlString, CUtlSymbolLarge, CopyConstruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*>, CopyConstruct<float>, Element, GrowMemory, _V_strcmp, operator[], ~CUtlString
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, KeyValues::GetString, CreateGameSpecificRecipeComponent, CFmtStrN<256, false>::CFmtStrN, CUtlString::Format, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail, CUtlString::FreeMemoryBlock, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*, int>::Grow, operator new, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent (17 total)
// callers: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponentsBlock
// strings: "chances", "criteria_match", "specific_item", "lootlist", "Unsupported recipe component type: %s!", "Recipe component missing type!" (8 total)
// globals: INVALID_ITEM_DEF_INDEX
bool __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponents(
        KeyValues *pKV,
        CUtlVector<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*,CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*,int> > *const vecComponents,
        bool bIsOutput,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  KeyValues *FirstSubKey; // rbx
  char v9; // r14
  int m_Size; // r13d
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent **v11; // rax
  const char *String; // rax
  const char *v13; // r13
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *GameSpecificRecipeComponent; // r15
  KeyValues *Key; // r12
  int i; // ebx
  float *v18; // rax
  float v19; // xmm1_4
  float Float; // xmm0_4
  __int64 v21; // rax
  int v22; // edx
  uint16 m_Data; // ax
  CEconTool_ItemDynamicRecipe *pToola; // [rsp+18h] [rbp-178h]
  int pToolb; // [rsp+18h] [rbp-178h]
  float pVecErrorsb; // [rsp+20h] [rbp-170h]
  bool bIsOutputa; // [rsp+28h] [rbp-168h]
  bool bIsOutputb; // [rsp+28h] [rbp-168h]
  int iNumComponentBlocks; // [rsp+2Ch] [rbp-164h]
  CUtlString msg; // [rsp+30h] [rbp-160h] BYREF
  CFmtStrN<256,false> v33; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v34; // [rsp+158h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  iNumComponentBlocks = 0;
  FirstSubKey = KeyValues::GetFirstSubKey(pKV);
  if ( FirstSubKey != 0 )
  {
    v9 = 0;
    pToola = pTool;
    bIsOutputa = bIsOutput;
    while ( 1 )
    {
      if ( strcmp(KeyValues::GetName(FirstSubKey), "chances") != 0 )
      {
        String = KeyValues::GetString(FirstSubKey, "type", "", 0, 0);
        v13 = String;
        if ( String == 0 )
        {
          msg.m_pString = 0;
          CFmtStrN<256,false>::CFmtStrN(&v33, "Recipe component missing type!");
          CUtlString::Format(&msg, v33.m_szBuf);
          if ( pVecErrors != 0 )
            CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
          if ( msg.m_pString == 0 )
            return 0;
LABEL_18:
          CUtlString::FreeMemoryBlock(&msg);
          return 0;
        }
        GameSpecificRecipeComponent = CreateGameSpecificRecipeComponent(String, bIsOutputa, FirstSubKey);
        if ( GameSpecificRecipeComponent == 0 )
        {
          if ( strcmp(v13, "criteria_match") == 0 )
          {
            GameSpecificRecipeComponent = operator new(0x68u);
            CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent(
              GameSpecificRecipeComponent,
              bIsOutputa);
            *(&GameSpecificRecipeComponent->m_bCannotMatchInput + 1) = 1;
            GameSpecificRecipeComponent->_vptr_CBaseRecipeComponent = off_47A90D0;
          }
          else if ( strcmp(v13, "specific_item") == 0 )
          {
            if ( KeyValues::FindKey(FirstSubKey, "item", 0) != 0 )
            {
              GameSpecificRecipeComponent = operator new(0x78u);
              CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent(
                GameSpecificRecipeComponent,
                bIsOutputa);
              GameSpecificRecipeComponent[1]._vptr_CBaseRecipeComponent = 0;
              GameSpecificRecipeComponent->_vptr_CBaseRecipeComponent = off_47A9070;
              LOWORD(GameSpecificRecipeComponent[1].m_unSlotID) = INVALID_ITEM_DEF_INDEX;
            }
            else
            {
              if ( KeyValues::FindKey(FirstSubKey, "lootlist", 0) == 0 )
              {
                msg.m_pString = 0;
                CFmtStrN<256,false>::CFmtStrN(
                  &v33,
                  "A specific_item component must define either an exact item to use or a lootlist to select an item from!");
                CUtlString::Format(&msg, v33.m_szBuf);
                if ( pVecErrors != 0 )
                  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
                if ( msg.m_pString == 0 )
                  return 0;
                goto LABEL_18;
              }
              GameSpecificRecipeComponent = operator new(0x80u);
              CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent(
                GameSpecificRecipeComponent,
                bIsOutputa);
              m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
              GameSpecificRecipeComponent[1]._vptr_CBaseRecipeComponent = 0;
              *&GameSpecificRecipeComponent[1].m_bIsOutput = 0;
              LOWORD(GameSpecificRecipeComponent[1].m_unSlotID) = m_Data;
              GameSpecificRecipeComponent->_vptr_CBaseRecipeComponent = off_47A9130;
            }
          }
          else
          {
            if ( strcmp(v13, "lootlist") != 0 )
            {
              msg.m_pString = 0;
              CFmtStrN<256,false>::CFmtStrN(&v33, "Unsupported recipe component type: %s!", v13);
              CUtlString::Format(&msg, v33.m_szBuf);
              if ( pVecErrors != 0 )
                CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
              if ( msg.m_pString == 0 )
                return 0;
              goto LABEL_18;
            }
            GameSpecificRecipeComponent = operator new(0x70u);
            CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent(
              GameSpecificRecipeComponent,
              bIsOutputa);
            GameSpecificRecipeComponent[1]._vptr_CBaseRecipeComponent = 0;
            GameSpecificRecipeComponent->_vptr_CBaseRecipeComponent = off_47A9190;
          }
        }
        m_Size = vecComponents->m_Size;
        if ( vecComponents->m_Size == vecComponents->m_Memory.m_nAllocationCount )
          CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *,int>::Grow(&vecComponents->m_Memory, 1);
        ++vecComponents->m_Size;
        v11 = &vecComponents->m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = GameSpecificRecipeComponent;
        (*(GameSpecificRecipeComponent->_vptr_CBaseRecipeComponent + 2))(
          GameSpecificRecipeComponent,
          FirstSubKey,
          pVecErrors,
          pToola);
        ++iNumComponentBlocks;
        v9 |= GameSpecificRecipeComponent->m_flChanceOfApplying == 1.0;
      }
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
      {
        pTool = pToola;
        bIsOutputb = v9;
        goto LABEL_22;
      }
    }
  }
  bIsOutputb = 0;
LABEL_22:
  Key = KeyValues::FindKey(pKV, "chances", 0);
  if ( Key != 0 )
  {
    if ( pTool->m_bStaticRecipe )
    {
      msg.m_pString = 0;
      CFmtStrN<256,false>::CFmtStrN(&v33, "Encountered a 'chances' block in a static recipe which is not allowed");
      CUtlString::Format(&msg, v33.m_szBuf);
      if ( pVecErrors != 0 )
        CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
      if ( msg.m_pString != 0 )
        goto LABEL_18;
      return 0;
    }
    if ( iNumComponentBlocks != 0 )
    {
      for ( i = 0; i != iNumComponentBlocks; ++i )
      {
        CFmtStrN<256,false>::CFmtStrN(&v33, "%d", i);
        Float = KeyValues::GetFloat(Key, v33.m_szBuf, v19);
        v21 = pTool->m_vecWeights.m_Size;
        v22 = pTool->m_vecWeights.m_Size;
        if ( v21 == pTool->m_vecWeights.m_Memory.m_nAllocationCount )
        {
          pToolb = pTool->m_vecWeights.m_Size;
          pVecErrorsb = Float;
          CUtlMemory<float,int>::Grow(&pTool->m_vecWeights.m_Memory, 1);
          v22 = pTool->m_vecWeights.m_Size;
          v21 = pToolb;
          Float = pVecErrorsb;
        }
        pTool->m_vecWeights.m_Size = v22 + 1;
        v18 = &pTool->m_vecWeights.m_Memory.m_pMemory[v21];
        if ( v18 != 0 )
          *v18 = Float;
      }
    }
  }
  return bIsOutputb;
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV  (line 1243, @0x0000000002e97200, libserver.so)  // inlines: AddToTail, CUtlConstStringBase, CUtlMemory, CUtlString, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Construct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, GEconItemSchema, GetBool, GetItemSchema, GrowMemory, Purge, PurgeAndDeleteElements, RemoveAll, SetChanceOfApplying, StringEncodedAttribute_t, operator=, operator[], ~CUtlMemory, ~CUtlString, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetName, V_atoi, CFmtStrN<256, false>::CFmtStrN, CUtlString::Format, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail, CUtlString::FreeMemoryBlock, KeyValues::FindKey, KeyValues::GetFloat, KeyValues::GetFirstSubKey, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlMemory<char*, int>::Purge, KeyValues::GetInt (26 total)
// callers: CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::ParseKV, CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::ParseKV, CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::ParseKV, CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::ParseKV, CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::ParseKV
// strings: "Encountered multiple input or output components with the same name (slot ID) of %u", "Encountered a 'chance' block on a static recipe which is not allowed", "Recipe component chance to apply out of bounds: %f", "Malformed count value: %s", "Encountered a 'counts' block on a static recipe which is not allowed", "attrib_name" (14 total)
// globals: g_pEconSchemaSymbolTable
bool __fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseKV(
        CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *const this,
        KeyValues *pKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  const char *Name; // rax
  uint32 v7; // eax
  int m_Size; // edi
  __int64 v9; // rcx
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *v10; // rsi
  float v11; // xmm1_4
  bool m_bIsOutput; // r12
  float Float; // xmm0_4
  KeyValues *Key; // rax
  KeyValues *FirstSubKey; // r12
  const char *v17; // r15
  __int64 v18; // r12
  int v19; // ebx
  char *v20; // rsi
  __int64 v21; // r13
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t *v22; // r13
  int Int; // eax
  float v24; // xmm0_4
  char **m_pMemory; // rax
  int m_nMinCount; // eax
  int v27; // edx
  __int64 v28; // r14
  int v29; // r13d
  char *v30; // rsi
  KeyValues *v31; // rax
  KeyValues *v32; // r12
  const char *String; // rax
  const char *v34; // r13
  char *m_pString; // rax
  CEconItemSystem *v36; // rax
  const char *v37; // rax
  EEconItemQuality QualityFromString; // eax
  KeyValues *v39; // rax
  KeyValues *NextKey; // r13
  const char *v41; // r12
  CEconItemSystem *v42; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  __int64 v44; // r12
  int v45; // edx
  __int64 v46; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v47; // rdx
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v48; // r12
  const char *v49; // rax
  const CEconItemAttributeDefinition *pAttrDef; // [rsp+28h] [rbp-188h]
  CUtlString msg; // [rsp+30h] [rbp-180h] BYREF
  CUtlString msg_0; // [rsp+40h] [rbp-170h] BYREF
  CUtlMemory<char*,int> v56; // [rsp+48h] [rbp-168h] BYREF
  CFmtStrN<256,false> v57; // [rsp+60h] [rbp-150h] BYREF
  unsigned __int64 v58; // [rsp+178h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  Name = KeyValues::GetName(pKV);
  v7 = V_atoi(Name);
  this->m_unSlotID = v7;
  m_Size = pTool->m_vecComponents.m_Size;
  if ( m_Size > 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = pTool->m_vecComponents.m_Memory.m_pMemory[v9];
      if ( v10 != this && v10->m_bIsOutput == this->m_bIsOutput && v7 == v10->m_unSlotID )
        break;
      if ( m_Size <= ++v9 )
        goto LABEL_11;
    }
    msg_0.m_pString = 0;
    CFmtStrN<256,false>::CFmtStrN(
      &v57,
      "Encountered multiple input or output components with the same name (slot ID) of %u",
      v7);
    CUtlString::Format(&msg_0, v57.m_szBuf);
    if ( pVecErrors != 0 )
      CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg_0);
    if ( msg_0.m_pString == 0 )
      return 0;
    goto LABEL_23;
  }
LABEL_11:
  if ( KeyValues::FindKey(pKV, "chance", 0) == 0 )
  {
LABEL_27:
    Key = KeyValues::FindKey(pKV, "counts", 0);
    if ( Key == 0 )
      goto LABEL_60;
    FirstSubKey = KeyValues::GetFirstSubKey(Key);
    if ( FirstSubKey != 0 )
    {
      while ( 1 )
      {
        LODWORD(msg_0.m_pString) = 0;
        v56.m_pMemory = 0;
        v56.m_nAllocationCount = 0;
        v56.m_nGrowSize = 0;
        v17 = KeyValues::GetName(FirstSubKey);
        V_SplitString(v17, "-", &msg_0);
        if ( (LODWORD(msg_0.m_pString) - 1) > 1 )
          break;
        v21 = this->m_vecCountChances.m_Size;
        if ( v21 == this->m_vecCountChances.m_Memory.m_nAllocationCount )
          CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t,int>::Grow(
            &this->m_vecCountChances.m_Memory,
            1);
        ++this->m_vecCountChances.m_Size;
        v22 = &this->m_vecCountChances.m_Memory.m_pMemory[v21];
        Int = KeyValues::GetInt(FirstSubKey, 0, 0);
        v22->m_flChance = Int;
        v24 = Int + this->m_flTotalWeights;
        m_pMemory = v56.m_pMemory;
        this->m_flTotalWeights = v24;
        m_nMinCount = V_atoi(*m_pMemory);
        v22->m_nMinCount = m_nMinCount;
        if ( SLODWORD(msg_0.m_pString) <= 1 )
        {
          v22->m_nMaxCount = m_nMinCount;
        }
        else
        {
          v27 = V_atoi(*(v56.m_pMemory + 1));
          m_nMinCount = v22->m_nMinCount;
          v22->m_nMaxCount = v27;
          if ( v27 < m_nMinCount )
          {
            msg.m_pString = 0;
            CFmtStrN<256,false>::CFmtStrN(&v57, "Recipe component count max is less than the min: %s", v17);
            CUtlString::Format(&msg, v57.m_szBuf);
            if ( pVecErrors != 0 )
              CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
            if ( msg.m_pString != 0 )
              goto LABEL_33;
            goto LABEL_34;
          }
        }
        if ( m_nMinCount <= 0 )
        {
          msg.m_pString = 0;
          CFmtStrN<256,false>::CFmtStrN(&v57, "Recipe component count min less than 0: %s", v17);
          CUtlString::Format(&msg, v57.m_szBuf);
          if ( pVecErrors != 0 )
            CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
          if ( msg.m_pString != 0 )
            goto LABEL_33;
          goto LABEL_34;
        }
        if ( SLODWORD(msg_0.m_pString) > 0 )
        {
          v28 = 0;
          v29 = 0;
          do
          {
            ++v29;
            v30 = v56.m_pMemory[v28++];
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v30);
          }
          while ( v29 < SLODWORD(msg_0.m_pString) );
        }
        LODWORD(msg_0.m_pString) = 0;
        if ( (v56.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char *,int>::Purge(&v56);
          if ( (v56.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<char *,int>::Purge(&v56);
        }
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          goto LABEL_50;
      }
      msg.m_pString = 0;
      CFmtStrN<256,false>::CFmtStrN(&v57, "Malformed count value: %s", v17);
      CUtlString::Format(&msg, v57.m_szBuf);
      if ( pVecErrors != 0 )
        CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
      if ( msg.m_pString != 0 )
LABEL_33:
        CUtlString::FreeMemoryBlock(&msg);
LABEL_34:
      if ( SLODWORD(msg_0.m_pString) > 0 )
      {
        v18 = 0;
        v19 = 0;
        do
        {
          ++v19;
          v20 = v56.m_pMemory[v18++];
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20);
        }
        while ( v19 < SLODWORD(msg_0.m_pString) );
      }
      LODWORD(msg_0.m_pString) = 0;
      if ( (v56.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<char *,int>::Purge(&v56);
        if ( (v56.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<char *,int>::Purge(&v56);
      }
      return 0;
    }
LABEL_50:
    if ( pTool->m_bStaticRecipe && !(m_bIsOutput = this->m_bIsOutput) && this->m_vecCountChances.m_Size > 1 )
    {
      msg_0.m_pString = 0;
      CFmtStrN<256,false>::CFmtStrN(&v57, "Encountered a 'counts' block on a static recipe which is not allowed");
      CUtlString::Format(&msg_0, v57.m_szBuf);
      if ( pVecErrors != 0 )
        CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg_0);
      if ( msg_0.m_pString != 0 )
        goto LABEL_17;
    }
    else
    {
LABEL_60:
      v31 = KeyValues::FindKey(pKV, "criteria", 0);
      v32 = v31;
      if ( v31 != 0 )
      {
        if ( KeyValues::FindKey(v31, "rarity", 0) != 0 )
        {
          String = KeyValues::GetString(v32, "rarity", "", 0, 0);
          v34 = "";
          CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::AddString(
            &msg_0,
            g_pEconSchemaSymbolTable,
            String);
          m_pString = msg_0.m_pString;
          this->m_unFlags |= 0x10u;
          this->m_symRarity.u.m_Id = m_pString;
          if ( m_pString != 0 )
            v34 = m_pString;
          v36 = ItemSystem();
          if ( CEconItemSchema::GetRarityDefinitionByName(&v36->m_itemSchema, v34) == 0 )
          {
            msg_0.m_pString = 0;
            CFmtStrN<256,false>::CFmtStrN(&v57, "Invalid rarity specified for component!");
            CUtlString::Format(&msg_0, v57.m_szBuf);
            if ( pVecErrors != 0 )
              CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg_0);
            if ( msg_0.m_pString == 0 )
              return 0;
            goto LABEL_23;
          }
        }
        if ( KeyValues::FindKey(v32, "quality", 0) != 0 )
        {
          v37 = KeyValues::GetString(v32, "quality", "", 0, 0);
          QualityFromString = EconQuality_GetQualityFromString(v37);
          this->m_unFlags |= 8u;
          this->m_eQuality = QualityFromString;
          if ( QualityFromString == EEconItemQuality::AE_UNDEFINED )
          {
            msg_0.m_pString = 0;
            CFmtStrN<256,false>::CFmtStrN(&v57, "Invalid item quality specified for component!");
            CUtlString::Format(&msg_0, v57.m_szBuf);
            if ( pVecErrors != 0 )
              CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg_0);
            if ( msg_0.m_pString == 0 )
              return 0;
            goto LABEL_23;
          }
        }
      }
      v39 = KeyValues::FindKey(pKV, "attributes", 0);
      if ( v39 != 0 )
      {
        NextKey = KeyValues::GetFirstSubKey(v39);
        if ( NextKey != 0 )
        {
          while ( KeyValues::FindKey(NextKey, "attrib_name", 0) != 0 )
          {
            if ( KeyValues::FindKey(NextKey, "value", 0) == 0 )
            {
              msg_0.m_pString = 0;
              CFmtStrN<256,false>::CFmtStrN(&v57, "Attribute value not specified in dynamic recipe definition");
              CUtlString::Format(&msg_0, v57.m_szBuf);
              if ( pVecErrors != 0 )
                CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg_0);
              if ( msg_0.m_pString == 0 )
                return 0;
              goto LABEL_23;
            }
            v41 = KeyValues::GetString(NextKey, "attrib_name", "", 0, 0);
            v42 = ItemSystem();
            AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v42->m_itemSchema, v41);
            if ( AttributeDefinitionByName == 0 )
            {
              msg_0.m_pString = 0;
              CFmtStrN<256,false>::CFmtStrN(
                &v57,
                "Attribute definition \"%s\" not found when specifying dynamic recipe",
                v41);
              CUtlString::Format(&msg_0, v57.m_szBuf);
              if ( pVecErrors != 0 )
                CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg_0);
              if ( msg_0.m_pString == 0 )
                return 0;
              goto LABEL_23;
            }
            v44 = this->m_vecDynamicAttributes.m_Size;
            v45 = this->m_vecDynamicAttributes.m_Size;
            if ( v44 == this->m_vecDynamicAttributes.m_Memory.m_nAllocationCount )
            {
              pAttrDef = AttributeDefinitionByName;
              CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t,int>::Grow(
                &this->m_vecDynamicAttributes.m_Memory,
                1);
              v45 = this->m_vecDynamicAttributes.m_Size;
              AttributeDefinitionByName = pAttrDef;
            }
            v46 = v44;
            this->m_vecDynamicAttributes.m_Size = v45 + 1;
            v47 = &this->m_vecDynamicAttributes.m_Memory.m_pMemory[v46];
            if ( v47 != 0 )
            {
              v47->m_symAttrData.m_pString = 0;
              v48 = &this->m_vecDynamicAttributes.m_Memory.m_pMemory[v46];
            }
            else
            {
              v48 = 0;
            }
            v48->m_AttrIndex = (*AttributeDefinitionByName->_vptr_IEconItemAttributeDefinition)(AttributeDefinitionByName);
            v49 = KeyValues::GetString(NextKey, "value", "", 0, 0);
            CUtlConstStringBase<char>::Set(&v48->m_symAttrData, v49);
            NextKey = KeyValues::GetNextKey(NextKey);
            if ( NextKey == 0 )
              goto LABEL_77;
          }
          msg_0.m_pString = 0;
          CFmtStrN<256,false>::CFmtStrN(&v57, "Attribute type not specified in dynamic recipe definition");
          CUtlString::Format(&msg_0, v57.m_szBuf);
          if ( pVecErrors != 0 )
            CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg_0);
          if ( msg_0.m_pString != 0 )
LABEL_23:
            CUtlString::FreeMemoryBlock(&msg_0);
          return 0;
        }
      }
LABEL_77:
      this->m_bCannotMatchInput = KeyValues::GetInt(pKV, "cannot_match_input", 0) != 0;
      return pVecErrors == 0 || pVecErrors->m_Size == 0;
    }
    return m_bIsOutput;
  }
  if ( !pTool->m_bStaticRecipe || (m_bIsOutput = this->m_bIsOutput) )
  {
    Float = KeyValues::GetFloat(pKV, "chance", v11);
    if ( Float <= 0.0 || Float > 1.0 )
    {
      msg_0.m_pString = 0;
      CFmtStrN<256,false>::CFmtStrN(&v57, "Recipe component chance to apply out of bounds: %f", Float);
      CUtlString::Format(&msg_0, v57.m_szBuf);
      if ( pVecErrors != 0 )
        CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg_0);
      if ( msg_0.m_pString == 0 )
        return 0;
      goto LABEL_23;
    }
    this->m_flChanceOfApplying = Float;
    goto LABEL_27;
  }
  msg_0.m_pString = 0;
  CFmtStrN<256,false>::CFmtStrN(&v57, "Encountered a 'chance' block on a static recipe which is not allowed");
  CUtlString::Format(&msg_0, v57.m_szBuf);
  if ( pVecErrors != 0 )
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg_0);
  if ( msg_0.m_pString != 0 )
LABEL_17:
    CUtlString::FreeMemoryBlock(&msg_0);
  return m_bIsOutput;
}


// CEconSharedToolSupport::ToolCanApplyTo  (line 1399, @0x0000000002e9c090, libserver.so)  // inlines: CAttributeIterator_HasAttribute, CSchemaFieldHandle, FindAttribute, FindAttribute<IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, CEconSharedToolSupport::ToolCanApplyToDefinition, __cxa_guard_abort, _Unwind_Resume
// strings: "tool escrow until date"
// globals: `guard variable for'CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil, CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall CEconSharedToolSupport::ToolCanApplyTo(
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  bool v4; // bl
  const GameItemDefinition_t *v6; // r14
  CEconItemSystem *v7; // rax
  uint32 m_unResetCount; // eax
  uint32 v9; // r15d
  const CEconItemAttributeDefinition *m_pRef; // rax
  CEconItemSystem *v11; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  const GameItemDefinition_t *v13; // r15
  char *pszDefName; // [rsp+8h] [rbp-58h]
  _QWORD v15[2]; // [rsp+10h] [rbp-50h] BYREF
  char v16; // [rsp+20h] [rbp-40h]

  v4 = pToolSubject == 0 || pTool == 0;
  if ( v4 )
    return 0;
  v6 = (*(pTool->_vptr_IEconItemInterface + 12))(pTool);
  if ( v6 == 0 )
    return 0;
  if ( `guard variable for'CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil == 0
    && __cxa_guard_acquire(&`guard variable for'CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil) != 0 )
  {
    CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_szName = "tool escrow until date";
    v7 = ItemSystem();
    CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v7->m_itemSchema, "tool escrow until date");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_bDestructName = 0;
    CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil,
      &_dso_handle);
  }
  if ( CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_szName != 0 )
  {
    v9 = ItemSystem()->m_itemSchema.m_unResetCount;
    m_pRef = CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_pRef;
    if ( v9 != CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_unSchemaGeneration )
    {
      pszDefName = CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_szName;
      v11 = ItemSystem();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v11->m_itemSchema, pszDefName);
      CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_unSchemaGeneration = v9;
      CEconSharedToolSupport::ToolCanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrib_ToolEscrowUntil.m_pRef = m_pRef;
    }
    if ( m_pRef != 0 )
    {
      v15[1] = m_pRef;
      vptr_IEconItemInterface = pTool->_vptr_IEconItemInterface;
      v15[0] = off_40F17F0;
      v16 = 0;
      vptr_IEconItemInterface[28](pTool, v15);
      if ( v16 != 0 )
        return 0;
    }
  }
  v13 = (*(pToolSubject->_vptr_IEconItemInterface + 12))(pToolSubject);
  if ( v13 == 0 || (*(pToolSubject->_vptr_IEconItemInterface + 18))(pToolSubject) == 17 )
    return 0;
  if ( ((*(pToolSubject->_vptr_IEconItemInterface + 29))(pToolSubject) & 0x20000000) == 0
    && ((*(pTool->_vptr_IEconItemInterface + 29))(pTool) & 0x20000000) == 0 )
  {
    if ( CEconSharedToolSupport::ToolCanApplyToDefinition(v6, v13) )
      return (*(v6->m_pTool->_vptr_IEconTool + 3))(v6->m_pTool, pTool, pToolSubject);
    return 0;
  }
  return v4;
}


// CEconSharedToolSupport::ToolCanApplyToDefinition  (line 1434, @0x0000000002e6fd30, libserver.so)  // inlines: GetItemClass, GetUsageRestriction, GetWithNull, String
// calls: BStringsEqual
// callers: CEconSharedToolSupport::ToolCanApplyTo
// strings: "tool", "any"
// globals: g_CapabilityApplicationMap
bool __fastcall CEconSharedToolSupport::ToolCanApplyToDefinition(
        const GameItemDefinition_t *pToolDef,
        const GameItemDefinition_t *pToolSubjectDef)
{
  bool v4; // r12
  IEconTool *m_pTool; // rax
  item_capabilities_t m_unCapabilities; // ecx
  __int64 v7; // rdx
  int v8; // edi
  IEconTool *v9; // rbx
  const char *m_pAsString; // r13
  const char *v11; // rsi

  v4 = BStringsEqual(pToolDef->m_symItemClassname.u.m_pAsString, "tool");
  if ( !v4 )
    return v4;
  m_pTool = pToolDef->m_pTool;
  if ( m_pTool != 0 )
  {
    m_unCapabilities = m_pTool->m_unCapabilities;
    if ( m_unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        if ( _bittest(&m_unCapabilities, v7) )
          v8 |= g_CapabilityApplicationMap[v7];
        ++v7;
      }
      while ( v7 != 26 );
      if ( (v8 & pToolSubjectDef->m_iCapabilities) != 0 )
      {
        v9 = pToolSubjectDef->m_pTool;
        if ( v9 == 0 )
          return v4;
        m_pAsString = m_pTool->m_symUsageRestriction.u.m_pAsString;
        if ( BStringsEqual(m_pAsString, "any") )
        {
          m_pAsString = 0;
          if ( v9->m_symUsageRestriction.u.m_Id == 0 )
          {
LABEL_19:
            v11 = 0;
LABEL_13:
            if ( !BStringsEqual(m_pAsString, v11) )
              return 0;
            return v4;
          }
          m_pAsString = v9->m_symUsageRestriction.u.m_pAsString;
          v11 = m_pAsString;
        }
        else
        {
          v11 = v9->m_symUsageRestriction.u.m_pAsString;
        }
        if ( v11 != 0 )
          goto LABEL_13;
        goto LABEL_19;
      }
    }
  }
  return 0;
}


