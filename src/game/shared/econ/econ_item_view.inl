
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAttributeList::Schema_DynamicBinding  (line 96, @0x0000000002ea1a90, libserver.so)
// globals: CAttributeList::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAttributeList::Schema_DynamicBinding(const CAttributeList *const this)
{
  return CAttributeList::s_pSchemaBinding;
}


// CAttributeList::NetworkStateChanged  (line 104, @0x0000000002ea1aa0, libserver.so)
void __fastcall CAttributeList::NetworkStateChanged(CAttributeList *const this)
{
  ;
}


// CAttributeList::NetworkStateChanged  (line 104, @0x0000000002ea1ab0, libserver.so)
void __fastcall CAttributeList::NetworkStateChanged(
        CAttributeList *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CAttributeList::NetworkStateChangedLog  (line 104, @0x0000000002ea1ac0, libserver.so)
void __fastcall CAttributeList::NetworkStateChangedLog(
        const CAttributeList *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CEconItemAttribute::Schema_DynamicBinding  (line 155, @0x0000000002ea1ad0, libserver.so)
// globals: CEconItemAttribute::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEconItemAttribute::Schema_DynamicBinding(
        const CEconItemAttribute *const this)
{
  return CEconItemAttribute::s_pSchemaBinding;
}


// CEconItemView::Schema_DynamicBinding  (line 242, @0x0000000002e50380, libserver.so)
// calls: CEconItemView::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEconItemView::Schema_DynamicBinding(const CEconItemView *const this)
{
  CEconItemView::Schema_VerifyBindingIsRegistered();
  return CEconItemView::s_pSchemaBinding;
}


// CEconItemView::NetworkStateChanged  (line 247, @0x0000000002ea1ae0, libserver.so)
void __fastcall CEconItemView::NetworkStateChanged(CEconItemView *const this)
{
  ;
}


// CEconItemView::NetworkStateChanged  (line 247, @0x0000000002ea1af0, libserver.so)
void __fastcall CEconItemView::NetworkStateChanged(
        CEconItemView *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CEconItemView::NetworkStateChangedLog  (line 247, @0x0000000002ea1b00, libserver.so)
void __fastcall CEconItemView::NetworkStateChangedLog(
        const CEconItemView *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CEconItemView::GetItemDefinition  (line 258, @0x0000000002e503a0, libserver.so)
// calls: CEconItemView::GetStaticData
const GameItemDefinition_t *__fastcall CEconItemView::GetItemDefinition(const CEconItemView *const this)
{
  return CEconItemView::GetStaticData(this);
}


// CEconItemView::GetInUse  (line 275, @0x0000000002e503b0, libserver.so)
// calls: CEconItemView::GetSOCData
bool __fastcall CEconItemView::GetInUse(const CEconItemView *const this)
{
  CEconItem *SOCData; // rax

  if ( CEconItemView::GetSOCData(this) == 0 )
    return 0;
  SOCData = CEconItemView::GetSOCData(this);
  return (*(SOCData->_vptr_CSharedObject + 24))(SOCData);
}


// CEconItemView::GetInventoryToken  (line 276, @0x0000000002e50400, libserver.so)
// calls: CEconItemView::GetSOCData
uint32 __fastcall CEconItemView::GetInventoryToken(const CEconItemView *const this)
{
  CEconItem *SOCData; // rax

  if ( CEconItemView::GetSOCData(this) == 0 )
    return 0;
  SOCData = CEconItemView::GetSOCData(this);
  return (*(SOCData->_vptr_CSharedObject + 16))(SOCData);
}


// CEconItemView::GetItemLevel  (line 324, @0x0000000002e4ebd0, libserver.so)
uint32 __fastcall CEconItemView::GetItemLevel(const CEconItemView *const this)
{
  return this->m_iEntityLevel.m_Value;
}


// CEconItemView::GetItemID  (line 344, @0x0000000002e4ebe0, libserver.so)
itemid_t __fastcall CEconItemView::GetItemID(const CEconItemView *const this)
{
  return this->m_iItemID.m_Value.m_Data;
}


// CEconItemView::GetAccountID  (line 345, @0x0000000002e4ebf0, libserver.so)
uint32 __fastcall CEconItemView::GetAccountID(const CEconItemView *const this)
{
  return this->m_iAccountID.m_Value;
}


// CEconItemView::NetworkVar_m_AttributeList::NetworkStateChanged  (line 483, @0x0000000002ea1b10, libserver.so)  // inlines: DispatchNetworkStateChanged<CEconItemView>
void __fastcall CEconItemView::NetworkVar_m_AttributeList::NetworkStateChanged(
        CEconItemView::NetworkVar_m_AttributeList *const this)
{
  (*(*(this - 11) + 240LL))(this - 1);
}


// CEconItemView::NetworkVar_m_AttributeList::NetworkStateChangedLog  (line 483, @0x0000000002ea1b30, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CEconItemView>
void __fastcall CEconItemView::NetworkVar_m_AttributeList::NetworkStateChangedLog(
        const CEconItemView::NetworkVar_m_AttributeList *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 11) + 256LL))(this - 1, pVarName, pMsg);
}


// CEconItemView::NetworkVar_m_AttributeList::NetworkStateChanged  (line 483, @0x0000000002ea1b50, libserver.so)  // inlines: DispatchNetworkStateChanged<CEconItemView>
void __fastcall CEconItemView::NetworkVar_m_AttributeList::NetworkStateChanged(
        CEconItemView::NetworkVar_m_AttributeList *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 11) + 248LL))(this - 1, nLocalOffset + 88, nArrayIndex, nPathIndex.m_Value);
}


// CEconItemView::NetworkVar_m_AttributeList::~NetworkVar_m_AttributeList  (line 483, @0x0000000002eaea20, libserver.so)  // inlines: Purge, ~CAttributeList, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::RemoveAll, CUtlMemory<CEconItemAttribute, int>::Purge
// callers: CEconItemView::CEconItemView
void __fastcall CEconItemView::NetworkVar_m_AttributeList::~NetworkVar_m_AttributeList(
        CEconItemView::NetworkVar_m_AttributeList *const this)
{
  this->_vptr_CAttributeList = off_47A92B0;
  operator delete(this->m_Attributes.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::RemoveAll(&this->m_Attributes.m_Vector);
  if ( (this->m_Attributes.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEconItemAttribute,int>::Purge(&this->m_Attributes.m_Vector.m_Memory);
    if ( (this->m_Attributes.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItemAttribute,int>::Purge(&this->m_Attributes.m_Vector.m_Memory);
  }
}


