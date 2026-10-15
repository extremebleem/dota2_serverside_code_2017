
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconItemSetDefinition::GetName  (line 287, @0x0000000002ea42f0, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemSetDefinition::GetName(const CEconItemSetDefinition *const this)
{
  return this->m_symName.u.m_pAsString;
}


// CEconItemSetDefinition::GetLocKey  (line 288, @0x0000000002ea4300, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemSetDefinition::GetLocKey(const CEconItemSetDefinition *const this)
{
  return this->m_symLocalizedName.u.m_pAsString;
}


// CEconItemSetDefinition::GetUnlocalizedName  (line 289, @0x0000000002ea4310, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemSetDefinition::GetUnlocalizedName(const CEconItemSetDefinition *const this)
{
  return this->m_symUnlocalizedName.u.m_pAsString;
}


// CEconItemSetDefinition::GetBundle  (line 290, @0x0000000002ea17d0, libserver.so)
item_definition_index_t __fastcall CEconItemSetDefinition::GetBundle(const CEconItemSetDefinition *const this)
{
  return this->m_iBundleItemDef.m_Data;
}


// CEconItemSetDefinition::GetItemCount  (line 291, @0x0000000002ea17e0, libserver.so)
int __fastcall CEconItemSetDefinition::GetItemCount(const CEconItemSetDefinition *const this)
{
  return this->m_iItemDefs.m_Size;
}


// CEconItemSetDefinition::GetItemDef  (line 292, @0x0000000002ea41e0, libserver.so)  // inlines: operator[]
item_definition_index_t __fastcall CEconItemSetDefinition::GetItemDef(
        const CEconItemSetDefinition *const this,
        int iIndex)
{
  return this->m_iItemDefs.m_Memory.m_pMemory[iIndex].m_Data;
}


// CEconLootListDefinition::GetName  (line 389, @0x0000000002ea4320, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconLootListDefinition::GetName(const CEconLootListDefinition *const this)
{
  return this->m_symName.u.m_pAsString;
}


// CEconLootListDefinition::GetLootListContents  (line 390, @0x0000000002ea17f0, libserver.so)
const CUtlVector<int,CUtlMemory<int,int> > *__fastcall CEconLootListDefinition::GetLootListContents(
        const CEconLootListDefinition *const this)
{
  return &this->m_iItemDefs;
}


// CEconLootListDefinition::GetWeight  (line 391, @0x0000000002ea4270, libserver.so)  // inlines: operator[]
float __fastcall CEconLootListDefinition::GetWeight(const CEconLootListDefinition *const this, int iIdx)
{
  return this->m_flWeights.m_Memory.m_pMemory[iIdx];
}


// CEconLootListDefinition::GetTotalWeight  (line 392, @0x0000000002ea1800, libserver.so)
float __fastcall CEconLootListDefinition::GetTotalWeight(const CEconLootListDefinition *const this)
{
  return this->m_flTotalWeight;
}


// CEconLootListDefinition::IsServerList  (line 394, @0x0000000002ea1810, libserver.so)
bool __fastcall CEconLootListDefinition::IsServerList(const CEconLootListDefinition *const this)
{
  return this->m_bServerList;
}


// CEconLootListDefinition::ShouldGrantOneOfEach  (line 395, @0x0000000002ea1820, libserver.so)
bool __fastcall CEconLootListDefinition::ShouldGrantOneOfEach(const CEconLootListDefinition *const this)
{
  return this->m_bGrantOneOfEachItem;
}


// CEconLootListDefinition::CanHaveDuplicates  (line 396, @0x0000000002ea1830, libserver.so)
bool __fastcall CEconLootListDefinition::CanHaveDuplicates(const CEconLootListDefinition *const this)
{
  return this->m_bCanHaveDuplicates;
}


// CEconLootListDefinition::GetAdditionalDropCount  (line 399, @0x0000000002ea1840, libserver.so)
int __fastcall CEconLootListDefinition::GetAdditionalDropCount(const CEconLootListDefinition *const this)
{
  return this->m_AdditionalDrops.m_Size;
}


// CEconLootListDefinition::GetEscalatingChanceSlotCount  (line 403, @0x0000000002ea1850, libserver.so)
int __fastcall CEconLootListDefinition::GetEscalatingChanceSlotCount(const CEconLootListDefinition *const this)
{
  return 3;
}


// CEconLootListDefinition::GetRandomAttributeGroupCount  (line 408, @0x0000000002ea1860, libserver.so)
int __fastcall CEconLootListDefinition::GetRandomAttributeGroupCount(const CEconLootListDefinition *const this)
{
  return this->m_RandomAttribs.m_Size;
}


// CEconLootListDefinition::HasRandomGems  (line 412, @0x0000000002ea1870, libserver.so)
bool __fastcall CEconLootListDefinition::HasRandomGems(const CEconLootListDefinition *const this)
{
  return this->m_bAddRandomGems;
}


// CEconLootListDefinition::HeroGemsOnly  (line 413, @0x0000000002ea1880, libserver.so)
bool __fastcall CEconLootListDefinition::HeroGemsOnly(const CEconLootListDefinition *const this)
{
  return this->m_bHeroGemsOnly;
}


// CEconLootListDefinition::HasEmptySockets  (line 414, @0x0000000002ea1890, libserver.so)
bool __fastcall CEconLootListDefinition::HasEmptySockets(const CEconLootListDefinition *const this)
{
  return this->m_unEmptySocketCount > 0;
}


// CEconLootListDefinition::AdditionalDropsReplace  (line 415, @0x0000000002ea18b0, libserver.so)
bool __fastcall CEconLootListDefinition::AdditionalDropsReplace(const CEconLootListDefinition *const this)
{
  return this->m_bAdditionalDropsReplace;
}


// CEconItemAttributeDefinition::GetDefinitionIndex  (line 577, @0x0000000002ea18c0, libserver.so)
attrib_definition_index_t __fastcall CEconItemAttributeDefinition::GetDefinitionIndex(
        const CEconItemAttributeDefinition *const this)
{
  return this->m_nDefIndex;
}


// CEconItemAttributeDefinition::GetDefinitionName  (line 579, @0x0000000002ea4330, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemAttributeDefinition::GetDefinitionName(const CEconItemAttributeDefinition *const this)
{
  return this->m_symDefinitionName.u.m_pAsString;
}


// CEconItemAttributeDefinition::GetDescriptionString  (line 592, @0x0000000002ea4340, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemAttributeDefinition::GetDescriptionString(
        const CEconItemAttributeDefinition *const this)
{
  return this->m_symDescriptionString.u.m_pAsString;
}


// CEconItemAttributeDefinition::GetAttributeClass  (line 594, @0x0000000002ea4350, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemAttributeDefinition::GetAttributeClass(const CEconItemAttributeDefinition *const this)
{
  return this->m_symAttributeClass.u.m_pAsString;
}


// CEconStyleInfo::~CEconStyleInfo  (line 814, @0x0000000002eaa3b0, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CExpressionCalculator, ~CUtlHashtable, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, operator delete, operator delete [], CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge, CUtlMemory<CUtlString, int>::Purge
void __fastcall CEconStyleInfo::~CEconStyleInfo(CEconStyleInfo *const this)
{
  CExpressionCalculator *m_pExpression; // r13
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *m_pVarNames; // r15
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v6; // rdi
  bool v7; // zf
  CExpressionCalculator::Token_t *m_pTokens; // rdi

  this->_vptr_CEconStyleInfo = off_47A80F0;
  m_pExpression = this->m_pExpression;
  if ( m_pExpression != 0 )
  {
    m_pVarNames = m_pExpression->m_pVarNames;
    if ( m_pVarNames != 0 )
    {
      m_Size = m_pVarNames->m_Size;
      for ( i = 8LL * m_pVarNames->m_Size - 8; --m_Size >= 0; i -= 8 )
      {
        v6 = (m_pVarNames->m_Memory.m_pMemory + i);
        if ( v6->m_pString != 0 )
          CUtlString::FreeMemoryBlock(v6);
      }
      v7 = (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_pVarNames->m_Size = 0;
      if ( v7 )
      {
        CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
        if ( (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
      }
      operator delete(m_pVarNames);
    }
    m_pTokens = m_pExpression->m_pTokens;
    if ( m_pTokens != 0 )
      operator delete[](m_pTokens);
    CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(&m_pExpression->m_varValues);
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&m_pExpression->m_varValues.m_table);
    operator delete(m_pExpression);
  }
  this->m_pExpression = 0;
}


// CEconStyleInfo::~CEconStyleInfo  (line 814, @0x0000000002eaa490, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CEconStyleInfo, ~CExpressionCalculator, ~CUtlHashtable, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, operator delete, operator delete [], CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge, CUtlMemory<CUtlString, int>::Purge
void __fastcall CEconStyleInfo::~CEconStyleInfo(CEconStyleInfo *const this)
{
  CExpressionCalculator *m_pExpression; // r13
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *m_pVarNames; // r15
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v6; // rdi
  bool v7; // zf
  CExpressionCalculator::Token_t *m_pTokens; // rdi

  this->_vptr_CEconStyleInfo = off_47A80F0;
  m_pExpression = this->m_pExpression;
  if ( m_pExpression != 0 )
  {
    m_pVarNames = m_pExpression->m_pVarNames;
    if ( m_pVarNames != 0 )
    {
      m_Size = m_pVarNames->m_Size;
      for ( i = 8LL * m_pVarNames->m_Size - 8; --m_Size >= 0; i -= 8 )
      {
        v6 = (m_pVarNames->m_Memory.m_pMemory + i);
        if ( v6->m_pString != 0 )
          CUtlString::FreeMemoryBlock(v6);
      }
      v7 = (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_pVarNames->m_Size = 0;
      if ( v7 )
      {
        CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
        if ( (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
      }
      operator delete(m_pVarNames);
    }
    m_pTokens = m_pExpression->m_pTokens;
    if ( m_pTokens != 0 )
      operator delete[](m_pTokens);
    CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(&m_pExpression->m_varValues);
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&m_pExpression->m_varValues.m_table);
    operator delete(m_pExpression);
  }
  this->m_pExpression = 0;
  operator delete(this);
}


// IEconTool::~IEconTool  (line 1074, @0x0000000002ea8810, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall IEconTool::~IEconTool(IEconTool *const this)
{
  this->_vptr_IEconTool = off_47A8E30;
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// IEconTool::~IEconTool  (line 1074, @0x0000000002ea8d50, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall IEconTool::~IEconTool(IEconTool *const this)
{
  this->_vptr_IEconTool = off_47A8E30;
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    operator delete(this);
  }
}


// IEconTool::CanApplyTo  (line 1120, @0x0000000002e4e890, libserver.so)
bool __fastcall IEconTool::CanApplyTo(
        const IEconTool *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  return 1;
}


// IEconTool::RequiresToolEscrowPeriod  (line 1122, @0x0000000002e4e8a0, libserver.so)
bool __fastcall IEconTool::RequiresToolEscrowPeriod(const IEconTool *const this)
{
  return 0;
}


// IEconTool::BFinishInitialization  (line 1126, @0x0000000002e4e8b0, libserver.so)
bool __fastcall IEconTool::BFinishInitialization(IEconTool *const this)
{
  return 1;
}


// IEconTool::CreateEconConsumable  (line 1138, @0x0000000002e4e8c0, libserver.so)
IEconConsumable *__fastcall IEconTool::CreateEconConsumable(const IEconTool *const this)
{
  return 0;
}


// CEconItemDefinition::GetDefinitionIndex  (line 1203, @0x0000000002e4e8d0, libserver.so)
item_definition_index_t __fastcall CEconItemDefinition::GetDefinitionIndex(const CEconItemDefinition *const this)
{
  return this->m_nDefIndex.m_Data;
}


// CEconItemDefinition::GetPrefabName  (line 1205, @0x0000000002e52f00, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemDefinition::GetPrefabName(const CEconItemDefinition *const this)
{
  return this->m_symPrefab.u.m_pAsString;
}


// CEconItemDefinition::GetDefinitionName  (line 1208, @0x0000000002ea6a80, libserver.so)  // inlines: GetWithNull, String
// callers: CEconItemDefinition::BInitFromKVOverride
const char *__fastcall CEconItemDefinition::GetDefinitionName(const CEconItemDefinition *const this)
{
  return this->m_symDefinitionName.u.m_pAsString;
}


// CEconItemDefinition::GetItemBaseName  (line 1211, @0x0000000002e52ec0, libserver.so)  // inlines: Get, String
const char *__fastcall CEconItemDefinition::GetItemBaseName(const CEconItemDefinition *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_symItemBaseName.u.m_Id != 0 )
    return this->m_symItemBaseName.u.m_pAsString;
  return result;
}


// CEconItemDefinition::GetItemTypeName  (line 1213, @0x0000000002e52ee0, libserver.so)  // inlines: Get, String
const char *__fastcall CEconItemDefinition::GetItemTypeName(const CEconItemDefinition *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_symItemTypeName.u.m_Id != 0 )
    return this->m_symItemTypeName.u.m_pAsString;
  return result;
}


// CEconItemDefinition::GetRarity  (line 1216, @0x0000000002e4e8e0, libserver.so)
uint8 __fastcall CEconItemDefinition::GetRarity(const CEconItemDefinition *const this)
{
  return this->m_nItemRarity;
}


// CEconItemDefinition::GetSlotTypeName  (line 1218, @0x0000000002ea18d0, libserver.so)
const char *__fastcall CEconItemDefinition::GetSlotTypeName(const CEconItemDefinition *const this)
{
  return "";
}


// CEconItemDefinition::IsBaseItem  (line 1231, @0x0000000002e4e8f0, libserver.so)
bool __fastcall CEconItemDefinition::IsBaseItem(const CEconItemDefinition *const this)
{
  return (*(this + 272) & 8) != 0;
}


// CEconItemDefinition::IsBundle  (line 1232, @0x0000000002e4e910, libserver.so)
bool __fastcall CEconItemDefinition::IsBundle(const CEconItemDefinition *const this)
{
  return this->m_BundleInfo != 0;
}


// CEconItemDefinition::GetLoadoutSlot  (line 1252, @0x0000000002ea18e0, libserver.so)
int __fastcall CEconItemDefinition::GetLoadoutSlot(const CEconItemDefinition *const this)
{
  return 0;
}


// CEconItemDefinition::GetHeroID  (line 1253, @0x0000000002ea18f0, libserver.so)
int __fastcall CEconItemDefinition::GetHeroID(const CEconItemDefinition *const this)
{
  return 0;
}


// CEconItemDefinition::GetNumItemHeroes  (line 1256, @0x0000000002ea1900, libserver.so)
uint32 __fastcall CEconItemDefinition::GetNumItemHeroes(const CEconItemDefinition *const this)
{
  return 0;
}


// CEconItemDefinition::GetItemHeroID  (line 1257, @0x0000000002ea1910, libserver.so)
int __fastcall CEconItemDefinition::GetItemHeroID(const CEconItemDefinition *const this, uint32 unIndex)
{
  return 0;
}


// CEconItemDefinition::IsPreviewableInStore  (line 1285, @0x0000000002ea1920, libserver.so)
bool __fastcall CEconItemDefinition::IsPreviewableInStore(const CEconItemDefinition *const this)
{
  return 1;
}


// CEconItemDefinition::GetBundleItemCount  (line 1288, @0x0000000002e4e930, libserver.so)
int __fastcall CEconItemDefinition::GetBundleItemCount(const CEconItemDefinition *const this)
{
  bundleinfo_t *m_BundleInfo; // rax

  m_BundleInfo = this->m_BundleInfo;
  if ( m_BundleInfo != 0 )
    return m_BundleInfo->vecItemDefs.m_Size;
  else
    return 0;
}


// CEconItemDefinition::GetBundleItem  (line 1289, @0x0000000002e52d60, libserver.so)  // inlines: operator[]
// globals: INVALID_ITEM_DEF_INDEX
item_definition_index_t __fastcall CEconItemDefinition::GetBundleItem(
        const CEconItemDefinition *const this,
        int iIndex)
{
  bundleinfo_t *m_BundleInfo; // rax
  CEconItemDefinition *v3; // rdi

  m_BundleInfo = this->m_BundleInfo;
  if ( m_BundleInfo == 0 )
    return INVALID_ITEM_DEF_INDEX;
  v3 = m_BundleInfo->vecItemDefs.m_Memory.m_pMemory[iIndex];
  return (*v3->_vptr_IEconItemDefinition)(v3);
}


// CEconItemDefinition::GetInventoryImage  (line 1293, @0x0000000002e52f10, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemDefinition::GetInventoryImage(const CEconItemDefinition *const this)
{
  return this->m_symInventoryImage.u.m_pAsString;
}


// CEconItemDefinition::GetBasePlayerDisplayModelCount  (line 1335, @0x0000000002e4e950, libserver.so)
int __fastcall CEconItemDefinition::GetBasePlayerDisplayModelCount(const CEconItemDefinition *const this)
{
  return this->m_vecBaseDisplayModels.m_Size;
}


// CEconItemDefinition::GetBasePlayerDisplayModel  (line 1339, @0x0000000002e52f40, libserver.so)  // inlines: Get, IsValidIndex, String, operator[]
const char *__fastcall CEconItemDefinition::GetBasePlayerDisplayModel(
        const CEconItemDefinition *const this,
        int iIndex)
{
  const char *result; // rax
  CEconSchemaSymbol *m_pMemory; // rdx
  CEconSchemaSymbol *v4; // rdx

  if ( iIndex < 0 )
  {
    result = 0;
    if ( this->m_vecBaseDisplayModels.m_Size <= 0 )
      return result;
LABEL_4:
    m_pMemory = this->m_vecBaseDisplayModels.m_Memory.m_pMemory;
    result = "";
    if ( m_pMemory->u.m_Id != 0 )
      return m_pMemory->u.m_Id;
    return result;
  }
  if ( iIndex >= this->m_vecBaseDisplayModels.m_Size )
  {
    result = 0;
    if ( this->m_vecBaseDisplayModels.m_Size <= 0 )
      return result;
    goto LABEL_4;
  }
  v4 = &this->m_vecBaseDisplayModels.m_Memory.m_pMemory[iIndex];
  result = "";
  if ( v4->u.m_Id != 0 )
    return v4->u.m_Id;
  return result;
}


// CEconItemDefinition::GetParticleFolder  (line 1351, @0x0000000002e52f20, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemDefinition::GetParticleFolder(const CEconItemDefinition *const this)
{
  return this->m_symParticleFolder.u.m_pAsString;
}


// CEconItemDefinition::GetItemDesc  (line 1352, @0x0000000002e52f30, libserver.so)  // inlines: GetWithNull, String
const char *__fastcall CEconItemDefinition::GetItemDesc(const CEconItemDefinition *const this)
{
  return this->m_symItemDesc.u.m_pAsString;
}


// CEconItemDefinition::IsRecent  (line 1377, @0x0000000002ea1930, libserver.so)
bool __fastcall CEconItemDefinition::IsRecent(const CEconItemDefinition *const this)
{
  return 0;
}


// CEconItemDefinition::IsPublicItem  (line 1403, @0x0000000002e4e960, libserver.so)
bool __fastcall CEconItemDefinition::IsPublicItem(const CEconItemDefinition *const this)
{
  return *(this + 273) >> 7;
}


// CEconItemDefinition::IgnoreInCollectionView  (line 1404, @0x0000000002e4e970, libserver.so)
bool __fastcall CEconItemDefinition::IgnoreInCollectionView(const CEconItemDefinition *const this)
{
  return *(this + 273) & 1;
}


// ISchemaAttributeType::~ISchemaAttributeType  (line 1916, @0x0000000002e4e980, libserver.so)
void __fastcall ISchemaAttributeType::~ISchemaAttributeType(ISchemaAttributeType *const this)
{
  this->_vptr_ISchemaAttributeType = off_479F1D0;
}


// ISchemaAttributeType::~ISchemaAttributeType  (line 1916, @0x0000000002e4fa90, libserver.so)  // inlines: ~ISchemaAttributeType
// calls: operator delete
void __fastcall ISchemaAttributeType::~ISchemaAttributeType(ISchemaAttributeType *const this)
{
  this->_vptr_ISchemaAttributeType = off_479F1D0;
  operator delete(this);
}


// ISchemaAttributeType::BSupportsGameplayModificationAndNetworking  (line 1982, @0x0000000002e4e990, libserver.so)
bool __fastcall ISchemaAttributeType::BSupportsGameplayModificationAndNetworking(
        const ISchemaAttributeType *const this)
{
  return 0;
}


// IDelayedSchemaData::~IDelayedSchemaData  (line 2009, @0x0000000002ea1940, libserver.so)
void __fastcall IDelayedSchemaData::~IDelayedSchemaData(IDelayedSchemaData *const this)
{
  this->_vptr_IDelayedSchemaData = off_47A5DB0;
}


// IDelayedSchemaData::~IDelayedSchemaData  (line 2009, @0x0000000002ea2ea0, libserver.so)  // inlines: ~IDelayedSchemaData
// calls: operator delete
void __fastcall IDelayedSchemaData::~IDelayedSchemaData(IDelayedSchemaData *const this)
{
  this->_vptr_IDelayedSchemaData = off_47A5DB0;
  operator delete(this);
}


// CEconItemSchema::~CEconItemSchema  (line 2031, @0x0000000002e60f60, libserver.so)  // inlines: First, FirstInorder, FreeInts, IsIdxValid, IsValidIndex, LeftChild, Next, NextInorder, Purge, RemoveAll, SetLeftChild, SetRightChild, memset, operator==, operator[], ~CBitVecT, ~CLargeVarBitVec, ~CUtlDict, ~CUtlHashMapLarge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: CEconItemSchema::Reset, CUtlRBTree<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlRBTree<CUtlMap<item_definition_index_t, KeyValues*>::Node_t, short unsigned int, CUtlMap<item_definition_index_t, KeyValues*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t, KeyValues*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t, KeyValues*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlDict<CEconSchemaSymbol, int>::Purge, CUtlRBTree<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlRBTree<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge (56 total)
// callers: CEconItemSchema::~CEconItemSchema, CDOTAItemSchema::~CDOTAItemSchema
void __fastcall CEconItemSchema::~CEconItemSchema(CEconItemSchema *const this)
{
  CUtlDict<CEconItemSetDefinition*,int> *p_m_TestItemSetsCreated; // r14
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v5; // rcx
  int m_Left; // esi
  bool v7; // zf
  int Inorder; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition>*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  int v12; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  UtlRBTreeNode_t<CUtlMap<int,const random_attrib_t*>::Node_t,short unsigned int> *v20; // rdi
  unsigned __int16 v21; // si
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  UtlRBTreeNode_t<CUtlMap<int,const random_attrib_t*>::Node_t,short unsigned int> *v25; // rdi
  int v26; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,AchievementAward_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v27; // rdx
  __int64 v28; // rcx
  int v29; // esi
  unsigned __int16 v30; // si
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,ItemPartner_t>::Node_t,short unsigned int> *v34; // rdi
  unsigned __int16 v35; // si
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,ItemPartner_t>::Node_t,short unsigned int> *v39; // rdi
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t m_Size; // eax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v41; // eax

  this->_vptr_IEconItemSchema = &off_47A8190;
  p_m_TestItemSetsCreated = &this->m_TestItemSetsCreated;
  CEconItemSchema::Reset(this);
  m_Root = this->m_TestItemSetsCreated.m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_TestItemSetsCreated.m_Elements.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v5 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v5].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &p_m_TestItemSetsCreated->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_TestItemSetsCreated.m_Elements.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_TestItemSetsCreated->m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_TestItemSetsCreated->m_Elements.m_Tree);
  if ( (this->m_TestItemSetsCreated.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_TestItemSetsCreated.m_Elements.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<item_definition_index_t,KeyValues *,unsigned short,bool (*)(item_definition_index_t const&,item_definition_index_t const&)>::Node_t,unsigned short,CUtlMap<item_definition_index_t,KeyValues *,unsigned short,bool (*)(item_definition_index_t const&,item_definition_index_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,KeyValues *,unsigned short,bool (*)(item_definition_index_t const&,item_definition_index_t const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_TestItemsCreated.m_Tree);
  if ( (this->m_TestItemsCreated.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,KeyValues *,unsigned short,bool (*)(item_definition_index_t const&,item_definition_index_t const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_TestItemsCreated.m_Tree.m_Elements);
  v7 = (this->m_vecBundles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecBundles.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CEconItemDefinition *,int>::Purge(&this->m_vecBundles.m_Memory);
    if ( (this->m_vecBundles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItemDefinition *,int>::Purge(&this->m_vecBundles.m_Memory);
  }
  CUtlDict<CEconSchemaSymbol,int>::Purge(&this->m_dictArmoryItemDataStrings);
  CUtlRBTree<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictArmoryItemDataStrings.m_Elements.m_Tree);
  if ( (this->m_dictArmoryItemDataStrings.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictArmoryItemDataStrings.m_Elements.m_Tree.m_Elements);
  CUtlDict<CEconSchemaSymbol,int>::Purge(&this->m_dictArmoryAttributeDataStrings);
  CUtlRBTree<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictArmoryAttributeDataStrings.m_Elements.m_Tree);
  if ( (this->m_dictArmoryAttributeDataStrings.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictArmoryAttributeDataStrings.m_Elements.m_Tree.m_Elements);
  CUtlDict<CEconSchemaSymbol,int>::Purge(&this->m_dictArmoryItemClassesDataStrings);
  CUtlRBTree<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictArmoryItemClassesDataStrings.m_Elements.m_Tree);
  if ( (this->m_dictArmoryItemClassesDataStrings.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictArmoryItemClassesDataStrings.m_Elements.m_Tree.m_Elements);
  CUtlDict<CEconSchemaSymbol,int>::Purge(&this->m_dictArmoryItemTypesDataStrings);
  CUtlRBTree<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictArmoryItemTypesDataStrings.m_Elements.m_Tree);
  if ( (this->m_dictArmoryItemTypesDataStrings.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictArmoryItemTypesDataStrings.m_Elements.m_Tree.m_Elements);
  Inorder = this->m_vecItemLevelingData.m_Elements.m_Tree.m_Root;
  if ( Inorder != -1 )
  {
    v9 = this->m_vecItemLevelingData.m_Elements.m_Tree.m_Elements.m_pMemory;
    v10 = Inorder;
    v11 = v9[Inorder].m_Left;
    if ( v11 != -1 )
    {
      while ( 1 )
      {
        v10 = v11;
        if ( v9[v11].m_Left == -1 )
          break;
        v11 = v9[v11].m_Left;
      }
      Inorder = v11;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9[v10].m_Data.key);
      Inorder = CUtlRBTree<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                  &this->m_vecItemLevelingData.m_Elements.m_Tree,
                  Inorder);
      if ( Inorder == -1 )
        break;
      v9 = this->m_vecItemLevelingData.m_Elements.m_Tree.m_Elements.m_pMemory;
      v10 = Inorder;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_vecItemLevelingData.m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_vecItemLevelingData.m_Elements.m_Tree);
  if ( (this->m_vecItemLevelingData.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_vecItemLevelingData.m_Elements.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<item_definition_index_t,item_definition_index_t,unsigned short,bool (*)(item_definition_index_t const&,item_definition_index_t const&)>::Node_t,unsigned short,CUtlMap<item_definition_index_t,item_definition_index_t,unsigned short,bool (*)(item_definition_index_t const&,item_definition_index_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,item_definition_index_t,unsigned short,bool (*)(item_definition_index_t const&,item_definition_index_t const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityMarketDefinitionIndexRemap.m_Tree);
  if ( (this->m_mapCommunityMarketDefinitionIndexRemap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,item_definition_index_t,unsigned short,bool (*)(item_definition_index_t const&,item_definition_index_t const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityMarketDefinitionIndexRemap.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<unsigned int,kill_eater_score_type_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,kill_eater_score_type_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,kill_eater_score_type_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapKillEaterScoreTypes.m_Tree);
  if ( (this->m_mapKillEaterScoreTypes.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,kill_eater_score_type_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapKillEaterScoreTypes.m_Tree.m_Elements);
  v12 = this->m_dictTags.m_Elements.m_Tree.m_Root;
  if ( v12 != -1 )
  {
    v13 = this->m_dictTags.m_Elements.m_Tree.m_Elements.m_pMemory;
    v14 = v12;
    v15 = v13[v12].m_Left;
    if ( v15 != -1 )
    {
      while ( 1 )
      {
        v14 = v15;
        if ( v13[v15].m_Left == -1 )
          break;
        v15 = v13[v15].m_Left;
      }
      v12 = v15;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13[v14].m_Data.key);
      v12 = CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
              &this->m_dictTags.m_Elements.m_Tree,
              v12);
      if ( v12 == -1 )
        break;
      v13 = this->m_dictTags.m_Elements.m_Tree.m_Elements.m_pMemory;
      v14 = v12;
    }
  }
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictTags.m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictTags.m_Elements.m_Tree);
  if ( (this->m_dictTags.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictTags.m_Elements.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<int,CEconSoundMaterialDefinition,int,bool (*)(int const&,int const&)>::Node_t,int,CUtlMap<int,CEconSoundMaterialDefinition,int,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconSoundMaterialDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>>::RemoveAll(&this->m_mapSoundMaterials.m_Tree);
  v7 = (this->m_mapSoundMaterials.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapSoundMaterials.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconSoundMaterialDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>::Purge(&this->m_mapSoundMaterials.m_Tree.m_Elements);
    v7 = (this->m_mapSoundMaterials.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapSoundMaterials.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconSoundMaterialDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>::Purge(&this->m_mapSoundMaterials.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapSoundMaterials.m_Tree.m_LastAlloc.index = -1;
  }
  v7 = (this->m_vecColorDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecColorDefs.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CEconColorDefinition *,int>::Purge(&this->m_vecColorDefs.m_Memory);
    if ( (this->m_vecColorDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconColorDefinition *,int>::Purge(&this->m_vecColorDefs.m_Memory);
  }
  CUtlRBTree<CUtlMap<CEconSchemaSymbol,KeyValues *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int,CUtlMap<CEconSchemaSymbol,KeyValues *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,KeyValues *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int>,int>>::RemoveAll(&this->m_mapDefinitionPrefabs.m_Tree);
  v7 = (this->m_mapDefinitionPrefabs.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapDefinitionPrefabs.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,KeyValues *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int>,int>::Purge(&this->m_mapDefinitionPrefabs.m_Tree.m_Elements);
    v7 = (this->m_mapDefinitionPrefabs.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapDefinitionPrefabs.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,KeyValues *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int>,int>::Purge(&this->m_mapDefinitionPrefabs.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapDefinitionPrefabs.m_Tree.m_LastAlloc.index = -1;
  }
  index = this->m_mapRandomGems_ItemSlot.m_Tree.m_LastAlloc.index;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = this->m_mapRandomGems_ItemSlot.m_Tree.m_Elements.m_nAllocationCount;
    v18 = 0;
    v19 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v19 < m_nAllocationCount && v19 <= index )
        {
          v20 = &this->m_mapRandomGems_ItemSlot.m_Tree.m_Elements.m_pMemory[v18];
          if ( v20->m_Left != v19 )
          {
            v20->m_Right = this->m_mapRandomGems_ItemSlot.m_Tree.m_FirstFree;
            this->m_mapRandomGems_ItemSlot.m_Tree.m_Elements.m_pMemory[v18].m_Left = v19;
            index = this->m_mapRandomGems_ItemSlot.m_Tree.m_LastAlloc.index;
            this->m_mapRandomGems_ItemSlot.m_Tree.m_FirstFree = v19;
          }
        }
        if ( v19 == index )
          break;
        m_nAllocationCount = this->m_mapRandomGems_ItemSlot.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v19 + 1) >= m_nAllocationCount )
          break;
        ++v19;
        ++v18;
      }
      while ( v19 != 0xFFFF );
    }
    this->m_mapRandomGems_ItemSlot.m_Tree.m_Root = -1;
    this->m_mapRandomGems_ItemSlot.m_Tree.m_NumElements = 0;
  }
  v7 = (this->m_mapRandomGems_ItemSlot.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapRandomGems_ItemSlot.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,random_attrib_t const*,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapRandomGems_ItemSlot.m_Tree.m_Elements);
    v7 = (this->m_mapRandomGems_ItemSlot.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapRandomGems_ItemSlot.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,random_attrib_t const*,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapRandomGems_ItemSlot.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapRandomGems_ItemSlot.m_Tree.m_LastAlloc.index = -1;
  }
  v21 = this->m_mapRandomGems.m_Tree.m_LastAlloc.index;
  if ( v21 != 0xFFFF )
  {
    v22 = this->m_mapRandomGems.m_Tree.m_Elements.m_nAllocationCount;
    v23 = 0;
    v24 = 0;
    if ( v22 > 0 )
    {
      do
      {
        if ( v24 < v22 && v24 <= v21 )
        {
          v25 = &this->m_mapRandomGems.m_Tree.m_Elements.m_pMemory[v23];
          if ( v25->m_Left != v24 )
          {
            v25->m_Right = this->m_mapRandomGems.m_Tree.m_FirstFree;
            this->m_mapRandomGems.m_Tree.m_Elements.m_pMemory[v23].m_Left = v24;
            v21 = this->m_mapRandomGems.m_Tree.m_LastAlloc.index;
            this->m_mapRandomGems.m_Tree.m_FirstFree = v24;
          }
        }
        if ( v24 == v21 )
          break;
        v22 = this->m_mapRandomGems.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v24 + 1) >= v22 )
          break;
        ++v24;
        ++v23;
      }
      while ( v24 != 0xFFFF );
    }
    this->m_mapRandomGems.m_Tree.m_Root = -1;
    this->m_mapRandomGems.m_Tree.m_NumElements = 0;
  }
  v7 = (this->m_mapRandomGems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapRandomGems.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,random_attrib_t const*,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapRandomGems.m_Tree.m_Elements);
    this->m_mapRandomGems.m_Tree.m_LastAlloc.index = -1;
    if ( (this->m_mapRandomGems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,random_attrib_t const*,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapRandomGems.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapRandomGems.m_Tree.m_LastAlloc.index = -1;
  }
  v7 = (this->m_vecEquipRegionsList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecEquipRegionsList.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CEconItemSchema::EquipRegion,int>::Purge(&this->m_vecEquipRegionsList.m_Memory);
    if ( (this->m_vecEquipRegionsList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItemSchema::EquipRegion,int>::Purge(&this->m_vecEquipRegionsList.m_Memory);
  }
  CUtlRBTree<CUtlMap<int,attachedparticlesystem_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,attachedparticlesystem_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,attachedparticlesystem_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_mapAttributeControlledParticleSystems.m_Tree);
  v7 = (this->m_mapAttributeControlledParticleSystems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapAttributeControlledParticleSystems.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,attachedparticlesystem_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapAttributeControlledParticleSystems.m_Tree.m_Elements);
    v7 = (this->m_mapAttributeControlledParticleSystems.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapAttributeControlledParticleSystems.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,attachedparticlesystem_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapAttributeControlledParticleSystems.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapAttributeControlledParticleSystems.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<unsigned int,AchievementAward_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,AchievementAward_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,AchievementAward_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapAchievementRewardsByData.m_Tree);
  if ( (this->m_mapAchievementRewardsByData.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,AchievementAward_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapAchievementRewardsByData.m_Tree.m_Elements);
  v26 = this->m_dictAchievementRewards.m_Elements.m_Tree.m_Root;
  if ( v26 != -1 )
  {
    v27 = this->m_dictAchievementRewards.m_Elements.m_Tree.m_Elements.m_pMemory;
    v28 = v26;
    v29 = v27[v26].m_Left;
    if ( v29 != -1 )
    {
      while ( 1 )
      {
        v28 = v29;
        if ( v27[v29].m_Left == -1 )
          break;
        v29 = v27[v29].m_Left;
      }
      v26 = v29;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v27[v28].m_Data.key);
      v26 = CUtlRBTree<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
              &this->m_dictAchievementRewards.m_Elements.m_Tree,
              v26);
      if ( v26 == -1 )
        break;
      v27 = this->m_dictAchievementRewards.m_Elements.m_Tree.m_Elements.m_pMemory;
      v28 = v26;
    }
  }
  CUtlRBTree<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictAchievementRewards.m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictAchievementRewards.m_Elements.m_Tree);
  if ( (this->m_dictAchievementRewards.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictAchievementRewards.m_Elements.m_Tree.m_Elements);
  v7 = (this->m_vecTimedRewards.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecTimedRewards.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CTimedItemRewardDefinition,int>::Purge(&this->m_vecTimedRewards.m_Memory);
    if ( (this->m_vecTimedRewards.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CTimedItemRewardDefinition,int>::Purge(&this->m_vecTimedRewards.m_Memory);
  }
  CUtlDict<CEconLootListDefinition,int>::Purge(&this->m_dictLootLists);
  CUtlRBTree<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictLootLists.m_Elements.m_Tree);
  if ( (this->m_dictLootLists.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictLootLists.m_Elements.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int,CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int>,int>>::RemoveAll(&this->m_mapItemSets.m_Tree);
  v7 = (this->m_mapItemSets.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapItemSets.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int>,int>::Purge(&this->m_mapItemSets.m_Tree.m_Elements);
    v7 = (this->m_mapItemSets.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapItemSets.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int>,int>::Purge(&this->m_mapItemSets.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapItemSets.m_Tree.m_LastAlloc.index = -1;
  }
  v30 = this->m_mapPartnerTeams.m_Tree.m_LastAlloc.index;
  if ( v30 != 0xFFFF )
  {
    v31 = this->m_mapPartnerTeams.m_Tree.m_Elements.m_nAllocationCount;
    v32 = 0;
    v33 = 0;
    if ( v31 > 0 )
    {
      do
      {
        if ( v33 < v31 && v33 <= v30 )
        {
          v34 = &this->m_mapPartnerTeams.m_Tree.m_Elements.m_pMemory[v32];
          if ( v33 != v34->m_Left )
          {
            v34->m_Right = this->m_mapPartnerTeams.m_Tree.m_FirstFree;
            this->m_mapPartnerTeams.m_Tree.m_Elements.m_pMemory[v32].m_Left = v33;
            v30 = this->m_mapPartnerTeams.m_Tree.m_LastAlloc.index;
            this->m_mapPartnerTeams.m_Tree.m_FirstFree = v33;
          }
        }
        if ( v33 == v30 )
          break;
        v31 = this->m_mapPartnerTeams.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v33 + 1) >= v31 )
          break;
        ++v33;
        ++v32;
      }
      while ( v33 != 0xFFFF );
    }
    this->m_mapPartnerTeams.m_Tree.m_Root = -1;
    this->m_mapPartnerTeams.m_Tree.m_NumElements = 0;
  }
  v7 = (this->m_mapPartnerTeams.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPartnerTeams.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,ItemPartner_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapPartnerTeams.m_Tree.m_Elements);
    v7 = (this->m_mapPartnerTeams.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapPartnerTeams.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,ItemPartner_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapPartnerTeams.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapPartnerTeams.m_Tree.m_LastAlloc.index = -1;
  }
  v35 = this->m_mapPartnerCorporations.m_Tree.m_LastAlloc.index;
  if ( v35 != 0xFFFF )
  {
    v36 = this->m_mapPartnerCorporations.m_Tree.m_Elements.m_nAllocationCount;
    v37 = 0;
    v38 = 0;
    if ( v36 > 0 )
    {
      do
      {
        if ( v38 < v36 && v38 <= v35 )
        {
          v39 = &this->m_mapPartnerCorporations.m_Tree.m_Elements.m_pMemory[v37];
          if ( v38 != v39->m_Left )
          {
            v39->m_Right = this->m_mapPartnerCorporations.m_Tree.m_FirstFree;
            this->m_mapPartnerCorporations.m_Tree.m_Elements.m_pMemory[v37].m_Left = v38;
            v35 = this->m_mapPartnerCorporations.m_Tree.m_LastAlloc.index;
            this->m_mapPartnerCorporations.m_Tree.m_FirstFree = v38;
          }
        }
        if ( v38 == v35 )
          break;
        v36 = this->m_mapPartnerCorporations.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v38 + 1) >= v36 )
          break;
        ++v38;
        ++v37;
      }
      while ( v38 != 0xFFFF );
    }
    this->m_mapPartnerCorporations.m_Tree.m_Root = -1;
    this->m_mapPartnerCorporations.m_Tree.m_NumElements = 0;
  }
  v7 = (this->m_mapPartnerCorporations.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPartnerCorporations.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,ItemPartner_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapPartnerCorporations.m_Tree.m_Elements);
    v7 = (this->m_mapPartnerCorporations.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapPartnerCorporations.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,ItemPartner_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapPartnerCorporations.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapPartnerCorporations.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<int,AssetModifier_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,AssetModifier_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,AssetModifier_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_mapAssetModifiers.m_Tree);
  v7 = (this->m_mapAssetModifiers.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapAssetModifiers.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,AssetModifier_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapAssetModifiers.m_Tree.m_Elements);
    v7 = (this->m_mapAssetModifiers.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapAssetModifiers.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,AssetModifier_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapAssetModifiers.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapAssetModifiers.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<int,CEconItemAttributeDefinition,int,bool (*)(int const&,int const&)>::Node_t,int,CUtlMap<int,CEconItemAttributeDefinition,int,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconItemAttributeDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>>::Purge(&this->m_mapAttributes.m_Tree);
  if ( (this->m_mapAttributes.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconItemAttributeDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>::Purge(&this->m_mapAttributes.m_Tree.m_Elements);
  m_Size = this->m_mapNameToItem.m_vecHashBuckets.m_Size;
  this->m_mapNameToItem.m_cElements = 0;
  this->m_mapNameToItem.m_nMaxElement = 0;
  this->m_mapNameToItem.m_iNodeFreeListHead = -1;
  this->m_mapNameToItem.m_nMinRehashedBucket = m_Size;
  this->m_mapNameToItem.m_nMaxRehashedBucket = -1;
  CVarBitVecBase<int,32>::Resize(&this->m_mapNameToItem.m_bitsMigratedBuckets, 0, 0);
  memset(
    this->m_mapNameToItem.m_vecHashBuckets.m_Memory.m_pMemory,
    255,
    4LL * this->m_mapNameToItem.m_vecHashBuckets.m_Size);
  if ( (this->m_mapNameToItem.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_mapNameToItem.m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_mapNameToItem.m_memNodes.m_pMemory = 0;
    }
    this->m_mapNameToItem.m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_mapNameToItem.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_mapNameToItem.m_bitsMigratedBuckets.m_pInt);
  v7 = (this->m_mapNameToItem.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapNameToItem.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_mapNameToItem.m_vecHashBuckets.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::HashBucket_t,int>::Purge(&this->m_mapNameToItem.m_vecHashBuckets.m_Memory);
    if ( (this->m_mapNameToItem.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::HashBucket_t,int>::Purge(&this->m_mapNameToItem.m_vecHashBuckets.m_Memory);
  }
  CUtlRBTree<CUtlMap<int,autograph_t,int,bool (*)(int const&,int const&)>::Node_t,int,CUtlMap<int,autograph_t,int,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,autograph_t,int,bool (*)(int const&,int const&)>::Node_t,int>,int>>::RemoveAll(&this->m_mapAutographs.m_Tree);
  v7 = (this->m_mapAutographs.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapAutographs.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,autograph_t,int,bool (*)(int const&,int const&)>::Node_t,int>,int>::Purge(&this->m_mapAutographs.m_Tree.m_Elements);
    v7 = (this->m_mapAutographs.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapAutographs.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,autograph_t,int,bool (*)(int const&,int const&)>::Node_t,int>,int>::Purge(&this->m_mapAutographs.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapAutographs.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<int,CEconItemQualityDefinition,int,bool (*)(int const&,int const&)>::Node_t,int,CUtlMap<int,CEconItemQualityDefinition,int,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconItemQualityDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>>::RemoveAll(&this->m_mapQualities.m_Tree);
  v7 = (this->m_mapQualities.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapQualities.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconItemQualityDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>::Purge(&this->m_mapQualities.m_Tree.m_Elements);
    v7 = (this->m_mapQualities.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapQualities.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconItemQualityDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>::Purge(&this->m_mapQualities.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapQualities.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<int,CEconItemRarityDefinition,int,bool (*)(int const&,int const&)>::Node_t,int,CUtlMap<int,CEconItemRarityDefinition,int,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconItemRarityDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>>::RemoveAll(&this->m_mapRarities.m_Tree);
  v7 = (this->m_mapRarities.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapRarities.m_Tree.m_FirstFree = -1;
  if ( v7 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconItemRarityDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>::Purge(&this->m_mapRarities.m_Tree.m_Elements);
    v7 = (this->m_mapRarities.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapRarities.m_Tree.m_LastAlloc.index = -1;
    if ( v7 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CEconItemRarityDefinition,int,bool (*)(int const&,int const&)>::Node_t,int>,int>::Purge(&this->m_mapRarities.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapRarities.m_Tree.m_LastAlloc.index = -1;
  }
  v41 = this->m_mapItems.m_vecHashBuckets.m_Size;
  this->m_mapItems.m_cElements = 0;
  this->m_mapItems.m_nMaxElement = 0;
  this->m_mapItems.m_iNodeFreeListHead = -1;
  this->m_mapItems.m_nMinRehashedBucket = v41;
  this->m_mapItems.m_nMaxRehashedBucket = -1;
  CVarBitVecBase<int,32>::Resize(&this->m_mapItems.m_bitsMigratedBuckets, 0, 0);
  memset(this->m_mapItems.m_vecHashBuckets.m_Memory.m_pMemory, 255, 4LL * this->m_mapItems.m_vecHashBuckets.m_Size);
  if ( (this->m_mapItems.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_mapItems.m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_mapItems.m_memNodes.m_pMemory = 0;
    }
    this->m_mapItems.m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_mapItems.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_mapItems.m_bitsMigratedBuckets.m_pInt);
  v7 = (this->m_mapItems.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapItems.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_mapItems.m_vecHashBuckets.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_mapItems.m_vecHashBuckets.m_Memory);
    if ( (this->m_mapItems.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_mapItems.m_vecHashBuckets.m_Memory);
  }
  v7 = (this->m_vecAttributeTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecAttributeTypes.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<attr_type_t,int>::Purge(&this->m_vecAttributeTypes.m_Memory);
    if ( (this->m_vecAttributeTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<attr_type_t,int>::Purge(&this->m_vecAttributeTypes.m_Memory);
  }
}


// CEconItemSchema::~CEconItemSchema  (line 2031, @0x0000000002e61ef0, libserver.so)
// calls: CEconItemSchema::~CEconItemSchema, operator delete
void __fastcall CEconItemSchema::~CEconItemSchema(CEconItemSchema *const this)
{
  CEconItemSchema::~CEconItemSchema(this);
  operator delete(this);
}


// CEconItemSchema::GetDefaultItemDefinitionInterface  (line 2079, @0x0000000002e4e9a0, libserver.so)
IEconItemDefinition *__fastcall CEconItemSchema::GetDefaultItemDefinitionInterface(CEconItemSchema *const this)
{
  return this->m_pDefaultItemDefinition;
}


// CEconItemSchema::PurgeLootLists  (line 2117, @0x0000000002e5df60, libserver.so)
// calls: CUtlDict<CEconLootListDefinition, int>::Purge
void __fastcall CEconItemSchema::PurgeLootLists(CEconItemSchema *const this)
{
  CUtlDict<CEconLootListDefinition,int>::Purge(&this->m_dictLootLists);
}


// CEconItemSchema::GetLootListInterfaceByName  (line 2118, @0x0000000002e50220, libserver.so)
// calls: CEconItemSchema::GetLootListByName
const IEconLootListDefinition *__fastcall CEconItemSchema::GetLootListInterfaceByName(
        CEconItemSchema *const this,
        const char *pListName,
        int *out_piIndex)
{
  return CEconItemSchema::GetLootListByName(this, pListName, out_piIndex);
}


// CEconItemSchema::GetLootListInterfaceByIndex  (line 2119, @0x0000000002e53290, libserver.so)  // inlines: GetLootListByIndex, IsIdxValid, IsValidIndex, LeftChild, operator[]
const IEconLootListDefinition *__fastcall CEconItemSchema::GetLootListInterfaceByIndex(
        const CEconItemSchema *const this,
        int iIdx)
{
  const IEconLootListDefinition *result; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v3; // rdx

  result = 0;
  if ( iIdx >= 0LL
    && iIdx < this->m_dictLootLists.m_Elements.m_Tree.m_Elements.m_nAllocationCount
    && iIdx <= this->m_dictLootLists.m_Elements.m_Tree.m_LastAlloc.index
    && iIdx != -1 )
  {
    v3 = &this->m_dictLootLists.m_Elements.m_Tree.m_Elements.m_pMemory[iIdx];
    if ( iIdx != v3->m_Left )
      return &v3->m_Data.elem;
  }
  return result;
}


// CEconItemSchema::GetLootListIndex  (line 2120, @0x0000000002e50230, libserver.so)  // inlines: Element, Find, LeftChild, Node_t, RightChild, operator(), operator[], ~Node_t
// calls: CEconLootListDefinition::CEconLootListDefinition, CEconLootListDefinition::~CEconLootListDefinition, _Unwind_Resume
int __fastcall CEconItemSchema::GetLootListIndex(CEconItemSchema *const this, const char *pListName)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  unsigned __int64 v6; // r15
  const char *v8; // [rsp+0h] [rbp-100h] BYREF
  CEconLootListDefinition v9; // [rsp+8h] [rbp-F8h] BYREF

  if ( pListName == 0 )
    return -1;
  CEconLootListDefinition::CEconLootListDefinition(&v9);
  v8 = pListName;
  m_Root = this->m_dictLootLists.m_Elements.m_Tree.m_Root;
  if ( m_Root == -1 )
  {
LABEL_8:
    m_Root = -1;
  }
  else
  {
    m_pMemory = this->m_dictLootLists.m_Elements.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = m_Root;
        if ( !this->m_dictLootLists.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v8, &m_pMemory[v6].m_Data) )
          break;
        m_pMemory = this->m_dictLootLists.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == -1 )
          goto LABEL_8;
      }
      if ( !this->m_dictLootLists.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_dictLootLists.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data,
              &v8) )
        break;
      m_pMemory = this->m_dictLootLists.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v6].m_Right;
      if ( m_Root == -1 )
        goto LABEL_8;
    }
  }
  CEconLootListDefinition::~CEconLootListDefinition(&v9);
  return m_Root;
}


// CEconItemSchema::GetLootListInterfaceCount  (line 2121, @0x0000000002e4e9b0, libserver.so)
int __fastcall CEconItemSchema::GetLootListInterfaceCount(const CEconItemSchema *const this)
{
  return this->m_dictLootLists.m_Elements.m_Tree.m_NumElements;
}


// CEconItemSchema::GetItemSetCount  (line 2123, @0x0000000002e4e9c0, libserver.so)
int __fastcall CEconItemSchema::GetItemSetCount(const CEconItemSchema *const this)
{
  return this->m_mapItemSets.m_Tree.m_NumElements;
}


// CEconItemSchema::GetQualityDefinitionCount  (line 2156, @0x0000000002e4e9d0, libserver.so)
int __fastcall CEconItemSchema::GetQualityDefinitionCount(CEconItemSchema *const this)
{
  return this->m_mapQualities.m_Tree.m_NumElements;
}


// CEconItemSchema::GetRarityDefinitionCount  (line 2162, @0x0000000002e4e9e0, libserver.so)
int __fastcall CEconItemSchema::GetRarityDefinitionCount(CEconItemSchema *const this)
{
  return this->m_mapRarities.m_Tree.m_NumElements;
}


// CEconItemSchema::GetAttributeDefinitionInterface  (line 2172, @0x0000000002e50330, libserver.so)
// calls: CEconItemSchema::GetAttributeDefinition
const IEconItemAttributeDefinition *__fastcall CEconItemSchema::GetAttributeDefinitionInterface(
        const CEconItemSchema *const this,
        int iAttribIndex)
{
  return CEconItemSchema::GetAttributeDefinition(this, iAttribIndex);
}


// CEconItemSchema::GetToolType  (line 2176, @0x0000000002ea1950, libserver.so)
int __fastcall CEconItemSchema::GetToolType(const CEconItemSchema *const this, const char *pszToolType)
{
  return -1;
}


// CEconItemSchema::GetNumPrefabs  (line 2177, @0x0000000002e4e9f0, libserver.so)
int __fastcall CEconItemSchema::GetNumPrefabs(CEconItemSchema *const this)
{
  return this->m_mapDefinitionPrefabs.m_Tree.m_NumElements;
}


// CEconItemSchema::GetPrefabName  (line 2178, @0x0000000002e52fb0, libserver.so)  // inlines: Element, Get, Key, String, operator[]
const char *__fastcall CEconItemSchema::GetPrefabName(CEconItemSchema *const this, int idx)
{
  const char *result; // rax

  result = "";
  if ( this->m_mapDefinitionPrefabs.m_Tree.m_Elements.m_pMemory[idx].m_Data.key.u.m_Id != 0 )
    return this->m_mapDefinitionPrefabs.m_Tree.m_Elements.m_pMemory[idx].m_Data.key.u.m_pAsString;
  return result;
}


// CEconItemSchema::GetSoundMaterialCount  (line 2186, @0x0000000002e4ea00, libserver.so)
int __fastcall CEconItemSchema::GetSoundMaterialCount(CEconItemSchema *const this)
{
  return this->m_mapSoundMaterials.m_Tree.m_NumElements;
}


// CEconItemSchema::GetHeroID  (line 2202, @0x0000000002ea1960, libserver.so)
uint32 __fastcall CEconItemSchema::GetHeroID(CEconItemSchema *const this, const char *pszHeroName)
{
  return 0;
}


// CEconItemSchema::GetLoadoutSlotCount  (line 2204, @0x0000000002ea1970, libserver.so)
int __fastcall CEconItemSchema::GetLoadoutSlotCount(CEconItemSchema *const this)
{
  return 0;
}


// CEconItemSchema::GetLoadoutSlotName  (line 2205, @0x0000000002ea1980, libserver.so)
const char *__fastcall CEconItemSchema::GetLoadoutSlotName(CEconItemSchema *const this, int iSlot)
{
  return 0;
}


// CEconItemSchema::GetLoadoutSlot  (line 2206, @0x0000000002ea1990, libserver.so)
int __fastcall CEconItemSchema::GetLoadoutSlot(CEconItemSchema *const this, const char *pszSlotName)
{
  return 0;
}


// CEconItemSchema::GetNumAttributeControlledParticleSystems  (line 2226, @0x0000000002e4ea10, libserver.so)
int __fastcall CEconItemSchema::GetNumAttributeControlledParticleSystems(const CEconItemSchema *const this)
{
  return this->m_mapAttributeControlledParticleSystems.m_Tree.m_NumElements;
}


// CEconItemSchema::CreateEconItemDefinition  (line 2298, @0x0000000002ea6af0, libserver.so)
// calls: operator new, CEconItemDefinition::CEconItemDefinition
CEconItemDefinition *__fastcall CEconItemSchema::CreateEconItemDefinition(CEconItemSchema *const this)
{
  CEconItemDefinition *v1; // rbx

  v1 = operator new(0x190u);
  CEconItemDefinition::CEconItemDefinition(v1);
  return v1;
}


// CEconItemSchema::DeleteEconItemDefinition  (line 2299, @0x0000000002ea19a0, libserver.so)
void __fastcall CEconItemSchema::DeleteEconItemDefinition(CEconItemSchema *const this, CEconItemDefinition *pItemDef)
{
  if ( pItemDef != 0 )
    (*(pItemDef->_vptr_IEconItemDefinition + 22))(pItemDef);
}


// CEconItemSchema::CreateEconStyleInfo  (line 2300, @0x0000000002e52fe0, libserver.so)  // inlines: CEconSchemaSymbol, CEconStyleInfo, CUtlSymbolLarge, item_definition_index_t, style_unlock_info
// calls: operator new, CEconSchemaSymbol::operator=, operator delete, _Unwind_Resume
// globals: INVALID_ITEM_DEF_INDEX
CEconStyleInfo *__fastcall CEconItemSchema::CreateEconStyleInfo(CEconItemSchema *const this)
{
  CEconStyleInfo *v1; // rbx
  uint16 m_Data; // ax
  uint16 v3; // ax

  v1 = operator new(0x78u);
  v1->m_symName.u.m_Id = 0;
  v1->m_symBasePlayerModel.u.m_Id = 0;
  v1->m_symAutoStyleReason.u.m_Id = 0;
  v1->m_UnlockInfo.pszAttrib.u.m_Id = 0;
  v1->_vptr_CEconStyleInfo = off_47A80F0;
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  v1->m_UnlockInfo.iGemDefIndex.m_Data = 0;
  v1->m_UnlockInfo.pszGemTypeField.u.m_Id = 0;
  v1->m_UnlockInfo.pszGemUnlockField.u.m_Id = 0;
  v1->m_UnlockInfo.m_unItemIndex.m_Data = m_Data;
  CEconSchemaSymbol::operator=(&v1->m_UnlockInfo.pszAttrib, 0);
  CEconSchemaSymbol::operator=(&v1->m_UnlockInfo.pszGemTypeField, 0);
  CEconSchemaSymbol::operator=(&v1->m_UnlockInfo.pszGemUnlockField, 0);
  v1->m_UnlockInfo.unGemTypeValue = 0;
  v1->m_UnlockInfo.unGemUnlockValue = 0;
  v1->m_iIndex = 0;
  v1->m_iSkin = 0;
  v1->m_iIcon = 0;
  v1->m_pExpression = 0;
  CEconSchemaSymbol::operator=(&v1->m_symName, 0);
  CEconSchemaSymbol::operator=(&v1->m_symBasePlayerModel, 0);
  v3 = INVALID_ITEM_DEF_INDEX.m_Data;
  v1->m_UnlockInfo.iPrice = 0;
  v1->m_UnlockInfo.iStylePreReq = 0;
  v1->m_UnlockInfo.m_unItemIndex.m_Data = v3;
  CEconSchemaSymbol::operator=(&v1->m_UnlockInfo.pszAttrib, 0);
  v1->m_UnlockInfo.iAttribValue = 0;
  v1->m_flFlyingScale = 0.0;
  return v1;
}


// CEconItemSchema::DeleteEconStyleInfo  (line 2301, @0x0000000002e4ea20, libserver.so)
void __fastcall CEconItemSchema::DeleteEconStyleInfo(CEconItemSchema *const this, CEconStyleInfo *pStyleInfo)
{
  if ( pStyleInfo != 0 )
    (*(pStyleInfo->_vptr_CEconStyleInfo + 1))(pStyleInfo);
}


// CEconItemSchema::GetItemDefinitionCount  (line 2304, @0x0000000002e4ea50, libserver.so)
int __fastcall CEconItemSchema::GetItemDefinitionCount(CEconItemSchema *const this)
{
  return this->m_mapItems.m_cElements;
}


// CEconItemSchema::OnTestItemDefinitionAdded  (line 2306, @0x0000000002ea19d0, libserver.so)
void __fastcall CEconItemSchema::OnTestItemDefinitionAdded(
        CEconItemSchema *const this,
        item_definition_index_t unDefIndex)
{
  ;
}


// CEconItemSchema::OnTestItemDefinitionRemoved  (line 2307, @0x0000000002ea19e0, libserver.so)
void __fastcall CEconItemSchema::OnTestItemDefinitionRemoved(
        CEconItemSchema *const this,
        item_definition_index_t unDefIndex)
{
  ;
}


// CEconItemSchema::OnTestItemSetAdded  (line 2308, @0x0000000002ea19f0, libserver.so)
void __fastcall CEconItemSchema::OnTestItemSetAdded(CEconItemSchema *const this, const char *pItemSetName)
{
  ;
}


// CEconItemSchema::OnTestItemSetRemoved  (line 2309, @0x0000000002ea1a00, libserver.so)
void __fastcall CEconItemSchema::OnTestItemSetRemoved(CEconItemSchema *const this, const char *pItemSetName)
{
  ;
}


// CEconItemSchema::GetItemDefinitionInterface  (line 2318, @0x0000000002e50340, libserver.so)
// calls: CEconItemSchema::GetItemDefinitionMutable
IEconItemDefinition *__fastcall CEconItemSchema::GetItemDefinitionInterface(
        CEconItemSchema *const this,
        item_definition_index_t iDefIndex)
{
  item_definition_index_t v3; // [rsp+10h] [rbp+10h]

  return CEconItemSchema::GetItemDefinitionMutable(this, v3, 1);
}


// CEconItemSchema::GetItemDefinitionInterfaceByMapIndex  (line 2319, @0x0000000002e50350, libserver.so)
// calls: CEconItemSchema::GetItemDefinitionByMapIndex
const IEconItemDefinition *__fastcall CEconItemSchema::GetItemDefinitionInterfaceByMapIndex(
        CEconItemSchema *const this,
        int iMapIndex)
{
  return CEconItemSchema::GetItemDefinitionByMapIndex(this, iMapIndex);
}


// CEconItemSchema::GetCharacterSlotType  (line 2320, @0x0000000002ea1a10, libserver.so)
int __fastcall CEconItemSchema::GetCharacterSlotType(CEconItemSchema *const this, int iCharacter, int iSlot)
{
  return 0;
}


// CEconItemSchema::GetCharacterID  (line 2321, @0x0000000002ea1a20, libserver.so)
int __fastcall CEconItemSchema::GetCharacterID(CEconItemSchema *const this, const char *pszCharacterName)
{
  return 0;
}


// CEconItemSchema::GetCharacterCount  (line 2322, @0x0000000002ea1a30, libserver.so)
int __fastcall CEconItemSchema::GetCharacterCount(CEconItemSchema *const this)
{
  return 0;
}


// CEconItemSchema::GetCharacterName  (line 2323, @0x0000000002ea1a40, libserver.so)
const char *__fastcall CEconItemSchema::GetCharacterName(CEconItemSchema *const this, int iCharacter)
{
  return 0;
}


// CEconItemSchema::GetCharacterModel  (line 2324, @0x0000000002ea1a50, libserver.so)
const char *__fastcall CEconItemSchema::GetCharacterModel(CEconItemSchema *const this, int iCharacter)
{
  return 0;
}


// CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle  (line 2538, @0x00000000024a4260, libserver.so)  // inlines: GetTypedRef
// calls: GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName
// callers: CDOTA_BaseNPC::ApplyWearableModifiers, CDOTAItemSchema::GetCourierItemInSlot, CEconTool_UnusualPaint::CanApplyTo, CEconTool_GemCombiner::CanApplyTo, ComputeItemContainmentDepth_R, CDOTAItemDefinition::HasOrContainsItemForHeroID, CEconTool_Autograph::CanApplyTo, IEconItemInterface::IsMarketable, IEconItemInterface::IsDeletable, IEconItemInterface::IsGiftable
void __fastcall CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
        CSchemaFieldHandle<CEconItemAttributeDefinition> *const this,
        const char *szName)
{
  CEconItemSchema *v4; // rax
  uint32 m_unResetCount; // eax

  this->m_szName = szName;
  v4 = GEconItemSchema();
  this->m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v4, szName);
  m_unResetCount = GEconItemSchema()->m_unResetCount;
  this->m_bDestructName = 0;
  this->m_unSchemaGeneration = m_unResetCount;
}


// CSchemaFieldHandle<CEconColorDefinition>::CSchemaFieldHandle  (line 2538, @0x0000000002e5b360, libserver.so)  // inlines: GetTypedRef
// calls: GEconItemSchema, CEconItemSchema::GetColorDefinitionByName
// callers: __static_initialization_and_destruction_0
void __fastcall CSchemaFieldHandle<CEconColorDefinition>::CSchemaFieldHandle(
        CSchemaFieldHandle<CEconColorDefinition> *const this,
        const char *szName)
{
  CEconItemSchema *v4; // rax
  uint32 m_unResetCount; // eax

  this->m_szName = szName;
  v4 = GEconItemSchema();
  this->m_pRef = CEconItemSchema::GetColorDefinitionByName(v4, szName);
  m_unResetCount = GEconItemSchema()->m_unResetCount;
  this->m_bDestructName = 0;
  this->m_unSchemaGeneration = m_unResetCount;
}


// CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle  (line 2572, @0x000000000249ad80, libserver.so)
void __fastcall CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle(
        CSchemaFieldHandle<CEconItemAttributeDefinition> *const this)
{
  if ( this->m_bDestructName )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_szName);
}


// CSchemaFieldHandle<CEconItemAttributeDefinition>::Get  (line 2633, @0x0000000002ebd570, libserver.so)  // inlines: GEconItemSchema, GetTypedRef
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinitionByName
// callers: IEconItemInterface::IsTradable, IEconItemInterface::IsGiftable
const CEconItemAttributeDefinition *__fastcall CSchemaFieldHandle<CEconItemAttributeDefinition>::Get(
        const CSchemaFieldHandle<CEconItemAttributeDefinition> *const this)
{
  uint32 m_unResetCount; // r12d
  const char *m_szName; // r13
  CEconItemSystem *v4; // rax
  const CEconItemAttributeDefinition *result; // rax

  if ( this->m_szName == 0 )
    return 0;
  m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
  if ( m_unResetCount == this->m_unSchemaGeneration )
    return this->m_pRef;
  m_szName = this->m_szName;
  v4 = ItemSystem();
  result = CEconItemSchema::GetAttributeDefinitionByName(&v4->m_itemSchema, m_szName);
  this->m_unSchemaGeneration = m_unResetCount;
  this->m_pRef = result;
  return result;
}


// CSchemaFieldHandle<IEconItemSetDefinition>::Set  (line 2687, @0x0000000002e5bd90, libserver.so)  // inlines: Clear, GetTypedRef, V_strlen, V_strncpy<int>
// calls: strlen, _V_strncpy, GEconItemSchema
// callers: AddItemToLoadoutList
void __fastcall CSchemaFieldHandle<IEconItemSetDefinition>::Set(
        CSchemaFieldHandle<IEconItemSetDefinition> *const this,
        const IEconItemSetDefinition *pVal)
{
  const char *v4; // rax
  const char *v5; // r12
  int v6; // r13d
  __int64 v7; // rsi
  const char *v8; // rax
  CEconItemSchema *v9; // rax

  if ( this->m_bDestructName )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_szName);
  if ( pVal != 0 )
  {
    v4 = (*pVal->_vptr_IEconItemSetDefinition)(pVal);
    v5 = v4;
    if ( v4 != 0 )
    {
      v6 = strlen(v4) + 1;
      v7 = v6;
    }
    else
    {
      v7 = 1;
      v6 = 1;
    }
    v8 = (**g_pMemAlloc)(g_pMemAlloc, v7);
    this->m_szName = v8;
    _V_strncpy(v8, v5, v6);
    this->m_bDestructName = 1;
    v9 = GEconItemSchema();
    this->m_pRef = (*(v9->_vptr_IEconItemSchema + 30))(v9, this->m_szName);
    this->m_unSchemaGeneration = GEconItemSchema()->m_unResetCount;
  }
  else
  {
    this->m_szName = 0;
    this->m_pRef = 0;
    this->m_bDestructName = 0;
    this->m_unSchemaGeneration = 0;
  }
}


