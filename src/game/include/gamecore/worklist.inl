
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::~CWorkListTransient  (line 105, @0x0000000001f97230, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> >::Purge, CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>::Purge
// callers: CRenderGameSystem::CRenderGameSystem
void __fastcall CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::~CWorkListTransient(
        CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4> *const this)
{
  CUtlFixedLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t> *p_m_workItems; // rbx
  bool v3; // zf

  p_m_workItems = &this->m_workItems;
  CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long>>>::RemoveAll(&this->m_workItems);
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long>>::Purge(&p_m_workItems->m_Memory);
  if ( this != 0 )
  {
    while ( this != p_m_workItems )
    {
      v3 = (HIDWORD(p_m_workItems[-1].m_pElements) & 0xC0000000) == 0;
      LODWORD(p_m_workItems[-1].m_LastAlloc.m_pBlockHeader) = 0;
      if ( v3 )
      {
        CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Purge(&p_m_workItems[-1].m_LastAlloc.m_nIndex);
        if ( (HIDWORD(p_m_workItems[-1].m_pElements) & 0xC0000000) == 0 )
          CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t *,int>::Purge(&p_m_workItems[-1].m_LastAlloc.m_nIndex);
      }
      p_m_workItems = (p_m_workItems - 24);
    }
  }
}


