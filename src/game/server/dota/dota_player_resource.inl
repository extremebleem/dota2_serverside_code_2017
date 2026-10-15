
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_PlayerResource::~CDOTA_PlayerResource  (line 75, @0x00000000026b4620, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVector_MemoryType, ~CUtlArray, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<DamageShareEvent_t, int>::Purge, CUtlMemory<CHandle<CDOTA_Unit_Courier>, int>::Purge, CUtlMemory<float, int>::Purge, CUtlMemory<PurchasedItem_t, int>::Purge, CUtlMemory<std::pair<item_definition_index_t, itemid_t>, int>::Purge, operator delete, CUtlVectorBase<PlayerResourceBroadcasterData_t, CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t, -1> >::RemoveAll, CUtlVectorBase<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >::RemoveAll, CUtlVectorBase<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity (19 total)
// callers: CDOTA_PlayerResource::~CDOTA_PlayerResource
void __fastcall CDOTA_PlayerResource::~CDOTA_PlayerResource(CDOTA_PlayerResource *const this)
{
  bool v2; // zf
  CUtlRBTree<CUtlMap<int,int>::Node_t,short unsigned int,CUtlMap<int,int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int>,short unsigned int> > *v3; // r15
  CUtlRBTree<CUtlMap<int,int>::Node_t,short unsigned int,CUtlMap<int,int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int>,short unsigned int> > *v4; // rbx
  char *v5; // r13
  char *v6; // rbx
  CUtlMemory<DamageShareEvent_t,int> *v7; // rdi
  char *v8; // r15
  char *v9; // rbx
  CDOTA_PlayerResource *v10; // rbx
  char *v11; // r13
  char *v12; // rbx
  CUtlMemory<float,int> *v13; // rdi
  char *v14; // r13
  char *v15; // rbx
  CUtlMemory<PurchasedItem_t,int> *v16; // rdi
  char *v17; // r14
  char *v18; // rbx
  CUtlMemory<unsigned int,int> *v19; // rbx
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int>,short unsigned int> *v20; // [rsp+8h] [rbp-38h]
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int>,short unsigned int> *v21; // [rsp+8h] [rbp-38h]

  *this = &off_416F450;
  v2 = (*(this + 8477) & 0xC0000000) == 0;
  *(this + 8472) = 0;
  if ( v2 )
  {
    v19 = (this + 33896);
    CUtlMemory<unsigned int,int>::Purge((this + 33896));
    if ( (*(this + 8477) & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(v19);
  }
  v3 = (this + 32536);
  v4 = (this + 33496);
  do
  {
    while ( 1 )
    {
      CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(--v4);
      v4->m_FirstFree = -1;
      if ( (v4->m_Elements.m_nGrowSize & 0xC0000000) == 0 )
        break;
      v4->m_LastAlloc.index = -1;
LABEL_4:
      if ( v3 == v4 )
        goto LABEL_8;
    }
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v4->m_Elements);
    v2 = (v4->m_Elements.m_nGrowSize & 0xC0000000) == 0;
    v4->m_LastAlloc.index = -1;
    if ( !v2 )
      goto LABEL_4;
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v4->m_Elements);
  }
  while ( v3 != v4 );
LABEL_8:
  v5 = this + 19344;
  v6 = this + 19920;
  do
  {
    while ( 1 )
    {
      v2 = (*(v6 - 1) & 0xC0000000) == 0;
      *(v6 - 6) = 0;
      if ( v2 )
      {
        CUtlMemory<DamageShareEvent_t,int>::Purge(v6 - 1);
        if ( (*(v6 - 1) & 0xC0000000) == 0 )
          break;
      }
      v6 -= 24;
      if ( v5 == v6 )
        goto LABEL_13;
    }
    v7 = (v6 - 16);
    v6 -= 24;
    CUtlMemory<DamageShareEvent_t,int>::Purge(v7);
  }
  while ( v5 != v6 );
LABEL_13:
  v8 = this + 18952;
  v9 = this + 19288;
  do
  {
    while ( 1 )
    {
      *(v9 - 6) = 0;
      if ( (*(v9 - 1) & 0xC0000000) == 0 )
      {
        v20 = (v9 - 16);
        CUtlMemory<CHandle<CDOTA_Unit_Courier>,int>::Purge(v9 - 1);
        if ( (*(v9 - 1) & 0xC0000000) == 0 )
          break;
      }
      v9 -= 24;
      if ( v8 == v9 )
        goto LABEL_18;
    }
    v9 -= 24;
    CUtlMemory<CHandle<CDOTA_Unit_Courier>,int>::Purge(v20);
  }
  while ( v8 != v9 );
LABEL_18:
  v2 = (*(this + 4661) & 0xC0000000) == 0;
  *(this + 4656) = 0;
  if ( v2 )
  {
    CUtlMemory<TimedKillEvent_t,int>::Purge((this + 18632));
    if ( (*(this + 4661) & 0xC0000000) == 0 )
      CUtlMemory<TimedKillEvent_t,int>::Purge((this + 18632));
  }
  v2 = (*(this + 4655) & 0xC0000000) == 0;
  *(this + 4650) = 0;
  if ( v2 )
  {
    CUtlMemory<TimedKillEvent_t,int>::Purge(this + 1163);
    if ( (*(this + 4655) & 0xC0000000) == 0 )
      CUtlMemory<TimedKillEvent_t,int>::Purge(this + 1163);
  }
  v2 = (*(this + 4649) & 0xC0000000) == 0;
  *(this + 4644) = 0;
  if ( v2 )
  {
    CUtlMemory<TimedKillEvent_t,int>::Purge((this + 18584));
    if ( (*(this + 4649) & 0xC0000000) == 0 )
      CUtlMemory<TimedKillEvent_t,int>::Purge((this + 18584));
  }
  v2 = (*(this + 4643) & 0xC0000000) == 0;
  *(this + 4638) = 0;
  if ( v2 )
  {
    CUtlMemory<TimedBalanceRecord_t,int>::Purge(this + 1160);
    if ( (*(this + 4643) & 0xC0000000) == 0 )
      CUtlMemory<TimedBalanceRecord_t,int>::Purge(this + 1160);
  }
  v10 = (this + 18544);
  do
  {
    v10 = (v10 - 40);
    (**v10)(v10);
  }
  while ( (this + 17584) != v10 );
  v11 = this + 15368;
  v12 = this + 15944;
  do
  {
    while ( 1 )
    {
      v2 = (*(v12 - 1) & 0xC0000000) == 0;
      *(v12 - 6) = 0;
      if ( v2 )
      {
        CUtlMemory<float,int>::Purge(v12 - 1);
        if ( (*(v12 - 1) & 0xC0000000) == 0 )
          break;
      }
      v12 -= 24;
      if ( v11 == v12 )
        goto LABEL_29;
    }
    v13 = (v12 - 16);
    v12 -= 24;
    CUtlMemory<float,int>::Purge(v13);
  }
  while ( v11 != v12 );
LABEL_29:
  v14 = this + 13296;
  v15 = this + 13872;
  do
  {
    while ( 1 )
    {
      v2 = (*(v15 - 1) & 0xC0000000) == 0;
      *(v15 - 6) = 0;
      if ( v2 )
      {
        CUtlMemory<PurchasedItem_t,int>::Purge(v15 - 1);
        if ( (*(v15 - 1) & 0xC0000000) == 0 )
          break;
      }
      v15 -= 24;
      if ( v14 == v15 )
        goto LABEL_34;
    }
    v16 = (v15 - 16);
    v15 -= 24;
    CUtlMemory<PurchasedItem_t,int>::Purge(v16);
  }
  while ( v14 != v15 );
LABEL_34:
  v2 = (*(this + 463) & 0xC0000000) == 0;
  *(this + 458) = 0;
  if ( v2 )
  {
    CUtlMemory<sPendingTreeRemoval,int>::Purge(this + 115);
    if ( (*(this + 463) & 0xC0000000) == 0 )
      CUtlMemory<sPendingTreeRemoval,int>::Purge(this + 115);
  }
  v17 = this + 1256;
  if ( this + 1256 != this + 1832 )
  {
    v18 = this + 1832;
    do
    {
      while ( 1 )
      {
        *(v18 - 6) = 0;
        if ( (*(v18 - 1) & 0xC0000000) == 0 )
        {
          v21 = (v18 - 16);
          CUtlMemory<std::pair<item_definition_index_t,itemid_t>,int>::Purge(v18 - 1);
          if ( (*(v18 - 1) & 0xC0000000) == 0 )
            break;
        }
        v18 -= 24;
        if ( v17 == v18 )
          goto LABEL_41;
      }
      v18 -= 24;
      CUtlMemory<std::pair<item_definition_index_t,itemid_t>,int>::Purge(v21);
    }
    while ( v17 != v18 );
  }
LABEL_41:
  operator delete(*(this + 122));
  CUtlVectorBase<PlayerResourceBroadcasterData_t,CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t,-1>>::RemoveAll((this + 920));
  if ( (*(this + 235) & 0xC0000000) == 0 )
  {
    CUtlMemory<PlayerResourceBroadcasterData_t,int>::Purge(this + 58);
    if ( (*(this + 235) & 0xC0000000) == 0 )
      CUtlMemory<PlayerResourceBroadcasterData_t,int>::Purge(this + 58);
  }
  operator delete(*(this + 113));
  CUtlVectorBase<PlayerResourcePlayerData_t,CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t,-1>>::RemoveAll((this + 848));
  if ( (*(this + 217) & 0xC0000000) == 0 )
  {
    CUtlMemory<PlayerResourcePlayerData_t,int>::Purge((this + 856));
    if ( (*(this + 217) & 0xC0000000) == 0 )
      CUtlMemory<PlayerResourcePlayerData_t,int>::Purge((this + 856));
  }
  operator delete(*(this + 104));
  CUtlVectorBase<PlayerResourcePlayerTeamData_t,CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t,-1>>::RemoveAll((this + 776));
  if ( (*(this + 199) & 0xC0000000) == 0 )
  {
    CUtlMemory<PlayerResourcePlayerTeamData_t,int>::Purge(this + 49);
    if ( (*(this + 199) & 0xC0000000) == 0 )
      CUtlMemory<PlayerResourcePlayerTeamData_t,int>::Purge(this + 49);
  }
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_PlayerResource::~CDOTA_PlayerResource  (line 75, @0x00000000026b4bc0, libserver.so)
// calls: CDOTA_PlayerResource::~CDOTA_PlayerResource, CBaseEntity::operator delete
void __fastcall CDOTA_PlayerResource::~CDOTA_PlayerResource(CDOTA_PlayerResource *const this)
{
  CDOTA_PlayerResource::~CDOTA_PlayerResource(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_PlayerResource::CDOTA_PlayerResource  (line 75, @0x00000000026b4be0, libserver.so)  // inlines: CEntityHandle, CEntityOwnerPtr, CFieldPath, CHandle, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CUtlArray, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, EnsureValidValue<unsigned int>, Purge, RemoveAll, ResetDbgInfo, operator=, ~CNetworkUtlVector_MemoryType, ~CUtlArray, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseEntity::CBaseEntity, CMsgLeaverState::CMsgLeaverState, CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase, CUtlVectorBase<PurchasedItem_t, CUtlMemory<PurchasedItem_t, int> >::~CUtlVectorBase, CUtlVectorBase<std::pair<item_definition_index_t, itemid_t>, CUtlMemory<std::pair<item_definition_index_t, itemid_t>, int> >::~CUtlVectorBase, operator delete, CUtlVectorBase<PlayerResourceBroadcasterData_t, CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t, -1> >::RemoveAll, CUtlVectorBase<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >::RemoveAll, CUtlVectorBase<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, _Unwind_Resume, CUtlMemory<sPendingTreeRemoval, int>::Purge (15 total)
// callers: CDOTA_PlayerResource::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_PlayerResource::CDOTA_PlayerResource(CDOTA_PlayerResource *const this)
{
  CEntityInstance *v2; // rax
  CDOTA_PlayerResource *v3; // rax
  char *v4; // rcx
  CDOTA_PlayerResource *v5; // rax
  CDOTA_PlayerResource *v6; // rdx
  signed __int64 v7; // rdx
  char *v8; // rcx
  CDOTA_PlayerResource *v9; // rax
  CDOTA_PlayerResource *v10; // rdx
  signed __int64 v11; // rdx
  char *v12; // rcx
  CDOTA_PlayerResource *v13; // rax
  CDOTA_PlayerResource *v14; // rdx
  signed __int64 v15; // rdx
  __int64 v16; // r12
  CMsgLeaverState *v17; // r13
  char *v18; // rcx
  CDOTA_PlayerResource *v19; // rax
  CDOTA_PlayerResource *v20; // rdx
  signed __int64 v21; // rdx
  char *v22; // rcx
  CDOTA_PlayerResource *v23; // rax
  CDOTA_PlayerResource *v24; // rdx
  signed __int64 v25; // rdx
  CDOTA_PlayerResource *v26; // rax
  char *v27; // rdx

  CBaseEntity::CBaseEntity(this);
  *(this + 194) = 0;
  *this = &off_416F450;
  *(this + 98) = 0;
  *(this + 198) = 0;
  *(this + 199) = 0;
  *(this + 100) = 0;
  v2 = CEntitySpawnHelper::gm_pCurEntityPtr;
  if ( CEntitySpawnHelper::gm_pCurEntityPtr != 0 )
  {
    *(this + 100) = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(this + 412) = 0;
    *(this + 826) = 0;
    *(this + 104) = 0;
    *(this + 840) = 0;
    *(this + 841) = 0;
    *(this + 212) = 0;
    *(this + 107) = 0;
    *(this + 216) = 0;
    *(this + 217) = 0;
    *(this + 109) = v2;
    *(this + 448) = 0;
    *(this + 898) = 0;
    *(this + 113) = 0;
    *(this + 912) = 0;
    *(this + 913) = 0;
    *(this + 230) = 0;
    *(this + 116) = 0;
    *(this + 234) = 0;
    *(this + 235) = 0;
    *(this + 118) = v2;
  }
  else
  {
    *(this + 412) = 0;
    *(this + 826) = 0;
    *(this + 104) = 0;
    *(this + 840) = 0;
    *(this + 841) = 0;
    *(this + 212) = 0;
    *(this + 107) = 0;
    *(this + 216) = 0;
    *(this + 217) = 0;
    *(this + 109) = 0;
    *(this + 448) = 0;
    *(this + 898) = 0;
    *(this + 113) = 0;
    *(this + 912) = 0;
    *(this + 913) = 0;
    *(this + 230) = 0;
    *(this + 116) = 0;
    *(this + 234) = 0;
    *(this + 235) = 0;
    *(this + 118) = 0;
  }
  *(this + 970) = 0;
  *(this + 484) = 0;
  v3 = (this + 996);
  *(this + 984) = 0;
  *(this + 122) = 0;
  *(this + 985) = 0;
  *(this + 248) = 0;
  do
  {
    *v3 = -1;
    v3 = (v3 + 4);
  }
  while ( v3 != (this + 1252) );
  v4 = this + 1264;
  v5 = (this + 1264);
  do
  {
    *(v5 - 2) = 0;
    v6 = v5;
    v5 = (v5 + 24);
    v7 = v6 - (this + 1256);
    *&v4[v7 - 8] = 0;
    *&v4[v7] = 0;
    *&v4[v7 + 4] = 0;
  }
  while ( v5 != (this + 1840) );
  v8 = this + 13304;
  *(this + 458) = 0;
  *(this + 230) = 0;
  v9 = (this + 13304);
  *(this + 462) = 0;
  *(this + 463) = 0;
  do
  {
    *(v9 - 2) = 0;
    v10 = v9;
    v9 = (v9 + 24);
    v11 = v10 - (this + 13296);
    *&v8[v11 - 8] = 0;
    *&v8[v11] = 0;
    *&v8[v11 + 4] = 0;
  }
  while ( v9 != (this + 13880) );
  v12 = this + 15376;
  v13 = (this + 15376);
  do
  {
    *(v13 - 2) = 0;
    v14 = v13;
    v13 = (v13 + 24);
    v15 = v14 - (this + 15368);
    *&v12[v15 - 8] = 0;
    *&v12[v15] = 0;
    *&v12[v15 + 4] = 0;
  }
  while ( v13 != (this + 15952) );
  v16 = 23;
  v17 = (this + 17584);
  do
  {
    CMsgLeaverState::CMsgLeaverState(v17);
    --v16;
    v17 = (v17 + 40);
  }
  while ( v16 != -1 );
  v18 = this + 18960;
  *(this + 4638) = 0;
  *(this + 2320) = 0;
  v19 = (this + 18960);
  *(this + 4642) = 0;
  *(this + 4643) = 0;
  *(this + 4644) = 0;
  *(this + 2323) = 0;
  *(this + 4648) = 0;
  *(this + 4649) = 0;
  *(this + 4650) = 0;
  *(this + 2326) = 0;
  *(this + 4654) = 0;
  *(this + 4655) = 0;
  *(this + 4656) = 0;
  *(this + 2329) = 0;
  *(this + 4660) = 0;
  *(this + 4661) = 0;
  do
  {
    *(v19 - 2) = 0;
    v20 = v19;
    v19 = (v19 + 24);
    v21 = v20 - (this + 18952);
    *&v18[v21 - 8] = 0;
    *&v18[v21] = 0;
    *&v18[v21 + 4] = 0;
  }
  while ( v19 != (this + 19296) );
  v22 = this + 19352;
  v23 = (this + 19352);
  do
  {
    *(v23 - 2) = 0;
    v24 = v23;
    v23 = (v23 + 24);
    v25 = v24 - (this + 19344);
    *&v22[v25 - 8] = 0;
    *&v22[v25] = 0;
    *&v22[v25 + 4] = 0;
  }
  while ( v23 != (this + 19928) );
  v26 = (this + 32536);
  v27 = this + 32544;
  do
  {
    v26 = (v26 + 40);
    v27 += 40;
    *(v26 - 5) = 0;
    *(v27 - 5) = 0;
    *(v27 - 8) = 0;
    *(v27 - 7) = 0;
    *(v26 - 8) = -1;
    *(v26 - 7) = 0;
    *(v26 - 6) = -1;
    *(v26 - 5) = -1;
    *(v26 - 1) = 0;
  }
  while ( v26 != (this + 33496) );
  *(this + 8472) = 0;
  *(this + 4237) = 0;
  *(this + 8476) = 0;
  *(this + 8477) = 0;
}


// CDOTA_PlayerResource::Schema_DynamicBinding  (line 77, @0x000000000269cee0, libserver.so)
// globals: CDOTA_PlayerResource::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_PlayerResource::Schema_DynamicBinding(
        const CDOTA_PlayerResource *const this)
{
  return CDOTA_PlayerResource::s_pSchemaBinding;
}


// CDOTA_PlayerResource::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 77, @0x000000000269cef0, libserver.so)
// globals: CDOTA_PlayerResource::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_PlayerResource::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_PlayerResource::CEntityInstanceEntityClass *const this)
{
  return CDOTA_PlayerResource::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_PlayerResource::CEntityInstanceEntityClass::DestructInstance  (line 77, @0x000000000269cf00, libserver.so)  // inlines: Destruct<CDOTA_PlayerResource>
void __fastcall CDOTA_PlayerResource::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_PlayerResource::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_PlayerResource::CEntityInstanceEntityClass::FreeInstance  (line 77, @0x000000000269cf20, libserver.so)
void __fastcall CDOTA_PlayerResource::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_PlayerResource::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_PlayerResource::CEntityInstanceEntityClass::CanAllocate  (line 77, @0x000000000269cf40, libserver.so)
bool __fastcall CDOTA_PlayerResource::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_PlayerResource::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_PlayerResource::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 77, @0x000000000269cf50, libserver.so)
// globals: CDOTA_PlayerResource::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_PlayerResource::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_PlayerResource::CEntityInstanceEntityClass *const this)
{
  return CDOTA_PlayerResource::s_pSchemaBinding;
}


// CDOTA_PlayerResource::CEntityInstanceEntityClass::AllocateInstance  (line 77, @0x00000000026a02c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_PlayerResource::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_PlayerResource::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 34488);
  memset(v1, 0, 0x86B8u);
  return v1;
}


// CDOTA_PlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 77, @0x00000000026a5e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_PlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_PlayerResource::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_PlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 77, @0x00000000026a5e70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_PlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_PlayerResource::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_PlayerResource::GetEntityClassInternal  (line 77, @0x00000000026b2120, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_PlayerResource>, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "dota_player_manager", "CDOTA_PlayerResource"
// globals: `guard variable for'CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass, CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_PlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_PlayerResource::GetEntityClassInfo(void)::g_EntityCDOTA_PlayerResourceClassInfo, CDOTA_PlayerResource::GetEntityClassInfo(void)::g_EntityCDOTA_PlayerResourceClassInfo
CEntityClass *__cdecl CDOTA_PlayerResource::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass) != 0 )
  {
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_designerName.u.m_Id = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass._vptr_CEntityClass = off_3F79390;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_AllHelpers.m_Size = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_classInputs.m_Size = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_classOutputs.m_Size = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_requiredEHandle.m_Index = -1;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_hNetworkSerializer = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pBaseClassInfo = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pClassInfo = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_flags = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_nAllHelpersFlags = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pScriptClassDesc = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pInputs = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_nInputCount = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pOutputs = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_nOutputCount = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pGameClass = 0;
    CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass._vptr_CEntityClass = off_416DBF0;
    __cxa_guard_release(&`guard variable for'CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass);
    __cxa_atexit(
      CDOTA_PlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_PlayerResourceClass != 0 )
    return &CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass;
  if ( `guard variable for'CDOTA_PlayerResource::GetEntityClassInfo(void)::g_EntityCDOTA_PlayerResourceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_PlayerResource::GetEntityClassInfo(void)::g_EntityCDOTA_PlayerResourceClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_PlayerResource::GetEntityClassInfo(void)::g_EntityCDOTA_PlayerResourceClassInfo,
      "CDOTA_PlayerResource",
      "dota_player_manager",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_PlayerResource::GetEntityClassInfo(void)::g_EntityCDOTA_PlayerResourceClassInfo);
  }
  CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pClassInfo = &CDOTA_PlayerResource::GetEntityClassInfo(void)::g_EntityCDOTA_PlayerResourceClassInfo;
  CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pBaseClassInfo = CDOTA_PlayerResource::GetEntityClassInfo(void)::g_EntityCDOTA_PlayerResourceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_PlayerResourceClass = &CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass;
  CDOTA_PlayerResource::GetEntityClassInfo(void)::g_EntityCDOTA_PlayerResourceClassInfo.m_pClass = &CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass;
  CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_PlayerResource>(0);
  g_pEntityCDOTA_PlayerResourceClass->m_pComponentOverrides = 0;
  return &CDOTA_PlayerResource::GetEntityClassInternal(void)::g_EntityCDOTA_PlayerResourceClass;
}


// CDOTA_PlayerResource::CEntityInstanceEntityClass::ConstructInstance  (line 77, @0x00000000026b5330, libserver.so)  // inlines: Construct<CDOTA_PlayerResource>
// calls: CDOTA_PlayerResource::CDOTA_PlayerResource
CEntityInstance *__fastcall CDOTA_PlayerResource::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_PlayerResource::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_PlayerResource::CDOTA_PlayerResource(p);
  return p;
}


// CDOTA_PlayerResource::UpdateTransmitState  (line 87, @0x00000000026a08a0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTA_PlayerResource::UpdateTransmitState(CDOTA_PlayerResource *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


