
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconTool_WrappedGift::~CEconTool_WrappedGift  (line 31, @0x0000000002ea8bd0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_WrappedGift::~CEconTool_WrappedGift(CEconTool_WrappedGift *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_WrappedGift::~CEconTool_WrappedGift  (line 31, @0x0000000002ea9220, libserver.so)  // inlines: Purge, ~CEconTool_WrappedGift, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_WrappedGift::~CEconTool_WrappedGift(CEconTool_WrappedGift *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_StrangePart::~CEconTool_StrangePart  (line 56, @0x0000000002ea9400, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CEconTool_StrangePart::~CEconTool_StrangePart(CEconTool_StrangePart *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8EF0;  // vptr: CEconTool_StrangePart
  this->m_vecRequiredTags.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecRequiredTags.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_vecRequiredTags.m_Memory);
    if ( (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_StrangePart::~CEconTool_StrangePart  (line 56, @0x0000000002ea9530, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_StrangePart, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CEconTool_StrangePart::~CEconTool_StrangePart(CEconTool_StrangePart *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8EF0;  // vptr: CEconTool_StrangePart
  this->m_vecRequiredTags.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecRequiredTags.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_vecRequiredTags.m_Memory);
    if ( (this->m_vecRequiredTags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_StrangePart::CEconTool_StrangePart  (line 59, @0x0000000002ebc0e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: IEconTool::IEconTool
// callers: CEconItemSchema::CreateEconToolImpl
void __fastcall CEconTool_StrangePart::CEconTool_StrangePart(
        CEconTool_StrangePart *const this,
        const char *pszTypeName,
        const char *pszUseString,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, unCapabilities, pUsageKV);
  this->m_vecRequiredTags.m_Size = 0;
  this->_vptr_IEconTool = off_47A8EF0;  // vptr: CEconTool_StrangePart
  this->m_vecRequiredTags.m_Memory.m_pMemory = 0;
  this->m_vecRequiredTags.m_Memory.m_nAllocationCount = 0;
  this->m_vecRequiredTags.m_Memory.m_nGrowSize = 0;
}


// CEconTool_StrangePart::BInitFromKV  (line 62, @0x0000000002ebd5e0, libserver.so)  // inlines: AddToTail, BInitFromKV, CopyConstruct<int>, Element, GetItemSchema, GrowMemory, operator(), operator[]
// calls: KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, ItemSystem, CEconItemSchema::GetHandleForTag, CUtlMemory<int, int>::Grow, KeyValues::GetString, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, IEconTool::BInitFromKV (14 total)
// strings: "required_tags", "required_hero", "required_slot", "usage"
// globals: `guard variable for'CEconTool_StrangePart::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() con, CEconTool_StrangePart::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_s
bool __fastcall CEconTool_StrangePart::BInitFromKV(
        CEconTool_StrangePart *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v6; // zf
  KeyValues *Key; // rax
  KeyValues *v8; // r13
  KeyValues *v9; // rax
  KeyValues *i; // r12
  int *v11; // rdx
  const char *Name; // r15
  CEconItemSystem *v13; // rax
  econ_tag_handle_t HandleForTag; // eax
  int m_Size; // r15d
  int v16; // ecx
  const char *String; // r12
  CEconItemSystem *v18; // rax
  const char *v19; // r12
  CEconItemSystem *v20; // rax
  econ_tag_handle_t v22; // [rsp+Ch] [rbp-34h]

  if ( this->m_bUnserializeStandardKeys )
    IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  v6 = `guard variable for'CEconTool_StrangePart::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0;
  this->m_iHeroRestriction = 0;
  this->m_iItemSlotRestriction = 0;
  if ( v6
    && __cxa_guard_acquire(&`guard variable for'CEconTool_StrangePart::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_StrangePart::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'CEconTool_StrangePart::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_StrangePart::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  v8 = Key;
  if ( Key != 0 )
  {
    v9 = KeyValues::FindKey(Key, "required_tags", 0);
    if ( v9 != 0 )
    {
      for ( i = KeyValues::GetFirstSubKey(v9); i != 0; i = KeyValues::GetNextKey(i) )
      {
        Name = KeyValues::GetName(i);
        v13 = ItemSystem();
        HandleForTag = CEconItemSchema::GetHandleForTag(&v13->m_itemSchema, Name);
        m_Size = this->m_vecRequiredTags.m_Size;
        v16 = m_Size;
        if ( m_Size == this->m_vecRequiredTags.m_Memory.m_nAllocationCount )
        {
          v22 = HandleForTag;
          CUtlMemory<int,int>::Grow(&this->m_vecRequiredTags.m_Memory, 1);
          v16 = this->m_vecRequiredTags.m_Size;
          HandleForTag = v22;
        }
        this->m_vecRequiredTags.m_Size = v16 + 1;
        v11 = &this->m_vecRequiredTags.m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = HandleForTag;
      }
    }
    String = KeyValues::GetString(v8, "required_hero", 0, 0, 0);
    if ( String != 0 )
    {
      v18 = ItemSystem();
      this->m_iHeroRestriction = (*(v18->m_itemSchema._vptr_IEconItemSchema + 65))(&v18->m_itemSchema, String);
    }
    v19 = KeyValues::GetString(v8, "required_slot", 0, 0, 0);
    if ( v19 != 0 )
    {
      v20 = ItemSystem();
      this->m_iItemSlotRestriction = (*(v20->m_itemSchema._vptr_IEconItemSchema + 8))(&v20->m_itemSchema, v19);
    }
  }
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CEconTool_BackpackExpander::~CEconTool_BackpackExpander  (line 115, @0x0000000002ea88d0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_BackpackExpander::~CEconTool_BackpackExpander(CEconTool_BackpackExpander *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_BackpackExpander::~CEconTool_BackpackExpander  (line 115, @0x0000000002ea91b0, libserver.so)  // inlines: Purge, ~CEconTool_BackpackExpander, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_BackpackExpander::~CEconTool_BackpackExpander(CEconTool_BackpackExpander *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_BackpackExpander::BInitFromKV  (line 121, @0x0000000002ebb0c0, libserver.so)  // inlines: BInitFromKV, operator()
// calls: KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, IEconTool::BInitFromKV, __cxa_guard_abort, _Unwind_Resume
// strings: "usage"
// globals: `guard variable for'CEconTool_BackpackExpander::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator(, CEconTool_BackpackExpander::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)
bool __fastcall CEconTool_BackpackExpander::BInitFromKV(
        CEconTool_BackpackExpander *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v6; // zf
  KeyValues *Key; // rax

  if ( this->m_bUnserializeStandardKeys )
    IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  v6 = `guard variable for'CEconTool_BackpackExpander::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0;
  this->m_iBackpackSlots = 0;
  if ( v6
    && __cxa_guard_acquire(&`guard variable for'CEconTool_BackpackExpander::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_BackpackExpander::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'CEconTool_BackpackExpander::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_BackpackExpander::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  if ( Key != 0 )
    this->m_iBackpackSlots = KeyValues::GetInt(Key, "backpack_slots", 0);
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CEconTool_BackpackExpander::BFinishInitialization  (line 135, @0x0000000002ea1dd0, libserver.so)
bool __fastcall CEconTool_BackpackExpander::BFinishInitialization(CEconTool_BackpackExpander *const this)
{
  return this->m_iBackpackSlots > 0;
}


// CEconTool_HeroTaunt::~CEconTool_HeroTaunt  (line 160, @0x0000000002e548c0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_HeroTaunt::~CEconTool_HeroTaunt(CEconTool_HeroTaunt *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_HeroTaunt::~CEconTool_HeroTaunt  (line 160, @0x0000000002e55710, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_HeroTaunt, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_HeroTaunt::~CEconTool_HeroTaunt(CEconTool_HeroTaunt *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_HeroTaunt::ShouldDisplayQuantity  (line 164, @0x0000000002e4ef40, libserver.so)
bool __fastcall CEconTool_HeroTaunt::ShouldDisplayQuantity(
        const CEconTool_HeroTaunt *const this,
        const IEconItemInterface *pTool)
{
  return 0;
}


// CEconTool_VictoryPrediction::~CEconTool_VictoryPrediction  (line 174, @0x0000000002e549e0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_VictoryPrediction::~CEconTool_VictoryPrediction(CEconTool_VictoryPrediction *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_VictoryPrediction::~CEconTool_VictoryPrediction  (line 174, @0x0000000002e558d0, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_VictoryPrediction, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_VictoryPrediction::~CEconTool_VictoryPrediction(CEconTool_VictoryPrediction *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_VictoryPrediction::CEconTool_VictoryPrediction  (line 177, @0x0000000002e571b0, libserver.so)  // inlines: CEconSchemaSymbol, CUtlSymbolLarge, item_definition_index_t
// calls: IEconTool::IEconTool
// callers: CDOTAItemSchema::CreateEconToolImpl
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CEconTool_VictoryPrediction::CEconTool_VictoryPrediction(
        CEconTool_VictoryPrediction *const this,
        const char *pszTypeName,
        const char *pszUseString,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  uint16 m_Data; // ax

  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, unCapabilities, pUsageKV);
  this->_vptr_IEconTool = off_47A0190;  // vptr: CEconTool_VictoryPrediction
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  this->m_eWinsEventType = kill_eater_event_t::kKillEaterEventType_VictoryPredictions;
  this->m_bTrackFailure = 0;
  this->m_unWinItemDef.m_Data = m_Data;
  this->m_unFailureItemDef.m_Data = m_Data;
  this->m_unWinDisplayItemDef.m_Data = m_Data;
  this->m_unFailureDisplayItemDef.m_Data = m_Data;
  this->m_unFailureNormalPoints = 0;
  this->m_bResetOnFailure = 1;
  this->m_bNotifyServer = 0;
  this->m_bAllPickOnly = 0;
  this->m_unDestroyAfterFailureCount = 0;
  this->m_unCreateRewardAfterWinCount = 0;
  this->m_rtContentsTradableAfter = 0;
  this->m_rtFeaturedUntil = 0;
  this->m_unPeekInsideChestID.m_Data = 0;
  this->m_unEventID = 0;
  this->m_unRewardNormalPoints = 0;
  this->m_unRewardPremiumPoints = 0;
  this->m_unRewardActionID = 0;
  this->m_unFailurePremiumPoints = 0;
  this->m_symRewardLootList.u.m_Id = 0;
  this->m_symFailureLootList.u.m_Id = 0;
}


// CEconTool_VictoryPrediction::BInitFromKV  (line 202, @0x0000000002e51cf0, libserver.so)  // inlines: GetBool, operator(), operator==
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetUint64, KeyValues::GetInt, KeyValues::GetString, CEconSchemaSymbol::operator=, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "featured_charm_until", "track_failure", "reset_on_failure", "destroy_after_failures", "reward_after_wins", "reward_item_def" (22 total)
// globals: `guard variable for'CEconTool_VictoryPrediction::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator, CEconTool_VictoryPrediction::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*, INVALID_ITEM_DEF_INDEX
bool __fastcall CEconTool_VictoryPrediction::BInitFromKV(
        CEconTool_VictoryPrediction *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  KeyValues *Key; // rax
  KeyValues *v8; // r12
  uint32 Int; // eax
  int m_Data; // edx
  const char *String; // rax
  int v12; // eax
  int v13; // edx
  const char *v14; // rax
  RTime32 Uint64; // eax
  int v16; // edx
  uint16 v17; // ax
  int v18; // edx
  uint16 v19; // ax
  int v20; // edx
  uint16 v21; // ax
  bool v22; // cc
  uint16 v23; // ax

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    if ( `guard variable for'CEconTool_VictoryPrediction::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CEconTool_VictoryPrediction::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_VictoryPrediction::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_VictoryPrediction::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_VictoryPrediction::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    v8 = Key;
    if ( Key == 0 )
      return pVecErrors == 0 || pVecErrors->m_Size == 0;
    this->m_rtFeaturedUntil = KeyValues::GetUint64(Key, "featured_charm_until", 0);
    this->m_bTrackFailure = KeyValues::GetInt(v8, "track_failure", 0) != 0;
    this->m_bResetOnFailure = KeyValues::GetInt(v8, "reset_on_failure", 1) != 0;
    this->m_unDestroyAfterFailureCount = KeyValues::GetInt(v8, "destroy_after_failures", 0);
    Int = KeyValues::GetInt(v8, "reward_after_wins", 0);
    m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
    this->m_unCreateRewardAfterWinCount = Int;
    this->m_unWinItemDef.m_Data = KeyValues::GetInt(v8, "reward_item_def", m_Data);
    String = KeyValues::GetString(v8, "reward_loot_list", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symRewardLootList, String);
    v12 = KeyValues::GetInt(v8, "notify_server", 0);
    v13 = INVALID_ITEM_DEF_INDEX.m_Data;
    this->m_bNotifyServer = v12 != 0;
    this->m_unFailureItemDef.m_Data = KeyValues::GetInt(v8, "failure_item_def", v13);
    v14 = KeyValues::GetString(v8, "failure_loot_list", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symFailureLootList, v14);
    this->m_eWinsEventType = KeyValues::GetInt(v8, "wins_event_type", 205);
    this->m_bAllPickOnly = KeyValues::GetInt(v8, "all_pick_only", 0) != 0;
    Uint64 = KeyValues::GetUint64(v8, "contents_tradable_after", 0);
    v16 = INVALID_ITEM_DEF_INDEX.m_Data;
    this->m_rtContentsTradableAfter = Uint64;
    this->m_unPeekInsideChestID.m_Data = KeyValues::GetInt(v8, "peek_inside_chest_item_def", v16);
    this->m_unEventID = KeyValues::GetInt(v8, "event_id", 0);
    this->m_unRewardNormalPoints = KeyValues::GetInt(v8, "reward_normal_pts", 0);
    this->m_unRewardPremiumPoints = KeyValues::GetInt(v8, "reward_premium_pts", 0);
    this->m_unRewardActionID = KeyValues::GetInt(v8, "reward_action_id", 0);
    this->m_unFailureNormalPoints = KeyValues::GetInt(v8, "failure_normal_pts", 0);
    v17 = KeyValues::GetInt(v8, "failure_premium_pts", 0);
    v18 = INVALID_ITEM_DEF_INDEX.m_Data;
    this->m_unFailurePremiumPoints = v17;
    v19 = KeyValues::GetInt(v8, "reward_display_item_def", v18);
    v20 = INVALID_ITEM_DEF_INDEX.m_Data;
    this->m_unWinDisplayItemDef.m_Data = v19;
    v21 = KeyValues::GetInt(v8, "failure_display_item_def", v20);
    v22 = this->m_unDestroyAfterFailureCount <= 1;
    this->m_unFailureDisplayItemDef.m_Data = v21;
    if ( !v22 && !this->m_bTrackFailure )
      this->m_unDestroyAfterFailureCount = 0;
    v23 = INVALID_ITEM_DEF_INDEX.m_Data;
    if ( this->m_unCreateRewardAfterWinCount != 0
      && INVALID_ITEM_DEF_INDEX.m_Data == this->m_unWinItemDef.m_Data
      && this->m_symRewardLootList.u.m_Id == 0 )
    {
      if ( *&this->m_unRewardNormalPoints == 0 )
      {
        this->m_unCreateRewardAfterWinCount = 0;
        goto LABEL_12;
      }
    }
    else if ( *&this->m_unRewardNormalPoints == 0 )
    {
LABEL_12:
      if ( (v23 != this->m_unFailureItemDef.m_Data || this->m_symRewardLootList.u.m_Id != 0)
        && this->m_unDestroyAfterFailureCount == 0 )
      {
        this->m_unFailureItemDef = INVALID_ITEM_DEF_INDEX;
      }
      return pVecErrors == 0 || pVecErrors->m_Size == 0;
    }
    if ( this->m_unEventID == 0 )
    {
      this->m_unRewardPremiumPoints = 0;
      this->m_unRewardNormalPoints = 0;
    }
    goto LABEL_12;
  }
  return result;
}


// CEconTool_VictoryPrediction::ShouldDisplayQuantity  (line 285, @0x0000000002e4ef50, libserver.so)
bool __fastcall CEconTool_VictoryPrediction::ShouldDisplayQuantity(
        const CEconTool_VictoryPrediction *const this,
        const IEconItemInterface *pTool)
{
  return 0;
}


// CEconTool_HeroAbility::~CEconTool_HeroAbility  (line 339, @0x0000000002e54a40, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_HeroAbility::~CEconTool_HeroAbility(CEconTool_HeroAbility *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_HeroAbility::~CEconTool_HeroAbility  (line 339, @0x0000000002e55d30, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_HeroAbility, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_HeroAbility::~CEconTool_HeroAbility(CEconTool_HeroAbility *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_PaintCan::~CEconTool_PaintCan  (line 350, @0x0000000002ea8870, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_PaintCan::~CEconTool_PaintCan(CEconTool_PaintCan *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_PaintCan::~CEconTool_PaintCan  (line 350, @0x0000000002ea8ff0, libserver.so)  // inlines: Purge, ~CEconTool_PaintCan, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_PaintCan::~CEconTool_PaintCan(CEconTool_PaintCan *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_GiftWrap::~CEconTool_GiftWrap  (line 366, @0x0000000002ea8c90, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_GiftWrap::~CEconTool_GiftWrap(CEconTool_GiftWrap *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_GiftWrap::~CEconTool_GiftWrap  (line 366, @0x0000000002ea9060, libserver.so)  // inlines: Purge, ~CEconTool_GiftWrap, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_GiftWrap::~CEconTool_GiftWrap(CEconTool_GiftWrap *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_GiftWrap::RequiresToolEscrowPeriod  (line 372, @0x0000000002ea1de0, libserver.so)
bool __fastcall CEconTool_GiftWrap::RequiresToolEscrowPeriod(const CEconTool_GiftWrap *const this)
{
  return 0;
}


// CEconTool_NameTag::~CEconTool_NameTag  (line 391, @0x0000000002ea8930, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_NameTag::~CEconTool_NameTag(CEconTool_NameTag *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_NameTag::~CEconTool_NameTag  (line 391, @0x0000000002ea8dc0, libserver.so)  // inlines: Purge, ~CEconTool_NameTag, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_NameTag::~CEconTool_NameTag(CEconTool_NameTag *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_DescTag::~CEconTool_DescTag  (line 404, @0x0000000002ea89f0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_DescTag::~CEconTool_DescTag(CEconTool_DescTag *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_DescTag::~CEconTool_DescTag  (line 404, @0x0000000002ea8ea0, libserver.so)  // inlines: Purge, ~CEconTool_DescTag, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_DescTag::~CEconTool_DescTag(CEconTool_DescTag *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_CrateKey::~CEconTool_CrateKey  (line 417, @0x0000000002ea8c30, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_CrateKey::~CEconTool_CrateKey(CEconTool_CrateKey *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_CrateKey::~CEconTool_CrateKey  (line 417, @0x0000000002ea90d0, libserver.so)  // inlines: Purge, ~CEconTool_CrateKey, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_CrateKey::~CEconTool_CrateKey(CEconTool_CrateKey *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_ItemRedemption::~CEconTool_ItemRedemption  (line 430, @0x0000000002ea8b10, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_ItemRedemption::~CEconTool_ItemRedemption(CEconTool_ItemRedemption *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_ItemRedemption::~CEconTool_ItemRedemption  (line 430, @0x0000000002ea8f80, libserver.so)  // inlines: Purge, ~CEconTool_ItemRedemption, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_ItemRedemption::~CEconTool_ItemRedemption(CEconTool_ItemRedemption *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_ItemRedemption::BInitFromKV  (line 435, @0x0000000002ebbd70, libserver.so)  // inlines: AddString, BInitFromKV, CUtlSymbolLarge, CUtlSymbolLarge_Hash, Element, FindInsertionPosition, FindPoolWithSpace, HashStringFastCaseless, Insert, InsertAt, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator(), operator=, operator[]
// calls: KeyValues::FindKey, KeyValues::GetString, strlen, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, IEconTool::BInitFromKV, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast (16 total)
// strings: "usage"
// globals: `guard variable for'CEconTool_ItemRedemption::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() , CEconTool_ItemRedemption::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::, g_pEconSchemaSymbolTable
bool __fastcall CEconTool_ItemRedemption::BInitFromKV(
        CEconTool_ItemRedemption *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v6; // zf
  KeyValues *Key; // rax
  const char *String; // rax
  CUtlSymbolTableLarge_CI *v9; // r14
  const char *v10; // r13
  int v11; // r15d
  char *m_String; // rax
  int m_Size; // r9d
  signed int v15; // edx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **m_pMemory; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v17; // rdi
  int m_SpaceUsed; // r10d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v19; // rax
  int v20; // esi
  __int64 v21; // rsi
  int v22; // eax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v23; // r9
  __int64 m_Root; // r13
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 *p_m_Left; // rdx
  _QWORD *v29; // rsi
  unsigned int v30; // eax
  bool v31; // cl
  __int64 v32; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v33; // r9
  unsigned int v34; // [rsp+10h] [rbp-50h]
  bool isLeft[8]; // [rsp+18h] [rbp-48h]
  bool isLefta; // [rsp+18h] [rbp-48h]
  char *v37; // [rsp+20h] [rbp-40h] BYREF
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *src[7]; // [rsp+28h] [rbp-38h] BYREF

  if ( this->m_bUnserializeStandardKeys )
    IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  v6 = `guard variable for'CEconTool_ItemRedemption::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0;
  this->m_symRedemptionList.u.m_Id = 0;
  if ( v6
    && __cxa_guard_acquire(&`guard variable for'CEconTool_ItemRedemption::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_ItemRedemption::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'CEconTool_ItemRedemption::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_ItemRedemption::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  if ( Key != 0 )
  {
    String = KeyValues::GetString(Key, "redemption", "", 0, 0);
    v9 = g_pEconSchemaSymbolTable;
    v10 = String;
    if ( String != 0 )
    {
      v11 = strlen(String);
      m_String = 0;
      if ( v11 > 0 && *v10 != 0 )
      {
        CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(&v37, v9, v10, v11);
        m_String = v37;
        if ( v37 == 0 )
        {
          m_Size = v9->m_StringPools.m_Size;
          v15 = (v11 + 16) & 0xFFFFFFF8;
          if ( m_Size > 0 )
          {
            m_pMemory = v9->m_StringPools.m_Memory.m_pMemory;
            v17 = *m_pMemory;
            m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
            if ( v15 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
            {
LABEL_22:
              v17->m_SpaceUsed = m_SpaceUsed + v15;
              *isLeft = v17 + m_SpaceUsed;
              *(*isLeft + 8LL) = MurmurHash2LowerCase(v10, 0x3501A674u);
              memcpy((*isLeft + 16LL), v10, v11);
              v23 = (*isLeft + 8LL);
              *(v11 + *isLeft + 16LL) = 0;
              src[0] = (*isLeft + 8LL);
              m_Root = v9->m_Lookup.m_Root;
              if ( m_Root == -1 )
              {
                v31 = 0;
              }
              else
              {
                v25 = v9->m_Lookup.m_Elements.m_pMemory;
                while ( 1 )
                {
                  p_m_Left = &v25[m_Root].m_Left;
                  v29 = p_m_Left[4];
                  if ( *&v23->m_TotalLen == *v29 )
                  {
                    v30 = V_stricmp_fast(v23->m_Data, v29 + 1);
                    v25 = v9->m_Lookup.m_Elements.m_pMemory;
                    v26 = v30 >> 31;
                    p_m_Left = &v25[m_Root].m_Left;
                  }
                  else
                  {
                    LOBYTE(v26) = *&v23->m_TotalLen < *v29;
                  }
                  v27 = p_m_Left[1];
                  if ( v26 != 0 )
                    v27 = *p_m_Left;
                  if ( v27 == -1 )
                    break;
                  v23 = src[0];
                  m_Root = v27;
                }
                v31 = v26 != 0;
              }
              isLefta = v31;
              v32 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                      &v9->m_Lookup,
                      src);
              CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
                &v9->m_Lookup,
                v32,
                m_Root,
                isLefta);
              v33 = v9->m_Lookup.m_Elements.m_pMemory;
              ++v9->m_Lookup.m_NumElements;
              m_String = v33[v32].m_Data->m_String;
              goto LABEL_8;
            }
            v19 = m_pMemory + 1;
            v20 = 0;
            while ( ++v20 != m_Size )
            {
              v17 = *v19++;
              m_SpaceUsed = v17->m_SpaceUsed;
              if ( v15 <= v17->m_TotalLen - m_SpaceUsed )
              {
                if ( v20 == -1 )
                  break;
                goto LABEL_22;
              }
            }
          }
          if ( (v15 + 12LL) <= 0x800 )
          {
            v34 = 2036;
            v21 = 2048;
          }
          else
          {
            v34 = (v11 + 16) & 0xFFFFFFF8;
            v21 = v15 + 12;
          }
          src[0] = (**g_pMemAlloc)(g_pMemAlloc, v21);
          src[0]->m_TotalLen = v34;
          src[0]->m_SpaceUsed = 0;
          v22 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                  &v9->m_StringPools,
                  src);
          v15 = (v11 + 16) & 0xFFFFFFF8;
          v17 = v9->m_StringPools.m_Memory.m_pMemory[v22];
          m_SpaceUsed = v17->m_SpaceUsed;
          goto LABEL_22;
        }
      }
    }
    else
    {
      m_String = 0;
    }
LABEL_8:
    this->m_symRedemptionList.u.m_Id = m_String;
  }
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CEconTool_ItemPack::~CEconTool_ItemPack  (line 471, @0x0000000002ea8ab0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_ItemPack::~CEconTool_ItemPack(CEconTool_ItemPack *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_ItemPack::~CEconTool_ItemPack  (line 471, @0x0000000002ea8f10, libserver.so)  // inlines: Purge, ~CEconTool_ItemPack, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_ItemPack::~CEconTool_ItemPack(CEconTool_ItemPack *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_Egg::~CEconTool_Egg  (line 492, @0x0000000002e54620, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_Egg::~CEconTool_Egg(CEconTool_Egg *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  if ( v2 )
  {
    p_m_Memory = &this->m_vecBonusItemDef.m_Memory;
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
  }
}


// CEconTool_Egg::~CEconTool_Egg  (line 492, @0x0000000002e55c50, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_Egg, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_Egg::~CEconTool_Egg(CEconTool_Egg *const this)
{
  bool v2; // zf
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // r12

  this->m_vecBonusItemDef.m_Size = 0;
  v2 = (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  if ( !v2
    || (p_m_Memory = &this->m_vecBonusItemDef.m_Memory,
        CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory),
        (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<item_definition_index_t,int>::Purge(p_m_Memory);
    operator delete(this);
  }
}


// CEconTool_Default::~CEconTool_Default  (line 516, @0x0000000002ea8cf0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_Default::~CEconTool_Default(CEconTool_Default *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_Default::~CEconTool_Default  (line 516, @0x0000000002ea9290, libserver.so)  // inlines: Purge, ~CEconTool_Default, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_Default::~CEconTool_Default(CEconTool_Default *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_SupplyCrate::~CEconTool_SupplyCrate  (line 533, @0x0000000002ea8990, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_SupplyCrate::~CEconTool_SupplyCrate(CEconTool_SupplyCrate *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_SupplyCrate::~CEconTool_SupplyCrate  (line 533, @0x0000000002ea8e30, libserver.so)  // inlines: Purge, ~CEconTool_SupplyCrate, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_SupplyCrate::~CEconTool_SupplyCrate(CEconTool_SupplyCrate *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_SupplyCrate::BInitFromKV  (line 536, @0x0000000002ebb800, libserver.so)  // inlines: AddString, BInitFromKV, CUtlSymbolLarge, CUtlSymbolLarge_Hash, Element, FindInsertionPosition, FindPoolWithSpace, HashStringFastCaseless, Insert, InsertAt, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator(), operator=, operator[]
// calls: KeyValues::GetInt, KeyValues::GetString, strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, IEconTool::BInitFromKV, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::NewNode, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::LinkToParent
// strings: "items_per_treasure", "no_dupe_loot_list_override"
// globals: g_pEconSchemaSymbolTable
bool __fastcall CEconTool_SupplyCrate::BInitFromKV(
        CEconTool_SupplyCrate *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  const char *String; // rax
  CUtlSymbolTableLarge_CI *v7; // r14
  const char *v8; // r12
  int v9; // r15d
  char *m_String; // rax
  int m_Size; // r10d
  signed int v13; // edx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **m_pMemory; // rdi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v15; // rax
  int m_SpaceUsed; // r9d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v17; // rdi
  int v18; // esi
  unsigned int v19; // ecx
  __int64 v20; // rsi
  int v21; // eax
  __int64 m_Root; // r12
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v23; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rsi
  __int64 *p_m_Left; // rcx
  _QWORD *v28; // rsi
  unsigned int v29; // eax
  bool v30; // cl
  __int64 v31; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v32; // r12
  int v33; // [rsp+10h] [rbp-50h]
  bool isLeft[8]; // [rsp+18h] [rbp-48h]
  bool isLefta; // [rsp+18h] [rbp-48h]
  char *v36; // [rsp+20h] [rbp-40h] BYREF
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *src[7]; // [rsp+28h] [rbp-38h] BYREF

  this->m_nItemsPerTreasure = 0;
  if ( this->m_bUnserializeStandardKeys )
    IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  this->m_nItemsPerTreasure = KeyValues::GetInt(pToolKV, "items_per_treasure", 1);
  String = KeyValues::GetString(pToolKV, "no_dupe_loot_list_override", 0, 0, 0);
  v7 = g_pEconSchemaSymbolTable;
  v8 = String;
  if ( String == 0 )
  {
    m_String = 0;
    goto LABEL_6;
  }
  v9 = strlen(String);
  m_String = 0;
  if ( v9 <= 0 )
    goto LABEL_6;
  if ( *v8 == 0 )
    goto LABEL_6;
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(&v36, v7, v8, v9);
  m_String = v36;
  if ( v36 != 0 )
    goto LABEL_6;
  m_Size = v7->m_StringPools.m_Size;
  v13 = (v9 + 16) & 0xFFFFFFF8;
  if ( m_Size <= 0 )
    goto LABEL_14;
  m_pMemory = v7->m_StringPools.m_Memory.m_pMemory;
  v15 = *m_pMemory;
  m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
  if ( v13 > (*m_pMemory)->m_TotalLen - m_SpaceUsed )
  {
    v17 = m_pMemory + 1;
    v18 = 0;
    while ( ++v18 != m_Size )
    {
      v15 = *v17++;
      m_SpaceUsed = v15->m_SpaceUsed;
      if ( v13 <= v15->m_TotalLen - m_SpaceUsed )
      {
        if ( v18 == -1 )
          break;
        goto LABEL_17;
      }
    }
LABEL_14:
    if ( (v13 + 12LL) <= 0x800 )
    {
      v19 = 2036;
      v20 = 2048;
    }
    else
    {
      v19 = (v9 + 16) & 0xFFFFFFF8;
      v20 = v13 + 12;
    }
    v33 = v19;
    src[0] = (**g_pMemAlloc)(g_pMemAlloc, v20);
    src[0]->m_TotalLen = v33;
    src[0]->m_SpaceUsed = 0;
    v21 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
            &v7->m_StringPools,
            src);
    v13 = (v9 + 16) & 0xFFFFFFF8;
    v15 = v7->m_StringPools.m_Memory.m_pMemory[v21];
    m_SpaceUsed = v15->m_SpaceUsed;
  }
LABEL_17:
  v15->m_SpaceUsed = m_SpaceUsed + v13;
  *isLeft = v15 + m_SpaceUsed;
  *(*isLeft + 8LL) = MurmurHash2LowerCase(v8, 0x3501A674u);
  memcpy((*isLeft + 16LL), v8, v9);
  *(v9 + *isLeft + 16LL) = 0;
  src[0] = (*isLeft + 8LL);
  m_Root = v7->m_Lookup.m_Root;
  if ( m_Root == -1 )
  {
    v30 = 0;
  }
  else
  {
    v23 = v7->m_Lookup.m_Elements.m_pMemory;
    v24 = (*isLeft + 8LL);
    while ( 1 )
    {
      p_m_Left = &v23[m_Root].m_Left;
      v28 = p_m_Left[4];
      if ( *&v24->m_TotalLen == *v28 )
      {
        v29 = V_stricmp_fast(v24->m_Data, v28 + 1);
        v23 = v7->m_Lookup.m_Elements.m_pMemory;
        v25 = v29 >> 31;
        p_m_Left = &v23[m_Root].m_Left;
      }
      else
      {
        LOBYTE(v25) = *&v24->m_TotalLen < *v28;
      }
      v26 = p_m_Left[1];
      if ( v25 != 0 )
        v26 = *p_m_Left;
      if ( v26 == -1 )
        break;
      v24 = src[0];
      m_Root = v26;
    }
    v30 = v25 != 0;
  }
  isLefta = v30;
  v31 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
          &v7->m_Lookup,
          src);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
    &v7->m_Lookup,
    v31,
    m_Root,
    isLefta);
  v32 = v7->m_Lookup.m_Elements.m_pMemory;
  ++v7->m_Lookup.m_NumElements;
  m_String = v32[v31].m_Data->m_String;
LABEL_6:
  this->m_symNoDupeLootListOverride.u.m_Id = m_String;
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CEconTool_SocketHammer::~CEconTool_SocketHammer  (line 647, @0x0000000002ea8a50, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_SocketHammer::~CEconTool_SocketHammer(CEconTool_SocketHammer *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_SocketHammer::~CEconTool_SocketHammer  (line 647, @0x0000000002ea9300, libserver.so)  // inlines: Purge, ~CEconTool_SocketHammer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_SocketHammer::~CEconTool_SocketHammer(CEconTool_SocketHammer *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_SocketHammer::BInitFromKV  (line 655, @0x0000000002ebb1a0, libserver.so)  // inlines: BInitFromKV, GetBool, operator()
// calls: KeyValues::FindKey, KeyValues::GetInt, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, IEconTool::BInitFromKV, __cxa_guard_abort, _Unwind_Resume
// strings: "usage"
// globals: `guard variable for'CEconTool_SocketHammer::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() co, CEconTool_SocketHammer::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_
bool __fastcall CEconTool_SocketHammer::BInitFromKV(
        CEconTool_SocketHammer *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  KeyValues *Key; // rax

  if ( this->m_bUnserializeStandardKeys )
    IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( `guard variable for'CEconTool_SocketHammer::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CEconTool_SocketHammer::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_SocketHammer::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'CEconTool_SocketHammer::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_SocketHammer::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  if ( Key != 0 )
  {
    this->m_bSafe = KeyValues::GetInt(Key, "safe", 0) != 0;
    if ( pVecErrors != 0 )
      return pVecErrors->m_Size == 0;
  }
  else
  {
    this->m_bSafe = 0;
    if ( pVecErrors != 0 )
      return pVecErrors->m_Size == 0;
  }
  return 1;
}


// CEconTool_SocketChisel::~CEconTool_SocketChisel  (line 687, @0x0000000002ea9370, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<ESocketType, int>::Purge
void __fastcall CEconTool_SocketChisel::~CEconTool_SocketChisel(CEconTool_SocketChisel *const this)
{
  bool v2; // zf
  CUtlVectorBase<ESocketType,CUtlMemory<ESocketType,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_socketsToAdd.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8BF0;  // vptr: CEconTool_SocketChisel
  this->m_socketsToAdd.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_socketsToAdd.m_Memory;
    CUtlMemory<ESocketType,int>::Purge(&this->m_socketsToAdd.m_Memory);
    if ( (this->m_socketsToAdd.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ESocketType,int>::Purge(p_m_Memory);
  }
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_SocketChisel::~CEconTool_SocketChisel  (line 687, @0x0000000002ea9490, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_SocketChisel, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge, CUtlMemory<ESocketType, int>::Purge
void __fastcall CEconTool_SocketChisel::~CEconTool_SocketChisel(CEconTool_SocketChisel *const this)
{
  bool v2; // zf
  CUtlVectorBase<ESocketType,CUtlMemory<ESocketType,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_socketsToAdd.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8BF0;  // vptr: CEconTool_SocketChisel
  this->m_socketsToAdd.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_socketsToAdd.m_Memory;
    CUtlMemory<ESocketType,int>::Purge(&this->m_socketsToAdd.m_Memory);
    if ( (this->m_socketsToAdd.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ESocketType,int>::Purge(p_m_Memory);
  }
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_SocketChisel::CEconTool_SocketChisel  (line 690, @0x0000000002ebc130, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: IEconTool::IEconTool
// callers: CEconItemSchema::CreateEconToolImpl
void __fastcall CEconTool_SocketChisel::CEconTool_SocketChisel(
        CEconTool_SocketChisel *const this,
        const char *pszTypeName,
        const char *pszUseString,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, unCapabilities, pUsageKV);
  this->m_socketsToAdd.m_Size = 0;
  this->_vptr_IEconTool = off_47A8BF0;  // vptr: CEconTool_SocketChisel
  this->m_socketsToAdd.m_Memory.m_pMemory = 0;
  this->m_socketsToAdd.m_Memory.m_nAllocationCount = 0;
  this->m_socketsToAdd.m_Memory.m_nGrowSize = 0;
}


// CEconTool_SocketChisel::BInitFromKV  (line 695, @0x0000000002ebb290, libserver.so)  // inlines: AddToTail, BInitFromKV, CopyConstruct<ESocketType>, Element, GrowMemory, operator(), operator[]
// calls: KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetInt, CUtlMemory<ESocketType, int>::Grow, __cxa_guard_acquire, CKeySymbol::CKeySymbol, __cxa_guard_release, IEconTool::BInitFromKV, __cxa_guard_abort, _Unwind_Resume
// globals: `guard variable for'CEconTool_SocketChisel::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() co, CEconTool_SocketChisel::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_
bool __fastcall CEconTool_SocketChisel::BInitFromKV(
        CEconTool_SocketChisel *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  KeyValues *Key; // rax
  KeyValues *i; // r12
  ESocketType *v8; // rdx
  int Int; // eax
  __int64 m_Size; // r13
  int v11; // edx
  int v13; // [rsp+Ch] [rbp-34h]

  if ( this->m_bUnserializeStandardKeys )
    IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( `guard variable for'CEconTool_SocketChisel::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CEconTool_SocketChisel::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_SocketChisel::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "sockets");
    __cxa_guard_release(&`guard variable for'CEconTool_SocketChisel::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_SocketChisel::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  for ( i = KeyValues::GetFirstSubKey(Key); i != 0; i = KeyValues::GetNextKey(i) )
  {
    Int = KeyValues::GetInt(i, 0, 0);
    m_Size = this->m_socketsToAdd.m_Size;
    v11 = this->m_socketsToAdd.m_Size;
    if ( m_Size == this->m_socketsToAdd.m_Memory.m_nAllocationCount )
    {
      v13 = Int;
      CUtlMemory<ESocketType,int>::Grow(&this->m_socketsToAdd.m_Memory, 1);
      v11 = this->m_socketsToAdd.m_Size;
      Int = v13;
    }
    this->m_socketsToAdd.m_Size = v11 + 1;
    v8 = &this->m_socketsToAdd.m_Memory.m_pMemory[m_Size];
    if ( v8 != 0 )
      *v8 = Int;
  }
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CEconTool_Autograph::~CEconTool_Autograph  (line 732, @0x0000000002ea8b70, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_Autograph::~CEconTool_Autograph(CEconTool_Autograph *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_Autograph::~CEconTool_Autograph  (line 732, @0x0000000002ea9140, libserver.so)  // inlines: Purge, ~CEconTool_Autograph, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_Autograph::~CEconTool_Autograph(CEconTool_Autograph *const this)
{
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_StyleUnlock::~CEconTool_StyleUnlock  (line 756, @0x0000000002ea95d0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t, int>::Purge, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_StyleUnlock::~CEconTool_StyleUnlock(CEconTool_StyleUnlock *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEconTool_StyleUnlock::StyleUnlock_t,CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecUnlocks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8FB0;  // vptr: CEconTool_StyleUnlock
  this->m_vecUnlocks.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecUnlocks.m_Memory;
    CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t,int>::Purge(&this->m_vecUnlocks.m_Memory);
    if ( (this->m_vecUnlocks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&this->m_vecBonusItemDef);
  if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
    if ( (this->m_vecBonusItemDef.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(&this->m_vecBonusItemDef.m_Memory);
  }
}


// CEconTool_StyleUnlock::~CEconTool_StyleUnlock  (line 756, @0x0000000002ea9670, libserver.so)  // inlines: Purge, RemoveAll, ~CEconTool_StyleUnlock, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IEconTool
// calls: CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, operator delete, CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t, int>::Purge, CUtlMemory<item_definition_index_t, int>::Purge
void __fastcall CEconTool_StyleUnlock::~CEconTool_StyleUnlock(CEconTool_StyleUnlock *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEconTool_StyleUnlock::StyleUnlock_t,CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecUnlocks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEconTool = off_47A8FB0;  // vptr: CEconTool_StyleUnlock
  this->m_vecUnlocks.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecUnlocks.m_Memory;
    CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t,int>::Purge(&this->m_vecUnlocks.m_Memory);
    if ( (this->m_vecUnlocks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IEconTool = off_47A8E30;  // vptr: IEconTool
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


// CEconTool_StyleUnlock::CEconTool_StyleUnlock  (line 759, @0x0000000002ebc180, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: IEconTool::IEconTool
// callers: CEconItemSchema::CreateEconToolImpl
void __fastcall CEconTool_StyleUnlock::CEconTool_StyleUnlock(
        CEconTool_StyleUnlock *const this,
        const char *pszTypeName,
        const char *pszUseString,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  IEconTool::IEconTool(this, pszTypeName, pszUseString, 0, unCapabilities, pUsageKV);
  this->m_eOverrideQuality = EEconItemQuality::AE_UNDEFINED;
  this->_vptr_IEconTool = off_47A8FB0;  // vptr: CEconTool_StyleUnlock
  this->m_vecUnlocks.m_Size = 0;
  this->m_vecUnlocks.m_Memory.m_pMemory = 0;
  this->m_vecUnlocks.m_Memory.m_nAllocationCount = 0;
  this->m_vecUnlocks.m_Memory.m_nGrowSize = 0;
}


// CEconTool_StyleUnlock::BInitFromKV  (line 765, @0x0000000002ebb3e0, libserver.so)  // inlines: AddToTail, BInitFromKV, CUtlString, Construct<CEconTool_StyleUnlock::StyleUnlock_t>, Element, GrowMemory, StyleUnlock_t, UnlockItemExists, item_definition_index_t, operator(), operator[], style_index_t, ~CUtlString
// calls: KeyValues::FindKey, KeyValues::GetString, EconQuality_GetQualityFromString, KeyValues::GetFirstTrueSubKey, KeyValues::GetInt, KeyValues::GetNextTrueSubKey, CFmtStrN<256, false>::CFmtStrN, CUtlString::Format, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail, CUtlString::FreeMemoryBlock, CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t, int>::Grow, __cxa_guard_acquire (18 total)
// strings: "unlock_override_quality", "unlocks", "unlocks has duplicate item_def index: %u", "usage", "usage has duplicate item_def index: %u"
// globals: `guard variable for'CEconTool_StyleUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() con, CEconTool_StyleUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_s, INVALID_ITEM_DEF_INDEX
bool __fastcall CEconTool_StyleUnlock::BInitFromKV(
        CEconTool_StyleUnlock *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  KeyValues *Key; // rax
  KeyValues *v7; // r13
  const char *String; // rax
  KeyValues *v9; // rax
  KeyValues *FirstTrueSubKey; // r14
  uint16 Int; // ax
  __int64 m_Size; // r15
  uint16 m_Data; // dx
  CEconTool_StyleUnlock::StyleUnlock_t *m_pMemory; // rcx
  CEconTool_StyleUnlock::StyleUnlock_t *v15; // rsi
  int v16; // eax
  __int64 v17; // r15
  CEconTool_StyleUnlock::StyleUnlock_t *v18; // rax
  CEconTool_StyleUnlock::StyleUnlock_t *v19; // rax
  CEconTool_StyleUnlock::StyleUnlock_t *v20; // r15
  unsigned __int16 v22; // ax
  int v23; // r14d
  int v24; // r15d
  unsigned __int16 v25; // si
  CEconTool_StyleUnlock::StyleUnlock_t *v26; // rcx
  CEconTool_StyleUnlock::StyleUnlock_t *v27; // rax
  __int64 v28; // rax
  CEconTool_StyleUnlock::StyleUnlock_t *v29; // rdx
  CEconTool_StyleUnlock::StyleUnlock_t *v30; // rdx
  CEconTool_StyleUnlock::StyleUnlock_t *v31; // rbx
  item_definition_index_t unUnlockItemDefIndex; // [rsp+Ch] [rbp-164h]
  CUtlString msg; // [rsp+10h] [rbp-160h] BYREF
  CFmtStrN<256,false> v34; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v35; // [rsp+138h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  if ( this->m_bUnserializeStandardKeys )
    IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( `guard variable for'CEconTool_StyleUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CEconTool_StyleUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CEconTool_StyleUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "usage");
    __cxa_guard_release(&`guard variable for'CEconTool_StyleUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pToolKV,
          CEconTool_StyleUnlock::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  v7 = Key;
  if ( Key == 0 )
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  String = KeyValues::GetString(Key, "unlock_override_quality", 0, 0, 0);
  if ( String != 0 )
    this->m_eOverrideQuality = EconQuality_GetQualityFromString(String);
  v9 = KeyValues::FindKey(v7, "unlocks", 0);
  if ( v9 != 0 )
  {
    FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(v9);
    if ( FirstTrueSubKey != 0 )
    {
      while ( 1 )
      {
        Int = KeyValues::GetInt(FirstTrueSubKey, "item_def", INVALID_ITEM_DEF_INDEX.m_Data);
        m_Size = this->m_vecUnlocks.m_Size;
        m_Data = Int;
        if ( m_Size > 0 )
        {
          m_pMemory = this->m_vecUnlocks.m_Memory.m_pMemory;
          if ( Int == m_pMemory->m_unDefIndex.m_Data )
          {
LABEL_21:
            msg.m_pString = 0;
            CFmtStrN<256,false>::CFmtStrN(&v34, "unlocks has duplicate item_def index: %u", Int);
            CUtlString::Format(&msg, v34.m_szBuf);
            if ( pVecErrors != 0 )
              CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
            if ( msg.m_pString != 0 )
              CUtlString::FreeMemoryBlock(&msg);
            return 0;
          }
          v15 = &m_pMemory[(m_Size - 1)];
          while ( m_pMemory != v15 )
          {
            ++m_pMemory;
            if ( Int == m_pMemory->m_unDefIndex.m_Data )
              goto LABEL_21;
          }
        }
        if ( m_Size == this->m_vecUnlocks.m_Memory.m_nAllocationCount )
        {
          unUnlockItemDefIndex.m_Data = Int;
          CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t,int>::Grow(&this->m_vecUnlocks.m_Memory, 1);
          v16 = this->m_vecUnlocks.m_Size;
          m_Data = unUnlockItemDefIndex.m_Data;
        }
        else
        {
          v16 = this->m_vecUnlocks.m_Size;
        }
        v17 = m_Size;
        this->m_vecUnlocks.m_Size = v16 + 1;
        v18 = &this->m_vecUnlocks.m_Memory.m_pMemory[v17];
        if ( v18 != 0 )
        {
          v18->m_unStyleIndex.m_Data = -1;
          v18->m_unDefIndex.m_Data = 0;
          v19 = &this->m_vecUnlocks.m_Memory.m_pMemory[v17];
        }
        else
        {
          v19 = 0;
        }
        v19->m_unDefIndex.m_Data = m_Data;
        v20 = &this->m_vecUnlocks.m_Memory.m_pMemory[v17];
        v20->m_unStyleIndex.m_Data = KeyValues::GetInt(FirstTrueSubKey, "style", 0);
        FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
        if ( FirstTrueSubKey == 0 )
          return pVecErrors == 0 || pVecErrors->m_Size == 0;
      }
    }
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  v22 = KeyValues::GetInt(v7, "item_def", INVALID_ITEM_DEF_INDEX.m_Data);
  v23 = this->m_vecUnlocks.m_Size;
  v24 = v22;
  v25 = v22;
  if ( v23 <= 0 )
  {
LABEL_35:
    if ( this->m_vecUnlocks.m_Memory.m_nAllocationCount == v23 )
      CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t,int>::Grow(&this->m_vecUnlocks.m_Memory, 1);
    ++this->m_vecUnlocks.m_Size;
    v28 = v23;
    v29 = &this->m_vecUnlocks.m_Memory.m_pMemory[v28];
    if ( v29 != 0 )
    {
      v29->m_unStyleIndex.m_Data = -1;
      v29->m_unDefIndex.m_Data = 0;
      v30 = &this->m_vecUnlocks.m_Memory.m_pMemory[v28];
    }
    else
    {
      v30 = 0;
    }
    v30->m_unDefIndex.m_Data = v24;
    v31 = &this->m_vecUnlocks.m_Memory.m_pMemory[v28];
    v31->m_unStyleIndex.m_Data = KeyValues::GetInt(v7, "style", 0);
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  v26 = this->m_vecUnlocks.m_Memory.m_pMemory;
  if ( v22 != v26->m_unDefIndex.m_Data )
  {
    v27 = &v26[v23 - 1];
    while ( v26 != v27 )
    {
      ++v26;
      if ( v25 == v26->m_unDefIndex.m_Data )
        goto LABEL_41;
    }
    goto LABEL_35;
  }
LABEL_41:
  msg.m_pString = 0;
  CFmtStrN<256,false>::CFmtStrN(&v34, "usage has duplicate item_def index: %u", v24);
  CUtlString::Format(&msg, v34.m_szBuf);
  if ( pVecErrors != 0 )
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
  if ( msg.m_pString == 0 )
    return 0;
  CUtlString::FreeMemoryBlock(&msg);
  return 0;
}


// CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::GetAttributeName  (line 932, @0x0000000002e4ef60, libserver.so)
// strings: "recipe component"
const char *__fastcall CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::GetAttributeName(
        const CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *const this)
{
  return "recipe component";
}


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::~CDynamicRecipeComponentSpecificItem  (line 974, @0x0000000002eab300, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::~CDynamicRecipeComponentSpecificItem(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::~CDynamicRecipeComponentSpecificItem  (line 974, @0x0000000002eab8b0, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CDynamicRecipeComponentSpecificItem, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, operator delete, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem::~CDynamicRecipeComponentSpecificItem(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItem *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::~CDynamicRecipeComponentSpecificItemFromLootList  (line 1003, @0x0000000002eab4a0, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CDynamicRecipeComponentSpecificItem, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::~CDynamicRecipeComponentSpecificItemFromLootList(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::~CDynamicRecipeComponentSpecificItemFromLootList  (line 1003, @0x0000000002eab570, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CDynamicRecipeComponentSpecificItem, ~CDynamicRecipeComponentSpecificItemFromLootList, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, operator delete, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList::~CDynamicRecipeComponentSpecificItemFromLootList(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentSpecificItemFromLootList *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::~CDynamicRecipeComponentCriteriaMatch  (line 1030, @0x0000000002eab230, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::~CDynamicRecipeComponentCriteriaMatch(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::~CDynamicRecipeComponentCriteriaMatch  (line 1030, @0x0000000002eab7e0, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CDynamicRecipeComponentCriteriaMatch, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, operator delete, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch::~CDynamicRecipeComponentCriteriaMatch(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentCriteriaMatch *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::~CDynamicRecipeComponentLootList  (line 1054, @0x0000000002eab3d0, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::~CDynamicRecipeComponentLootList(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


// CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::~CDynamicRecipeComponentLootList  (line 1054, @0x0000000002eab710, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CDynamicRecipeComponentLootList, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, operator delete, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList::~CDynamicRecipeComponentLootList(
        CEconTool_ItemDynamicRecipe::CDynamicRecipeComponentLootList *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


// CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::~CStaticRecipeComponent  (line 1071, @0x0000000002eab160, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::~CStaticRecipeComponent(
        CEconTool_ItemDynamicRecipe::CStaticRecipeComponent *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


// CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::~CStaticRecipeComponent  (line 1071, @0x0000000002eab640, libserver.so)  // inlines: Destruct<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t>, Element, Purge, RemoveAll, operator[], ~CBaseRecipeComponent, ~CStaticRecipeComponent, ~CUtlConstStringBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~StringEncodedAttribute_t
// calls: CUtlConstStringBase<char>::Set, operator delete, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>::Purge, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>::Purge
void __fastcall CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::~CStaticRecipeComponent(
        CEconTool_ItemDynamicRecipe::CStaticRecipeComponent *const this)
{
  int v2; // ebx
  __int64 v3; // r12
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t *v4; // rax
  bool v5; // zf

  this->_vptr_CBaseRecipeComponent = off_47A9010;  // vptr: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent
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


