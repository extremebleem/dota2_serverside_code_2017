
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityComponentDataOps<CLightComponent>::Save  (line 12, @0x0000000001eed040, libserver.so)  // inlines: GetComponent<CLightComponent>, operator[]
void __fastcall CEntityComponentDataOps<CLightComponent>::Save(
        CEntityComponentDataOps<CLightComponent> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = *(fieldInfo->pField + 1);
  v5 = *v4;
  if ( *v4 != 0 )
  {
    v6 = 0;
    v7 = *(*(v4[1] + 96) + 2LL * CLightComponent::s_EntComponentInfo.m_nRuntimeIndex);
    if ( v7 != 0xFFFF )
      v6 = *(v5 + v7);
  }
  else
  {
    v6 = 0;
  }
  v8 = (*(*v6 + 8LL))(v6);
  (*(pSave->_vptr_ISave + 5))(pSave, v6, v8);
}


// CEntityComponentDataOps<CBodyComponent>::Save  (line 12, @0x000000000217c480, libserver.so)  // inlines: GetComponent<CBodyComponent>, operator[]
void __fastcall CEntityComponentDataOps<CBodyComponent>::Save(
        CEntityComponentDataOps<CBodyComponent> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = *(fieldInfo->pField + 1);
  v5 = *v4;
  if ( *v4 != 0 )
  {
    v6 = 0;
    v7 = *(*(v4[1] + 96) + 2LL * CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex);
    if ( v7 != 0xFFFF )
      v6 = *(v5 + v7);
  }
  else
  {
    v6 = 0;
  }
  v8 = (*(*v6 + 40LL))(v6);
  (*(pSave->_vptr_ISave + 5))(pSave, v6, v8);
}


// CEntityComponentDataOps<CLightComponent>::Restore  (line 21, @0x0000000001eed390, libserver.so)  // inlines: GetComponent<CLightComponent>, operator[]
void __fastcall CEntityComponentDataOps<CLightComponent>::Restore(
        CEntityComponentDataOps<CLightComponent> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = *(fieldInfo->pField + 1);
  v5 = *v4;
  if ( *v4 != 0 )
  {
    v6 = 0;
    v7 = *(*(v4[1] + 96) + 2LL * CLightComponent::s_EntComponentInfo.m_nRuntimeIndex);
    if ( v7 != 0xFFFF )
      v6 = *(v5 + v7);
  }
  else
  {
    v6 = 0;
  }
  v8 = (*(*v6 + 8LL))(v6);
  (*(pRestore->_vptr_IRestore + 2))(pRestore, v6, v8);
}


// CEntityComponentDataOps<CBodyComponent>::Restore  (line 21, @0x000000000217c4f0, libserver.so)  // inlines: GetComponent<CBodyComponent>, operator[]
void __fastcall CEntityComponentDataOps<CBodyComponent>::Restore(
        CEntityComponentDataOps<CBodyComponent> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = *(fieldInfo->pField + 1);
  v5 = *v4;
  if ( *v4 != 0 )
  {
    v6 = 0;
    v7 = *(*(v4[1] + 96) + 2LL * CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex);
    if ( v7 != 0xFFFF )
      v6 = *(v5 + v7);
  }
  else
  {
    v6 = 0;
  }
  v8 = (*(*v6 + 40LL))(v6);
  (*(pRestore->_vptr_IRestore + 2))(pRestore, v6, v8);
}


