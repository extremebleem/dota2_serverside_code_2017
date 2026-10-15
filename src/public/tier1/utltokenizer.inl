
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlTokenizer::~CUtlTokenizer  (line 163, @0x00000000031369b0, libserver.so)  // inlines: Purge, Purge_FixedGrowable, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::RemoveAll, CUtlString::FreeMemoryBlock, CUtlTokenReference::~CUtlTokenReference, CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >::RemoveAll, CUtlMemory<CUtlTokenReference, int>::ConvertToExternalMemory, CUtlMemory<TokenWarning_t, int>::Purge, CUtlMemory<CUtlTokenReference, int>::Purge
// callers: CLoadKV3FromDynData::CLoadKV3FromDynData, CLoadKV3FromText::CLoadKV3FromText, LoadKV3Text, ParseInteractionLayerList
void __fastcall CUtlTokenizer::~CUtlTokenizer(CUtlTokenizer *const this)
{
  CUtlVectorBase<TokenWarning_t,CUtlMemory<TokenWarning_t,int>>::RemoveAll(&this->m_Warnings);
  if ( (this->m_Warnings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<TokenWarning_t,int>::Purge(&this->m_Warnings.m_Memory);
    if ( (this->m_Warnings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<TokenWarning_t,int>::Purge(&this->m_Warnings.m_Memory);
  }
  if ( this->m_Filename.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Filename);
  CUtlTokenReference::~CUtlTokenReference(&this->m_LastConsumedToken);
  CUtlVectorBase<CUtlTokenReference,CUtlMemoryFixedGrowable<CUtlTokenReference,8ul,int>>::RemoveAll(&this->m_LookaheadTokens);
  CUtlMemory<CUtlTokenReference,int>::ConvertToExternalMemory(
    &this->m_LookaheadTokens.m_Memory,
    &this->m_LookaheadTokens.m_Memory.m_FixedMemory,
    8,
    0,
    1,
    0x3FFFFFFFu);
  if ( (this->m_LookaheadTokens.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlTokenReference,int>::Purge(&this->m_LookaheadTokens.m_Memory);
}


