
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRecipeComponentMatchingIterator::~CRecipeComponentMatchingIterator  (line 24, @0x0000000002e532e0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconItemSpecificAttributeIterator, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconItemAttributeIterator
// calls: CUtlMemory<const CEconItemAttributeDefinition*, int>::Purge
// callers: CEconTool_ItemDynamicRecipe::CanApplyTo
void __fastcall CRecipeComponentMatchingIterator::~CRecipeComponentMatchingIterator(
        CRecipeComponentMatchingIterator *const this)
{
  bool v2; // zf
  CUtlVectorBase<const CEconItemAttributeDefinition*,CUtlMemory<const CEconItemAttributeDefinition*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecMatchingOutputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconItemAttributeIterator = off_47A2770;  // vptr: CRecipeComponentMatchingIterator
  this->m_vecMatchingOutputs.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vecMatchingOutputs.m_Memory,
        CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&this->m_vecMatchingOutputs.m_Memory),
        (this->m_vecMatchingOutputs.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_vecMatchingInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecMatchingInputs.m_Size = 0;
    if ( v2 )
      goto LABEL_6;
LABEL_3:
    this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
    return;
  }
  CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(p_m_Memory);
  v2 = (this->m_vecMatchingInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecMatchingInputs.m_Size = 0;
  if ( !v2 )
    goto LABEL_3;
LABEL_6:
  CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&this->m_vecMatchingInputs.m_Memory);
  if ( (this->m_vecMatchingInputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    goto LABEL_3;
  CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&this->m_vecMatchingInputs.m_Memory);
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CRecipeComponentMatchingIterator::~CRecipeComponentMatchingIterator  (line 24, @0x0000000002e53390, libserver.so)  // inlines: Purge, RemoveAll, ~CEconItemSpecificAttributeIterator, ~CRecipeComponentMatchingIterator, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconItemAttributeIterator
// calls: operator delete, CUtlMemory<const CEconItemAttributeDefinition*, int>::Purge
void __fastcall CRecipeComponentMatchingIterator::~CRecipeComponentMatchingIterator(
        CRecipeComponentMatchingIterator *const this)
{
  bool v2; // zf
  CUtlVectorBase<const CEconItemAttributeDefinition*,CUtlMemory<const CEconItemAttributeDefinition*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecMatchingOutputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconItemAttributeIterator = off_47A2770;  // vptr: CRecipeComponentMatchingIterator
  this->m_vecMatchingOutputs.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vecMatchingOutputs.m_Memory,
        CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&this->m_vecMatchingOutputs.m_Memory),
        (this->m_vecMatchingOutputs.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_vecMatchingInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecMatchingInputs.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(p_m_Memory);
    v2 = (this->m_vecMatchingInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecMatchingInputs.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&this->m_vecMatchingInputs.m_Memory);
  if ( (this->m_vecMatchingInputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEconItemAttributeDefinition const*,int>::Purge(&this->m_vecMatchingInputs.m_Memory);
LABEL_3:
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


