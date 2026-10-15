
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLagCompensationManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 52, @0x0000000002324720, libserver.so)
void __cdecl CLagCompensationManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// MaskForEntity  (line 109, @0x0000000002324730, libserver.so)
uint64 __fastcall MaskForEntity(CBaseEntity *pEntity)
{
  return 552977;
}


// CLagCompensationManager::AddAdditionalEntity  (line 167, @0x0000000002337d20, libserver.so)  // inlines: CEntityHandle, CHandle, Element, FindInsertionPosition, GetEHandle, GetEntryIndex, GetSerialNumber, Insert, InsertAt, LeftChild, RightChild, Set, operator=, operator[]
// calls: CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&), CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&), CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&), CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int> >::LinkToParent
void __fastcall CLagCompensationManager::AddAdditionalEntity(CLagCompensationManager *const this, CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Left; // ax
  char v7; // cl
  bool v8; // zf
  UtlRBTreeNode_t<CHandle<CBaseEntity>,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v10; // ax
  bool v11; // r15
  CUtlRBTree<CHandle<CBaseEntity>,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,short unsigned int>,short unsigned int> > *p_m_AdditionalEntities; // [rsp+8h] [rbp-48h]
  EHANDLE eh; // [rsp+10h] [rbp-40h] BYREF

  eh.m_Index = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      eh.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  p_m_AdditionalEntities = &this->m_AdditionalEntities;
  if ( CUtlRBTree<CHandle<CBaseEntity>,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>>::Find(
         &this->m_AdditionalEntities,
         &eh) != 0xFFFF )
    return;
  m_Root = this->m_AdditionalEntities.m_Root;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v11 = 0;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v8 = !this->m_AdditionalEntities.m_LessFunc(&eh, &this->m_AdditionalEntities.m_Elements.m_pMemory[m_Root].m_Data);
    m_pMemory = this->m_AdditionalEntities.m_Elements.m_pMemory;
    if ( v8 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v7 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_13;
LABEL_10:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v7 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_10;
LABEL_13:
  v11 = v7;
LABEL_14:
  v10 = CUtlRBTree<CHandle<CBaseEntity>,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>>::NewNode(
          p_m_AdditionalEntities,
          &eh);
  CUtlRBTree<CHandle<CBaseEntity>,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>>::LinkToParent(
    p_m_AdditionalEntities,
    v10,
    m_Root,
    v11);
  ++this->m_AdditionalEntities.m_NumElements;
}


// CLagCompensationManager::RemoveAdditionalEntity  (line 177, @0x0000000002337e80, libserver.so)  // inlines: CEntityHandle, CHandle, FreeNode, GetEHandle, GetEntryIndex, GetSerialNumber, Links, Remove, RemoveAt, Set, SetLeftChild, SetRightChild, operator=, operator[]
// calls: CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&), CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&), CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int> >::Unlink
void __fastcall CLagCompensationManager::RemoveAdditionalEntity(
        CLagCompensationManager *const this,
        CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r12
  __int64 v7; // rax
  EHANDLE eh; // [rsp+0h] [rbp-30h] BYREF

  eh.m_Index = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      eh.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  v5 = CUtlRBTree<CHandle<CBaseEntity>,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>>::Find(
         &this->m_AdditionalEntities,
         &eh);
  v6 = v5;
  if ( v5 != 0xFFFF )
  {
    CUtlRBTree<CHandle<CBaseEntity>,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>>::Unlink(
      &this->m_AdditionalEntities,
      v5);
    v7 = v6;
    this->m_AdditionalEntities.m_Elements.m_pMemory[v7].m_Left = v6;
    this->m_AdditionalEntities.m_Elements.m_pMemory[v7].m_Right = this->m_AdditionalEntities.m_FirstFree;
    --this->m_AdditionalEntities.m_NumElements;
    this->m_AdditionalEntities.m_FirstFree = v6;
  }
}


// CLagCompensationManager::FrameUpdatePostEntityThink  (line 187, @0x0000000002338770, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlFixedLinkedList, CUtlFixedMemory, CUtlLinkedList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlRBTree, CUtlVector, CUtlVectorBase, CVProfScope, Clear, ClearHistory, ConstructList, ConvertToExternalMemory, CopyConstruct<CHandle<CBaseEntity> >, Element, Find, FindInsertionPosition, First, FirstInorder, Get, GetBool, GetEHandle, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GrowMemory, Init, Insert, InsertAt, IsEnabled, IsExternallyAllocated, IsIdxValid, IsValidIndex, LagRecord, LayerRecord, LeftChild, Next, NextInorder, Node_t, Purge, Purge_FixedGrowable, RemoveAll, RemoveAt, ResetDbgInfo, RightChild, Set, SetLeftChild, SetRightChild, operator(), operator=, operator==, operator[], ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlRBTree, ~CUtlVector, ~CVProfScope, ~EntityLagData
// calls: CVProfile::EnterScope, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CEntityHandle::operator CEntityInstance*, UTIL_PlayerByIndex, CUtlRBTree<CBaseEntity*, short unsigned int, bool (*)(CBaseEntity* const&, CBaseEntity* const&), CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, 128ul, short unsigned int> >::Find, CUtlRBTree<CBaseEntity*, short unsigned int, bool (*)(CBaseEntity* const&, CBaseEntity* const&), CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, 128ul, short unsigned int> >::Insert, CUtlRBTree<CHandle<CBaseEntity>, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&), CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int> >::NextInorder, CLagCompensationManager::RecordDataIntoTrack, CUtlRBTree<CBaseEntity*, short unsigned int, bool (*)(CBaseEntity* const&, CBaseEntity* const&), CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, 128ul, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::Find, operator new, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> >::Purge (25 total)
// strings: "Prediction", "FrameUpdatePostEntityThink"
// globals: CDefOps<CBaseEntity *>::LessFunc(CBaseEntity * const&,CBaseEntity * const&)
void __fastcall CLagCompensationManager::FrameUpdatePostEntityThink(
        CLagCompensationManager *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int m_enabled; // r12d
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v6; // rax
  unsigned __int16 m_Left; // si
  __int64 i; // r15
  int m_Size; // edx
  int v10; // edx
  CHandle<CBaseEntity> *v11; // rax
  unsigned __int16 v12; // cx
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *v13; // rdx
  __int64 v14; // rax
  unsigned __int16 v15; // r12
  int v16; // r12d
  CBasePlayer *v17; // rax
  CBaseEntity *v18; // r13
  int Inorder; // r12d
  UtlRBTreeNode_t<CHandle<CBaseEntity>,short unsigned int> *v20; // rdx
  unsigned __int16 v21; // cx
  UtlRBTreeNode_t<CBaseEntity*,short unsigned int> *v22; // rdx
  unsigned __int16 v23; // cx
  uint32 v24; // r13d
  CBaseEntity *m_Data; // r15
  CEntityIdentity *m_pEntity; // rdx
  __int16 v27; // cx
  __int64 v28; // rax
  CLagCompensationManager::EntityLagData *v29; // rax
  CLagCompensationManager::EntityLagData *v30; // r12
  char *m_layerRecords; // rdx
  char *v32; // rax
  __int64 v33; // rax
  char *v34; // rdx
  char *v35; // rax
  __int64 v36; // rax
  unsigned __int16 v37; // r14
  unsigned __int16 m_Right; // ax
  bool v39; // r12
  bool v40; // zf
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *v41; // rax
  unsigned __int16 v42; // ax
  unsigned __int16 index; // di
  int m_nAllocationCount; // esi
  __int64 v45; // rax
  __int64 v46; // rcx
  UtlRBTreeNode_t<CBaseEntity*,short unsigned int> *v47; // r8
  uint32 m_nGrowSize; // edx
  uint32 v49; // eax
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)> *v50; // r14
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t v51; // r13
  __int64 v52; // r12
  unsigned __int16 v53; // ax
  unsigned __int16 v54; // si
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t elem; // r15
  bool VProf_195; // [rsp+17h] [rbp-8D9h]
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)> *p_m_CompensatedEntities; // [rsp+20h] [rbp-8D0h]
  unsigned __int16 v58; // [rsp+28h] [rbp-8C8h]
  int v59; // [rsp+30h] [rbp-8C0h]
  int v60; // [rsp+30h] [rbp-8C0h]
  int slot; // [rsp+38h] [rbp-8B8h]
  EHANDLE eh; // [rsp+40h] [rbp-8B0h] BYREF
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::Node_t v63; // [rsp+50h] [rbp-8A0h] BYREF
  CBaseEntity *pAddEntity; // [rsp+60h] [rbp-890h] BYREF
  CLagCompensationManager::EntityLagData *pNewEntry; // [rsp+68h] [rbp-888h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > invalidList; // [rsp+70h] [rbp-880h] BYREF
  RB_EntityListType_t rbEntityList; // [rsp+90h] [rbp-860h] BYREF
  unsigned __int64 v68; // [rsp+8B8h] [rbp-38h]

  v68 = __readfsqword(0x28u);
  if ( gpGlobals->maxClients > 1 && sv_unlag.m_pParent->m_Value.m_nValue != 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    VProf_195 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "FrameUpdatePostEntityThink", 0, "Prediction", 0, 4);
    invalidList.m_Size = 0;
    m_Root = this->m_CompensatedEntities.m_Tree.m_Root;
    invalidList.m_Memory.m_pMemory = 0;
    invalidList.m_Memory.m_nAllocationCount = 0;
    invalidList.m_Memory.m_nGrowSize = 0;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
      v6 = m_Root;
      m_Left = m_pMemory[m_Root].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( 1 )
        {
          v6 = m_Left;
          if ( m_pMemory[m_Left].m_Left == 0xFFFF )
            break;
          m_Left = m_pMemory[m_Left].m_Left;
        }
        m_Root = m_Left;
      }
      for ( i = 0; ; i = v59 )
      {
        LODWORD(pAddEntity) = m_pMemory[v6].m_Data.key.m_Index;
        v59 = i;
        if ( CEntityHandle::operator CEntityInstance *(&pAddEntity) == 0 )
        {
          m_Size = i;
          if ( invalidList.m_Memory.m_nAllocationCount == i )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&invalidList.m_Memory, 1);
            m_Size = invalidList.m_Size;
          }
          v10 = m_Size + 1;
          invalidList.m_Size = v10;
          v11 = &invalidList.m_Memory.m_pMemory[i];
          if ( v11 != 0 )
          {
            v11->m_Index = pAddEntity;
            v59 = invalidList.m_Size;
          }
          else
          {
            v59 = v10;
          }
        }
        m_Root = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   &this->m_CompensatedEntities.m_Tree,
                   m_Root);
        if ( m_Root == 0xFFFF )
          break;
        m_pMemory = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
        v6 = m_Root;
      }
      if ( v59 > 0 )
      {
        v52 = 0;
        do
        {
          eh.m_Index = -1;
          eh.m_Index = invalidList.m_Memory.m_pMemory[v52].m_Index;
          v53 = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                  &this->m_CompensatedEntities.m_Tree,
                  &eh);
          v54 = v53;
          if ( v53 != 0xFFFF )
          {
            elem = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory[v53].m_Data.elem;
            if ( elem != 0 )
            {
              v58 = v53;
              CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::RemoveAll(&elem->m_LagRecords);
              CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>::Purge(&elem->m_LagRecords.m_Memory);
              operator delete(elem);
              v54 = v58;
            }
            CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
              &this->m_CompensatedEntities.m_Tree,
              v54);
          }
          ++v52;
        }
        while ( invalidList.m_Size > v52 );
      }
    }
    rbEntityList.m_Root = -1;
    rbEntityList.m_LessFunc = CDefOps<CBaseEntity *>::LessFunc;
    v16 = 1;
    rbEntityList.m_pElements = &rbEntityList.m_Elements.m_FixedMemory;
    rbEntityList.m_Elements.m_pMemory = &rbEntityList.m_Elements.m_FixedMemory;
    rbEntityList.m_Elements.m_nGrowSize = 0x80000000;
    rbEntityList.m_NumElements = 0;
    rbEntityList.m_FirstFree = -1;
    rbEntityList.m_LastAlloc.index = -1;
    rbEntityList.m_Elements.m_nAllocationCount = 128;
    if ( gpGlobals->maxClients > 0 )
    {
      do
      {
        while ( 1 )
        {
          v17 = UTIL_PlayerByIndex(v16);
          v18 = v17;
          if ( v17 != 0 )
          {
            pAddEntity = v17;
            if ( CUtlRBTree<CBaseEntity *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&),CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,128ul,unsigned short>>::Find(
                   &rbEntityList,
                   &pAddEntity) == 0xFFFF )
              break;
          }
          if ( gpGlobals->maxClients < ++v16 )
            goto LABEL_31;
        }
        pAddEntity = v18;
        CUtlRBTree<CBaseEntity *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&),CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,128ul,unsigned short>>::Insert(
          &rbEntityList,
          &pAddEntity,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
        ++v16;
      }
      while ( gpGlobals->maxClients >= v16 );
    }
LABEL_31:
    Inorder = this->m_AdditionalEntities.m_Root;
    if ( Inorder != 0xFFFF )
    {
      v20 = this->m_AdditionalEntities.m_Elements.m_pMemory;
      v21 = v20[Inorder].m_Left;
      if ( v21 != 0xFFFF )
      {
        while ( v20[v21].m_Left != 0xFFFF )
          v21 = v20[v21].m_Left;
        Inorder = v21;
      }
      while ( 1 )
      {
        pAddEntity = CEntityHandle::operator CEntityInstance *(&v20[Inorder].m_Data);
        if ( pAddEntity != 0
          && CUtlRBTree<CBaseEntity *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&),CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,128ul,unsigned short>>::Find(
               &rbEntityList,
               &pAddEntity) == 0xFFFF )
        {
          CUtlRBTree<CBaseEntity *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&),CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,128ul,unsigned short>>::Insert(
            &rbEntityList,
            &pAddEntity,
            ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
        }
        Inorder = CUtlRBTree<CHandle<CBaseEntity>,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&),CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>,unsigned short>,unsigned short>>::NextInorder(
                    &this->m_AdditionalEntities,
                    Inorder);
        if ( Inorder == 0xFFFF )
          break;
        v20 = this->m_AdditionalEntities.m_Elements.m_pMemory;
      }
    }
    if ( rbEntityList.m_Root != 0xFFFF )
    {
      v22 = rbEntityList.m_Elements.m_pMemory;
      v23 = rbEntityList.m_Elements.m_pMemory[rbEntityList.m_Root].m_Left;
      if ( v23 == 0xFFFF )
      {
        v23 = rbEntityList.m_Root;
      }
      else
      {
        while ( rbEntityList.m_Elements.m_pMemory[v23].m_Left != 0xFFFF )
          v23 = rbEntityList.m_Elements.m_pMemory[v23].m_Left;
      }
      v60 = v23;
      if ( v23 != 0xFFFF )
      {
        p_m_CompensatedEntities = &this->m_CompensatedEntities;
        while ( 1 )
        {
          v24 = -1;
          m_Data = v22[v60].m_Data;
          eh.m_Index = -1;
          if ( m_Data != 0 )
          {
            m_pEntity = m_Data->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v27 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              v24 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v27 & 0x7FFF;
              eh.m_Index = v24;
            }
          }
          v63.key.m_Index = v24;
          v28 = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                  &p_m_CompensatedEntities->m_Tree,
                  &v63);
          if ( v28 == 0xFFFF )
          {
            v29 = operator new(0x2B8u);
            v29->m_bRestoreEntity = 0;
            v30 = v29;
            v29->m_LagRecords.m_Memory.m_pBlocks = 0;
            v29->m_LagRecords.m_Memory.m_nAllocationCount = 0;
            v29->m_LagRecords.m_Memory.m_nGrowSize = 0;
            CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>::Purge(&v29->m_LagRecords.m_Memory);
            m_layerRecords = v30->m_RestoreData.m_layerRecords;
            v30->m_LagRecords.m_Memory.m_nGrowSize = 0;
            v30->m_LagRecords.m_LastAlloc.m_pBlockHeader = 0;
            v32 = v30->m_RestoreData.m_layerRecords;
            v30->m_LagRecords.m_LastAlloc.m_nIndex = 0;
            v30->m_LagRecords.m_Head = 0;
            v30->m_LagRecords.m_Tail = 0;
            v30->m_LagRecords.m_FirstFree = 0;
            v30->m_LagRecords.m_ElementCount = 0;
            v30->m_LagRecords.m_NumAlloced = 0;
            v30->m_LagRecords.m_pElements = 0;
            do
            {
              *v32 = 0;
              v32 += 16;
              *(v32 - 3) = 0;
              *(v32 - 2) = 0;
              *(v32 - 1) = 0;
            }
            while ( v32 != &v30->m_RestoreData.m_hMasterSequence );
            v30->m_RestoreData.m_fFlags = 0;
            v33 = 0;
            v30->m_RestoreData.m_vecOrigin.x = 0.0;
            v30->m_RestoreData.m_vecOrigin.y = 0.0;
            v30->m_RestoreData.m_vecOrigin.z = 0.0;
            v30->m_RestoreData.m_vecAngles.x = 0.0;
            v30->m_RestoreData.m_vecAngles.y = 0.0;
            v30->m_RestoreData.m_vecAngles.z = 0.0;
            v30->m_RestoreData.m_vecMins.x = 0.0;
            v30->m_RestoreData.m_vecMins.y = 0.0;
            v30->m_RestoreData.m_vecMins.z = 0.0;
            v30->m_RestoreData.m_vecMaxs.x = 0.0;
            v30->m_RestoreData.m_vecMaxs.y = 0.0;
            v30->m_RestoreData.m_vecMaxs.z = 0.0;
            v30->m_RestoreData.m_flSimulationTime = -1.0;
            v30->m_RestoreData.m_hMasterSequence.m_Data = 0;
            v30->m_RestoreData.m_masterCycle = 0.0;
            while ( 1 )
            {
              *m_layerRecords = 0;
              *(m_layerRecords + 1) = 0;
              *(m_layerRecords + 2) = 0;
              *(m_layerRecords + 3) = 0;
              if ( v33 == 14 )
                break;
              m_layerRecords = &v30->m_RestoreData.m_layerRecords[++v33];
            }
            v34 = v30->m_ChangeData.m_layerRecords;
            v35 = v30->m_ChangeData.m_layerRecords;
            do
            {
              *v35 = 0;
              v35 += 16;
              *(v35 - 3) = 0;
              *(v35 - 2) = 0;
              *(v35 - 1) = 0;
            }
            while ( v35 != &v30->m_ChangeData.m_hMasterSequence );
            v30->m_ChangeData.m_fFlags = 0;
            v36 = 0;
            v30->m_ChangeData.m_vecOrigin.x = 0.0;
            v30->m_ChangeData.m_vecOrigin.y = 0.0;
            v30->m_ChangeData.m_vecOrigin.z = 0.0;
            v30->m_ChangeData.m_vecAngles.x = 0.0;
            v30->m_ChangeData.m_vecAngles.y = 0.0;
            v30->m_ChangeData.m_vecAngles.z = 0.0;
            v30->m_ChangeData.m_vecMins.x = 0.0;
            v30->m_ChangeData.m_vecMins.y = 0.0;
            v30->m_ChangeData.m_vecMins.z = 0.0;
            v30->m_ChangeData.m_vecMaxs.x = 0.0;
            v30->m_ChangeData.m_vecMaxs.y = 0.0;
            v30->m_ChangeData.m_vecMaxs.z = 0.0;
            v30->m_ChangeData.m_flSimulationTime = -1.0;
            v30->m_ChangeData.m_hMasterSequence.m_Data = 0;
            v30->m_ChangeData.m_masterCycle = 0.0;
            while ( 1 )
            {
              *v34 = 0;
              *(v34 + 1) = 0;
              *(v34 + 2) = 0;
              *(v34 + 3) = 0;
              if ( v36 == 14 )
                break;
              v34 = &v30->m_ChangeData.m_layerRecords[++v36];
            }
            v37 = this->m_CompensatedEntities.m_Tree.m_Root;
            LODWORD(pAddEntity) = v24;
            pNewEntry = v30;
            if ( v37 != 0xFFFF )
            {
              while ( 1 )
              {
                v40 = !this->m_CompensatedEntities.m_Tree.m_LessFunc.m_LessFunc(
                         &pAddEntity,
                         &this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory[v37].m_Data);
                v41 = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
                if ( v40 )
                {
                  m_Right = v41[v37].m_Right;
                  v39 = 0;
                  if ( m_Right == 0xFFFF )
                    goto LABEL_73;
                }
                else
                {
                  m_Right = v41[v37].m_Left;
                  v39 = 1;
                  if ( m_Right == 0xFFFF )
                    goto LABEL_73;
                }
                v37 = m_Right;
              }
            }
            v39 = 0;
LABEL_73:
            v42 = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                    &p_m_CompensatedEntities->m_Tree,
                    &pAddEntity);
            slot = v42;
            CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
              &p_m_CompensatedEntities->m_Tree,
              v42,
              v37,
              v39);
            v28 = slot;
            ++this->m_CompensatedEntities.m_Tree.m_NumElements;
          }
          CLagCompensationManager::RecordDataIntoTrack(
            this,
            m_Data,
            &this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory[v28].m_Data.elem->m_LagRecords,
            1);
          v60 = CUtlRBTree<CBaseEntity *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&),CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,128ul,unsigned short>>::NextInorder(
                  &rbEntityList,
                  v60);
          if ( v60 == 0xFFFF )
            break;
          v22 = rbEntityList.m_Elements.m_pMemory;
        }
      }
    }
    index = rbEntityList.m_LastAlloc.index;
    if ( rbEntityList.m_LastAlloc.index == 0xFFFF )
    {
      m_nAllocationCount = rbEntityList.m_Elements.m_nAllocationCount;
    }
    else
    {
      m_nAllocationCount = rbEntityList.m_Elements.m_nAllocationCount;
      if ( rbEntityList.m_Elements.m_nAllocationCount > 0 )
      {
        v45 = 0;
        v46 = rbEntityList.m_Elements.m_nAllocationCount;
        do
        {
          if ( v45 < v46 && v45 <= index )
          {
            v47 = &rbEntityList.m_Elements.m_pMemory[v45];
            if ( v45 != v47->m_Left )
            {
              v47->m_Right = rbEntityList.m_FirstFree;
              rbEntityList.m_Elements.m_pMemory[v45].m_Left = v45;
              index = rbEntityList.m_LastAlloc.index;
              rbEntityList.m_FirstFree = v45;
              m_nAllocationCount = rbEntityList.m_Elements.m_nAllocationCount;
            }
          }
          if ( v45 == index )
            break;
          v46 = m_nAllocationCount;
          if ( (v45 + 1) >= m_nAllocationCount )
            break;
          ++v45;
        }
        while ( v45 != 0xFFFF );
      }
      rbEntityList.m_Root = -1;
      rbEntityList.m_NumElements = 0;
    }
    rbEntityList.m_FirstFree = -1;
    if ( m_nAllocationCount < 0 )
    {
      v49 = rbEntityList.m_Elements.m_nGrowSize & 0xC0000000;
    }
    else
    {
      m_nGrowSize = rbEntityList.m_Elements.m_nGrowSize;
      v49 = rbEntityList.m_Elements.m_nGrowSize & 0xC0000000;
      if ( rbEntityList.m_Elements.m_pMemory != &rbEntityList.m_Elements.m_FixedMemory )
      {
        if ( rbEntityList.m_Elements.m_pMemory != 0 && v49 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = rbEntityList.m_Elements.m_nGrowSize;
        }
        rbEntityList.m_Elements.m_nAllocationCount = 128;
        rbEntityList.m_LastAlloc.index = -1;
        rbEntityList.m_Elements.m_pMemory = &rbEntityList.m_Elements.m_FixedMemory;
        rbEntityList.m_Elements.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
LABEL_90:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&invalidList);
        if ( VProf_195 )
          CVProfile::ExitScope(&g_VProfCurrentProfile);
        return;
      }
    }
    rbEntityList.m_LastAlloc.index = -1;
    if ( v49 == 0 )
      CUtlMemory<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,unsigned short>::Purge(&rbEntityList.m_Elements);
    goto LABEL_90;
  }
  v12 = this->m_CompensatedEntities.m_Tree.m_Root;
  if ( v12 == 0xFFFF )
  {
    v50 = &this->m_CompensatedEntities;
  }
  else
  {
    v13 = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
    v14 = v12;
    v15 = v13[v12].m_Left;
    if ( v15 == 0xFFFF )
    {
      v15 = this->m_CompensatedEntities.m_Tree.m_Root;
    }
    else
    {
      while ( 1 )
      {
        v14 = v15;
        if ( v13[v15].m_Left == 0xFFFF )
          break;
        v15 = v13[v15].m_Left;
      }
    }
    v50 = &this->m_CompensatedEntities;
    while ( 1 )
    {
      v51 = v13[v14].m_Data.elem;
      if ( v51 != 0 )
      {
        CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::RemoveAll(&v51->m_LagRecords);
        CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>::Purge(&v51->m_LagRecords.m_Memory);
        operator delete(v51);
      }
      v15 = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
              &this->m_CompensatedEntities.m_Tree,
              v15);
      if ( v15 == 0xFFFF )
        break;
      v13 = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
      v14 = v15;
    }
  }
  CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&v50->m_Tree);
}


// CLagCompensationManager::StartLagCompensation  (line 284, @0x0000000002337f70, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Clear, CopyConstruct<CHandle<CBaseEntity> >, Element, Find, FirstInorder, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, GrowMemory, IndexToIdentity, Init, LeafCodeInfo_t, LeftChild, LookupEntity, NextInorder, Node_t, RemoveAt, curtime, entindex, operator CEntityInstance*, operator=, operator[], ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList, ~CUtlVector, ~EntityLagData
// calls: CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CEntityInstance::GetEntityIndex, CGlobalVarsBase::curtime, CLagCompensationManager::BacktrackEntity, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, _Unwind_Resume, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> > >::RemoveAll (16 total)
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/player_la, "StartLagCompensation", "CLagCompensationManager::StartLagCompensation with NULL CUserCmd!!!\n"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CLagCompensationManager::StartLagCompensation(
        CLagCompensationManager *const this,
        CBasePlayer *player,
        LagCompensationType lagCompensationType,
        const Vector *const weaponPos,
        const QAngle *const weaponAngles,
        float weaponRange)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v9; // rax
  unsigned __int16 m_Left; // si
  __int64 m_Size; // r15
  int v12; // eax
  CHandle<CBaseEntity> *v13; // rax
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *v14; // rdx
  uint32 m_Index; // r12d
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t elem; // rax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  LayerRecord *m_layerRecords; // rdx
  int v20; // ecx
  int v21; // edx
  LayerRecord *v22; // rax
  unsigned int *v23; // rbx
  __int64 (__fastcall *v24)(IVEngineServer2 *, _QWORD); // r12
  CEntityIndex v25; // eax
  __int64 v26; // rax
  __m128 v27; // xmm0
  float m_fLerpTime; // xmm1_4
  __m128 v29; // rt1
  CGlobalVars *v30; // rax
  vec_t z; // xmm0_4
  __int64 v32; // rax
  __int64 (__fastcall *v33)(_QWORD, _QWORD); // r12
  CEntityIndex v34; // eax
  __int64 v35; // rax
  unsigned __int16 Inorder; // bx
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *v37; // rdx
  __int64 v38; // rax
  unsigned __int16 v39; // si
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *v40; // rax
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t v41; // r12
  uint32 v42; // eax
  CEntityIdentity *v43; // rdx
  CEntityIdentity *v44; // rdx
  CBasePlayer *m_pInstance; // r14
  CGlobalVars *v46; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rbx
  unsigned __int16 v54; // ax
  unsigned __int16 v55; // r15
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t v56; // r12
  int m_nValue; // [rsp+2Ch] [rbp-94h]
  float interval_per_tick; // [rsp+30h] [rbp-90h]
  float flTargetTime; // [rsp+34h] [rbp-8Ch]
  float pEntityTransmitBits; // [rsp+40h] [rbp-80h]
  const CBitVec<16384> *pEntityTransmitBitsa; // [rsp+40h] [rbp-80h]
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::Node_t *search; // [rsp+48h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > invalidList; // [rsp+50h] [rbp-70h] BYREF
  const char *key; // [rsp+70h] [rbp-50h] OVERLAPPED BYREF
  int v70; // [rsp+78h] [rbp-48h]
  const char *v71; // [rsp+80h] [rbp-40h]

  m_Root = this->m_CompensatedEntities.m_Tree.m_Root;
  invalidList.m_Size = 0;
  invalidList.m_Memory.m_pMemory = 0;
  invalidList.m_Memory.m_nAllocationCount = 0;
  invalidList.m_Memory.m_nGrowSize = 0;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
    v9 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v9 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v14 = &m_pMemory[v9];
      m_Index = v14->m_Data.key.m_Index;
      elem = v14->m_Data.elem;
      LODWORD(key) = m_Index;
      if ( m_Index + 2 > 1
        && (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(key >> 9) & 0x3F]) != 0
        && (v18 = &v17[key & 0x1FF]) != 0
        && m_Index == v18->m_EHandle.m_Index
        && v18->m_pInstance != 0 )
      {
        elem->m_bRestoreEntity = 0;
        m_layerRecords = elem->m_RestoreData.m_layerRecords;
        v20 = 0;
        elem->m_RestoreData.m_fFlags = 0;
        elem->m_RestoreData.m_vecOrigin.x = 0.0;
        elem->m_RestoreData.m_vecOrigin.y = 0.0;
        elem->m_RestoreData.m_vecOrigin.z = 0.0;
        elem->m_RestoreData.m_vecAngles.x = 0.0;
        elem->m_RestoreData.m_vecAngles.y = 0.0;
        elem->m_RestoreData.m_vecAngles.z = 0.0;
        elem->m_RestoreData.m_vecMins.x = 0.0;
        elem->m_RestoreData.m_vecMins.y = 0.0;
        elem->m_RestoreData.m_vecMins.z = 0.0;
        elem->m_RestoreData.m_vecMaxs.x = 0.0;
        elem->m_RestoreData.m_vecMaxs.y = 0.0;
        elem->m_RestoreData.m_vecMaxs.z = 0.0;
        elem->m_RestoreData.m_flSimulationTime = -1.0;
        elem->m_RestoreData.m_hMasterSequence.m_Data = 0;
        elem->m_RestoreData.m_masterCycle = 0.0;
        do
        {
          ++v20;
          m_layerRecords->m_hSequence.m_Data = 0;
          ++m_layerRecords;
          m_layerRecords[-1].m_cycle = 0.0;
          m_layerRecords[-1].m_weight = 0.0;
          m_layerRecords[-1].m_order = 0;
        }
        while ( v20 != 15 );
        elem->m_ChangeData.m_fFlags = 0;
        v21 = 0;
        v22 = elem->m_ChangeData.m_layerRecords;
        v22[-4].m_order = 0;
        v22[-3].m_hSequence.m_Data = 0;
        v22[-3].m_cycle = 0.0;
        v22[-3].m_weight = 0.0;
        v22[-3].m_order = 0;
        v22[-2].m_hSequence.m_Data = 0;
        v22[-2].m_cycle = 0.0;
        v22[-2].m_weight = 0.0;
        v22[-2].m_order = 0;
        v22[-1].m_hSequence.m_Data = 0;
        v22[-1].m_cycle = 0.0;
        v22[-1].m_weight = 0.0;
        v22[-1].m_order = -1082130432;
        v22[15].m_hSequence.m_Data = 0;
        v22[15].m_cycle = 0.0;
        do
        {
          ++v21;
          v22->m_hSequence.m_Data = 0;
          ++v22;
          v22[-1].m_cycle = 0.0;
          v22[-1].m_weight = 0.0;
          v22[-1].m_order = 0;
        }
        while ( v21 != 15 );
      }
      else
      {
        m_Size = invalidList.m_Size;
        v12 = invalidList.m_Size;
        if ( invalidList.m_Size == invalidList.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&invalidList.m_Memory, 1);
          v12 = invalidList.m_Size;
        }
        invalidList.m_Size = v12 + 1;
        v13 = &invalidList.m_Memory.m_pMemory[m_Size];
        if ( v13 != 0 )
          v13->m_Index = m_Index;
      }
      m_Root = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_CompensatedEntities.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
      v9 = m_Root;
    }
    if ( invalidList.m_Size > 0 )
    {
      v53 = 0;
      do
      {
        LODWORD(key) = -1;
        LODWORD(key) = invalidList.m_Memory.m_pMemory[v53].m_Index;
        v54 = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                &this->m_CompensatedEntities.m_Tree,
                &key);
        v55 = v54;
        if ( v54 != 0xFFFF )
        {
          v56 = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory[v54].m_Data.elem;
          if ( v56 != 0 )
          {
            LODWORD(pEntityTransmitBits) = v56 + 8;
            CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::RemoveAll(&v56->m_LagRecords);
            CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>::Purge(&v56->m_LagRecords.m_Memory);
            operator delete(v56);
          }
          CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAt(
            &this->m_CompensatedEntities.m_Tree,
            v55);
        }
        ++v53;
      }
      while ( invalidList.m_Size > v53 );
    }
  }
  this->m_bNeedToRestore = 0;
  this->m_pCurrentPlayer = player;
  if ( player->m_bLagCompensation
    && gpGlobals->maxClients > 1
    && sv_unlag.m_pParent->m_Value.m_nValue != 0
    && (*(player->_vptr_IHandleEntity + 521))(player) == 0
    && (player->m_afPhysicsFlags & 8) == 0 )
  {
    search = player->m_pCurrentCommand;
    if ( search != 0 )
    {
      v23 = &engine;
      this->m_isCurrentlyDoingCompensation = 1;
      v24 = *(*engine + 240LL);
      v25.m_Data = CEntityInstance::GetEntityIndex(player).m_Data;
      v26 = v24(engine, v25.m_Data);
      if ( v26 != 0 )
        v27.m128_f32[0] = (*(*v26 + 80LL))(v26, 0) + 0.0;
      else
        v27 = 0;
      m_fLerpTime = player->m_fLerpTime;
      v27.m128_f32[0] = v27.m128_f32[0] + m_fLerpTime;
      pEntityTransmitBits = sv_maxunlag.m_pParent->m_Value.m_fValue;
      if ( v27.m128_f32[0] <= pEntityTransmitBits )
      {
        v29.m128_i32[0] = 0;
        LODWORD(pEntityTransmitBits) = _mm_andnot_ps(_mm_cmplt_ss(v27, v29), v27).m128_u32[0];
      }
      flTargetTime = (SHIDWORD(search->elem) * gpGlobals->interval_per_tick) - m_fLerpTime;
      if ( fabs(pEntityTransmitBits - (CGlobalVarsBase::curtime(gpGlobals, 0) - flTargetTime)) <= 0.2 )
      {
        v30 = gpGlobals;
        goto LABEL_36;
      }
      v46 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( gpGlobals->m_bEnableAssertions
          || gpGlobals->m_bInSimulation
          || (m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc) == 0 )
        {
          v30 = gpGlobals;
        }
        else
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v30 = gpGlobals;
        }
        m_flCurrentTime = v46->m_flCurrentTime;
        goto LABEL_58;
      }
    }
    else
    {
      v23 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        key = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/player_lagcompensation.cpp";
        v71 = "StartLagCompensation";
        v70 = 339;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &key,
          "CLagCompensationManager::StartLagCompensation with NULL CUserCmd!!!\n");
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v51, v52, v49, v50) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    v30 = 0;
    m_flCurrentTime = 0.0;
LABEL_58:
    flTargetTime = m_flCurrentTime - pEntityTransmitBits;
LABEL_36:
    interval_per_tick = v30->interval_per_tick;
    m_nValue = sv_lagpushticks.m_pParent->m_Value.m_nValue;
    this->m_lagCompensationType = lagCompensationType;
    this->m_weaponPos.x = weaponPos->x;
    this->m_weaponPos.y = weaponPos->y;
    this->m_weaponPos.z = weaponPos->z;
    this->m_weaponAngles.x = weaponAngles->x;
    this->m_weaponAngles.y = weaponAngles->y;
    z = weaponAngles->z;
    this->m_weaponRange = weaponRange;
    v32 = *v23;
    this->m_weaponAngles.z = z;
    v33 = *(*v32 + 264LL);
    v34.m_Data = CEntityInstance::GetEntityIndex(player).m_Data;
    v35 = v33(*v23, v34.m_Data);
    Inorder = this->m_CompensatedEntities.m_Tree.m_Root;
    pEntityTransmitBitsa = v35;
    if ( Inorder != 0xFFFF )
    {
      v37 = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
      v38 = Inorder;
      v39 = v37[Inorder].m_Left;
      if ( v39 != 0xFFFF )
      {
        while ( 1 )
        {
          v38 = v39;
          if ( v37[v39].m_Left == 0xFFFF )
            break;
          v39 = v37[v39].m_Left;
        }
        Inorder = v39;
      }
      while ( 1 )
      {
        v40 = &v37[v38];
        v41 = v40->m_Data.elem;
        v42 = v40->m_Data.key.m_Index;
        LODWORD(key) = v42;
        if ( v42 + 2 > 1 )
        {
          v43 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(key >> 9) & 0x3F];
          if ( v43 != 0 )
          {
            v44 = &v43[key & 0x1FF];
            if ( v44 != 0 && v42 == v44->m_EHandle.m_Index )
            {
              m_pInstance = v44->m_pInstance;
              if ( v44->m_pInstance != 0
                && player != m_pInstance
                && (*(player->_vptr_IHandleEntity + 373))(player, v44->m_pInstance, search, pEntityTransmitBitsa) != 0 )
              {
                v41->m_bRestoreEntity = CLagCompensationManager::BacktrackEntity(
                                          this,
                                          m_pInstance,
                                          (m_nValue * interval_per_tick) + flTargetTime,
                                          &v41->m_LagRecords,
                                          &v41->m_RestoreData,
                                          &v41->m_ChangeData,
                                          1);
              }
            }
          }
        }
        Inorder = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                    &this->m_CompensatedEntities.m_Tree,
                    Inorder);
        if ( Inorder == 0xFFFF )
          break;
        v37 = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
        v38 = Inorder;
      }
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&invalidList);
}


// CLagCompensationManager::BacktrackEntity  (line 414, @0x00000000023319b0, libserver.so)  // inlines: Add, CEntityHandle, CGameTrace, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DistanceToRay, DotProduct, Element, EnterScope, FastSqrt, Find, GetBool, GetCycle, GetEHandle, GetElapsed, GetEntryIndex, GetInt, GetOrder, GetSequence, GetSerialNumber, GetSimulationTime, GetTimebaseRegister, GetWeight, InTargetThread, IsEnabled, IsValidIndex, Length, LengthSqr, Lerp<QAngle>, Lerp<Vector>, Lerp<float>, Next, NormalizeInPlace, PLAT_CPU_TIME, RnCollisionAttr_t, Set, VectorAdd, VectorLength, VectorLerp, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator!=, operator*, operator+, operator-, operator=, operator==, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CBaseEntity::GetAbsOrigin, AngleQuaternion, QuaternionSlerp, QuaternionAngles, CEntityInstance::GetEntityIndex, DevMsg(char const*,...), CVProfile::ExitScope, ThreadGetCurrentId, CGameTrace::Init, UTIL_TraceEntity, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::Find, CBaseEntity::GetAbsAngles (30 total)
// callers: CLagCompensationManager::StartLagCompensation
// strings: "No valid positions in history for BacktrackPlayer client ( %d )\n", "Backtrack failed completely, bad starting position\n", "BacktrackEntity", "Prediction", "WARNING: BackupPlayer trying to back player into a bad position - client %d\n", "Backtrack got most of the way\n"
// globals: g_flFractionScale
__int64 __fastcall CLagCompensationManager::BacktrackEntity(
        CLagCompensationManager *const this,
        CBaseEntity *entity,
        float flTargetTime,
        LagRecordList *track,
        LagRecord *restore,
        LagRecord *change,
        bool wantsAnims)
{
  int m_enabled; // r12d
  __int64 m_Head; // r14
  const Vector *AbsOrigin; // rax
  float x; // xmm0_4
  float y; // xmm2_4
  float z; // xmm1_4
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r12
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm6_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  vec_t v32; // xmm1_4
  vec_t v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  vec_t v36; // xmm2_4
  float v37; // xmm3_4
  vec_t v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  vec_t v42; // xmm0_4
  float v43; // xmm2_4
  vec_t v44; // xmm2_4
  float v45; // xmm3_4
  vec_t v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm2_4
  vec_t v49; // xmm0_4
  float v50; // xmm2_4
  CEntityIndex v51; // eax
  __int64 result; // rax
  unsigned __int64 v53; // r12
  ThreadId_t m_TargetThreadId; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v57; // eax
  __int16 v58; // cx
  unsigned __int16 v59; // ax
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t elem; // rax
  const Vector *v61; // rax
  const QAngle *AbsAngles; // rax
  const Vector *v63; // rax
  float v64; // xmm2_4
  CCollisionProperty *m_pCollision; // r14
  float *v66; // rax
  vec_t *v67; // rax
  vec_t *v68; // rax
  LagCompensationType m_lagCompensationType; // eax
  float m_weaponRange; // xmm0_4
  double v71; // xmm0_8
  float v72; // xmm2_4
  __m128i v73; // xmm1
  float v74; // r14d
  __m128i v75; // xmm5
  float v76; // r15d
  float v77; // xmm0_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  float v80; // xmm3_4
  float v81; // xmm1_4
  float v82; // xmm0_4
  CBaseAnimating *v83; // r13
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v85; // esi
  float v86; // xmm1_4
  const CBaseAnimatingOverlay *v87; // rax
  __int64 v88; // r15
  int v89; // r14d
  LayerRecord *m_layerRecords; // r13
  CAnimationLayer *AnimOverlay; // rax
  float v92; // xmm1_4
  CAnimationLayer *v93; // rbx
  float v94; // xmm1_4
  __int64 v95; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v97; // rax
  float v98; // xmm4_4
  float v99; // xmm6_4
  CEntityIndex v100; // eax
  const Vector *v101; // rax
  float v102; // xmm2_4
  float v103; // xmm3_4
  int m_nValue; // esi
  float v105; // xmm1_4
  double v106; // xmm0_8
  float v107; // xmm1_4
  double v108; // xmm0_8
  float v109; // xmm1_4
  float v110; // xmm0_4
  float v111; // xmm0_4
  float v112; // xmm1_4
  double v113; // xmm0_8
  float v114; // [rsp+Ch] [rbp-1C4h]
  float v115; // [rsp+10h] [rbp-1C0h]
  float v116; // [rsp+10h] [rbp-1C0h]
  float v117; // [rsp+14h] [rbp-1BCh]
  float v118; // [rsp+14h] [rbp-1BCh]
  int flags; // [rsp+18h] [rbp-1B8h]
  float v120; // [rsp+1Ch] [rbp-1B4h]
  float v121; // [rsp+1Ch] [rbp-1B4h]
  char v122; // [rsp+1Ch] [rbp-1B4h]
  CLagCompensationManager::EntityLagData *ld; // [rsp+28h] [rbp-1A8h]
  float ldc; // [rsp+28h] [rbp-1A8h]
  float lda; // [rsp+28h] [rbp-1A8h]
  int ldb; // [rsp+28h] [rbp-1A8h]
  CBaseAnimatingOverlay *pAnimatingOverlay; // [rsp+40h] [rbp-190h]
  float pAnimatingOverlayc; // [rsp+40h] [rbp-190h]
  float pAnimatingOverlaya; // [rsp+40h] [rbp-190h]
  CBaseAnimatingOverlay *pAnimatingOverlayb; // [rsp+40h] [rbp-190h]
  bool VProf_419; // [rsp+4Bh] [rbp-185h]
  float frac; // [rsp+4Ch] [rbp-184h]
  float flTargetTimed; // [rsp+50h] [rbp-180h]
  float flTargetTimeb; // [rsp+50h] [rbp-180h]
  __int64 flTargetTimec; // [rsp+50h] [rbp-180h]
  float flTargetTimee; // [rsp+50h] [rbp-180h]
  unsigned int entityb; // [rsp+58h] [rbp-178h]
  Vector org; // [rsp+60h] [rbp-170h] BYREF
  Vector mins; // [rsp+70h] [rbp-160h] BYREF
  Vector maxs; // [rsp+80h] [rbp-150h] BYREF
  QAngle ang; // [rsp+90h] [rbp-140h] BYREF
  QAngle angles; // [rsp+A0h] [rbp-130h] BYREF
  Vector vec; // [rsp+B0h] [rbp-120h] BYREF
  Quaternion outQuat; // [rsp+C0h] [rbp-110h] BYREF
  EHANDLE eh; // [rsp+D0h] [rbp-100h] BYREF
  Vector forward; // [rsp+E0h] [rbp-F0h] BYREF
  trace_t tr; // [rsp+F0h] [rbp-E0h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_419 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v53 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "BacktrackEntity" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "BacktrackEntity", 0, "Prediction", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v97 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v97->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v53 + __rdtsc();
  }
  if ( track->m_ElementCount <= 0 )
    goto LABEL_24;
  m_Head = track->m_Head;
  AbsOrigin = CBaseEntity::GetAbsOrigin(entity);
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  z = AbsOrigin->z;
  if ( m_Head != 0 )
  {
    v15 = 0;
    v16 = 0;
    while ( m_Head != *(m_Head + 304) || *(m_Head + 312) == m_Head )
    {
      v17 = m_Head;
      v18 = m_Head;
      if ( (*m_Head & 1) == 0 )
        goto LABEL_24;
      v19 = *(m_Head + 8);
      v20 = *(m_Head + 4);
      v21 = *(m_Head + 12);
      if ( ((((v20 - x) * (v20 - x)) + ((v19 - y) * (v19 - y))) + ((v21 - z) * (v21 - z))) > 4096.0 )
        goto LABEL_24;
      if ( flTargetTime >= *(m_Head + 52) )
        goto LABEL_13;
      m_Head = *(m_Head + 312);
      if ( m_Head == 0 )
        goto LABEL_13;
      v16 = v15;
      x = v20;
      y = v19;
      z = v21;
      v15 = v17;
    }
    v18 = v15;
    v15 = v16;
LABEL_13:
    if ( v18 != 0 )
    {
      if ( v15 != 0 && (v22 = *(v18 + 52), flTargetTime > v22) && (v23 = *(v15 + 52)) > v22 )
      {
        v24 = flTargetTime - v22;
        v25 = v23 - v22;
        v26 = *(v18 + 16);
        frac = v24 / v25;
        if ( v26 != *(v15 + 16) || (v27 = *(v18 + 20)) != *(v15 + 20) || (v28 = *(v18 + 24)) != *(v15 + 24) )
        {
          AngleQuaternion((v18 + 16), &outQuat);
          AngleQuaternion((v15 + 16), &eh);
          QuaternionSlerp(&outQuat, &eh, frac, &tr);
          QuaternionAngles(&tr, &angles);
          v26 = angles.x;
          v27 = angles.y;
          v28 = angles.z;
        }
        ang.z = v28;
        v29 = *(v15 + 8);
        ang.x = v26;
        v30 = *(v18 + 8);
        ang.y = v27;
        v31 = *(v18 + 4);
        v32 = ((v29 - v30) * frac) + v30;
        v33 = ((*(v15 + 12) - *(v18 + 12)) * frac) + *(v18 + 12);
        v34 = *(v15 + 4);
        org.y = v32;
        v35 = *(v15 + 32);
        org.z = v33;
        v36 = ((v34 - v31) * frac) + v31;
        v37 = *(v18 + 28);
        v38 = ((v35 - *(v18 + 32)) * frac) + *(v18 + 32);
        org.x = v36;
        v39 = *(v18 + 36);
        v40 = *(v15 + 36) - v39;
        mins.y = v38;
        v41 = *(v15 + 44);
        v42 = (v40 * frac) + v39;
        v43 = *(v15 + 28) - v37;
        mins.z = v42;
        v44 = (v43 * frac) + v37;
        v45 = *(v18 + 40);
        v46 = ((v41 - *(v18 + 44)) * frac) + *(v18 + 44);
        mins.x = v44;
        v47 = *(v15 + 48);
        v48 = *(v18 + 48);
        maxs.y = v46;
        v49 = ((v47 - v48) * frac) + v48;
        v50 = *(v15 + 40);
        maxs.z = v49;
        maxs.x = ((v50 - v45) * frac) + v45;
      }
      else
      {
        frac = 0.0;
        ang = *(v18 + 16);
        org = *(v18 + 4);
        mins = *(v18 + 28);
        maxs = *(v18 + 40);
      }
      if ( sv_unlag_fixstuck.m_pParent->m_Value.m_nValue != 0 )
      {
        memset(&tr.m_ShapeAttributes, 0, 31);
        tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&tr);
        UTIL_TraceEntity(entity, &org, &org, 0x87011u, &tr);
        if ( tr.startsolid )
        {
          if ( sv_unlag_debug.m_pParent->m_Value.m_nValue != 0 )
          {
            v100.m_Data = CEntityInstance::GetEntityIndex(entity).m_Data;
            DevMsg("WARNING: BackupPlayer trying to back player into a bad position - client %d\n", v100.m_Data);
          }
          pAnimatingOverlay = tr.m_pEnt;
          if ( tr.m_pEnt != 0 && this->m_pCurrentPlayer != tr.m_pEnt )
          {
            eh.m_Index = -1;
            m_pEntity = tr.m_pEnt->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v57 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v58 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v58 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(eh.m_Index) = v58 | eh.m_Index & 0x8000;
              eh.m_Index = (v57 << 15) | eh.m_Index & 0x7FFF;
            }
            LODWORD(forward.x) = eh.m_Index;
            v59 = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                    &this->m_CompensatedEntities.m_Tree,
                    &forward);
            if ( v59 != 0xFFFF )
            {
              elem = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory[v59].m_Data.elem;
              ld = elem;
              if ( !elem->m_bRestoreEntity )
              {
                elem->m_bRestoreEntity = 1;
                CLagCompensationManager::BacktrackEntity(
                  this,
                  pAnimatingOverlay,
                  flTargetTime,
                  &elem->m_LagRecords,
                  &elem->m_RestoreData,
                  &elem->m_ChangeData,
                  1);
                ld->m_bRestoreEntity = 0;
              }
            }
          }
          v61 = CBaseEntity::GetAbsOrigin(entity);
          UTIL_TraceEntity(entity, v61, &org, 0x87011u, &tr);
          if ( tr.startsolid )
          {
            if ( sv_unlag_debug.m_pParent->m_Value.m_nValue != 0 )
              DevMsg("Backtrack failed completely, bad starting position\n");
          }
          else
          {
            flTargetTimee = tr.fraction * g_flFractionScale;
            v101 = CBaseEntity::GetAbsOrigin(entity);
            v102 = v101->z;
            v103 = v101->x;
            m_nValue = sv_unlag_debug.m_pParent->m_Value.m_nValue;
            org.y = ((org.y - v101->y) * flTargetTimee) + v101->y;
            org.z = ((org.z - v102) * flTargetTimee) + v102;
            org.x = ((org.x - v103) * flTargetTimee) + v103;
            if ( m_nValue != 0 )
              DevMsg("Backtrack got most of the way\n");
          }
        }
      }
      AbsAngles = CBaseEntity::GetAbsAngles(entity);
      flTargetTimed = AbsAngles->x - ang.x;
      pAnimatingOverlayc = AbsAngles->y - ang.y;
      ldc = AbsAngles->z - ang.z;
      v63 = CBaseEntity::GetAbsOrigin(entity);
      v120 = v63->x - org.x;
      v117 = v63->y - org.y;
      v64 = v63->z - org.z;
      restore->m_flSimulationTime = entity->m_flSimulationTime.m_Value;
      v115 = v64;
      if ( (((flTargetTimed * flTargetTimed) + (pAnimatingOverlayc * pAnimatingOverlayc)) + (ldc * ldc)) > 0.010000001 )
      {
        restore->m_vecAngles = *CBaseEntity::GetAbsAngles(entity);
        CBaseEntity::SetAbsAngles(entity, &ang);
        flags = 512;
        change->m_vecAngles = ang;
      }
      else
      {
        flags = 0;
      }
      m_pCollision = entity->m_pCollision;
      if ( m_pCollision != 0 )
      {
        v66 = (*(m_pCollision->_vptr_ICollideable + 1))(entity->m_pCollision);
        if ( *v66 != mins.x
          || v66[1] != mins.y
          || v66[2] != mins.z
          || *(v95 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision)) != maxs.x
          || *(v95 + 4) != maxs.y
          || *(v95 + 8) != maxs.z )
        {
          v67 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
          restore->m_vecMins.x = *v67;
          restore->m_vecMins.y = v67[1];
          restore->m_vecMins.z = v67[2];
          v68 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
          restore->m_vecMaxs.x = *v68;
          restore->m_vecMaxs.y = v68[1];
          restore->m_vecMaxs.z = v68[2];
          CCollisionProperty::SetCollisionBounds(m_pCollision, &mins, &maxs);
          flags |= 0x400u;
          change->m_vecMins = mins;
          change->m_vecMaxs = maxs;
        }
      }
      if ( (((v120 * v120) + (v117 * v117)) + (v115 * v115)) > 0.010000001 )
      {
        flags |= 0x100u;
        restore->m_vecOrigin = *CBaseEntity::GetAbsOrigin(entity);
        CBaseEntity::SetAbsOrigin(entity, &org);
        change->m_vecOrigin = org;
      }
      m_lagCompensationType = this->m_lagCompensationType;
      if ( m_lagCompensationType != LagCompensationType::LAG_COMPENSATE_BOUNDS )
      {
        if ( m_lagCompensationType != LagCompensationType::LAG_COMPENSATE_HITBOXES_ALONG_RAY )
        {
LABEL_62:
          if ( wantsAnims && (*(entity->_vptr_IHandleEntity + 43))(entity) != 0 )
          {
            flags |= 0x800u;
            v83 = (*(entity->_vptr_IHandleEntity + 43))(entity);
            BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v83);
            restore->m_hMasterSequence.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
            restore->m_masterCycle = CBaseAnimating::GetBaseAnimatingController(v83)->m_baseLayer.m_flCycle.m_Value;
            if ( v15 != 0 && (v85.m_Data = *(v15 + 296)) == *(v18 + 296) )
            {
              if ( frac > 0.0 )
              {
                CBaseAnimating::SetSequence(v83, v85, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
                v105 = *(v18 + 300);
                *&v106 = *(v15 + 300);
                *&v106 = ((*&v106 - v105) * frac) + v105;
                CBaseAnimating::SetCycle(v83, v106, v105);
                v107 = *(v18 + 300);
                *&v108 = *(v15 + 300);
                if ( v107 <= *&v108 )
                {
                  *&v108 = ((*&v108 - v107) * frac) + v107;
                }
                else
                {
                  *&v108 = (((*&v108 + 1.0) - v107) * frac) + v107;
                  if ( *&v108 >= 1.0 )
                    *&v108 = *&v108 - 1.0;
                }
                CBaseAnimating::SetCycle(v83, v108, v107);
                v122 = 1;
                goto LABEL_68;
              }
              v122 = 1;
            }
            else
            {
              v122 = 0;
            }
            CBaseAnimating::SetSequence(v83, *(v18 + 296), SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
            CBaseAnimating::SetCycle(v83, COERCE_DOUBLE(*(v18 + 300)), v86);
LABEL_68:
            v87 = (*(entity->_vptr_IHandleEntity + 45))(entity);
            pAnimatingOverlayb = v87;
            if ( v87 != 0 )
            {
              ldb = CBaseAnimatingOverlay::GetNumAnimOverlays(v87);
              if ( ldb > 0 )
              {
                v88 = v18 + 56;
                v89 = 0;
                flTargetTimec = v15;
                m_layerRecords = restore->m_layerRecords;
                do
                {
                  AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(pAnimatingOverlayb, v89);
                  v93 = AnimOverlay;
                  if ( AnimOverlay != 0 )
                  {
                    m_layerRecords->m_cycle = AnimOverlay->m_op.m_flCycle.m_Value;
                    m_layerRecords->m_order = AnimOverlay->m_nOrder.m_Value;
                    m_layerRecords->m_hSequence.m_Data = AnimOverlay->m_op.m_hSequence.m_Value.m_Data;
                    m_layerRecords->m_weight = AnimOverlay->m_op.m_flWeight.m_Value.m_Value;
                    if ( frac > 0.0
                      && v122 != 0
                      && *(v88 + 12) == *(flTargetTimec + 68)
                      && *(flTargetTimec + 56) == *v88 )
                    {
                      v109 = *(v88 + 4);
                      v110 = *(flTargetTimec + 60);
                      if ( v109 <= v110 )
                      {
                        CAnimationLayer::SetCycle(
                          AnimOverlay,
                          ((v110 - v109) * frac) + v109,
                          v109,
                          LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                      }
                      else
                      {
                        v111 = (((v110 + 1.0) - v109) * frac) + v109;
                        if ( v111 >= 1.0 )
                          v111 = v111 - 1.0;
                        CAnimationLayer::SetCycle(
                          AnimOverlay,
                          v111,
                          v109,
                          LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                      }
                      CAnimationLayer::SetOrder(v93, *(v88 + 12), LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                      CAnimationLayer::SetSequence(
                        v93,
                        *v88,
                        SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE,
                        LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                      v112 = *(v88 + 8);
                      *&v113 = *(flTargetTimec + 64);
                      *&v113 = ((*&v113 - v112) * frac) + v112;
                      CAnimationLayer::SetWeight(v93, v113, v112, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                    }
                    else
                    {
                      CAnimationLayer::SetCycle(
                        AnimOverlay,
                        *(v88 + 4),
                        v92,
                        LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                      CAnimationLayer::SetOrder(v93, *(v88 + 12), LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                      CAnimationLayer::SetSequence(
                        v93,
                        *(v18 + 16 * (v89 + 3LL) + 8),
                        SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE,
                        LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                      CAnimationLayer::SetWeight(
                        v93,
                        COERCE_DOUBLE(*(v88 + 8)),
                        v94,
                        LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
                    }
                  }
                  ++v89;
                  ++m_layerRecords;
                  v88 += 16;
                  flTargetTimec += 16;
                }
                while ( v89 != ldb );
              }
            }
            goto LABEL_85;
          }
          goto LABEL_84;
        }
        AngleVectors(&this->m_weaponAngles, &forward, 0, 0);
        m_weaponRange = this->m_weaponRange;
        flTargetTimeb = (forward.x * m_weaponRange) + this->m_weaponPos.x;
        pAnimatingOverlaya = (forward.y * m_weaponRange) + this->m_weaponPos.y;
        lda = (m_weaponRange * forward.z) + this->m_weaponPos.z;
        v71 = (*(entity->_vptr_IHandleEntity + 62))(entity);
        v72 = this->m_weaponPos.x;
        v74 = COERCE_FLOAT(_mm_cvtsi128_si32(v73));
        *&tr.startpos.x = v71;
        v75 = LODWORD(v71);
        LODWORD(tr.startpos.z) = v73.m128i_i32[0];
        v73.m128i_i32[0] = LODWORD(this->m_weaponPos.y);
        v116 = *&v71;
        *v75.m128i_i32 = *&v71 - v72;
        *&v71 = this->m_weaponPos.z;
        vec.x = flTargetTimeb - v72;
        v76 = COERCE_FLOAT(_mm_cvtsi128_si32(v75));
        v114 = tr.startpos.y;
        v118 = v74 - *&v71;
        vec.y = pAnimatingOverlaya - *v73.m128i_i32;
        v121 = tr.startpos.y - *v73.m128i_i32;
        vec.z = lda - *&v71;
        v77 = VectorNormalize(&vec);
        v78 = ((v76 * vec.x) + (v121 * vec.y)) + (v118 * vec.z);
        if ( v78 < 0.0 )
        {
          v79 = v116 - this->m_weaponPos.x;
          v80 = v114 - this->m_weaponPos.y;
          v81 = v74 - this->m_weaponPos.z;
        }
        else
        {
          if ( v78 <= v77 )
          {
            v98 = v114 - ((vec.y * v78) + this->m_weaponPos.y);
            v99 = v74 - ((v78 * vec.z) + this->m_weaponPos.z);
            v82 = fsqrt(
                    (((v116 - ((vec.x * v78) + this->m_weaponPos.x)) * (v116 - ((vec.x * v78) + this->m_weaponPos.x)))
                   + (v98 * v98))
                  + (v99 * v99));
            goto LABEL_60;
          }
          v79 = v116 - flTargetTimeb;
          v80 = v114 - pAnimatingOverlaya;
          v81 = v74 - lda;
        }
        v82 = -fsqrt(((v79 * v79) + (v80 * v80)) + (v81 * v81));
LABEL_60:
        if ( v82 < 0.0 || v82 > 100.0 )
          goto LABEL_84;
        goto LABEL_62;
      }
LABEL_84:
      if ( flags == 0 )
      {
LABEL_24:
        result = 0;
        goto LABEL_25;
      }
LABEL_85:
      this->m_bNeedToRestore = 1;
      restore->m_fFlags = flags;
      change->m_fFlags = flags;
      if ( sv_showlagcompensation.m_pParent->m_Value.m_nValue == 1 && (*(entity->_vptr_IHandleEntity + 43))(entity) != 0 )
        IDebugOverlay::EntityHitboxes(g_pDebugOverlay, entity, 4.0, 1);
      result = 1;
LABEL_25:
      if ( VProf_419 )
      {
        entityb = result;
        CVProfile::ExitScope(&g_VProfCurrentProfile);
        return entityb;
      }
      return result;
    }
  }
  if ( sv_unlag_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v51.m_Data = CEntityInstance::GetEntityIndex(entity).m_Data;
    DevMsg("No valid positions in history for BacktrackPlayer client ( %d )\n", v51.m_Data);
  }
  goto LABEL_24;
}


// CLagCompensationManager::FinishLagCompensation  (line 773, @0x0000000002331880, libserver.so)  // inlines: Element, FirstInorder, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LeftChild, LookupEntity, NextInorder, operator CEntityInstance*, operator[]
// calls: CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CLagCompensationManager::RestoreEntityFromRecords
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLagCompensationManager::FinishLagCompensation(
        CLagCompensationManager *const this,
        CBasePlayer *player)
{
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *m_pMemory; // rsi
  __int64 v5; // rdx
  unsigned __int16 m_Left; // cx
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*>::Node_t,short unsigned int> *v7; // rcx
  CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t elem; // rdx
  uint32 m_Index; // esi
  unsigned __int16 v10; // di
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  unsigned __int16 v13; // [rsp+Ch] [rbp-14h]

  if ( this->m_bNeedToRestore )
  {
    m_Root = this->m_CompensatedEntities.m_Tree.m_Root;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
      m_Left = m_pMemory[m_Root].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( 1 )
        {
          v5 = m_Left;
          if ( m_pMemory[m_Left].m_Left == 0xFFFF )
            break;
          m_Left = m_pMemory[m_Left].m_Left;
        }
        m_Root = m_Left;
      }
      while ( 1 )
      {
        v7 = &this->m_CompensatedEntities.m_Tree.m_Elements.m_pMemory[v5];
        elem = v7->m_Data.elem;
        if ( elem->m_bRestoreEntity )
        {
          m_Index = v7->m_Data.key.m_Index;
          if ( m_Index + 2 > 1 )
          {
            v10 = v7->m_Data.key.m_Index;
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[v10 & 0x1FF];
              if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
              {
                v13 = m_Root;
                CLagCompensationManager::RestoreEntityFromRecords(
                  this,
                  v12->m_pInstance,
                  &elem->m_RestoreData,
                  &elem->m_ChangeData,
                  1);
                m_Root = v13;
              }
            }
          }
        }
        m_Root = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CLagCompensationManager::EntityLagData *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   &this->m_CompensatedEntities.m_Tree,
                   m_Root);
        if ( m_Root == 0xFFFF )
          break;
        v5 = m_Root;
      }
    }
  }
  this->m_isCurrentlyDoingCompensation = 0;
}


// CLagCompensationManager::RecordDataIntoTrack  (line 803, @0x0000000002336470, libserver.so)  // inlines: AddToHead, Clear, CollisionMaxs, CollisionMins, Construct<LagRecord>, Free, GetCycle, GetFloat, GetIndex, GetOrder, GetSequence, GetSimulationTime, GetWeight, Init, InsertAfter, IsIdxAfter, IsInBlock, IsInList, IsValidIndex, IsValidIterator, LagRecord, LayerRecord, LinkAfter, Remove, curtime, operator=
// calls: CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> > >::Unlink, CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> > >::AllocInternal, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CBaseAnimatingOverlay::GetNumAnimOverlays, CBaseAnimatingOverlay::GetAnimOverlay, CBaseAnimating::GetBaseAnimatingController
// callers: CLagCompensationManager::FrameUpdatePostEntityThink
void __fastcall CLagCompensationManager::RecordDataIntoTrack(
        CLagCompensationManager *const this,
        CBaseEntity *entity,
        LagRecordList *track,
        bool wantsAnims)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v8; // rbx
  __int64 m_Tail; // rbx
  int i; // r15d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  CCollisionProperty *m_pCollision; // rdi
  const Vector *AbsOrigin; // rax
  CCollisionProperty *v15; // rdi
  const Vector *v16; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const CBaseAnimatingOverlay *v18; // rax
  CBaseAnimatingOverlay *v19; // r13
  int NumAnimOverlays; // r14d
  int32 *v21; // r12
  int j; // r15d
  CAnimationLayer *AnimOverlay; // rax
  const CBaseAnimatingController *BaseAnimatingController; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *m_pBlockHeader; // rdx
  intp m_nIndex; // rcx
  intp m_nBlockSize; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *v28; // rdi
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // rsi
  const CBaseAnimating *v33; // [rsp-8h] [rbp-40h]
  unsigned __int64 v34; // [rsp-8h] [rbp-40h]

  m_flCurrentTime = 0.0;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  m_Tail = track->m_Tail;
  for ( i = (m_flCurrentTime - sv_maxunlag.m_pParent->m_Value.m_fValue); m_Tail != 0; m_Tail = track->m_Tail )
  {
    if ( m_Tail == *(m_Tail + 304) && *(m_Tail + 312) != m_Tail )
      break;
    if ( *(m_Tail + 52) >= i )
      break;
    CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::Unlink(
      track,
      m_Tail);
    *(m_Tail + 312) = track->m_FirstFree;
    track->m_FirstFree = m_Tail;
  }
  if ( track->m_ElementCount <= 0 || *(track->m_Head + 52) < entity->m_flSimulationTime.m_Value )
  {
    v11 = 0;
    v12 = CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::AllocInternal(
            track,
            0);
    if ( v12 == 0 )
    {
LABEL_13:
      *v11 = 0;
      if ( (*(entity->_vptr_IHandleEntity + 139))(entity) != 0 )
        *v11 |= 1u;
      *(v11 + 52) = entity->m_flSimulationTime.m_Value;
      *(v11 + 16) = *CBaseEntity::GetAbsAngles(entity);
      *(v11 + 4) = *CBaseEntity::GetAbsOrigin(entity);
      m_pCollision = entity->m_pCollision;
      if ( m_pCollision != 0 )
        AbsOrigin = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
      else
        AbsOrigin = CBaseEntity::GetAbsOrigin(entity);
      *(v11 + 28) = AbsOrigin->x;
      *(v11 + 32) = AbsOrigin->y;
      *(v11 + 36) = AbsOrigin->z;
      v15 = entity->m_pCollision;
      if ( v15 != 0 )
        v16 = (*(v15->_vptr_ICollideable + 2))(v15);
      else
        v16 = CBaseEntity::GetAbsOrigin(entity);
      *(v11 + 40) = v16->x;
      *(v11 + 44) = v16->y;
      *(v11 + 48) = v16->z;
      v33 = (*(entity->_vptr_IHandleEntity + 43))(entity);
      if ( v33 != 0 && wantsAnims )
      {
        v18 = (*(entity->_vptr_IHandleEntity + 45))(entity);
        v19 = v18;
        if ( v18 != 0 )
        {
          NumAnimOverlays = CBaseAnimatingOverlay::GetNumAnimOverlays(v18);
          if ( NumAnimOverlays > 0 )
          {
            v21 = (v11 + 56);
            for ( j = 0; j != NumAnimOverlays; ++j )
            {
              AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(v19, j);
              if ( AnimOverlay != 0 )
              {
                v21[1] = LODWORD(AnimOverlay->m_op.m_flCycle.m_Value);
                v21[3] = AnimOverlay->m_nOrder.m_Value;
                *v21 = AnimOverlay->m_op.m_hSequence.m_Value.m_Data;
                v21[2] = LODWORD(AnimOverlay->m_op.m_flWeight.m_Value.m_Value);
              }
              v21 += 4;
            }
          }
        }
        BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v33);
        *(v11 + 296) = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
        *(v11 + 300) = CBaseAnimating::GetBaseAnimatingController(v33)->m_baseLayer.m_flCycle.m_Value;
      }
      return;
    }
    m_pBlockHeader = track->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = track->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v28 = m_pBlockHeader + 1;
          if ( v12 >= &m_pBlockHeader[1] && v12 < &v28[20 * m_nBlockSize] )
          {
            v11 = v12;
            if ( v12 > &v28[20 * m_nIndex] )
            {
LABEL_42:
              *(v12 + 304) = 0;
              *(v12 + 312) = track->m_Head;
              track->m_Head = v12;
              v29 = *(v12 + 312);
              if ( v29 != 0 )
                *(v29 + 304) = v12;
              else
                track->m_Tail = v12;
              ++track->m_ElementCount;
              v30 = (v12 + 56);
              v31 = (v12 + 56);
              do
              {
                *v31 = 0;
                v31 += 4;
                *(v31 - 3) = 0;
                *(v31 - 2) = 0;
                *(v31 - 1) = 0;
              }
              while ( v31 != (v12 + 296) );
              *v12 = 0;
              v32 = 0;
              *(v12 + 4) = 0;
              *(v12 + 8) = 0;
              *(v12 + 12) = 0;
              *(v12 + 16) = 0;
              *(v12 + 20) = 0;
              *(v12 + 24) = 0;
              *(v12 + 28) = 0;
              *(v12 + 32) = 0;
              *(v12 + 36) = 0;
              *(v12 + 40) = 0;
              *(v12 + 44) = 0;
              *(v12 + 48) = 0;
              *(v12 + 52) = -1082130432;
              *(v12 + 296) = 0;
              *(v12 + 300) = 0;
              while ( 1 )
              {
                *v30 = 0;
                v30[1] = 0;
                v30[2] = 0;
                v30[3] = 0;
                if ( v32 == 224 )
                  break;
                v30 = (v32 + v12 + 72);
                v32 += 16;
              }
              goto LABEL_13;
            }
LABEL_40:
            if ( v12 != *(v12 + 304) )
            {
              v34 = v12;
              CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::Unlink(
                track,
                v12);
              v12 = v34;
            }
            goto LABEL_42;
          }
          while ( 1 )
          {
            m_pBlockHeader = m_pBlockHeader->m_pNext;
            if ( m_pBlockHeader == 0 )
              break;
            if ( v12 >= &m_pBlockHeader[1] && v12 < &m_pBlockHeader[20 * m_pBlockHeader->m_nBlockSize + 1] )
            {
              v11 = v12;
              goto LABEL_42;
            }
          }
        }
      }
    }
    v11 = v12;
    goto LABEL_40;
  }
}


// CLagCompensationManager::RestoreEntityFromRecords  (line 875, @0x0000000002324740, libserver.so)  // inlines: CGameTrace, CVProfScope, GetBool, GetInt, IsEnabled, LC_SetAbsOrigin, LengthSqr, RestoreEntityTo, RnCollisionAttr_t, VectorAdd, VectorLerp, VectorSubtract, entindex, operator+, operator-, operator==, ~CVProfScope
// calls: CCollisionProperty::SetCollisionBounds, CBaseAnimating::SetSequence, CBaseAnimating::SetCycle, CBaseAnimatingOverlay::GetNumAnimOverlays, CBaseAnimatingOverlay::GetAnimOverlay, CAnimationLayer::SetCycle, CAnimationLayer::SetOrder, CAnimationLayer::SetSequence, CAnimationLayer::SetWeight, CBaseEntity::SetSimulationTime, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles (22 total)
// callers: CLagCompensationManager::FinishLagCompensation
// strings: "RestoreEntityTo could not restore player position for client \"%d\" ( %.1f %.1f %.1f )\n", " restore got most of the way\n", "Prediction", "RestoreEntityTo", " restore failed entirely\n"
// globals: g_flFractionScale
void __fastcall CLagCompensationManager::RestoreEntityFromRecords(
        CLagCompensationManager *const this,
        CBaseEntity *entity,
        LagRecord *restore,
        LagRecord *change,
        bool wantsAnims)
{
  char v5; // r15
  int m_fFlags; // eax
  CCollisionProperty *m_pCollision; // r15
  float *v12; // rax
  float *v13; // rax
  CCollisionProperty *v14; // rdi
  CBaseAnimating *v15; // rax
  double v16; // xmm1_8
  float v17; // xmm1_4
  const CBaseAnimatingOverlay *v18; // rax
  LagRecord *v19; // r14
  int i; // r13d
  CAnimationLayer *AnimOverlay; // rax
  CAnimationLayer *v22; // r15
  float v23; // xmm1_4
  const Vector *AbsOrigin; // rax
  float v25; // xmm1_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  const QAngle *AbsAngles; // rax
  vec_t v29; // xmm3_4
  vec_t v30; // xmm2_4
  vec_t v31; // xmm1_4
  int m_enabled; // edx
  const Vector *v33; // rax
  CEntityIndex v34; // eax
  const Vector *v35; // rax
  float v36; // xmm1_4
  vec_t v37; // xmm0_4
  float z; // xmm1_4
  double x; // [rsp+10h] [rbp-120h]
  double y; // [rsp+18h] [rbp-118h]
  int layerCount; // [rsp+20h] [rbp-110h]
  double layerCounta; // [rsp+20h] [rbp-110h]
  float layerCountb; // [rsp+20h] [rbp-110h]
  CBaseAnimatingOverlay *pAnimatingOverlayb; // [rsp+28h] [rbp-108h]
  CBaseAnimatingOverlay *pAnimatingOverlay; // [rsp+28h] [rbp-108h]
  bool pAnimatingOverlaya; // [rsp+28h] [rbp-108h]
  Vector vecAbsStart; // [rsp+30h] [rbp-100h] BYREF
  Vector vOrigin; // [rsp+40h] [rbp-F0h] BYREF
  CGameTrace_2 ptr; // [rsp+50h] [rbp-E0h] BYREF

  v5 = 0;
  m_fFlags = restore->m_fFlags;
  if ( (restore->m_fFlags & 0x400) != 0 )
  {
    m_pCollision = entity->m_pCollision;
    if ( m_pCollision != 0 )
    {
      v12 = (*(m_pCollision->_vptr_ICollideable + 1))(entity->m_pCollision);
      if ( change->m_vecMins.x == *v12 && change->m_vecMins.y == v12[1] && change->m_vecMins.z == v12[2] )
      {
        v13 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
        if ( change->m_vecMaxs.x == *v13 && change->m_vecMaxs.y == v13[1] && change->m_vecMaxs.z == v13[2] )
        {
          v14 = m_pCollision;
          v5 = 1;
          CCollisionProperty::SetCollisionBounds(v14, &restore->m_vecMins, &restore->m_vecMaxs);
          m_fFlags = restore->m_fFlags;
          goto LABEL_12;
        }
      }
      m_fFlags = restore->m_fFlags;
    }
    v5 = 1;
  }
LABEL_12:
  if ( (m_fFlags & 0x200) != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(entity);
    if ( change->m_vecAngles.x == AbsAngles->x
      && change->m_vecAngles.y == AbsAngles->y
      && change->m_vecAngles.z == AbsAngles->z )
    {
      CBaseEntity::SetAbsAngles(entity, &restore->m_vecAngles);
    }
    m_fFlags = restore->m_fFlags;
    v5 = 1;
  }
  if ( (m_fFlags & 0x100) != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(entity);
    v25 = AbsOrigin->x - change->m_vecOrigin.x;
    v26 = AbsOrigin->y - change->m_vecOrigin.y;
    v27 = AbsOrigin->z - change->m_vecOrigin.z;
    if ( (((v25 * v25) + (v26 * v26)) + (v27 * v27)) < 4096.0 )
    {
      v29 = v26 + restore->m_vecOrigin.y;
      v30 = v27 + restore->m_vecOrigin.z;
      v31 = v25 + restore->m_vecOrigin.x;
      memset(&ptr.m_ShapeAttributes, 0, 31);
      vecAbsStart.y = v29;
      vecAbsStart.z = v30;
      vecAbsStart.x = v31;
      ptr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&ptr);
      m_enabled = g_VProfCurrentProfile.m_enabled;
      pAnimatingOverlaya = m_enabled != 0;
      if ( m_enabled != 0 )
        CVProfile::EnterScope(&g_VProfCurrentProfile, "RestoreEntityTo", 0, "Prediction", 0, 4);
      if ( sv_lagcompensationforcerestore.m_pParent->m_Value.m_nValue != 0 )
      {
        CBaseEntity::SetAbsOrigin(entity, &vecAbsStart);
        CBaseEntity::PhysicsTouchTriggers(entity, 0);
      }
      UTIL_TraceEntity(entity, &vecAbsStart, &vecAbsStart, 0x87011u, entity, 11, &ptr);
      if ( ptr.startsolid )
      {
        if ( sv_unlag_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          layerCounta = vecAbsStart.z;
          y = vecAbsStart.y;
          x = vecAbsStart.x;
          v34.m_Data = CEntityInstance::GetEntityIndex(entity).m_Data;
          DevMsg(
            "RestoreEntityTo could not restore player position for client \"%d\" ( %.1f %.1f %.1f )\n",
            v34.m_Data,
            x,
            y,
            layerCounta);
        }
        v33 = CBaseEntity::GetAbsOrigin(entity);
        UTIL_TraceEntity(entity, v33, &vecAbsStart, 0x87011u, entity, 11, &ptr);
        if ( ptr.startsolid )
        {
          if ( sv_unlag_debug.m_pParent->m_Value.m_nValue != 0 )
            DevMsg(" restore failed entirely\n");
        }
        else
        {
          layerCountb = ptr.fraction * g_flFractionScale;
          v35 = CBaseEntity::GetAbsOrigin(entity);
          v36 = v35->y;
          vOrigin.x = ((vecAbsStart.x - v35->x) * layerCountb) + v35->x;
          v37 = ((vecAbsStart.y - v36) * layerCountb) + v36;
          z = v35->z;
          vOrigin.y = v37;
          vOrigin.z = ((vecAbsStart.z - z) * layerCountb) + z;
          CBaseEntity::SetAbsOrigin(entity, &vOrigin);
          CBaseEntity::PhysicsTouchTriggers(entity, 0);
          if ( sv_unlag_debug.m_pParent->m_Value.m_nValue != 0 )
            DevMsg(" restore got most of the way\n");
        }
      }
      else
      {
        CBaseEntity::SetAbsOrigin(entity, &ptr.endpos);
        CBaseEntity::PhysicsTouchTriggers(entity, 0);
      }
      if ( pAnimatingOverlaya )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
    }
    v5 = 1;
  }
  v15 = (*(entity->_vptr_IHandleEntity + 43))(entity);
  if ( v15 != 0 && wantsAnims && (restore->m_fFlags & 0x800) != 0 )
  {
    pAnimatingOverlayb = v15;
    CBaseAnimating::SetSequence(v15, restore->m_hMasterSequence, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
    CBaseAnimating::SetCycle(pAnimatingOverlayb, COERCE_DOUBLE(LODWORD(restore->m_masterCycle)), v17);
    v18 = (*(entity->_vptr_IHandleEntity + 45))(entity);
    pAnimatingOverlay = v18;
    if ( v18 != 0 )
    {
      layerCount = CBaseAnimatingOverlay::GetNumAnimOverlays(v18);
      if ( layerCount > 0 )
      {
        v19 = restore;
        for ( i = 0; i != layerCount; ++i )
        {
          AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(pAnimatingOverlay, i);
          v22 = AnimOverlay;
          if ( AnimOverlay != 0 )
          {
            CAnimationLayer::SetCycle(
              AnimOverlay,
              v19->m_layerRecords[0].m_cycle,
              *&v16,
              LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            CAnimationLayer::SetOrder(
              v22,
              v19->m_layerRecords[0].m_order,
              LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            CAnimationLayer::SetSequence(
              v22,
              restore->m_layerRecords[i].m_hSequence,
              SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE,
              LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            CAnimationLayer::SetWeight(
              v22,
              COERCE_DOUBLE(LODWORD(v19->m_layerRecords[0].m_weight)),
              v23,
              LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          }
          v19 = (v19 + 16);
        }
      }
    }
    goto LABEL_25;
  }
  if ( v5 != 0 )
LABEL_25:
    CBaseEntity::SetSimulationTime(entity, COERCE_DOUBLE(LODWORD(restore->m_flSimulationTime)), v16);
}


