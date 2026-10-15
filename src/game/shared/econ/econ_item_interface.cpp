
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IEconItemInterface::GetExpirationDate  (line 16, @0x0000000002e9c810, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "expiration date"
// globals: `guard variable for'IEconItemInterface::GetExpirationDate(void)::pAttrib_ExpirationDate, IEconItemInterface::GetExpirationDate(void)::pAttrib_ExpirationDate, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
RTime32 __fastcall IEconItemInterface::GetExpirationDate(const IEconItemInterface *const this)
{
  uint32 v2; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v5; // rax
  uint32 v6; // r12d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v8; // r13
  CEconItemSystem *v9; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  __int64 v11; // rax
  CEconItemSystem *v12; // rax
  uint32 m_unResetCount; // eax
  attrib_value_t unAttribExpirationTimeBits; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v16[3]; // [rsp+10h] [rbp-40h] BYREF
  char v17; // [rsp+28h] [rbp-28h]

  if ( `guard variable for'IEconItemInterface::GetExpirationDate(void)::pAttrib_ExpirationDate == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::GetExpirationDate(void)::pAttrib_ExpirationDate) != 0 )
  {
    IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_szName = "expiration date";
    v12 = ItemSystem();
    IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                        &v12->m_itemSchema,
                                                                                        "expiration date");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_bDestructName = 0;
    IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::GetExpirationDate(void)::pAttrib_ExpirationDate);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate,
      &_dso_handle);
  }
  if ( IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_szName == 0 )
    goto LABEL_14;
  v2 = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_pRef;
  if ( v2 != IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_unSchemaGeneration )
  {
    m_szName = IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_szName;
    v5 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v5->m_itemSchema, m_szName);
    IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_unSchemaGeneration = v2;
    IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 || IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_szName == 0 )
    goto LABEL_14;
  v6 = ItemSystem()->m_itemSchema.m_unResetCount;
  AttributeDefinitionByName = IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_pRef;
  if ( v6 != IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_unSchemaGeneration )
  {
    v8 = IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_szName;
    v9 = ItemSystem();
    AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v9->m_itemSchema, v8);
    IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_unSchemaGeneration = v6;
    IEconItemInterface::GetExpirationDate(void)const::pAttrib_ExpirationDate.m_pRef = AttributeDefinitionByName;
  }
  if ( AttributeDefinitionByName == 0
    || (v16[1] = AttributeDefinitionByName,
        v16[2] = &unAttribExpirationTimeBits,
        vptr_IEconItemInterface = this->_vptr_IEconItemInterface,
        v16[0] = &wrapper,
        v17 = 0,
        vptr_IEconItemInterface[28](this, v16),
        LODWORD(v11) = unAttribExpirationTimeBits,
        v17 == 0) )
  {
LABEL_14:
    v11 = (*(this->_vptr_IEconItemInterface + 12))(this);
    if ( v11 != 0 )
      LODWORD(v11) = *((*(this->_vptr_IEconItemInterface + 12))(this) + 88);
  }
  return v11;
}


// IEconItemInterface::GetTradableAfterDateTime  (line 38, @0x0000000002e9d790, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<CDOTAItemDefinition, unsigned int>, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CDOTAItemDefinition>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, IterateAttributes, operator const CEconItemAttributeDefinition*, operator!
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, InternalIterateItemDefAttributes<CIterateAllAttributes>, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: IEconItemInterface::IsTradable
// strings: "tradable after date"
// globals: `guard variable for'IEconItemInterface::GetTradableAfterDateTime(void)::pAttrib_TradableAfter, IEconItemInterface::GetTradableAfterDateTime(void)::pAttrib_TradableAfter, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
RTime32 __fastcall IEconItemInterface::GetTradableAfterDateTime(const IEconItemInterface *const this)
{
  uint32 v2; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v5; // rax
  uint32 v6; // r12d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v8; // r13
  CEconItemSystem *v9; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  const CEconItemDefinition *v11; // rbx
  uint32 v12; // r13d
  const CEconItemAttributeDefinition *v13; // rax
  const char *v14; // r14
  CEconItemSystem *v15; // rax
  RTime32 result; // eax
  CEconItemSystem *v17; // rax
  uint32 m_unResetCount; // eax
  RTime32 rtTimestamp; // [rsp+8h] [rbp-48h] BYREF
  RTime32 rtStaticTimestamp; // [rsp+Ch] [rbp-44h] BYREF
  IEconItemAttributeIterator pIterator; // [rsp+10h] [rbp-40h] BYREF
  const CEconItemAttributeDefinition *v22; // [rsp+18h] [rbp-38h]
  RTime32 *p_rtTimestamp; // [rsp+20h] [rbp-30h]
  char v24; // [rsp+28h] [rbp-28h]

  if ( `guard variable for'IEconItemInterface::GetTradableAfterDateTime(void)::pAttrib_TradableAfter == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::GetTradableAfterDateTime(void)::pAttrib_TradableAfter) != 0 )
  {
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_szName = "tradable after date";
    v17 = ItemSystem();
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                              &v17->m_itemSchema,
                                                                                              "tradable after date");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_bDestructName = 0;
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::GetTradableAfterDateTime(void)::pAttrib_TradableAfter);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter,
      &_dso_handle);
  }
  if ( IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_szName == 0 )
    return 0;
  v2 = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_pRef;
  if ( v2 != IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_unSchemaGeneration )
  {
    m_szName = IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_szName;
    v5 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v5->m_itemSchema, m_szName);
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_unSchemaGeneration = v2;
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 || IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_szName == 0 )
    return 0;
  v6 = ItemSystem()->m_itemSchema.m_unResetCount;
  AttributeDefinitionByName = IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_pRef;
  if ( v6 != IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_unSchemaGeneration )
  {
    v8 = IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_szName;
    v9 = ItemSystem();
    AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v9->m_itemSchema, v8);
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_unSchemaGeneration = v6;
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_pRef = AttributeDefinitionByName;
  }
  if ( AttributeDefinitionByName == 0 )
    return 0;
  v22 = AttributeDefinitionByName;
  p_rtTimestamp = &rtTimestamp;
  vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
  pIterator._vptr_IEconItemAttributeIterator = &wrapper;
  v24 = 0;
  vptr_IEconItemInterface[28](this, &pIterator);
  if ( v24 == 0 )
    return 0;
  v11 = (*(this->_vptr_IEconItemInterface + 12))(this);
  if ( v11 == 0 || IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_szName == 0 )
    return rtTimestamp;
  v12 = ItemSystem()->m_itemSchema.m_unResetCount;
  v13 = IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_pRef;
  if ( v12 != IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_unSchemaGeneration )
  {
    v14 = IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_szName;
    v15 = ItemSystem();
    v13 = CEconItemSchema::GetAttributeDefinitionByName(&v15->m_itemSchema, v14);
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_unSchemaGeneration = v12;
    IEconItemInterface::GetTradableAfterDateTime(void)const::pAttrib_TradableAfter.m_pRef = v13;
  }
  if ( v13 == 0 )
    return rtTimestamp;
  v22 = v13;
  pIterator._vptr_IEconItemAttributeIterator = &wrapper;
  p_rtTimestamp = &rtStaticTimestamp;
  v24 = 0;
  InternalIterateItemDefAttributes<CIterateAllAttributes>(v11, &pIterator, &wrapper);
  if ( v24 == 0 )
    return rtTimestamp;
  result = rtStaticTimestamp;
  if ( rtTimestamp >= rtStaticTimestamp )
    return rtTimestamp;
  return result;
}


// IEconItemInterface::BIsItemInPurgatoryWindow  (line 70, @0x0000000002e9c290, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, RTime32TimeCur, operator const CEconItemAttributeDefinition*, operator!
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "purgatory expires after date"
// globals: `guard variable for'IEconItemInterface::BIsItemInPurgatoryWindow(uint *)::pAttrib_PurgatoryExpiresAfter, IEconItemInterface::BIsItemInPurgatoryWindow(uint *)::pAttrib_PurgatoryExpiresAfter, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall IEconItemInterface::BIsItemInPurgatoryWindow(
        const IEconItemInterface *const this,
        RTime32 *out_pExpirationTime)
{
  uint32 v4; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSystem *v7; // rax
  uint32 v8; // r12d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v10; // r14
  CEconItemSystem *v11; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  RTime32 v13; // eax
  CEconItemSystem *v15; // rax
  uint32 m_unResetCount; // eax
  RTime32 rtTimestamp; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v18[3]; // [rsp+10h] [rbp-40h] BYREF
  char v19; // [rsp+28h] [rbp-28h]

  if ( out_pExpirationTime != 0 )
    *out_pExpirationTime = 0x7FFFFFFF;
  if ( `guard variable for'IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)::pAttrib_PurgatoryExpiresAfter == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)::pAttrib_PurgatoryExpiresAfter) != 0 )
  {
    IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_szName = "purgatory expires after date";
    v15 = ItemSystem();
    IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v15->m_itemSchema, "purgatory expires after date");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_bDestructName = 0;
    IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)::pAttrib_PurgatoryExpiresAfter);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter,
      &_dso_handle);
  }
  if ( IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_szName == 0 )
    return 0;
  v4 = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_pRef;
  if ( v4 != IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration )
  {
    m_szName = IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_szName;
    v7 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v7->m_itemSchema, m_szName);
    IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration = v4;
    IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_pRef = m_pRef;
  }
  if ( m_pRef == 0
    || IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_szName == 0 )
  {
    return 0;
  }
  v8 = ItemSystem()->m_itemSchema.m_unResetCount;
  AttributeDefinitionByName = IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_pRef;
  if ( v8 != IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration )
  {
    v10 = IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_szName;
    v11 = ItemSystem();
    AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v11->m_itemSchema, v10);
    IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration = v8;
    IEconItemInterface::BIsItemInPurgatoryWindow(unsigned int *)const::pAttrib_PurgatoryExpiresAfter.m_pRef = AttributeDefinitionByName;
  }
  if ( AttributeDefinitionByName == 0 )
    return 0;
  v18[1] = AttributeDefinitionByName;
  v18[2] = &rtTimestamp;
  vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
  v18[0] = &wrapper;
  v19 = 0;
  vptr_IEconItemInterface[28](this, v18);
  if ( v19 == 0 )
    return 0;
  v13 = rtTimestamp;
  if ( out_pExpirationTime != 0 )
    *out_pExpirationTime = rtTimestamp;
  return CRTime::sm_nTimeCur <= v13;
}


// IEconItemInterface::IsTradable  (line 94, @0x0000000002e9e5f0, libserver.so)  // inlines: CAttributeIterator_HasAttribute, CSchemaFieldHandle, FindAttribute, FindAttribute<IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, RTime32TimeCur, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, CSchemaFieldHandle<CEconItemAttributeDefinition>::Get, IEconItemInterface::BDoSocketsPreventTrade, __cxa_guard_release, __cxa_atexit, IEconItemInterface::GetTradableAfterDateTime, __cxa_guard_abort, _Unwind_Resume
// callers: CEconItem::IsTradable
// strings: "purgatory expires after date", "always tradable", "cannot trade"
// globals: `guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_AlwaysTradable, `guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_CannotTrade, `guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_PurgatoryExpiresAfter, IEconItemInterface::IsTradable(bool)::pAttrib_PurgatoryExpiresAfter, IEconItemInterface::IsTradable(bool)::pAttrib_AlwaysTradable, IEconItemInterface::IsTradable(bool)::pAttrib_CannotTrade, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall IEconItemInterface::IsTradable(
        const IEconItemInterface *const this,
        bool bIgnoreTradableByDateRestriction)
{
  __int64 v4; // rax
  uint32 v5; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSystem *v8; // rax
  uint32 v9; // r13d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v11; // r14
  CEconItemSystem *v12; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  bool result; // al
  uint32 v15; // r13d
  const CEconItemAttributeDefinition *v16; // rax
  const char *v17; // r14
  CEconItemSystem *v18; // rax
  uint32 v19; // r13d
  const CEconItemAttributeDefinition *v20; // rax
  const char *v21; // r14
  CEconItemSystem *v22; // rax
  int (**v23)(...); // rax
  uint32 v24; // r12d
  const CEconItemAttributeDefinition *v25; // rax
  const char *v26; // r13
  CEconItemSystem *v27; // rax
  int (**v28)(...); // rax
  unsigned int v29; // ecx
  CEconItemSystem *v30; // rax
  uint32 v31; // eax
  CEconItemSystem *v32; // rax
  uint32 m_unResetCount; // eax
  CEconItemSystem *v34; // rax
  uint32 v35; // eax
  void (__fastcall **v36)(CAttributeIterator_HasAttribute *__hidden); // [rsp+0h] [rbp-40h] BYREF
  const CEconItemAttributeDefinition *v37; // [rsp+8h] [rbp-38h]
  bool v38; // [rsp+10h] [rbp-30h]

  if ( (*(this->_vptr_IEconItemInterface + 12))(this) == 0 )
    return 0;
  v4 = (*(this->_vptr_IEconItemInterface + 12))(this);
  if ( (*(*v4 + 112LL))(v4) != 0 )
    return 0;
  if ( `guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_AlwaysTradable == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_AlwaysTradable) != 0 )
  {
    IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_szName = "always tradable";
    v32 = ItemSystem();
    IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                 &v32->m_itemSchema,
                                                                                 "always tradable");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_bDestructName = 0;
    IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_AlwaysTradable);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable,
      &_dso_handle);
  }
  if ( `guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_CannotTrade == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_CannotTrade) != 0 )
  {
    IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_szName = "cannot trade";
    v34 = ItemSystem();
    IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                              &v34->m_itemSchema,
                                                                              "cannot trade");
    v35 = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_bDestructName = 0;
    IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_unSchemaGeneration = v35;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_CannotTrade);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade,
      &_dso_handle);
  }
  if ( `guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_PurgatoryExpiresAfter == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_PurgatoryExpiresAfter) != 0 )
  {
    IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_szName = "purgatory expires after date";
    v30 = ItemSystem();
    IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                        &v30->m_itemSchema,
                                                                                        "purgatory expires after date");
    v31 = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_bDestructName = 0;
    IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration = v31;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::IsTradable(bool)::pAttrib_PurgatoryExpiresAfter);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter,
      &_dso_handle);
  }
  if ( IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_szName != 0 )
  {
    v5 = ItemSystem()->m_itemSchema.m_unResetCount;
    m_pRef = IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_pRef;
    if ( v5 != IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration )
    {
      m_szName = IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_szName;
      v8 = ItemSystem();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v8->m_itemSchema, m_szName);
      IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration = v5;
      IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_pRef = m_pRef;
    }
    if ( m_pRef != 0 && IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_szName != 0 )
    {
      v9 = ItemSystem()->m_itemSchema.m_unResetCount;
      AttributeDefinitionByName = IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_pRef;
      if ( v9 != IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration )
      {
        v11 = IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_szName;
        v12 = ItemSystem();
        AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v12->m_itemSchema, v11);
        IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_unSchemaGeneration = v9;
        IEconItemInterface::IsTradable(bool)const::pAttrib_PurgatoryExpiresAfter.m_pRef = AttributeDefinitionByName;
      }
      if ( AttributeDefinitionByName != 0 )
      {
        v37 = AttributeDefinitionByName;
        vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
        v36 = off_40F17F0;
        v38 = 0;
        vptr_IEconItemInterface[28](this, &v36);
        if ( v38 )
          return 0;
      }
    }
  }
  if ( IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_szName != 0 )
  {
    v15 = ItemSystem()->m_itemSchema.m_unResetCount;
    v16 = IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_pRef;
    if ( v15 != IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_unSchemaGeneration )
    {
      v17 = IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_szName;
      v18 = ItemSystem();
      v16 = CEconItemSchema::GetAttributeDefinitionByName(&v18->m_itemSchema, v17);
      IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_unSchemaGeneration = v15;
      IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_pRef = v16;
    }
    if ( v16 != 0 && IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_szName != 0 )
    {
      v19 = ItemSystem()->m_itemSchema.m_unResetCount;
      v20 = IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_pRef;
      if ( v19 != IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_unSchemaGeneration )
      {
        v21 = IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_szName;
        v22 = ItemSystem();
        v20 = CEconItemSchema::GetAttributeDefinitionByName(&v22->m_itemSchema, v21);
        IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_unSchemaGeneration = v19;
        IEconItemInterface::IsTradable(bool)const::pAttrib_AlwaysTradable.m_pRef = v20;
      }
      if ( v20 != 0 )
      {
        v37 = v20;
        v23 = this->_vptr_IEconItemInterface;
        v36 = off_40F17F0;
        v38 = 0;
        v23[28](this, &v36);
        result = v38;
        if ( v38 )
          return result;
      }
    }
  }
  if ( bIgnoreTradableByDateRestriction || IEconItemInterface::GetTradableAfterDateTime(this) < CRTime::sm_nTimeCur )
  {
    if ( CSchemaFieldHandle<CEconItemAttributeDefinition>::Get(&IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade) == 0
      || IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_szName == 0 )
    {
      goto LABEL_35;
    }
    v24 = ItemSystem()->m_itemSchema.m_unResetCount;
    v25 = IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_pRef;
    if ( v24 != IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_unSchemaGeneration )
    {
      v26 = IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_szName;
      v27 = ItemSystem();
      v25 = CEconItemSchema::GetAttributeDefinitionByName(&v27->m_itemSchema, v26);
      IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_unSchemaGeneration = v24;
      IEconItemInterface::IsTradable(bool)const::pAttrib_CannotTrade.m_pRef = v25;
    }
    if ( v25 == 0
      || (v37 = v25, v28 = this->_vptr_IEconItemInterface, v36 = off_40F17F0, v38 = 0, v28[28](this, &v36), !v38) )
    {
LABEL_35:
      v29 = (*(this->_vptr_IEconItemInterface + 18))(this) + 1;
      if ( (v29 > 0x13 || ((1LL << v29) & 0xC8005) == 0)
        && ((*(this->_vptr_IEconItemInterface + 15))(this) <= 4 || (*(this->_vptr_IEconItemInterface + 15))(this) > 7)
        && ((*(this->_vptr_IEconItemInterface + 17))(this) & 1) == 0
        && ((*(this->_vptr_IEconItemInterface + 17))(this) & 8) == 0 )
      {
        return !IEconItemInterface::BDoSocketsPreventTrade(this);
      }
    }
  }
  return 0;
}


// IEconItemInterface::BDoSocketsPreventTrade  (line 152, @0x0000000002e9e330, libserver.so)  // inlines: CAttributeIterator_HasAttribute, CSchemaFieldHandle, CSocketIterator, CSocketPair, GEconItemSchema, Get, GetItemDefinition, GetItemSchema, GetItemSocket, GetSocket, GetSocketAttribute, GetTypedRef, IterateAttributes, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, CEconItemSchema::GetItemDefinitionMutable, InternalIterateItemDefAttributes<CIterateAllAttributes>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: IEconItemInterface::IsTradable, IEconItemInterface::IsGiftable
// strings: "cannot trade"
// globals: `guard variable for'IEconItemInterface::BDoSocketsPreventTrade(void)::pAttrib_CannotTrade, IEconItemInterface::BDoSocketsPreventTrade(void)::pAttrib_CannotTrade, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall IEconItemInterface::BDoSocketsPreventTrade(const IEconItemInterface *const this)
{
  CSocketIterator *m_Sockets; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  uint32 v4; // ebx
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v7; // rax
  CSocketIterator::CSocketPair *v8; // r12
  int v9; // r13d
  const CAttribute_Socket *m_pAttribute; // rax
  IItemSocket *m_pSocket; // rbx
  uint16 v12; // bx
  CEconItemSystem *v13; // rax
  const CIterateAllAttributes *v14; // rdx
  CEconItemDefinition *ItemDefinitionMutable; // rbx
  uint32 v16; // r15d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  CEconItemSystem *v18; // rax
  bool result; // al
  CEconItemSystem *v20; // rax
  uint32 m_unResetCount; // eax
  char *pszDefName; // [rsp+8h] [rbp-118h]
  CAttributeIterator_HasAttribute tradeIterator; // [rsp+10h] [rbp-110h] BYREF
  CSocketIterator socketIterator; // [rsp+30h] [rbp-F0h] BYREF

  if ( `guard variable for'IEconItemInterface::BDoSocketsPreventTrade(void)::pAttrib_CannotTrade == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::BDoSocketsPreventTrade(void)::pAttrib_CannotTrade) != 0 )
  {
    IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_szName = "cannot trade";
    v20 = ItemSystem();
    IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                          &v20->m_itemSchema,
                                                                                          "cannot trade");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_bDestructName = 0;
    IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::BDoSocketsPreventTrade(void)::pAttrib_CannotTrade);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade,
      &_dso_handle);
  }
  socketIterator._vptr_IEconItemAttributeIterator = off_47A8B30;
  m_Sockets = socketIterator.m_Sockets;
  do
  {
    m_Sockets->_vptr_IEconItemAttributeIterator = 0;
    m_Sockets = (m_Sockets + 16);
    *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
  }
  while ( m_Sockets != &socketIterator.m_nSocketCount );
  vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
  socketIterator.m_nSocketCount = 0;
  socketIterator.m_nGemCount = 0;
  socketIterator.m_unAttribStorageTypeFlags = 1;
  vptr_IEconItemInterface[28](this, &socketIterator, &socketIterator.m_nSocketCount);
  if ( socketIterator.m_nGemCount <= 0
    || IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_szName == 0 )
  {
    return 0;
  }
  v4 = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_pRef;
  if ( v4 != IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_unSchemaGeneration )
  {
    m_szName = IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_szName;
    v7 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v7->m_itemSchema, m_szName);
    IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_unSchemaGeneration = v4;
    IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 )
    return 0;
  v8 = socketIterator.m_Sockets;
  v9 = 0;
  if ( socketIterator.m_nSocketCount <= 0 )
    return 0;
  while ( 1 )
  {
    m_pAttribute = v8->m_pAttribute;
    if ( v8->m_pAttribute != 0 )
    {
      m_pSocket = m_pAttribute->m_pSocket;
      if ( m_pAttribute->m_pSocket != 0 && (*(m_pSocket->_vptr_IItemSocket + 11))(m_pSocket) == 0 )
      {
        v12 = (*(m_pSocket->_vptr_IItemSocket + 21))(m_pSocket);
        v13 = ItemSystem();
        ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v13->m_itemSchema, v12, 0);
        if ( ItemDefinitionMutable != 0 )
        {
          if ( IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_szName != 0 )
          {
            v16 = ItemSystem()->m_itemSchema.m_unResetCount;
            AttributeDefinitionByName = IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_pRef;
            if ( v16 != IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_unSchemaGeneration )
            {
              pszDefName = IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_szName;
              v18 = ItemSystem();
              AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v18->m_itemSchema, pszDefName);
              IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_unSchemaGeneration = v16;
              IEconItemInterface::BDoSocketsPreventTrade(void)const::pAttrib_CannotTrade.m_pRef = AttributeDefinitionByName;
            }
          }
          else
          {
            AttributeDefinitionByName = 0;
          }
          tradeIterator.m_pAttrDef = AttributeDefinitionByName;
          tradeIterator._vptr_IEconItemAttributeIterator = off_40F17F0;
          tradeIterator.m_bFound = 0;
          InternalIterateItemDefAttributes<CIterateAllAttributes>(ItemDefinitionMutable, &tradeIterator, v14);
          result = tradeIterator.m_bFound;
          if ( tradeIterator.m_bFound )
            break;
        }
      }
    }
    ++v9;
    ++v8;
    if ( socketIterator.m_nSocketCount <= v9 )
      return 0;
  }
  return result;
}


// IEconItemInterface::IsGiftable  (line 184, @0x0000000002e9eb40, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, PreventGifting, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, IEconItemInterface::BDoSocketsPreventTrade, CSchemaFieldHandle<CEconItemAttributeDefinition>::Get, CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle, __cxa_guard_abort, _Unwind_Resume
// strings: "giftable after date", "giftable"
// globals: `guard variable for'IEconItemInterface::IsGiftable(void)::pAttrib_GiftableAfter, IEconItemInterface::IsGiftable(void)::pAttrib_GiftableAfter, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle(), `guard variable for'IEconItemInterface::IsGiftable(void)::pAttrib_Giftable, IEconItemInterface::IsGiftable(void)::pAttrib_Giftable
bool __fastcall IEconItemInterface::IsGiftable(const IEconItemInterface *const this)
{
  __int64 v2; // rax
  char v3; // bl
  uint32 v4; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSystem *v7; // rax
  uint32 v8; // r13d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v10; // r14
  CEconItemSystem *v11; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  CEconItemSystem *v14; // rax
  uint32 m_unResetCount; // eax
  uint32 v16; // r13d
  const CEconItemAttributeDefinition *v17; // rax
  const char *v18; // r14
  CEconItemSystem *v19; // rax
  const CEconItemAttributeDefinition *v20; // rax
  int (**v21)(...); // rax
  uint32 unGiftableCount; // [rsp+Ch] [rbp-44h] BYREF
  CIterateAllAttributes *v23; // [rsp+10h] [rbp-40h] BYREF
  const CEconItemAttributeDefinition *v24; // [rsp+18h] [rbp-38h]
  uint32 *p_unGiftableCount; // [rsp+20h] [rbp-30h]
  bool v26; // [rsp+28h] [rbp-28h]

  v2 = (*(this->_vptr_IEconItemInterface + 12))(this);
  v3 = (*(v2 + 273) & 8) != 0;
  if ( (*(v2 + 273) & 8) != 0 )
    return 0;
  if ( `guard variable for'IEconItemInterface::IsGiftable(void)::pAttrib_GiftableAfter == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::IsGiftable(void)::pAttrib_GiftableAfter) != 0 )
  {
    IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_szName = "giftable after date";
    v14 = ItemSystem();
    IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                &v14->m_itemSchema,
                                                                                "giftable after date");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_bDestructName = 0;
    IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::IsGiftable(void)::pAttrib_GiftableAfter);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter,
      &_dso_handle);
  }
  if ( IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_szName != 0 )
  {
    v4 = ItemSystem()->m_itemSchema.m_unResetCount;
    m_pRef = IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_pRef;
    if ( v4 != IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_unSchemaGeneration )
    {
      m_szName = IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_szName;
      v7 = ItemSystem();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v7->m_itemSchema, m_szName);
      IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_unSchemaGeneration = v4;
      IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_pRef = m_pRef;
    }
    if ( m_pRef != 0 && IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_szName != 0 )
    {
      v8 = ItemSystem()->m_itemSchema.m_unResetCount;
      AttributeDefinitionByName = IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_pRef;
      if ( v8 != IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_unSchemaGeneration )
      {
        v10 = IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_szName;
        v11 = ItemSystem();
        AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v11->m_itemSchema, v10);
        IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_unSchemaGeneration = v8;
        IEconItemInterface::IsGiftable(void)const::pAttrib_GiftableAfter.m_pRef = AttributeDefinitionByName;
      }
      if ( AttributeDefinitionByName != 0 )
      {
        v24 = AttributeDefinitionByName;
        p_unGiftableCount = &unGiftableCount;
        vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
        v23 = &wrapper;
        v26 = 0;
        vptr_IEconItemInterface[28](this, &v23);
        if ( v26 && unGiftableCount >= CRTime::sm_nTimeCur )
          return v3;
      }
    }
  }
  if ( ((*(this->_vptr_IEconItemInterface + 29))(this) & 0x20000000) == 0
    && !IEconItemInterface::BDoSocketsPreventTrade(this) )
  {
    v3 = (*(this->_vptr_IEconItemInterface + 3))(this, 0);
    if ( v3 != 0 )
      return v3;
    if ( `guard variable for'IEconItemInterface::IsGiftable(void)::pAttrib_Giftable == 0
      && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::IsGiftable(void)::pAttrib_Giftable) != 0 )
    {
      CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
        &IEconItemInterface::IsGiftable(void)const::pAttrib_Giftable,
        "giftable");
      __cxa_guard_release(&`guard variable for'IEconItemInterface::IsGiftable(void)::pAttrib_Giftable);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &IEconItemInterface::IsGiftable(void)const::pAttrib_Giftable,
        &_dso_handle);
    }
    if ( IEconItemInterface::IsGiftable(void)const::pAttrib_Giftable.m_szName != 0 )
    {
      v16 = ItemSystem()->m_itemSchema.m_unResetCount;
      v17 = IEconItemInterface::IsGiftable(void)const::pAttrib_Giftable.m_pRef;
      if ( v16 != IEconItemInterface::IsGiftable(void)const::pAttrib_Giftable.m_unSchemaGeneration )
      {
        v18 = IEconItemInterface::IsGiftable(void)const::pAttrib_Giftable.m_szName;
        v19 = ItemSystem();
        v17 = CEconItemSchema::GetAttributeDefinitionByName(&v19->m_itemSchema, v18);
        IEconItemInterface::IsGiftable(void)const::pAttrib_Giftable.m_unSchemaGeneration = v16;
        IEconItemInterface::IsGiftable(void)const::pAttrib_Giftable.m_pRef = v17;
      }
      if ( v17 != 0 )
      {
        unGiftableCount = 0;
        v20 = CSchemaFieldHandle<CEconItemAttributeDefinition>::Get(&IEconItemInterface::IsGiftable(void)const::pAttrib_Giftable);
        if ( v20 != 0 )
        {
          v24 = v20;
          p_unGiftableCount = &unGiftableCount;
          v21 = this->_vptr_IEconItemInterface;
          v23 = &wrapper;
          v26 = 0;
          v21[28](this, &v23);
          if ( v26 && unGiftableCount != 0 )
            return v26;
        }
        return v3;
      }
    }
  }
  return 0;
}


// IEconItemInterface::IsCommodity  (line 234, @0x0000000002e9c660, libserver.so)  // inlines: CAttributeIterator_HasAttribute, CSchemaFieldHandle, FindAttribute, FindAttribute<IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*, operator==
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: CEconItem::IsCommodity
// strings: "is commodity"
// globals: `guard variable for'IEconItemInterface::IsCommodity(void)::pAttrib_IsCommodity, IEconItemInterface::IsCommodity(void)::pAttrib_IsCommodity, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall IEconItemInterface::IsCommodity(const IEconItemInterface *const this)
{
  uint32 v2; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v5; // rax
  uint32 v6; // r12d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v8; // r13
  CEconItemSystem *v9; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  bool result; // al
  CEconItemSystem *v12; // rax
  uint32 m_unResetCount; // eax
  _QWORD v14[2]; // [rsp+0h] [rbp-40h] BYREF
  bool v15; // [rsp+10h] [rbp-30h]

  if ( (*(this->_vptr_IEconItemInterface + 12))(this) == 0 )
    return 0;
  if ( `guard variable for'IEconItemInterface::IsCommodity(void)::pAttrib_IsCommodity == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::IsCommodity(void)::pAttrib_IsCommodity) != 0 )
  {
    IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_szName = "is commodity";
    v12 = ItemSystem();
    IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                               &v12->m_itemSchema,
                                                                               "is commodity");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_bDestructName = 0;
    IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::IsCommodity(void)::pAttrib_IsCommodity);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity,
      &_dso_handle);
  }
  if ( IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_szName == 0 )
    return 0;
  v2 = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_pRef;
  if ( v2 != IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_unSchemaGeneration )
  {
    m_szName = IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_szName;
    v5 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v5->m_itemSchema, m_szName);
    IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_unSchemaGeneration = v2;
    IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 || IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_szName == 0 )
    return 0;
  v6 = ItemSystem()->m_itemSchema.m_unResetCount;
  AttributeDefinitionByName = IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_pRef;
  if ( v6 != IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_unSchemaGeneration )
  {
    v8 = IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_szName;
    v9 = ItemSystem();
    AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v9->m_itemSchema, v8);
    IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_unSchemaGeneration = v6;
    IEconItemInterface::IsCommodity(void)const::pAttrib_IsCommodity.m_pRef = AttributeDefinitionByName;
  }
  if ( AttributeDefinitionByName == 0 )
    return 0;
  v14[1] = AttributeDefinitionByName;
  vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
  v14[0] = off_40F17F0;
  v15 = 0;
  vptr_IEconItemInterface[28](this, v14);
  result = v15;
  if ( !v15 )
    return 0;
  return result;
}


// IEconItemInterface::IsMarketable  (line 254, @0x0000000002e9dcb0, libserver.so)  // inlines: CAttributeIterator_HasAttribute, FindAttribute, FindAttribute<IEconItemInterface>, GEconItemSchema, Get, GetItemClass, GetTypedRef, GetWithNull, RTime32TimeCur, String, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle, __cxa_guard_release, __cxa_atexit, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, V_stricmp_fast, CEconItemDefinition::GetRarityName, __cxa_guard_abort, _Unwind_Resume
// callers: CEconItem::IsMarketable
// strings: "not marketable", "player_card", "mysterious_egg"
// globals: `guard variable for'IEconItemInterface::IsMarketable(void)::pAttrib_NotMarketable, IEconItemInterface::IsMarketable(void)::pAttrib_NotMarketable, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall IEconItemInterface::IsMarketable(const IEconItemInterface *const this)
{
  __int64 v2; // r13
  char v3; // r12
  RTime32 v5; // eax
  uint32 m_unResetCount; // r14d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r15
  CEconItemSystem *v9; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  int v11; // eax
  const char *RarityName; // rax
  _QWORD v13[2]; // [rsp+0h] [rbp-50h] BYREF
  char v14; // [rsp+10h] [rbp-40h]

  v2 = (*(this->_vptr_IEconItemInterface + 12))(this);
  if ( v2 == 0 )
    return 0;
  v3 = (*(this->_vptr_IEconItemInterface + 3))(this, 0);
  if ( v3 == 0 )
    return 0;
  if ( ((*(this->_vptr_IEconItemInterface + 29))(this) & 0x20000000) != 0 )
    return 0;
  v5 = (*(this->_vptr_IEconItemInterface + 11))(this);
  if ( v5 != 0 && v5 < CRTime::sm_nTimeCur )
    return 0;
  if ( `guard variable for'IEconItemInterface::IsMarketable(void)::pAttrib_NotMarketable == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::IsMarketable(void)::pAttrib_NotMarketable) != 0 )
  {
    CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
      &IEconItemInterface::IsMarketable(void)const::pAttrib_NotMarketable,
      "not marketable");
    __cxa_guard_release(&`guard variable for'IEconItemInterface::IsMarketable(void)::pAttrib_NotMarketable);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::IsMarketable(void)const::pAttrib_NotMarketable,
      &_dso_handle);
  }
  if ( IEconItemInterface::IsMarketable(void)const::pAttrib_NotMarketable.m_szName != 0 )
  {
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    m_pRef = IEconItemInterface::IsMarketable(void)const::pAttrib_NotMarketable.m_pRef;
    if ( m_unResetCount != IEconItemInterface::IsMarketable(void)const::pAttrib_NotMarketable.m_unSchemaGeneration )
    {
      m_szName = IEconItemInterface::IsMarketable(void)const::pAttrib_NotMarketable.m_szName;
      v9 = ItemSystem();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v9->m_itemSchema, m_szName);
      IEconItemInterface::IsMarketable(void)const::pAttrib_NotMarketable.m_unSchemaGeneration = m_unResetCount;
      IEconItemInterface::IsMarketable(void)const::pAttrib_NotMarketable.m_pRef = m_pRef;
    }
    if ( m_pRef != 0 )
    {
      v13[1] = m_pRef;
      vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
      v13[0] = off_40F17F0;
      v14 = 0;
      vptr_IEconItemInterface[28](this, v13);
      if ( v14 != 0 )
        return 0;
    }
  }
  v11 = (*(this->_vptr_IEconItemInterface + 15))(this);
  if ( (v11 - 5) <= 2 || (v11 - 13) <= 1 || *(v2 + 240) != 0 && V_stricmp_fast(*(v2 + 240), "player_card") == 0 )
    return 0;
  if ( *(v2 + 33) > 1u && (*(this->_vptr_IEconItemInterface + 19))(this) < *(v2 + 33) )
    return 0;
  if ( *(v2 + 192) == 0
    && (*(v2 + 36) & 4) == 0
    && (*(v2 + 240) == 0 || V_stricmp_fast(*(v2 + 240), "mysterious_egg") != 0) )
  {
    RarityName = CEconItemDefinition::GetRarityName(v2);
    V_stricmp_fast(RarityName, "immortal");
  }
  return v3;
}


// IEconItemInterface::IsUsableInCrafting  (line 321, @0x0000000002e9c470, libserver.so)  // inlines: CAttributeIterator_HasAttribute, CSchemaFieldHandle, FindAttribute, FindAttribute<IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: CEconItem::IsUsableInCrafting
// strings: "cannot craft"
// globals: `guard variable for'IEconItemInterface::IsUsableInCrafting(void)::pAttrib_CannotCraft, IEconItemInterface::IsUsableInCrafting(void)::pAttrib_CannotCraft, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall IEconItemInterface::IsUsableInCrafting(const IEconItemInterface *const this)
{
  uint32 v2; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v5; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  CEconItemSystem *v8; // rax
  uint32 m_unResetCount; // eax
  unsigned int v10; // ecx
  _QWORD v11[2]; // [rsp+0h] [rbp-40h] BYREF
  char v12; // [rsp+10h] [rbp-30h]

  if ( (*(this->_vptr_IEconItemInterface + 12))(this) == 0 )
    return 0;
  if ( `guard variable for'IEconItemInterface::IsUsableInCrafting(void)::pAttrib_CannotCraft == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::IsUsableInCrafting(void)::pAttrib_CannotCraft) != 0 )
  {
    IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_szName = "cannot craft";
    v8 = ItemSystem();
    IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                      &v8->m_itemSchema,
                                                                                      "cannot craft");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_bDestructName = 0;
    IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'IEconItemInterface::IsUsableInCrafting(void)::pAttrib_CannotCraft);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft,
      &_dso_handle);
  }
  if ( IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_szName != 0 )
  {
    v2 = ItemSystem()->m_itemSchema.m_unResetCount;
    m_pRef = IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_pRef;
    if ( v2 != IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_unSchemaGeneration )
    {
      m_szName = IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_szName;
      v5 = ItemSystem();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v5->m_itemSchema, m_szName);
      IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_unSchemaGeneration = v2;
      IEconItemInterface::IsUsableInCrafting(void)const::pAttrib_CannotCraft.m_pRef = m_pRef;
    }
    if ( m_pRef != 0 )
    {
      v11[1] = m_pRef;
      vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
      v11[0] = off_40F17F0;
      v12 = 0;
      vptr_IEconItemInterface[28](this, v11);
      if ( v12 != 0 )
        return 0;
    }
  }
  if ( ((*(this->_vptr_IEconItemInterface + 17))(this) & 2) != 0 )
    return 0;
  if ( ((*(this->_vptr_IEconItemInterface + 29))(this) & 0x20000000) != 0 )
    return 0;
  v10 = (*(this->_vptr_IEconItemInterface + 18))(this) + 1;
  if ( v10 <= 0x13 && ((1LL << v10) & 0xC8041) != 0 )
    return 0;
  if ( (*(this->_vptr_IEconItemInterface + 15))(this) > 4 && (*(this->_vptr_IEconItemInterface + 15))(this) <= 7 )
    return 0;
  else
    return (((*(this->_vptr_IEconItemInterface + 17))(this) >> 3) ^ 1) & 1;
}


// IEconItemInterface::IsDynamicRecipe  (line 363, @0x0000000002e696a0, libserver.so)  // inlines: V_isempty, _V_strcmp
// strings: "dynamic_recipe"
bool __fastcall IEconItemInterface::IsDynamicRecipe(const IEconItemInterface *const this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  _BYTE *v3; // rax

  v1 = (*(this->_vptr_IEconItemInterface + 12))(this);
  v2 = v1;
  return v1 != 0 && (v3 = (*(*v1 + 8LL))(v1)) != 0 && *v3 != 0 && strcmp((*(*v2 + 8LL))(v2), "dynamic_recipe") == 0;
}


// IEconItemInterface::IsPennant  (line 378, @0x0000000002e69700, libserver.so)  // inlines: V_isempty, _V_strcmp
// strings: "pennant"
bool __fastcall IEconItemInterface::IsPennant(const IEconItemInterface *const this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  _BYTE *v3; // rax

  v1 = (*(this->_vptr_IEconItemInterface + 12))(this);
  v2 = v1;
  return v1 != 0 && (v3 = (*(*v1 + 8LL))(v1)) != 0 && *v3 != 0 && strcmp((*(*v2 + 8LL))(v2), "pennant") == 0;
}


// IEconItemInterface::IsDeletable  (line 393, @0x0000000002e9dee0, libserver.so)  // inlines: CAttributeIterator_HasAttribute, FindAttribute, FindAttribute<IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: CEconItemDefinition::GetRarityName, V_stricmp_fast, __cxa_guard_acquire, CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle, __cxa_guard_release, __cxa_atexit, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_abort, _Unwind_Resume
// strings: "cannot delete"
// globals: `guard variable for'IEconItemInterface::IsDeletable(void)::pAttrDef_CannotDelete, IEconItemInterface::IsDeletable(void)::pAttrDef_CannotDelete, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall IEconItemInterface::IsDeletable(const IEconItemInterface *const this)
{
  __int64 v2; // rax
  const CEconItemDefinition *v3; // rbx
  const char *RarityName; // rax
  uint32 m_unResetCount; // ebx
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v9; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-40h] BYREF
  char v12; // [rsp+10h] [rbp-30h]

  v2 = (*(this->_vptr_IEconItemInterface + 12))(this);
  v3 = v2;
  if ( v2 == 0 )
    return 0;
  if ( (*(*v2 + 112LL))(v2) != 0 )
    return 0;
  RarityName = CEconItemDefinition::GetRarityName(v3);
  if ( V_stricmp_fast(RarityName, "arcana") == 0 || ((*(this->_vptr_IEconItemInterface + 29))(this) & 0x20000000) != 0 )
    return 0;
  if ( `guard variable for'IEconItemInterface::IsDeletable(void)::pAttrDef_CannotDelete == 0
    && __cxa_guard_acquire(&`guard variable for'IEconItemInterface::IsDeletable(void)::pAttrDef_CannotDelete) != 0 )
  {
    CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
      &IEconItemInterface::IsDeletable(void)const::pAttrDef_CannotDelete,
      "cannot delete");
    __cxa_guard_release(&`guard variable for'IEconItemInterface::IsDeletable(void)::pAttrDef_CannotDelete);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &IEconItemInterface::IsDeletable(void)const::pAttrDef_CannotDelete,
      &_dso_handle);
  }
  if ( IEconItemInterface::IsDeletable(void)const::pAttrDef_CannotDelete.m_szName == 0 )
    return 1;
  m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = IEconItemInterface::IsDeletable(void)const::pAttrDef_CannotDelete.m_pRef;
  if ( m_unResetCount != IEconItemInterface::IsDeletable(void)const::pAttrDef_CannotDelete.m_unSchemaGeneration )
  {
    m_szName = IEconItemInterface::IsDeletable(void)const::pAttrDef_CannotDelete.m_szName;
    v9 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v9->m_itemSchema, m_szName);
    IEconItemInterface::IsDeletable(void)const::pAttrDef_CannotDelete.m_unSchemaGeneration = m_unResetCount;
    IEconItemInterface::IsDeletable(void)const::pAttrDef_CannotDelete.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 )
    return 1;
  v11[1] = m_pRef;
  vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
  v11[0] = off_40F17F0;
  v12 = 0;
  vptr_IEconItemInterface[28](this, v11);
  return v12 ^ 1;
}


