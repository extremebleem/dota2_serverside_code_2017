
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMorphSetData::~CMorphSetData  (line 118, @0x0000000003154960, libserver.so)  // inlines: Purge, RemoveAll, ~CStrongHandle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::RemoveAll, CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::RemoveAll, CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::RemoveAll, CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::RemoveAll, CUtlMemory<CFlexRule, int>::Purge, CUtlMemory<CMorphData, int>::Purge, CUtlMemory<MorphBundleType_t, int>::Purge, CUtlMemory<CFlexDesc, int>::Purge, CUtlMemory<CFlexController, int>::Purge
// callers: CModelBuilder::AppendFlexControllersFromOldData, CModelBuilder::CreateRemappingTableForMeshFromOldData
void __fastcall CMorphSetData::~CMorphSetData(CMorphSetData *const this)
{
  bool v2; // zf

  CUtlVectorBase<CFlexRule,CUtlMemory<CFlexRule,int>>::RemoveAll(&this->m_FlexRules);
  if ( (this->m_FlexRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFlexRule,int>::Purge(&this->m_FlexRules.m_Memory);
    if ( (this->m_FlexRules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexRule,int>::Purge(&this->m_FlexRules.m_Memory);
  }
  CUtlVectorBase<CFlexController,CUtlMemory<CFlexController,int>>::RemoveAll(&this->m_FlexControllers);
  if ( (this->m_FlexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFlexController,int>::Purge(&this->m_FlexControllers.m_Memory);
    if ( (this->m_FlexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexController,int>::Purge(&this->m_FlexControllers.m_Memory);
  }
  CUtlVectorBase<CFlexDesc,CUtlMemory<CFlexDesc,int>>::RemoveAll(&this->m_FlexDesc);
  if ( (this->m_FlexDesc.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CFlexDesc,int>::Purge(&this->m_FlexDesc.m_Memory);
    if ( (this->m_FlexDesc.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexDesc,int>::Purge(&this->m_FlexDesc.m_Memory);
  }
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&this->m_pTextureAtlas);
  CUtlVectorBase<CMorphData,CUtlMemory<CMorphData,int>>::RemoveAll(&this->m_morphDatas);
  if ( (this->m_morphDatas.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CMorphData,int>::Purge(&this->m_morphDatas.m_Memory),
        (this->m_morphDatas.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_bundleTypes.m_Size = 0;
    if ( !v2 )
      return;
  }
  else
  {
    CUtlMemory<CMorphData,int>::Purge(&this->m_morphDatas.m_Memory);
    v2 = (this->m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_bundleTypes.m_Size = 0;
    if ( !v2 )
      return;
  }
  CUtlMemory<MorphBundleType_t,int>::Purge(&this->m_bundleTypes.m_Memory);
  if ( (this->m_bundleTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<MorphBundleType_t,int>::Purge(&this->m_bundleTypes.m_Memory);
}


