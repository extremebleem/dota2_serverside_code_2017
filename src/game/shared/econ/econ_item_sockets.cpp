
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetAttrDef_GemNotRemovable  (line 30, @0x0000000002e9b960, libserver.so)  // inlines: CSchemaFieldHandle, GEconItemSchema, GetTypedRef
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: TItemSocket<CProtoItemSocket_AssetModifier>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Spectator>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Effect>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Empty>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Autograph>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Strange>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Color>::HasUnremovableGem
// strings: "gem not removable"
// globals: `guard variable for'GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable, GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
const CSchemaAttributeDefHandle *__cdecl GetAttrDef_GemNotRemovable()
{
  CEconItemSystem *v1; // rax
  uint32 m_unResetCount; // eax

  if ( `guard variable for'GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable != 0 )
    return &GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable;
  if ( __cxa_guard_acquire(&`guard variable for'GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable) != 0 )
  {
    GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable.m_szName = "gem not removable";
    v1 = ItemSystem();
    GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                          &v1->m_itemSchema,
                                                                          "gem not removable");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable.m_bDestructName = 0;
    GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable,
      &_dso_handle);
  }
  return &GetAttrDef_GemNotRemovable(void)::pAttrDef_GemNotRemovable;
}


// CAttribute_Socket::ItemSocketFactory  (line 49, @0x0000000002e9d2e0, libserver.so)  // inlines: CSchemaFieldHandle, FindAttribute<CEconItemDefinition, unsigned int>, GEconItemSchema, Get, GetItemDefinition, GetItemSchema, GetTypedRef, TItemSocket, operator const CEconItemAttributeDefinition*, ~IItemSocket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CEconItemDefinition>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, Warning, operator new, CProtoItemSocket_Empty::CProtoItemSocket_Empty, CProtoItemSocket_Spectator::CProtoItemSocket_Spectator, CProtoItemSocket_Autograph::CProtoItemSocket_Autograph (19 total)
// callers: CAttribute_Socket::InitEmpty, CAttribute_Socket::ParseFromString, TItemSocket<CProtoItemSocket_Autograph>::CopyItemSocket, TItemSocket<CProtoItemSocket_AssetModifier>::CopyItemSocket, TItemSocket<CProtoItemSocket_Spectator>::CopyItemSocket, TItemSocket<CProtoItemSocket_Strange>::CopyItemSocket, TItemSocket<CProtoItemSocket_Color>::CopyItemSocket, TItemSocket<CProtoItemSocket_Effect>::CopyItemSocket, TItemSocket<CProtoItemSocket_Empty>::CopyItemSocket, CAttribute_Socket::ParseFromByteStream
// strings: "gem type", "CAttribute_Socket::ItemSocketFactory:  Unknown gem type for gem def %u\n"
// globals: INVALID_ITEM_DEF_INDEX, `guard variable for'CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType, CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType, jpt_2E9D3B2, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
IItemSocket *__fastcall CAttribute_Socket::ItemSocketFactory(item_definition_index_t unGemDefIndex)
{
  CEconItemSystem *v2; // rax
  CEconItemDefinition *ItemDefinitionMutable; // r12
  CEconItemSystem *v4; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  uint32 v6; // r13d
  const char *m_szName; // r14
  CEconItemSystem *v8; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  CEconItemSystem *v10; // rax
  uint32 m_unResetCount; // eax
  IItemSocket *v12; // rbx
  IItemSocket *result; // rax
  IItemSocket *v14; // rbx
  IItemSocket *v15; // rbx
  IItemSocket *v16; // rbx
  IItemSocket *v17; // rbx
  IItemSocket *v18; // rbx
  IItemSocket *v19; // rbx
  uint32 unGemType[9]; // [rsp+Ch] [rbp-24h] BYREF

  if ( unGemDefIndex.m_Data == INVALID_ITEM_DEF_INDEX.m_Data )
  {
    v12 = operator new(0x28u);
    v12[1]._vptr_IItemSocket = 0;
    v12[2]._vptr_IItemSocket = 0;
    LODWORD(v12[3]._vptr_IItemSocket) = 0;
    HIDWORD(v12[3]._vptr_IItemSocket) = 0;
    v12[4]._vptr_IItemSocket = 0;
    v12->_vptr_IItemSocket = &off_47A60F0;
    CProtoItemSocket_Empty::CProtoItemSocket_Empty(&v12[1]);
    goto LABEL_13;
  }
  v2 = ItemSystem();
  ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v2->m_itemSchema, unGemDefIndex.m_Data, 0);
  if ( ItemDefinitionMutable == 0 )
  {
LABEL_12:
    v12 = operator new(0x28u);  // new CItemSocket_Empty (size matches)
    v12[1]._vptr_IItemSocket = 0;
    v12[2]._vptr_IItemSocket = 0;
    LODWORD(v12[3]._vptr_IItemSocket) = 0;
    HIDWORD(v12[3]._vptr_IItemSocket) = 0;
    v12[4]._vptr_IItemSocket = 0;
    v12->_vptr_IItemSocket = &off_47A60F0;
    CProtoItemSocket_Empty::CProtoItemSocket_Empty(&v12[1]);
LABEL_13:
    v12->_vptr_IItemSocket = off_47A8430;  // vptr: CItemSocket_Empty
    return v12;
  }
  if ( `guard variable for'CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType == 0
    && __cxa_guard_acquire(&`guard variable for'CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType) != 0 )
  {
    CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_szName = "gem type";
    v10 = ItemSystem();
    CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                               &v10->m_itemSchema,
                                                                                               "gem type");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_bDestructName = 0;
    CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType,
      &_dso_handle);
  }
  unGemType[0] = 0;
  if ( CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_szName != 0 )
  {
    v4 = ItemSystem();
    m_pRef = CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_pRef;
    v6 = v4->m_itemSchema.m_unResetCount;
    if ( v6 != CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_unSchemaGeneration )
    {
      m_szName = CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_szName;
      v8 = ItemSystem();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v8->m_itemSchema, m_szName);
      CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_unSchemaGeneration = v6;
      m_pRef = AttributeDefinitionByName;
      CAttribute_Socket::ItemSocketFactory(item_definition_index_t)::pAttrDef_GemType.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( !FindAttribute_UnsafeBitwiseCast<unsigned int,unsigned int,CEconItemDefinition>(
          ItemDefinitionMutable,
          m_pRef,
          unGemType) )
  {
LABEL_11:
    Warning("CAttribute_Socket::ItemSocketFactory:  Unknown gem type for gem def %u\n", unGemDefIndex.m_Data);
    goto LABEL_12;
  }
  switch ( unGemType[0] )
  {
    case 1u:
      v19 = operator new(0x30u);  // new CItemSocket_Effect (size matches)
      memset(v19, 0, 0x30u);
      v19->_vptr_IItemSocket = &off_47A64F0;
      CProtoItemSocket_Effect::CProtoItemSocket_Effect(&v19[1]);
      v19->_vptr_IItemSocket = off_47A8530;  // vptr: CItemSocket_Effect
      result = v19;
      break;
    case 2u:
      v18 = operator new(0x38u);  // new CItemSocket_Color (size matches)
      memset(v18, 0, 0x38u);
      v18->_vptr_IItemSocket = &off_47A65F0;
      CProtoItemSocket_Color::CProtoItemSocket_Color(&v18[1]);
      v18->_vptr_IItemSocket = off_47A8630;  // vptr: CItemSocket_Color
      result = v18;
      break;
    case 3u:
      v17 = operator new(0x30u);  // new CItemSocket_Strange (size matches)
      memset(v17, 0, 0x30u);
      v17->_vptr_IItemSocket = &off_47A61F0;
      CProtoItemSocket_Strange::CProtoItemSocket_Strange(&v17[1]);
      v17->_vptr_IItemSocket = off_47A8730;  // vptr: CItemSocket_Strange
      result = v17;
      break;
    case 5u:
    case 8u:
      v16 = operator new(0x30u);  // new CItemSocket_AssetModifier (size matches)
      memset(v16, 0, 0x30u);
      v16->_vptr_IItemSocket = &off_47A63F0;
      CProtoItemSocket_AssetModifier::CProtoItemSocket_AssetModifier(&v16[1]);
      v16->_vptr_IItemSocket = off_47A8930;  // vptr: CItemSocket_AssetModifier
      result = v16;
      break;
    case 6u:
      v15 = operator new(0x38u);  // new CItemSocket_Autograph (size matches)
      memset(v15, 0, 0x38u);
      v15->_vptr_IItemSocket = &off_47A66F0;
      CProtoItemSocket_Autograph::CProtoItemSocket_Autograph(&v15[1]);
      v15->_vptr_IItemSocket = off_47A8A30;  // vptr: CItemSocket_Autograph
      result = v15;
      break;
    case 7u:
      v14 = operator new(0x38u);  // new CItemSocket_Spectator (size matches)
      memset(v14, 0, 0x38u);
      v14->_vptr_IItemSocket = &off_47A62F0;
      CProtoItemSocket_Spectator::CProtoItemSocket_Spectator(&v14[1]);
      v14->_vptr_IItemSocket = off_47A8830;  // vptr: CItemSocket_Spectator
      result = v14;
      break;
    default:
      goto LABEL_11;
  }
  return result;
}


// CAttribute_Socket::CAttribute_Socket  (line 91, @0x0000000002e6f040, libserver.so)
// callers: CEconItem::GetGemInfo, CEconTool_GemCombiner::CanApplyTo
void __fastcall CAttribute_Socket::CAttribute_Socket(CAttribute_Socket *const this)
{
  this->m_pSocket = 0;
}


// CAttribute_Socket::~CAttribute_Socket  (line 97, @0x0000000002e6f050, libserver.so)
// callers: CEconItem::GetGemInfo, CEconTool_GemCombiner::CanApplyTo
void __fastcall CAttribute_Socket::~CAttribute_Socket(CAttribute_Socket *const this)
{
  IItemSocket *m_pSocket; // rdi

  m_pSocket = this->m_pSocket;
  if ( m_pSocket != 0 )
    (*(m_pSocket->_vptr_IItemSocket + 1))(m_pSocket);
  this->m_pSocket = 0;
}


// CAttribute_Socket::operator=  (line 104, @0x0000000002e6f080, libserver.so)  // inlines: CopyItemSocket
// callers: CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::OnIterateAttributeValue
CAttribute_Socket *__fastcall CAttribute_Socket::operator=(
        CAttribute_Socket *const this,
        const CAttribute_Socket *const rhs)
{
  this->m_pSocket = (*(rhs->m_pSocket->_vptr_IItemSocket + 2))(rhs->m_pSocket);
  return this;
}


// CAttribute_Socket::CopyItemSocket  (line 111, @0x0000000002e6f0b0, libserver.so)
IItemSocket *__fastcall CAttribute_Socket::CopyItemSocket(const CAttribute_Socket *const this)
{
  return (*(this->m_pSocket->_vptr_IItemSocket + 2))(this->m_pSocket);
}


// CAttribute_Socket::SetItemSocket  (line 116, @0x0000000002e6f0d0, libserver.so)
void __fastcall CAttribute_Socket::SetItemSocket(CAttribute_Socket *const this, IItemSocket *pSocket)
{
  this->m_pSocket = (*(pSocket->_vptr_IItemSocket + 2))(pSocket);
}


// CAttribute_Socket::InitEmpty  (line 123, @0x0000000002e9d6e0, libserver.so)
// calls: CAttribute_Socket::ItemSocketFactory
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CAttribute_Socket::InitEmpty(CAttribute_Socket *const this)
{
  IItemSocket *m_pSocket; // rdi

  m_pSocket = this->m_pSocket;
  if ( m_pSocket != 0 )
    (*(m_pSocket->_vptr_IItemSocket + 1))(m_pSocket);
  this->m_pSocket = CAttribute_Socket::ItemSocketFactory(INVALID_ITEM_DEF_INDEX);
}


// CAttribute_Socket::ParseFromString  (line 151, @0x0000000002e9d710, libserver.so)  // inlines: _V_strstr, strstr
// calls: strstr, sscanf, CAttribute_Socket::ItemSocketFactory
// callers: CSchemaAttributeType_Socket::BConvertStringToEconAttributeValue
// strings: "gem_def_index", "gem_def_index: %u"
void __fastcall CAttribute_Socket::ParseFromString(CAttribute_Socket *const this, const std::string *const strRecord)
{
  char *v4; // rax
  item_definition_index_t v5; // di
  IItemSocket *v6; // rax
  uint32 unGemDefIndex; // [rsp+Ch] [rbp-14h] BYREF

  if ( this->m_pSocket == 0 )
  {
    unGemDefIndex = 0;
    v4 = strstr(strRecord->_M_dataplus._M_p, "gem_def_index");
    v5.m_Data = 0;
    if ( v4 != 0 )
    {
      sscanf(v4, "gem_def_index: %u", &unGemDefIndex);
      v5.m_Data = unGemDefIndex;
    }
    v6 = CAttribute_Socket::ItemSocketFactory(v5);
    this->m_pSocket = v6;
    (*(v6->_vptr_IItemSocket + 3))(v6, strRecord);
  }
}


// CAttribute_Socket::ConvertToString  (line 169, @0x0000000002e6f0f0, libserver.so)
void __fastcall CAttribute_Socket::ConvertToString(const CAttribute_Socket *const this, std::string *strRecord)
{
  IItemSocket *m_pSocket; // rdi

  m_pSocket = this->m_pSocket;
  if ( m_pSocket != 0 )
    (*(m_pSocket->_vptr_IItemSocket + 4))(m_pSocket, strRecord);
}


// CAttribute_Socket::ParseFromByteStream  (line 179, @0x0000000002ea0cd0, libserver.so)  // inlines: socket
// calls: CProtoItemSocket_Empty::CProtoItemSocket_Empty, google::protobuf::MessageLite::ParseFromString(std::string const&), CAttribute_Socket::ItemSocketFactory, CProtoItemSocket_Empty::~CProtoItemSocket_Empty, _Unwind_Resume
// callers: CSchemaAttributeType_Socket::ConvertByteStreamToTypedValue
void __fastcall CAttribute_Socket::ParseFromByteStream(
        CAttribute_Socket *const this,
        const std::string *const strRecord)
{
  const google::protobuf::Descriptor *containing_type; // rax
  IItemSocket *v5; // rax
  _BYTE v6[24]; // [rsp+0h] [rbp-40h] BYREF
  const google::protobuf::Descriptor *v7; // [rsp+18h] [rbp-28h]

  if ( this->m_pSocket == 0 )
  {
    CProtoItemSocket_Empty::CProtoItemSocket_Empty(v6);
    google::protobuf::MessageLite::ParseFromString(v6, strRecord);
    containing_type = v7;
    if ( v7 == 0 )
      containing_type = CProtoItemSocket_Empty::default_instance_->containing_type_;
    v5 = CAttribute_Socket::ItemSocketFactory(containing_type->fields_);
    this->m_pSocket = v5;
    (*(v5->_vptr_IItemSocket + 5))(v5, strRecord);
    CProtoItemSocket_Empty::~CProtoItemSocket_Empty(v6);
  }
}


// CAttribute_Socket::ConvertToByteStream  (line 193, @0x0000000002e6f120, libserver.so)
void __fastcall CAttribute_Socket::ConvertToByteStream(const CAttribute_Socket *const this, std::string *strRecord)
{
  IItemSocket *m_pSocket; // rdi

  m_pSocket = this->m_pSocket;
  if ( m_pSocket != 0 )
    (*(m_pSocket->_vptr_IItemSocket + 6))(m_pSocket, strRecord);
}


// TItemSocket<CProtoItemSocket_Strange>::GetQuality  (line 208, @0x0000000002ebff70, libserver.so)  // inlines: CSchemaFieldHandle, FindAttribute<CEconItemDefinition, unsigned int>, GEconItemSchema, Get, GetItemDefinition, GetItemSchema, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CEconItemDefinition>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "gem quality"
// globals: `guard variable for'TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)::pAttr_GemQuality, TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)::pAttr_GemQuality, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
EEconItemQuality __fastcall TItemSocket<CProtoItemSocket_Strange>::GetQuality(
        const TItemSocket<CProtoItemSocket_Strange> *const this)
{
  uint16 v1; // bx
  CEconItemSystem *v2; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rbx
  uint32 v4; // r12d
  const char *m_szName; // r13
  CEconItemSystem *v6; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  CEconItemSystem *v10; // rax
  uint32 m_unResetCount; // eax
  uint32 unGemQuality[9]; // [rsp+Ch] [rbp-24h] BYREF

  v1 = (*(*this + 168LL))(this);
  v2 = ItemSystem();
  ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v2->m_itemSchema, v1, 0);
  if ( ItemDefinitionMutable == 0 )
    return EEconItemQuality::AE_UNDEFINED;
  if ( `guard variable for'TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)::pAttr_GemQuality == 0
    && __cxa_guard_acquire(&`guard variable for'TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)::pAttr_GemQuality) != 0 )
  {
    TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_szName = "gem quality";
    v10 = ItemSystem();
    TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                              &v10->m_itemSchema,
                                                                                              "gem quality");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_bDestructName = 0;
    TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)::pAttr_GemQuality);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality,
      &_dso_handle);
  }
  if ( TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_szName != 0 )
  {
    v4 = ItemSystem()->m_itemSchema.m_unResetCount;
    if ( v4 == TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration )
    {
      m_pRef = TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_pRef;
    }
    else
    {
      m_szName = TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_szName;
      v6 = ItemSystem();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v6->m_itemSchema, m_szName);
      TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = v4;
      m_pRef = AttributeDefinitionByName;
      TItemSocket<CProtoItemSocket_Strange>::GetQuality(void)const::pAttr_GemQuality.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( FindAttribute_UnsafeBitwiseCast<unsigned int,unsigned int,CEconItemDefinition>(
         ItemDefinitionMutable,
         m_pRef,
         unGemQuality) )
  {
    return unGemQuality[0];
  }
  else
  {
    return EEconItemQuality::AE_UNDEFINED;
  }
}


// TItemSocket<CProtoItemSocket_Autograph>::GetQuality  (line 208, @0x0000000002ec00f0, libserver.so)  // inlines: CSchemaFieldHandle, FindAttribute<CEconItemDefinition, unsigned int>, GEconItemSchema, Get, GetItemDefinition, GetItemSchema, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CEconItemDefinition>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "gem quality"
// globals: `guard variable for'TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)::pAttr_GemQuality, TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)::pAttr_GemQuality, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
EEconItemQuality __fastcall TItemSocket<CProtoItemSocket_Autograph>::GetQuality(
        const TItemSocket<CProtoItemSocket_Autograph> *const this)
{
  uint16 v1; // bx
  CEconItemSystem *v2; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rbx
  uint32 v4; // r12d
  const char *m_szName; // r13
  CEconItemSystem *v6; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  CEconItemSystem *v10; // rax
  uint32 m_unResetCount; // eax
  uint32 unGemQuality[9]; // [rsp+Ch] [rbp-24h] BYREF

  v1 = (*(*this + 168LL))(this);
  v2 = ItemSystem();
  ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v2->m_itemSchema, v1, 0);
  if ( ItemDefinitionMutable == 0 )
    return EEconItemQuality::AE_UNDEFINED;
  if ( `guard variable for'TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)::pAttr_GemQuality == 0
    && __cxa_guard_acquire(&`guard variable for'TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)::pAttr_GemQuality) != 0 )
  {
    TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_szName = "gem quality";
    v10 = ItemSystem();
    TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                                &v10->m_itemSchema,
                                                                                                "gem quality");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_bDestructName = 0;
    TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)::pAttr_GemQuality);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality,
      &_dso_handle);
  }
  if ( TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_szName != 0 )
  {
    v4 = ItemSystem()->m_itemSchema.m_unResetCount;
    if ( v4 == TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration )
    {
      m_pRef = TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_pRef;
    }
    else
    {
      m_szName = TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_szName;
      v6 = ItemSystem();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v6->m_itemSchema, m_szName);
      TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = v4;
      m_pRef = AttributeDefinitionByName;
      TItemSocket<CProtoItemSocket_Autograph>::GetQuality(void)const::pAttr_GemQuality.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( FindAttribute_UnsafeBitwiseCast<unsigned int,unsigned int,CEconItemDefinition>(
         ItemDefinitionMutable,
         m_pRef,
         unGemQuality) )
  {
    return unGemQuality[0];
  }
  else
  {
    return EEconItemQuality::AE_UNDEFINED;
  }
}


// TItemSocket<CProtoItemSocket_Color>::GetQuality  (line 208, @0x0000000002ec0270, libserver.so)  // inlines: CSchemaFieldHandle, FindAttribute<CEconItemDefinition, unsigned int>, GEconItemSchema, Get, GetItemDefinition, GetItemSchema, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CEconItemDefinition>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "gem quality"
// globals: `guard variable for'TItemSocket<CProtoItemSocket_Color>::GetQuality(void)::pAttr_GemQuality, TItemSocket<CProtoItemSocket_Color>::GetQuality(void)::pAttr_GemQuality, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
EEconItemQuality __fastcall TItemSocket<CProtoItemSocket_Color>::GetQuality(
        const TItemSocket<CProtoItemSocket_Color> *const this)
{
  uint16 v1; // bx
  CEconItemSystem *v2; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rbx
  uint32 v4; // r12d
  const char *m_szName; // r13
  CEconItemSystem *v6; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  CEconItemSystem *v10; // rax
  uint32 m_unResetCount; // eax
  uint32 unGemQuality[9]; // [rsp+Ch] [rbp-24h] BYREF

  v1 = (*(*this + 168LL))(this);
  v2 = ItemSystem();
  ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v2->m_itemSchema, v1, 0);
  if ( ItemDefinitionMutable == 0 )
    return EEconItemQuality::AE_UNDEFINED;
  if ( `guard variable for'TItemSocket<CProtoItemSocket_Color>::GetQuality(void)::pAttr_GemQuality == 0
    && __cxa_guard_acquire(&`guard variable for'TItemSocket<CProtoItemSocket_Color>::GetQuality(void)::pAttr_GemQuality) != 0 )
  {
    TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_szName = "gem quality";
    v10 = ItemSystem();
    TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                            &v10->m_itemSchema,
                                                                                            "gem quality");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_bDestructName = 0;
    TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'TItemSocket<CProtoItemSocket_Color>::GetQuality(void)::pAttr_GemQuality);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality,
      &_dso_handle);
  }
  if ( TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_szName != 0 )
  {
    v4 = ItemSystem()->m_itemSchema.m_unResetCount;
    if ( v4 == TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration )
    {
      m_pRef = TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_pRef;
    }
    else
    {
      m_szName = TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_szName;
      v6 = ItemSystem();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v6->m_itemSchema, m_szName);
      TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = v4;
      m_pRef = AttributeDefinitionByName;
      TItemSocket<CProtoItemSocket_Color>::GetQuality(void)const::pAttr_GemQuality.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( FindAttribute_UnsafeBitwiseCast<unsigned int,unsigned int,CEconItemDefinition>(
         ItemDefinitionMutable,
         m_pRef,
         unGemQuality) )
  {
    return unGemQuality[0];
  }
  else
  {
    return EEconItemQuality::AE_UNDEFINED;
  }
}


// TItemSocket<CProtoItemSocket_Spectator>::GetQuality  (line 208, @0x0000000002ec03f0, libserver.so)  // inlines: CSchemaFieldHandle, FindAttribute<CEconItemDefinition, unsigned int>, GEconItemSchema, Get, GetItemDefinition, GetItemSchema, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CEconItemDefinition>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "gem quality"
// globals: `guard variable for'TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)::pAttr_GemQuality, TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)::pAttr_GemQuality, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
EEconItemQuality __fastcall TItemSocket<CProtoItemSocket_Spectator>::GetQuality(
        const TItemSocket<CProtoItemSocket_Spectator> *const this)
{
  uint16 v1; // bx
  CEconItemSystem *v2; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rbx
  uint32 v4; // r12d
  const char *m_szName; // r13
  CEconItemSystem *v6; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  CEconItemSystem *v10; // rax
  uint32 m_unResetCount; // eax
  uint32 unGemQuality[9]; // [rsp+Ch] [rbp-24h] BYREF

  v1 = (*(*this + 168LL))(this);
  v2 = ItemSystem();
  ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v2->m_itemSchema, v1, 0);
  if ( ItemDefinitionMutable == 0 )
    return EEconItemQuality::AE_UNDEFINED;
  if ( `guard variable for'TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)::pAttr_GemQuality == 0
    && __cxa_guard_acquire(&`guard variable for'TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)::pAttr_GemQuality) != 0 )
  {
    TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_szName = "gem quality";
    v10 = ItemSystem();
    TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                                &v10->m_itemSchema,
                                                                                                "gem quality");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_bDestructName = 0;
    TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)::pAttr_GemQuality);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality,
      &_dso_handle);
  }
  if ( TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_szName != 0 )
  {
    v4 = ItemSystem()->m_itemSchema.m_unResetCount;
    if ( v4 == TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration )
    {
      m_pRef = TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_pRef;
    }
    else
    {
      m_szName = TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_szName;
      v6 = ItemSystem();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v6->m_itemSchema, m_szName);
      TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = v4;
      m_pRef = AttributeDefinitionByName;
      TItemSocket<CProtoItemSocket_Spectator>::GetQuality(void)const::pAttr_GemQuality.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( FindAttribute_UnsafeBitwiseCast<unsigned int,unsigned int,CEconItemDefinition>(
         ItemDefinitionMutable,
         m_pRef,
         unGemQuality) )
  {
    return unGemQuality[0];
  }
  else
  {
    return EEconItemQuality::AE_UNDEFINED;
  }
}


// TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality  (line 208, @0x0000000002ec0570, libserver.so)  // inlines: CSchemaFieldHandle, FindAttribute<CEconItemDefinition, unsigned int>, GEconItemSchema, Get, GetItemDefinition, GetItemSchema, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CEconItemDefinition>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "gem quality"
// globals: `guard variable for'TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)::pAttr_GemQuality, TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)::pAttr_GemQuality, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
EEconItemQuality __fastcall TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(
        const TItemSocket<CProtoItemSocket_AssetModifier> *const this)
{
  uint16 v1; // bx
  CEconItemSystem *v2; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rbx
  uint32 v4; // r12d
  const char *m_szName; // r13
  CEconItemSystem *v6; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  CEconItemSystem *v10; // rax
  uint32 m_unResetCount; // eax
  uint32 unGemQuality[9]; // [rsp+Ch] [rbp-24h] BYREF

  v1 = (*(*this + 168LL))(this);
  v2 = ItemSystem();
  ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v2->m_itemSchema, v1, 0);
  if ( ItemDefinitionMutable == 0 )
    return EEconItemQuality::AE_UNDEFINED;
  if ( `guard variable for'TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)::pAttr_GemQuality == 0
    && __cxa_guard_acquire(&`guard variable for'TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)::pAttr_GemQuality) != 0 )
  {
    TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_szName = "gem quality";
    v10 = ItemSystem();
    TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                                    &v10->m_itemSchema,
                                                                                                    "gem quality");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_bDestructName = 0;
    TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)::pAttr_GemQuality);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality,
      &_dso_handle);
  }
  if ( TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_szName != 0 )
  {
    v4 = ItemSystem()->m_itemSchema.m_unResetCount;
    if ( v4 == TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration )
    {
      m_pRef = TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_pRef;
    }
    else
    {
      m_szName = TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_szName;
      v6 = ItemSystem();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v6->m_itemSchema, m_szName);
      TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = v4;
      m_pRef = AttributeDefinitionByName;
      TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality(void)const::pAttr_GemQuality.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( FindAttribute_UnsafeBitwiseCast<unsigned int,unsigned int,CEconItemDefinition>(
         ItemDefinitionMutable,
         m_pRef,
         unGemQuality) )
  {
    return unGemQuality[0];
  }
  else
  {
    return EEconItemQuality::AE_UNDEFINED;
  }
}


// TItemSocket<CProtoItemSocket_Empty>::GetQuality  (line 208, @0x0000000002ec06f0, libserver.so)  // inlines: CSchemaFieldHandle, FindAttribute<CEconItemDefinition, unsigned int>, GEconItemSchema, Get, GetItemDefinition, GetItemSchema, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CEconItemDefinition>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "gem quality"
// globals: `guard variable for'TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)::pAttr_GemQuality, TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)::pAttr_GemQuality, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
EEconItemQuality __fastcall TItemSocket<CProtoItemSocket_Empty>::GetQuality(
        const TItemSocket<CProtoItemSocket_Empty> *const this)
{
  uint16 v1; // bx
  CEconItemSystem *v2; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rbx
  uint32 v4; // r12d
  const char *m_szName; // r13
  CEconItemSystem *v6; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  CEconItemSystem *v10; // rax
  uint32 m_unResetCount; // eax
  uint32 unGemQuality[9]; // [rsp+Ch] [rbp-24h] BYREF

  v1 = (*(*this + 168LL))(this);
  v2 = ItemSystem();
  ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v2->m_itemSchema, v1, 0);
  if ( ItemDefinitionMutable == 0 )
    return EEconItemQuality::AE_UNDEFINED;
  if ( `guard variable for'TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)::pAttr_GemQuality == 0
    && __cxa_guard_acquire(&`guard variable for'TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)::pAttr_GemQuality) != 0 )
  {
    TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_szName = "gem quality";
    v10 = ItemSystem();
    TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                            &v10->m_itemSchema,
                                                                                            "gem quality");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_bDestructName = 0;
    TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)::pAttr_GemQuality);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality,
      &_dso_handle);
  }
  if ( TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_szName != 0 )
  {
    v4 = ItemSystem()->m_itemSchema.m_unResetCount;
    if ( v4 == TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration )
    {
      m_pRef = TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_pRef;
    }
    else
    {
      m_szName = TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_szName;
      v6 = ItemSystem();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v6->m_itemSchema, m_szName);
      TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = v4;
      m_pRef = AttributeDefinitionByName;
      TItemSocket<CProtoItemSocket_Empty>::GetQuality(void)const::pAttr_GemQuality.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( FindAttribute_UnsafeBitwiseCast<unsigned int,unsigned int,CEconItemDefinition>(
         ItemDefinitionMutable,
         m_pRef,
         unGemQuality) )
  {
    return unGemQuality[0];
  }
  else
  {
    return EEconItemQuality::AE_UNDEFINED;
  }
}


// TItemSocket<CProtoItemSocket_Effect>::GetQuality  (line 208, @0x0000000002ec0870, libserver.so)  // inlines: CSchemaFieldHandle, FindAttribute<CEconItemDefinition, unsigned int>, GEconItemSchema, Get, GetItemDefinition, GetItemSchema, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CEconItemDefinition>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "gem quality"
// globals: `guard variable for'TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)::pAttr_GemQuality, TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)::pAttr_GemQuality, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
EEconItemQuality __fastcall TItemSocket<CProtoItemSocket_Effect>::GetQuality(
        const TItemSocket<CProtoItemSocket_Effect> *const this)
{
  uint16 v1; // bx
  CEconItemSystem *v2; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rbx
  uint32 v4; // r12d
  const char *m_szName; // r13
  CEconItemSystem *v6; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  CEconItemSystem *v10; // rax
  uint32 m_unResetCount; // eax
  uint32 unGemQuality[9]; // [rsp+Ch] [rbp-24h] BYREF

  v1 = (*(*this + 168LL))(this);
  v2 = ItemSystem();
  ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v2->m_itemSchema, v1, 0);
  if ( ItemDefinitionMutable == 0 )
    return EEconItemQuality::AE_UNDEFINED;
  if ( `guard variable for'TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)::pAttr_GemQuality == 0
    && __cxa_guard_acquire(&`guard variable for'TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)::pAttr_GemQuality) != 0 )
  {
    TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_szName = "gem quality";
    v10 = ItemSystem();
    TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                             &v10->m_itemSchema,
                                                                                             "gem quality");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_bDestructName = 0;
    TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)::pAttr_GemQuality);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality,
      &_dso_handle);
  }
  if ( TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_szName != 0 )
  {
    v4 = ItemSystem()->m_itemSchema.m_unResetCount;
    if ( v4 == TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration )
    {
      m_pRef = TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_pRef;
    }
    else
    {
      m_szName = TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_szName;
      v6 = ItemSystem();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v6->m_itemSchema, m_szName);
      TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_unSchemaGeneration = v4;
      m_pRef = AttributeDefinitionByName;
      TItemSocket<CProtoItemSocket_Effect>::GetQuality(void)const::pAttr_GemQuality.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( FindAttribute_UnsafeBitwiseCast<unsigned int,unsigned int,CEconItemDefinition>(
         ItemDefinitionMutable,
         m_pRef,
         unGemQuality) )
  {
    return unGemQuality[0];
  }
  else
  {
    return EEconItemQuality::AE_UNDEFINED;
  }
}


// TItemSocket<CProtoItemSocket_Autograph>::GetImage  (line 228, @0x0000000002ebdc50, libserver.so)  // inlines: GetInventoryOverlayImage, GetItemDefinition, GetItemSchema, GetWithNull, String, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<char>::Set
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall TItemSocket<CProtoItemSocket_Autograph>::GetImage(
        const TItemSocket<CProtoItemSocket_Autograph> *const this,
        CUtlConstString *const strImage,
        CUtlConstString *const strImageOverlay)
{
  const google::protobuf::Descriptor *containing_type; // rax
  uint16 fields; // bx
  CEconItemSystem *v7; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v9; // rbx
  const char *v10; // rax
  const char *m_pAsString; // rsi

  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Autograph::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields == INVALID_ITEM_DEF_INDEX.m_Data
    || (v7 = ItemSystem(),
        ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v7->m_itemSchema, fields, 0),
        v9 = ItemDefinitionMutable,
        ItemDefinitionMutable == 0) )
  {
    CUtlConstStringBase<char>::Set(strImage, "");
    m_pAsString = "";
  }
  else
  {
    v10 = (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 5))(ItemDefinitionMutable);
    CUtlConstStringBase<char>::Set(strImage, v10);
    m_pAsString = v9->m_symInventoryOverlayImage.u.m_pAsString;
  }
  CUtlConstStringBase<char>::Set(strImageOverlay, m_pAsString);
}


// TItemSocket<CProtoItemSocket_AssetModifier>::GetImage  (line 228, @0x0000000002ebe010, libserver.so)  // inlines: GetInventoryOverlayImage, GetItemDefinition, GetItemSchema, GetWithNull, String, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<char>::Set
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall TItemSocket<CProtoItemSocket_AssetModifier>::GetImage(
        const TItemSocket<CProtoItemSocket_AssetModifier> *const this,
        CUtlConstString *const strImage,
        CUtlConstString *const strImageOverlay)
{
  const google::protobuf::Descriptor *containing_type; // rax
  uint16 fields; // bx
  CEconItemSystem *v7; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v9; // rbx
  const char *v10; // rax
  const char *m_pAsString; // rsi

  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_AssetModifier::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields == INVALID_ITEM_DEF_INDEX.m_Data
    || (v7 = ItemSystem(),
        ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v7->m_itemSchema, fields, 0),
        v9 = ItemDefinitionMutable,
        ItemDefinitionMutable == 0) )
  {
    CUtlConstStringBase<char>::Set(strImage, "");
    m_pAsString = "";
  }
  else
  {
    v10 = (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 5))(ItemDefinitionMutable);
    CUtlConstStringBase<char>::Set(strImage, v10);
    m_pAsString = v9->m_symInventoryOverlayImage.u.m_pAsString;
  }
  CUtlConstStringBase<char>::Set(strImageOverlay, m_pAsString);
}


// TItemSocket<CProtoItemSocket_Spectator>::GetImage  (line 228, @0x0000000002ebe2a0, libserver.so)  // inlines: GetInventoryOverlayImage, GetItemDefinition, GetItemSchema, GetWithNull, String, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<char>::Set
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall TItemSocket<CProtoItemSocket_Spectator>::GetImage(
        const TItemSocket<CProtoItemSocket_Spectator> *const this,
        CUtlConstString *const strImage,
        CUtlConstString *const strImageOverlay)
{
  const google::protobuf::Descriptor *containing_type; // rax
  uint16 fields; // bx
  CEconItemSystem *v7; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v9; // rbx
  const char *v10; // rax
  const char *m_pAsString; // rsi

  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Spectator::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields == INVALID_ITEM_DEF_INDEX.m_Data
    || (v7 = ItemSystem(),
        ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v7->m_itemSchema, fields, 0),
        v9 = ItemDefinitionMutable,
        ItemDefinitionMutable == 0) )
  {
    CUtlConstStringBase<char>::Set(strImage, "");
    m_pAsString = "";
  }
  else
  {
    v10 = (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 5))(ItemDefinitionMutable);
    CUtlConstStringBase<char>::Set(strImage, v10);
    m_pAsString = v9->m_symInventoryOverlayImage.u.m_pAsString;
  }
  CUtlConstStringBase<char>::Set(strImageOverlay, m_pAsString);
}


// TItemSocket<CProtoItemSocket_Strange>::GetImage  (line 228, @0x0000000002ebe660, libserver.so)  // inlines: GetInventoryOverlayImage, GetItemDefinition, GetItemSchema, GetWithNull, String, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<char>::Set
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall TItemSocket<CProtoItemSocket_Strange>::GetImage(
        const TItemSocket<CProtoItemSocket_Strange> *const this,
        CUtlConstString *const strImage,
        CUtlConstString *const strImageOverlay)
{
  const google::protobuf::Descriptor *containing_type; // rax
  uint16 fields; // bx
  CEconItemSystem *v7; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v9; // rbx
  const char *v10; // rax
  const char *m_pAsString; // rsi

  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Strange::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields == INVALID_ITEM_DEF_INDEX.m_Data
    || (v7 = ItemSystem(),
        ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v7->m_itemSchema, fields, 0),
        v9 = ItemDefinitionMutable,
        ItemDefinitionMutable == 0) )
  {
    CUtlConstStringBase<char>::Set(strImage, "");
    m_pAsString = "";
  }
  else
  {
    v10 = (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 5))(ItemDefinitionMutable);
    CUtlConstStringBase<char>::Set(strImage, v10);
    m_pAsString = v9->m_symInventoryOverlayImage.u.m_pAsString;
  }
  CUtlConstStringBase<char>::Set(strImageOverlay, m_pAsString);
}


// TItemSocket<CProtoItemSocket_Color>::GetImage  (line 228, @0x0000000002ebea20, libserver.so)  // inlines: GetInventoryOverlayImage, GetItemDefinition, GetItemSchema, GetWithNull, String, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<char>::Set
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall TItemSocket<CProtoItemSocket_Color>::GetImage(
        const TItemSocket<CProtoItemSocket_Color> *const this,
        CUtlConstString *const strImage,
        CUtlConstString *const strImageOverlay)
{
  const google::protobuf::Descriptor *containing_type; // rax
  uint16 fields; // bx
  CEconItemSystem *v7; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v9; // rbx
  const char *v10; // rax
  const char *m_pAsString; // rsi

  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Color::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields == INVALID_ITEM_DEF_INDEX.m_Data
    || (v7 = ItemSystem(),
        ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v7->m_itemSchema, fields, 0),
        v9 = ItemDefinitionMutable,
        ItemDefinitionMutable == 0) )
  {
    CUtlConstStringBase<char>::Set(strImage, "");
    m_pAsString = "";
  }
  else
  {
    v10 = (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 5))(ItemDefinitionMutable);
    CUtlConstStringBase<char>::Set(strImage, v10);
    m_pAsString = v9->m_symInventoryOverlayImage.u.m_pAsString;
  }
  CUtlConstStringBase<char>::Set(strImageOverlay, m_pAsString);
}


// TItemSocket<CProtoItemSocket_Effect>::GetImage  (line 228, @0x0000000002ebede0, libserver.so)  // inlines: GetInventoryOverlayImage, GetItemDefinition, GetItemSchema, GetWithNull, String, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<char>::Set
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall TItemSocket<CProtoItemSocket_Effect>::GetImage(
        const TItemSocket<CProtoItemSocket_Effect> *const this,
        CUtlConstString *const strImage,
        CUtlConstString *const strImageOverlay)
{
  const google::protobuf::Descriptor *containing_type; // rax
  uint16 fields; // bx
  CEconItemSystem *v7; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v9; // rbx
  const char *v10; // rax
  const char *m_pAsString; // rsi

  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Effect::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields == INVALID_ITEM_DEF_INDEX.m_Data
    || (v7 = ItemSystem(),
        ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v7->m_itemSchema, fields, 0),
        v9 = ItemDefinitionMutable,
        ItemDefinitionMutable == 0) )
  {
    CUtlConstStringBase<char>::Set(strImage, "");
    m_pAsString = "";
  }
  else
  {
    v10 = (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 5))(ItemDefinitionMutable);
    CUtlConstStringBase<char>::Set(strImage, v10);
    m_pAsString = v9->m_symInventoryOverlayImage.u.m_pAsString;
  }
  CUtlConstStringBase<char>::Set(strImageOverlay, m_pAsString);
}


// TItemSocket<CProtoItemSocket_Empty>::GetImage  (line 228, @0x0000000002ebf1a0, libserver.so)  // inlines: GetInventoryOverlayImage, GetItemDefinition, GetItemSchema, GetWithNull, String, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<char>::Set
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall TItemSocket<CProtoItemSocket_Empty>::GetImage(
        const TItemSocket<CProtoItemSocket_Empty> *const this,
        CUtlConstString *const strImage,
        CUtlConstString *const strImageOverlay)
{
  const google::protobuf::Descriptor *containing_type; // rax
  uint16 fields; // bx
  CEconItemSystem *v7; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v9; // rbx
  const char *v10; // rax
  const char *m_pAsString; // rsi

  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Empty::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields == INVALID_ITEM_DEF_INDEX.m_Data
    || (v7 = ItemSystem(),
        ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v7->m_itemSchema, fields, 0),
        v9 = ItemDefinitionMutable,
        ItemDefinitionMutable == 0) )
  {
    CUtlConstStringBase<char>::Set(strImage, "");
    m_pAsString = "";
  }
  else
  {
    v10 = (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 5))(ItemDefinitionMutable);
    CUtlConstStringBase<char>::Set(strImage, v10);
    m_pAsString = v9->m_symInventoryOverlayImage.u.m_pAsString;
  }
  CUtlConstStringBase<char>::Set(strImageOverlay, m_pAsString);
}


// TItemSocket<CProtoItemSocket_Autograph>::GetItemType  (line 276, @0x0000000002ebdb20, libserver.so)  // inlines: Clear, GetItemDefinition, GetItemSchema, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
// strings: "#Econ_Socket_Empty_Color", "#Econ_Socket_Empty_General", "#Econ_Socket_Empty_Effect"
void __fastcall TItemSocket<CProtoItemSocket_Autograph>::GetItemType(
        const TItemSocket<CProtoItemSocket_Autograph> *const this,
        CUtlConstStringBase<wchar_t> *const strType,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v4; // rbx
  const google::protobuf::Descriptor *containing_type; // rax
  int fields; // r12d
  int options_high; // eax
  const wchar_t *v8; // rsi
  CEconItemSystem *v9; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v11; // r12
  int (*v12)(...); // r14
  __int64 v13; // rax
  CLocalizationProvider *v14; // rax
  const TItemSocket<CProtoItemSocket_Autograph> *thisa; // [rsp+8h] [rbp-28h]

  v4 = pLocalize;
  if ( pLocalize == 0 )
  {
    thisa = this;
    v14 = GLocalizationProvider();
    this = thisa;
    v4 = v14;
  }
  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Autograph::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields != 0 )
  {
    v9 = ItemSystem();
    ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v9->m_itemSchema, fields, 0);
    v11 = ItemDefinitionMutable;
    if ( ItemDefinitionMutable != 0
      && (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 2))(ItemDefinitionMutable) != 0 )
    {
      v12 = *v4->_vptr_CLocalizationProvider;
      v13 = (*(v11->_vptr_IEconItemDefinition + 2))(v11);
      v8 = (v12)(v4, v13);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    options_high = HIDWORD(containing_type->options_);
    if ( options_high == 1 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Effect");
    }
    else if ( options_high == 2 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Color");
    }
    else
    {
      v8 = v4->Find("#Econ_Socket_Empty_General");
    }
  }
  CUtlConstStringBase<wchar_t>::Set(strType, v8);
}


// TItemSocket<CProtoItemSocket_AssetModifier>::GetItemType  (line 276, @0x0000000002ebdee0, libserver.so)  // inlines: Clear, GetItemDefinition, GetItemSchema, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
// strings: "#Econ_Socket_Empty_Color", "#Econ_Socket_Empty_General", "#Econ_Socket_Empty_Effect"
void __fastcall TItemSocket<CProtoItemSocket_AssetModifier>::GetItemType(
        const TItemSocket<CProtoItemSocket_AssetModifier> *const this,
        CUtlConstStringBase<wchar_t> *const strType,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v4; // rbx
  const google::protobuf::Descriptor *containing_type; // rax
  int fields; // r12d
  int options_high; // eax
  const wchar_t *v8; // rsi
  CEconItemSystem *v9; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v11; // r12
  int (*v12)(...); // r14
  __int64 v13; // rax
  CLocalizationProvider *v14; // rax
  const TItemSocket<CProtoItemSocket_AssetModifier> *thisa; // [rsp+8h] [rbp-28h]

  v4 = pLocalize;
  if ( pLocalize == 0 )
  {
    thisa = this;
    v14 = GLocalizationProvider();
    this = thisa;
    v4 = v14;
  }
  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_AssetModifier::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields != 0 )
  {
    v9 = ItemSystem();
    ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v9->m_itemSchema, fields, 0);
    v11 = ItemDefinitionMutable;
    if ( ItemDefinitionMutable != 0
      && (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 2))(ItemDefinitionMutable) != 0 )
    {
      v12 = *v4->_vptr_CLocalizationProvider;
      v13 = (*(v11->_vptr_IEconItemDefinition + 2))(v11);
      v8 = (v12)(v4, v13);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    options_high = HIDWORD(containing_type->options_);
    if ( options_high == 1 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Effect");
    }
    else if ( options_high == 2 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Color");
    }
    else
    {
      v8 = v4->Find("#Econ_Socket_Empty_General");
    }
  }
  CUtlConstStringBase<wchar_t>::Set(strType, v8);
}


// TItemSocket<CProtoItemSocket_Strange>::GetItemType  (line 276, @0x0000000002ebe530, libserver.so)  // inlines: Clear, GetItemDefinition, GetItemSchema, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
// strings: "#Econ_Socket_Empty_Color", "#Econ_Socket_Empty_General", "#Econ_Socket_Empty_Effect"
void __fastcall TItemSocket<CProtoItemSocket_Strange>::GetItemType(
        const TItemSocket<CProtoItemSocket_Strange> *const this,
        CUtlConstStringBase<wchar_t> *const strType,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v4; // rbx
  const google::protobuf::Descriptor *containing_type; // rax
  int fields; // r12d
  int options_high; // eax
  const wchar_t *v8; // rsi
  CEconItemSystem *v9; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v11; // r12
  int (*v12)(...); // r14
  __int64 v13; // rax
  CLocalizationProvider *v14; // rax
  const TItemSocket<CProtoItemSocket_Strange> *thisa; // [rsp+8h] [rbp-28h]

  v4 = pLocalize;
  if ( pLocalize == 0 )
  {
    thisa = this;
    v14 = GLocalizationProvider();
    this = thisa;
    v4 = v14;
  }
  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Strange::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields != 0 )
  {
    v9 = ItemSystem();
    ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v9->m_itemSchema, fields, 0);
    v11 = ItemDefinitionMutable;
    if ( ItemDefinitionMutable != 0
      && (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 2))(ItemDefinitionMutable) != 0 )
    {
      v12 = *v4->_vptr_CLocalizationProvider;
      v13 = (*(v11->_vptr_IEconItemDefinition + 2))(v11);
      v8 = (v12)(v4, v13);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    options_high = HIDWORD(containing_type->options_);
    if ( options_high == 1 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Effect");
    }
    else if ( options_high == 2 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Color");
    }
    else
    {
      v8 = v4->Find("#Econ_Socket_Empty_General");
    }
  }
  CUtlConstStringBase<wchar_t>::Set(strType, v8);
}


// TItemSocket<CProtoItemSocket_Color>::GetItemType  (line 276, @0x0000000002ebe8f0, libserver.so)  // inlines: Clear, GetItemDefinition, GetItemSchema, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
// strings: "#Econ_Socket_Empty_Color", "#Econ_Socket_Empty_General", "#Econ_Socket_Empty_Effect"
void __fastcall TItemSocket<CProtoItemSocket_Color>::GetItemType(
        const TItemSocket<CProtoItemSocket_Color> *const this,
        CUtlConstStringBase<wchar_t> *const strType,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v4; // rbx
  const google::protobuf::Descriptor *containing_type; // rax
  int fields; // r12d
  int options_high; // eax
  const wchar_t *v8; // rsi
  CEconItemSystem *v9; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v11; // r12
  int (*v12)(...); // r14
  __int64 v13; // rax
  CLocalizationProvider *v14; // rax
  const TItemSocket<CProtoItemSocket_Color> *thisa; // [rsp+8h] [rbp-28h]

  v4 = pLocalize;
  if ( pLocalize == 0 )
  {
    thisa = this;
    v14 = GLocalizationProvider();
    this = thisa;
    v4 = v14;
  }
  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Color::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields != 0 )
  {
    v9 = ItemSystem();
    ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v9->m_itemSchema, fields, 0);
    v11 = ItemDefinitionMutable;
    if ( ItemDefinitionMutable != 0
      && (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 2))(ItemDefinitionMutable) != 0 )
    {
      v12 = *v4->_vptr_CLocalizationProvider;
      v13 = (*(v11->_vptr_IEconItemDefinition + 2))(v11);
      v8 = (v12)(v4, v13);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    options_high = HIDWORD(containing_type->options_);
    if ( options_high == 1 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Effect");
    }
    else if ( options_high == 2 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Color");
    }
    else
    {
      v8 = v4->Find("#Econ_Socket_Empty_General");
    }
  }
  CUtlConstStringBase<wchar_t>::Set(strType, v8);
}


// TItemSocket<CProtoItemSocket_Effect>::GetItemType  (line 276, @0x0000000002ebecb0, libserver.so)  // inlines: Clear, GetItemDefinition, GetItemSchema, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
// strings: "#Econ_Socket_Empty_Color", "#Econ_Socket_Empty_General", "#Econ_Socket_Empty_Effect"
void __fastcall TItemSocket<CProtoItemSocket_Effect>::GetItemType(
        const TItemSocket<CProtoItemSocket_Effect> *const this,
        CUtlConstStringBase<wchar_t> *const strType,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v4; // rbx
  const google::protobuf::Descriptor *containing_type; // rax
  int fields; // r12d
  int options_high; // eax
  const wchar_t *v8; // rsi
  CEconItemSystem *v9; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v11; // r12
  int (*v12)(...); // r14
  __int64 v13; // rax
  CLocalizationProvider *v14; // rax
  const TItemSocket<CProtoItemSocket_Effect> *thisa; // [rsp+8h] [rbp-28h]

  v4 = pLocalize;
  if ( pLocalize == 0 )
  {
    thisa = this;
    v14 = GLocalizationProvider();
    this = thisa;
    v4 = v14;
  }
  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Effect::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields != 0 )
  {
    v9 = ItemSystem();
    ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v9->m_itemSchema, fields, 0);
    v11 = ItemDefinitionMutable;
    if ( ItemDefinitionMutable != 0
      && (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 2))(ItemDefinitionMutable) != 0 )
    {
      v12 = *v4->_vptr_CLocalizationProvider;
      v13 = (*(v11->_vptr_IEconItemDefinition + 2))(v11);
      v8 = (v12)(v4, v13);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    options_high = HIDWORD(containing_type->options_);
    if ( options_high == 1 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Effect");
    }
    else if ( options_high == 2 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Color");
    }
    else
    {
      v8 = v4->Find("#Econ_Socket_Empty_General");
    }
  }
  CUtlConstStringBase<wchar_t>::Set(strType, v8);
}


// TItemSocket<CProtoItemSocket_Empty>::GetItemType  (line 276, @0x0000000002ebf070, libserver.so)  // inlines: Clear, GetItemDefinition, GetItemSchema, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
// strings: "#Econ_Socket_Empty_Color", "#Econ_Socket_Empty_General", "#Econ_Socket_Empty_Effect"
void __fastcall TItemSocket<CProtoItemSocket_Empty>::GetItemType(
        const TItemSocket<CProtoItemSocket_Empty> *const this,
        CUtlConstStringBase<wchar_t> *const strType,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v4; // rbx
  const google::protobuf::Descriptor *containing_type; // rax
  int fields; // r12d
  int options_high; // eax
  const wchar_t *v8; // rsi
  CEconItemSystem *v9; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v11; // r12
  int (*v12)(...); // r14
  __int64 v13; // rax
  CLocalizationProvider *v14; // rax
  const TItemSocket<CProtoItemSocket_Empty> *thisa; // [rsp+8h] [rbp-28h]

  v4 = pLocalize;
  if ( pLocalize == 0 )
  {
    thisa = this;
    v14 = GLocalizationProvider();
    this = thisa;
    v4 = v14;
  }
  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Empty::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields != 0 )
  {
    v9 = ItemSystem();
    ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v9->m_itemSchema, fields, 0);
    v11 = ItemDefinitionMutable;
    if ( ItemDefinitionMutable != 0
      && (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 2))(ItemDefinitionMutable) != 0 )
    {
      v12 = *v4->_vptr_CLocalizationProvider;
      v13 = (*(v11->_vptr_IEconItemDefinition + 2))(v11);
      v8 = (v12)(v4, v13);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    options_high = HIDWORD(containing_type->options_);
    if ( options_high == 1 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Effect");
    }
    else if ( options_high == 2 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Color");
    }
    else
    {
      v8 = v4->Find("#Econ_Socket_Empty_General");
    }
  }
  CUtlConstStringBase<wchar_t>::Set(strType, v8);
}


// TItemSocket<CProtoItemSocket_Spectator>::GetItemType  (line 276, @0x0000000002ebf430, libserver.so)  // inlines: Clear, GetItemDefinition, GetItemSchema, operator=, socket
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
// strings: "#Econ_Socket_Empty_Color", "#Econ_Socket_Empty_General", "#Econ_Socket_Empty_Effect"
void __fastcall TItemSocket<CProtoItemSocket_Spectator>::GetItemType(
        const TItemSocket<CProtoItemSocket_Spectator> *const this,
        CUtlConstStringBase<wchar_t> *const strType,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v4; // rbx
  const google::protobuf::Descriptor *containing_type; // rax
  int fields; // r12d
  int options_high; // eax
  const wchar_t *v8; // rsi
  CEconItemSystem *v9; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax
  CEconItemDefinition *v11; // r12
  int (*v12)(...); // r14
  __int64 v13; // rax
  CLocalizationProvider *v14; // rax
  const TItemSocket<CProtoItemSocket_Spectator> *thisa; // [rsp+8h] [rbp-28h]

  v4 = pLocalize;
  if ( pLocalize == 0 )
  {
    thisa = this;
    v14 = GLocalizationProvider();
    this = thisa;
    v4 = v14;
  }
  containing_type = *(this + 4);
  if ( containing_type == 0 )
    containing_type = CProtoItemSocket_Spectator::default_instance_->containing_type_;
  fields = containing_type->fields_;
  if ( fields != 0 )
  {
    v9 = ItemSystem();
    ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v9->m_itemSchema, fields, 0);
    v11 = ItemDefinitionMutable;
    if ( ItemDefinitionMutable != 0
      && (*(ItemDefinitionMutable->_vptr_IEconItemDefinition + 2))(ItemDefinitionMutable) != 0 )
    {
      v12 = *v4->_vptr_CLocalizationProvider;
      v13 = (*(v11->_vptr_IEconItemDefinition + 2))(v11);
      v8 = (v12)(v4, v13);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    options_high = HIDWORD(containing_type->options_);
    if ( options_high == 1 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Effect");
    }
    else if ( options_high == 2 )
    {
      v8 = v4->Find("#Econ_Socket_Empty_Color");
    }
    else
    {
      v8 = v4->Find("#Econ_Socket_Empty_General");
    }
  }
  CUtlConstStringBase<wchar_t>::Set(strType, v8);
}


// CItemSocket_Empty::GetString  (line 313, @0x0000000002e73190, libserver.so)  // inlines: operator=
// calls: CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
void __fastcall CItemSocket_Empty::GetString(
        const CItemSocket_Empty *const this,
        CUtlConstStringBase<wchar_t> *const strDesc,
        const char *pszLocKey,
        CLocalizationProvider *pLocalize)
{
  const wchar_t *v5; // rax
  CLocalizationProvider *v6; // rax
  const char *pszLocKeya; // [rsp+8h] [rbp-18h]

  if ( pLocalize == 0 )
  {
    pszLocKeya = pszLocKey;
    v6 = GLocalizationProvider();
    pszLocKey = pszLocKeya;
    pLocalize = v6;
  }
  v5 = pLocalize->Find(pszLocKey);
  CUtlConstStringBase<wchar_t>::Set(strDesc, v5);
}


// CItemSocket_Effect::GetString  (line 326, @0x0000000002e731e0, libserver.so)  // inlines: operator=
// calls: CFmtStrN<256, false>::CFmtStrN, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider, __stack_chk_fail
// strings: "#Attrib_Particle%u"
void __fastcall CItemSocket_Effect::GetString(
        const CItemSocket_Effect *const this,
        CUtlConstStringBase<wchar_t> *const strVal,
        const char *pszLocKey,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v6; // rbx
  void (__fastcall *v7)(CLocalizationProvider *, wchar_t *, __int64, __int64, __int64, const CItemSocket_Effect *); // r15
  __int64 v8; // rax
  CLocalizationProvider *v9; // rax
  const CItemSocket_Effect *thisb; // [rsp+8h] [rbp-558h]
  const CItemSocket_Effect *thisa; // [rsp+8h] [rbp-558h]
  wchar_t wszLocalizedString[256]; // [rsp+10h] [rbp-550h] BYREF
  CFmtStrN<256,false> v13; // [rsp+410h] [rbp-150h] BYREF
  unsigned __int64 v14; // [rsp+528h] [rbp-38h]

  v6 = pLocalize;
  v14 = __readfsqword(0x28u);
  if ( pLocalize == 0 )
  {
    thisa = this;
    v9 = GLocalizationProvider();
    this = thisa;
    v6 = v9;
  }
  CFmtStrN<256,false>::CFmtStrN(&v13, "#Attrib_Particle%u", *(this + 10));
  v7 = *(v6->_vptr_CLocalizationProvider + 1);
  thisb = v6->Find(v13.m_szBuf);
  v8 = v6->Find(pszLocKey);
  v7(v6, wszLocalizedString, 1024, v8, 1, thisb);
  CUtlConstStringBase<wchar_t>::Set(strVal, wszLocalizedString);
}


// CItemSocket_Effect::GetEffect  (line 343, @0x0000000002e6f150, libserver.so)
int __fastcall CItemSocket_Effect::GetEffect(const CItemSocket_Effect *const this)
{
  return *(this + 10);
}


// CItemSocket_Effect::GetAttributeControlledParticleSystem  (line 360, @0x0000000002e95460, libserver.so)  // inlines: GetItemSchema
// calls: ItemSystem
// callers: CItemSocket_Effect::Precache, CEconItemView::GetAttachedParticles
const attachedparticlesystem_t *__fastcall CItemSocket_Effect::GetAttributeControlledParticleSystem(
        const CItemSocket_Effect *const this)
{
  CEconItemSystem *v2; // rax

  v2 = ItemSystem();
  return (*(v2->m_itemSchema._vptr_IEconItemSchema + 14))(&v2->m_itemSchema, *(this + 10));
}


// CItemSocket_Effect::Precache  (line 371, @0x0000000002e95490, libserver.so)
// calls: CItemSocket_Effect::GetAttributeControlledParticleSystem, PrecacheParticleSystem
void __fastcall CItemSocket_Effect::Precache(CItemSocket_Effect *const this, const CEntityPrecacheContext *pContext)
{
  const attachedparticlesystem_t *AttributeControlledParticleSystem; // rax

  AttributeControlledParticleSystem = CItemSocket_Effect::GetAttributeControlledParticleSystem(this);
  if ( AttributeControlledParticleSystem != 0 && AttributeControlledParticleSystem->symSystemName.u.m_Id != 0 )
    PrecacheParticleSystem(AttributeControlledParticleSystem->symSystemName.u.m_pAsString, pContext);
}


// CItemSocket_Color::GetString  (line 387, @0x0000000002e954d0, libserver.so)  // inlines: CUtlString, Color, GetColorName, GetItemSchema, SetColor, String, operator=, ~CUtlString
// calls: ItemSystem, CEconItemSchema::GetColorDefinitionByColor, V_swprintf_safe<12ul>, CUtlString::Format, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider, __stack_chk_fail, _Unwind_Resume
// strings: "Econ_Socket_Color_%s", "#%s", "Econ_Socket_Color_%s_Legacy", "#UnknownColor"
void __fastcall CItemSocket_Color::GetString(
        const CItemSocket_Color *const this,
        CUtlConstStringBase<wchar_t> *const strVal,
        const char *pszLocKey,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  CEconItemSystem *v10; // rax
  const CEconColorDefinition *ColorDefinitionByColor; // rax
  __int64 v12; // rdx
  const CEconColorDefinition *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *m_pAsString; // rdx
  void (__fastcall *v17)(CLocalizationProvider *, wchar_t *, __int64, __int64, __int64, __int64); // r15
  int (*v18)(...); // r14
  const char *v19; // rax
  int (*v20)(...); // r14
  const char *v21; // rax
  __int64 v22; // rax
  void (__fastcall *v23)(CLocalizationProvider *, wchar_t *, __int64, __int64, __int64, __int64, wchar_t *, wchar_t *, wchar_t *); // r15
  int (*v24)(...); // r14
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-510h]
  __int64 v28; // [rsp+30h] [rbp-500h]
  CUtlString strLocKey; // [rsp+40h] [rbp-4F0h] BYREF
  CUtlString strLocKey_0; // [rsp+50h] [rbp-4E0h] BYREF
  wchar_t lszR[12]; // [rsp+60h] [rbp-4D0h] BYREF
  wchar_t lszG[12]; // [rsp+90h] [rbp-4A0h] BYREF
  wchar_t lszB[12]; // [rsp+C0h] [rbp-470h] BYREF
  wchar_t wszLocalizedString[256]; // [rsp+F0h] [rbp-440h] BYREF
  Color c; // [rsp+4F0h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+4F8h] [rbp-38h]

  v6 = pLocalize;
  v37 = __readfsqword(0x28u);
  if ( pLocalize == 0 )
    v6 = GLocalizationProvider();
  v7 = *(this + 11);
  c._color[3] = -1;
  v8 = *(this + 10);
  v9 = *(this + 12);
  c._color[1] = v7;
  c._color[0] = v8;
  c._color[2] = v9;
  v10 = ItemSystem();
  ColorDefinitionByColor = CEconItemSchema::GetColorDefinitionByColor(&v10->m_itemSchema, &c);
  v12 = *(this + 10);
  v13 = ColorDefinitionByColor;
  memset(lszR, 0, sizeof(lszR));
  V_swprintf_safe<12ul>(lszR, U"%u", v12);
  v14 = *(this + 11);
  memset(lszG, 0, sizeof(lszG));
  V_swprintf_safe<12ul>(lszG, U"%u", v14);
  v15 = *(this + 12);
  memset(lszB, 0, sizeof(lszB));
  V_swprintf_safe<12ul>(lszB, U"%u", v15);
  if ( v13 != 0 )
  {
    strLocKey.m_pString = 0;
    CUtlString::Format(&strLocKey, "Econ_Socket_Color_%s", pszLocKey);
    strLocKey_0.m_pString = 0;
    m_pAsString = "";
    if ( v13->m_symColorName.u.m_Id != 0 )
      m_pAsString = v13->m_symColorName.u.m_pAsString;
    CUtlString::Format(&strLocKey_0, "#%s", m_pAsString);
    v17 = *(v6->_vptr_CLocalizationProvider + 1);
    v18 = *v6->_vptr_CLocalizationProvider;
    v19 = CUtlString::Get(&strLocKey_0);
    v28 = (v18)(v6, v19);
    v20 = *v6->_vptr_CLocalizationProvider;
    v21 = CUtlString::Get(&strLocKey);
    v22 = (v20)(v6, v21);
    v17(v6, wszLocalizedString, 1024, v22, 1, v28);
    if ( strLocKey_0.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&strLocKey_0);
    if ( strLocKey.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&strLocKey);
  }
  else
  {
    strLocKey_0.m_pString = 0;
    CUtlString::Format(&strLocKey_0, "Econ_Socket_Color_%s_Legacy", pszLocKey);
    v23 = *(v6->_vptr_CLocalizationProvider + 1);
    v27 = v6->Find("#UnknownColor");
    v24 = *v6->_vptr_CLocalizationProvider;
    v25 = CUtlString::Get(&strLocKey_0);
    v26 = (v24)(v6, v25);
    v23(v6, wszLocalizedString, 1024, v26, 4, v27, lszR, lszG, lszB);
    if ( strLocKey_0.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&strLocKey_0);
  }
  CUtlConstStringBase<wchar_t>::Set(strVal, wszLocalizedString);
}


// CItemSocket_Color::GetColor  (line 432, @0x0000000002e6f160, libserver.so)  // inlines: Color, SetColor
// callers: CDOTA_BaseNPC::ComputeColorGemValue
Color __fastcall CItemSocket_Color::GetColor(const CItemSocket_Color *const this)
{
  unsigned __int16 v1; // ax

  LOBYTE(v1) = *(this + 40);
  HIBYTE(v1) = *(this + 44);
  return ((*(this + 48) << 16) | v1 | 0xFF000000);
}


// CItemSocket_Strange::GetString  (line 443, @0x0000000002e95850, libserver.so)  // inlines: GetItemSchema, _V_strcmp, operator=
// calls: ItemSystem, CEconItemSchema::GetKillEaterScoreTypeLocString, V_swprintf_safe<12ul>, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
void __fastcall CItemSocket_Strange::GetString(
        const CItemSocket_Strange *const this,
        CUtlConstStringBase<wchar_t> *const strVal,
        const char *pszLocKey,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v7; // rbx
  uint32 v8; // r14d
  CEconItemSystem *v9; // rax
  const char *KillEaterScoreTypeLocString; // r14
  __int64 v11; // rdx
  __int64 (__fastcall **vptr_CLocalizationProvider)(CLocalizationProvider *, const char *); // rax
  void (__fastcall *v13)(CLocalizationProvider *, wchar_t *, __int64, __int64, __int64, __int64); // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  void (__fastcall *v18)(CLocalizationProvider *, wchar_t *, __int64, __int64, __int64, __int64, wchar_t *); // [rsp+8h] [rbp-468h]
  wchar_t lszScore[12]; // [rsp+10h] [rbp-460h] BYREF
  wchar_t wszLocalizedString[268]; // [rsp+40h] [rbp-430h] BYREF

  v7 = pLocalize;
  if ( pLocalize == 0 )
    v7 = GLocalizationProvider();
  v8 = *(this + 10);
  v9 = ItemSystem();
  KillEaterScoreTypeLocString = CEconItemSchema::GetKillEaterScoreTypeLocString(&v9->m_itemSchema, v8);
  if ( KillEaterScoreTypeLocString != 0 )
  {
    v11 = *(this + 11);
    memset(lszScore, 0, sizeof(lszScore));
    V_swprintf_safe<12ul>(lszScore, U"%u", v11);
    vptr_CLocalizationProvider = v7->_vptr_CLocalizationProvider;
    if ( strcmp(pszLocKey, "Name") == 0 )
    {
      v13 = vptr_CLocalizationProvider[1];
      v14 = (*vptr_CLocalizationProvider)(v7, KillEaterScoreTypeLocString);
      v15 = v7->Find(pszLocKey);
      v13(v7, wszLocalizedString, 1024, v15, 1, v14);
      CUtlConstStringBase<wchar_t>::Set(strVal, wszLocalizedString);
    }
    else
    {
      v18 = vptr_CLocalizationProvider[1];
      v16 = (*vptr_CLocalizationProvider)(v7, KillEaterScoreTypeLocString);
      v17 = v7->Find(pszLocKey);
      v18(v7, wszLocalizedString, 1024, v17, 2, v16, lszScore);
      CUtlConstStringBase<wchar_t>::Set(strVal, wszLocalizedString);
    }
  }
}


// CItemSocket_Spectator::GetItemType  (line 473, @0x0000000002e732d0, libserver.so)  // inlines: operator=
// calls: V_swprintf_safe<12ul>, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
// strings: "Econ_Socket_Spectator_Type"
void __fastcall CItemSocket_Spectator::GetItemType(
        const CItemSocket_Spectator *const this,
        CUtlConstStringBase<wchar_t> *const strType,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v5; // rbx
  __int64 v6; // rdx
  void (__fastcall *v7)(CLocalizationProvider *, wchar_t *, __int64, __int64, __int64, wchar_t *); // r15
  __int64 v8; // rax
  wchar_t lszScore[12]; // [rsp+0h] [rbp-460h] BYREF
  wchar_t wszLocalizedString[268]; // [rsp+30h] [rbp-430h] BYREF

  v5 = pLocalize;
  if ( pLocalize == 0 )
    v5 = GLocalizationProvider();
  v6 = *(this + 10);
  memset(lszScore, 0, sizeof(lszScore));
  V_swprintf_safe<12ul>(lszScore, U"%u", v6);
  v7 = *(v5->_vptr_CLocalizationProvider + 1);
  v8 = v5->Find("Econ_Socket_Spectator_Type");
  v7(v5, wszLocalizedString, 1024, v8, 1, lszScore);
  CUtlConstStringBase<wchar_t>::Set(strType, wszLocalizedString);
}


// CItemSocket_Spectator::GetString  (line 487, @0x0000000002e959c0, libserver.so)  // inlines: Get, GetItemSchema, String, V_strcpy_safe<128ul>, operator=
// calls: CUtlConstStringBase<wchar_t>::Set, ItemSystem, CEconItemSchema::GetItemDefinitionByMapIndex, __dynamic_cast, _V_strncpy, CEconItemSchema::GetItemPartner, GLocalizationProvider, __stack_chk_fail
// globals: `typeinfo for'CEconItemDefinition
void __fastcall CItemSocket_Spectator::GetString(
        const CItemSocket_Spectator *const this,
        CUtlConstStringBase<wchar_t> *const strVal,
        const char *pszLocKey,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v6; // r12
  uint32 v7; // ebx
  uint32 v8; // ebx
  void (__fastcall *v9)(CLocalizationProvider *, wchar_t *, __int64, __int64, __int64, __int64); // r13
  __int64 v10; // r14
  __int64 v11; // rax
  CEconItemSystem *v12; // rax
  int v13; // ebx
  CEconItemSystem *v14; // rax
  const CEconItemDefinition *ItemDefinitionByMapIndex; // rax
  _DWORD *v16; // rax
  __int64 v17; // rax
  CEconItemSystem *v18; // rax
  ItemPartner_t *ItemPartner; // rax
  const char *m_Id; // rsi
  CEconItemSystem *v21; // rax
  wchar_t wszLocalizedString[256]; // [rsp+10h] [rbp-4C0h] BYREF
  char szName[136]; // [rsp+410h] [rbp-C0h] BYREF
  unsigned __int64 v25; // [rsp+498h] [rbp-38h]

  v6 = pLocalize;
  v25 = __readfsqword(0x28u);
  if ( pLocalize == 0 )
    v6 = GLocalizationProvider();
  if ( *(this + 12) == 0 )
  {
    v7 = *(this + 11);
    if ( v7 != 0 )
    {
      v18 = ItemSystem();
      ItemPartner = CEconItemSchema::GetItemPartner(&v18->m_itemSchema, EItemPartnerType::ITEM_PARTNER_CORPORATION, v7);
      m_Id = "";
      if ( ItemPartner == 0 )
        goto LABEL_17;
    }
    else
    {
      v8 = *(this + 13);
      if ( v8 == 0 )
        goto LABEL_6;
      v21 = ItemSystem();
      ItemPartner = CEconItemSchema::GetItemPartner(&v21->m_itemSchema, EItemPartnerType::ITEM_PARTNER_TEAM, v8);
      m_Id = "";
      if ( ItemPartner == 0 )
      {
LABEL_17:
        _V_strncpy(szName, m_Id, 128);
        goto LABEL_6;
      }
    }
    if ( ItemPartner->m_symName.u.m_Id != 0 )
      m_Id = ItemPartner->m_symName.u.m_Id;
    goto LABEL_17;
  }
  v12 = ItemSystem();
  v13 = (*(v12->m_itemSchema._vptr_IEconItemSchema + 2))(&v12->m_itemSchema) - 1;
  if ( v13 > 0 )
  {
    do
    {
      v14 = ItemSystem();
      ItemDefinitionByMapIndex = CEconItemSchema::GetItemDefinitionByMapIndex(&v14->m_itemSchema, v13);
      if ( ItemDefinitionByMapIndex != 0 )
      {
        v16 = __dynamic_cast(
                ItemDefinitionByMapIndex,
                &`typeinfo for'CEconItemDefinition,
                &`typeinfo for'CDOTAItemDefinition,
                0);
        if ( v16 != 0 && v16[104] == *(this + 12) )
        {
          v17 = (*(*v16 + 16LL))(v16);
          _V_strncpy(szName, v17, 128);
        }
      }
      --v13;
    }
    while ( v13 != 0 );
  }
LABEL_6:
  v9 = *(v6->_vptr_CLocalizationProvider + 1);
  v10 = v6->Find(szName);
  v11 = v6->Find(pszLocKey);
  v9(v6, wszLocalizedString, 1024, v11, 1, v10);
  CUtlConstStringBase<wchar_t>::Set(strVal, wszLocalizedString);
}


// CItemSocket_AssetModifier::GetString  (line 544, @0x0000000002e95fd0, libserver.so)  // inlines: Get, String, operator=
// calls: CItemSocket_AssetModifier::GetAssetModifier, CUtlConstStringBase<wchar_t>::Set, GLocalizationProvider
// strings: "#Invalid_AssetMod"
void __fastcall CItemSocket_AssetModifier::GetString(
        const CItemSocket_AssetModifier *const this,
        CUtlConstStringBase<wchar_t> *const strVal,
        const char *pszLocKey,
        CLocalizationProvider *pLocalize)
{
  CLocalizationProvider *v6; // rbx
  const AssetModifier_t *AssetModifier; // rax
  const char *m_pAsString; // rsi
  void (__fastcall *v9)(CLocalizationProvider *, wchar_t *, __int64, __int64, __int64, __int64); // r14
  __int64 v10; // r15
  __int64 v11; // rax
  CLocalizationProvider *v12; // rax
  const CItemSocket_AssetModifier *thisa; // [rsp+8h] [rbp-438h]
  wchar_t wszLocalizedString[268]; // [rsp+10h] [rbp-430h] BYREF

  v6 = pLocalize;
  if ( pLocalize == 0 )
  {
    thisa = this;
    v12 = GLocalizationProvider();
    this = thisa;
    v6 = v12;
  }
  AssetModifier = CItemSocket_AssetModifier::GetAssetModifier(this);
  if ( AssetModifier != 0 )
  {
    m_pAsString = "";
    if ( AssetModifier->m_symLoc.u.m_Id != 0 )
      m_pAsString = AssetModifier->m_symLoc.u.m_pAsString;
  }
  else
  {
    m_pAsString = "#Invalid_AssetMod";
  }
  v9 = *(v6->_vptr_CLocalizationProvider + 1);
  v10 = v6->Find(m_pAsString);
  v11 = v6->Find(pszLocKey);
  v9(v6, wszLocalizedString, 1024, v11, 1, v10);
  CUtlConstStringBase<wchar_t>::Set(strVal, wszLocalizedString);
}


// CItemSocket_AssetModifier::GetAssetModifier  (line 563, @0x0000000002e95bc0, libserver.so)  // inlines: GetItemSchema
// calls: ItemSystem, CEconItemSchema::GetAssetModifier
// callers: CEconItemDefinition::GetAssetModifiersActiveForStyle, CItemSocket_AssetModifier::GetString, CItemSocket_AssetModifier::Precache, CEconItemView::CacheAssetModifiers
const AssetModifier_t *__fastcall CItemSocket_AssetModifier::GetAssetModifier(
        const CItemSocket_AssetModifier *const this)
{
  int v1; // ebx
  CEconItemSystem *v2; // rax

  v1 = *(this + 10);
  v2 = ItemSystem();
  return CEconItemSchema::GetAssetModifier(&v2->m_itemSchema, v1);
}


// CItemSocket_AssetModifier::Precache  (line 568, @0x0000000002e960a0, libserver.so)
// calls: CItemSocket_AssetModifier::GetAssetModifier
void __fastcall CItemSocket_AssetModifier::Precache(
        CItemSocket_AssetModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const AssetModifier_t *AssetModifier; // rax
  const AssetModifier_t *v4; // r12
  __int64 v5; // rbx
  const CAssetModifier *v6; // rdi

  AssetModifier = CItemSocket_AssetModifier::GetAssetModifier(this);
  v4 = AssetModifier;
  if ( AssetModifier != 0 && AssetModifier->m_vecModifiers.m_Size > 0 )
  {
    v5 = 0;
    do
    {
      v6 = v4->m_vecModifiers.m_Memory.m_pMemory[v5];
      (*(v6->_vptr_CAssetModifier + 5))(v6, pContext);
      ++v5;
    }
    while ( v4->m_vecModifiers.m_Size > v5 );
  }
}


// CItemSocket_Autograph::GetString  (line 587, @0x0000000002e96520, libserver.so)  // inlines: CCopyableUtlVector, CEconSchemaSymbol, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Element, Find, FindAutograph, Get, GetItemSchema, IsIdxValid, IsValidIndex, LeftChild, Node_t, Purge, RemoveAll, RightChild, String, _M_data, autograph_t, c_str, operator(), operator=, operator[], ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~Node_t, ~autograph_t
// calls: ItemSystem, autograph_t::GetNameModifier, V_swprintf_safe<16ul>, CFmtStrN<256, false>::CFmtStrN, CUtlConstStringBase<wchar_t>::Set, CUtlMemory<autograph_t::level_t, int>::Purge, GLocalizationProvider, __stack_chk_fail, CUtlVectorBase<autograph_t::level_t, CUtlMemory<autograph_t::level_t, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "_ClientModifierLevel", "_ClientModifier", "_ClientLevel"
void __fastcall CItemSocket_Autograph::GetString(
        const CItemSocket_Autograph *const this,
        CUtlConstStringBase<wchar_t> *const strVal,
        const char *pszLocKey,
        CLocalizationProvider *pLocalize)
{
  wchar_t v4; // ebx
  CEconItemSystem *v5; // rax
  CEconItemSystem *v6; // r13
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<int,autograph_t,int>::Node_t,int> *m_pMemory; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rax
  const autograph_t *v13; // r13
  const char *v14; // rsi
  uint32 v15; // ebx
  const char *NameModifier; // rax
  const wchar_t *v17; // r15
  const char *v18; // rcx
  const CItemSocket_Autograph **vptr_CLocalizationProvider; // rdx
  void (__fastcall *v20)(CLocalizationProvider *, wchar_t *, __int64, __int64, __int64, wchar_t *, wchar_t *, const wchar_t *); // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  CLocalizationProvider *pLocalizea; // [rsp+28h] [rbp-11A8h]
  const CItemSocket_Autograph *thisb; // [rsp+30h] [rbp-11A0h]
  wchar_t wszLevel[16]; // [rsp+40h] [rbp-1190h] BYREF
  wchar_t wszAutograph[512]; // [rsp+80h] [rbp-1150h] BYREF
  wchar_t wszLocalizedString[512]; // [rsp+880h] [rbp-950h] BYREF
  CFmtStrN<256,false> v31; // [rsp+1080h] [rbp-150h] BYREF
  unsigned __int64 v32; // [rsp+1198h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  pLocalizea = pLocalize;
  if ( pLocalize == 0 )
    pLocalizea = GLocalizationProvider();
  v4 = *(this + 12);
  if ( v4 == 0 )
  {
    (*(pLocalizea->_vptr_CLocalizationProvider + 8))(pLocalizea, **(this + 5), wszAutograph, 2048);
    v22 = *(this + 13);
LABEL_26:
    V_swprintf_safe<16ul>(wszLevel, U"%u", v22);
    goto LABEL_27;
  }
  v5 = ItemSystem();
  wszLocalizedString[0] = v4;
  *&wszLocalizedString[2] = 0;
  v6 = v5;
  *&wszLocalizedString[4] = 0;
  wszLocalizedString[8] = 0;
  memset(&wszLocalizedString[10], 0, 32);
  m_Root = v5->m_itemSchema.m_mapAutographs.m_Tree.m_Root;
  if ( m_Root == -1 )
  {
    v9 = -1;
    v11 = 0;
  }
  else
  {
    m_pMemory = v5->m_itemSchema.m_mapAutographs.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = m_Root;
        v10 = m_Root;
        if ( !v6->m_itemSchema.m_mapAutographs.m_Tree.m_LessFunc.m_LessFunc(
                wszLocalizedString,
                &m_pMemory[v10].m_Data.key) )
          break;
        m_pMemory = v6->m_itemSchema.m_mapAutographs.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == -1 )
          goto LABEL_10;
      }
      if ( !v6->m_itemSchema.m_mapAutographs.m_Tree.m_LessFunc.m_LessFunc(
              &v6->m_itemSchema.m_mapAutographs.m_Tree.m_Elements.m_pMemory[v10].m_Data.key,
              wszLocalizedString) )
        break;
      m_pMemory = v6->m_itemSchema.m_mapAutographs.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v10].m_Right;
      if ( m_Root == -1 )
      {
LABEL_10:
        v9 = -1;
        v11 = wszLocalizedString[13] & 0xC0000000;
        goto LABEL_11;
      }
    }
    v11 = wszLocalizedString[13] & 0xC0000000;
  }
LABEL_11:
  wszLocalizedString[8] = 0;
  if ( v11 == 0 )
  {
    CUtlMemory<autograph_t::level_t,int>::Purge(&wszLocalizedString[10]);
    if ( (wszLocalizedString[13] & 0xC0000000) == 0 )
      CUtlMemory<autograph_t::level_t,int>::Purge(&wszLocalizedString[10]);
  }
  if ( v9 < 0
    || v6->m_itemSchema.m_mapAutographs.m_Tree.m_Elements.m_nAllocationCount <= v9
    || m_Root > v6->m_itemSchema.m_mapAutographs.m_Tree.m_LastAlloc.index
    || m_Root == -1
    || (v12 = &v6->m_itemSchema.m_mapAutographs.m_Tree.m_Elements.m_pMemory[m_Root], m_Root == *v12) )
  {
    v22 = *(this + 13);
    goto LABEL_26;
  }
  v13 = (v12 + 24);
  v14 = "";
  if ( *(v12 + 24) != 0 )
    v14 = *(v12 + 24);
  (*(pLocalizea->_vptr_CLocalizationProvider + 8))(pLocalizea, v14, wszAutograph, 2048);
  v15 = *(this + 13);
  NameModifier = autograph_t::GetNameModifier(v13, v15);
  if ( NameModifier == 0 )
  {
    v22 = v15;
    goto LABEL_26;
  }
  v17 = pLocalizea->Find(NameModifier);
  V_swprintf_safe<16ul>(wszLevel, U"%u", *(this + 13));
  if ( v17 != 0 )
  {
    v18 = "_ClientModifier";
    if ( *(this + 13) != 0 )
      v18 = "_ClientModifierLevel";
    vptr_CLocalizationProvider = pLocalizea->_vptr_CLocalizationProvider;
    v20 = *(pLocalizea->_vptr_CLocalizationProvider + 1);
    goto LABEL_24;
  }
LABEL_27:
  v18 = "";
  v17 = &dword_33C3BD0;
  if ( *(this + 13) != 0 )
    v18 = "_ClientLevel";
  vptr_CLocalizationProvider = pLocalizea->_vptr_CLocalizationProvider;
  v20 = *(pLocalizea->_vptr_CLocalizationProvider + 1);
LABEL_24:
  thisb = *vptr_CLocalizationProvider;
  CFmtStrN<256,false>::CFmtStrN(&v31, "%s%s", pszLocKey, v18);
  v21 = (thisb)(pLocalizea, v31.m_szBuf);
  v20(pLocalizea, wszLocalizedString, 2048, v21, 3, wszAutograph, wszLevel, v17);
  CUtlConstStringBase<wchar_t>::Set(strVal, wszLocalizedString);
}


// CSocketIterator::GetSocket  (line 663, @0x0000000002e6f190, libserver.so)  // inlines: GetItemSocket, GetSocketAttribute
// callers: CDOTA_BaseNPC::ComputeColorGemValue, EconEntity_OnOwnerKillEaterEvent, CDOTA_ParticleManager::CreateParticle, CDOTA_Modifier_Legion_Commander_Duel::OnDeath, CDOTA_Ability_Techies_Suicide::BlowUp, CItemGeneration::PrecacheItem, CDOTAInventoryManager::DetermineSocketTypeForItem, CDOTAVictoryPrediction::ApplyEffects
IItemSocket *__fastcall CSocketIterator::GetSocket(const CSocketIterator *const this, int i)
{
  IItemSocket *result; // rax
  const CAttribute_Socket *m_pAttribute; // rdx

  result = 0;
  if ( i >= 0 && i < this->m_nSocketCount )
  {
    m_pAttribute = this->m_Sockets[i].m_pAttribute;
    if ( m_pAttribute != 0 )
      return m_pAttribute->m_pSocket;
  }
  return result;
}


// CSocketIterator::GetSocketAttribute  (line 673, @0x0000000002e6f1c0, libserver.so)
const CAttribute_Socket *__fastcall CSocketIterator::GetSocketAttribute(const CSocketIterator *const this, int i)
{
  if ( i < 0 || i >= this->m_nSocketCount )
    return 0;
  else
    return this->m_Sockets[i].m_pAttribute;
}


// CSocketIterator::GetSocketAttributeDefinition  (line 682, @0x0000000002e6f1f0, libserver.so)
const CEconItemAttributeDefinition *__fastcall CSocketIterator::GetSocketAttributeDefinition(
        const CSocketIterator *const this,
        int i)
{
  if ( i < 0 || i >= this->m_nSocketCount )
    return 0;
  else
    return this->m_Sockets[i].m_pAttributeDefinition;
}


// CSocketIterator::OnIterateAttributeValue  (line 691, @0x0000000002e6a060, libserver.so)  // inlines: GetItemSocket
// callers: CSocketIterator::OnIterateAttributeValue, TSocketIterator<CItemSocket_Effect>::OnIterateAttributeValue, TSocketIterator<CItemSocket_AssetModifier>::OnIterateAttributeValue
bool __fastcall CSocketIterator::OnIterateAttributeValue(
        CSocketIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  int m_nSocketCount; // eax
  char *v5; // rcx

  m_nSocketCount = this->m_nSocketCount;
  if ( m_nSocketCount <= 9 )
  {
    v5 = this + 16 * m_nSocketCount;
    *(v5 + 1) = value;
    *(v5 + 2) = pAttrDef;
    this->m_nSocketCount = m_nSocketCount + 1;
    LOBYTE(m_nSocketCount) = (*(value->m_pSocket->_vptr_IItemSocket + 11))(value->m_pSocket);
    if ( m_nSocketCount == 0 )
      ++this->m_nGemCount;
  }
  return m_nSocketCount;
}


// CSocketIterator::OnIterateAttributeValue  (line 691, @0x0000000002e6a0c0, libserver.so)
// calls: CSocketIterator::OnIterateAttributeValue
// callers: TSocketIterator<CItemSocket_Color>::OnIterateAttributeValue, TSocketIterator<CItemSocket_Strange>::OnIterateAttributeValue, TSocketIterator<CItemSocket_Spectator>::OnIterateAttributeValue
bool __fastcall CSocketIterator::OnIterateAttributeValue(
        CSocketIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  if ( (pAttrDef->m_iStorageTypeFlags & this->m_unAttribStorageTypeFlags) != 0 )
    CSocketIterator::OnIterateAttributeValue(this, pAttrDef, value);
  return 1;
}


// CSocketIterator::GetSocketByAttributeDef  (line 713, @0x0000000002e6f220, libserver.so)  // inlines: GetItemSocket, GetSocket, GetSocketAttribute
// callers: GetFreeSocketAttrib, CEconItemUtils::CanGemBePlacedInSocket
IItemSocket *__fastcall CSocketIterator::GetSocketByAttributeDef(
        CSocketIterator *const this,
        attrib_definition_index_t def_index)
{
  CSocketIterator *v4; // r12
  int v5; // ebx
  const CEconItemAttributeDefinition *m_pAttributeDefinition; // rdi
  const CAttribute_Socket *m_pAttribute; // rax

  v4 = this;
  v5 = 0;
  if ( this->m_nSocketCount <= 0 )
    return 0;
  while ( 1 )
  {
    m_pAttributeDefinition = v4->m_Sockets[0].m_pAttributeDefinition;
    if ( m_pAttributeDefinition != 0
      && m_pAttributeDefinition->GetDefinitionIndex() == def_index )
    {
      break;
    }
    ++v5;
    v4 = (v4 + 16);
    if ( this->m_nSocketCount <= v5 )
      return 0;
  }
  if ( v5 < this->m_nSocketCount && (m_pAttribute = this->m_Sockets[v5].m_pAttribute) != 0 )
    return m_pAttribute->m_pSocket;
  else
    return 0;
}


// CEconTool_SocketHammer::CanApplyTo  (line 731, @0x0000000002e6a0f0, libserver.so)  // inlines: CSocketIterator, CSocketPair
bool __fastcall CEconTool_SocketHammer::CanApplyTo(
        const CEconTool_SocketHammer *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  bool result; // al
  __int64 v5; // rdx
  CSocketIterator *m_Sockets; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  CSocketIterator socketIterator; // [rsp+0h] [rbp-D0h] BYREF

  result = (*(pToolSubject->_vptr_IEconItemInterface + 25))(pToolSubject, pTool);
  if ( result )
  {
    socketIterator._vptr_IEconItemAttributeIterator = off_47A8B30;
    m_Sockets = socketIterator.m_Sockets;
    do
    {
      m_Sockets->_vptr_IEconItemAttributeIterator = 0;
      m_Sockets = (m_Sockets + 16);
      *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
    }
    while ( m_Sockets != &socketIterator.m_nSocketCount );
    vptr_IEconItemInterface = pToolSubject->_vptr_IEconItemInterface;
    socketIterator.m_nSocketCount = 0;
    socketIterator.m_nGemCount = 0;
    socketIterator.m_unAttribStorageTypeFlags = 1;
    vptr_IEconItemInterface[28](pToolSubject, &socketIterator, v5, &socketIterator.m_nSocketCount);
    return socketIterator.m_nGemCount > 0;
  }
  return result;
}


// CEconTool_SocketChisel::CanApplyTo  (line 1016, @0x0000000002e694e0, libserver.so)
bool __fastcall CEconTool_SocketChisel::CanApplyTo(
        const CEconTool_SocketChisel *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  return (*(pToolSubject->_vptr_IEconItemInterface + 26))(pToolSubject, 1);
}


// IsSocketQuality  (line 1523, @0x0000000002e6f2a0, libserver.so)
// callers: CEconItem::GetQuality
bool __fastcall IsSocketQuality(EEconItemQuality eQuality)
{
  bool result; // al

  result = 0;
  if ( (eQuality - 9) <= 0xA )
    return ((1LL << (eQuality - 9)) & 0x461) != 0;
  return result;
}


// GetSocketQuality  (line 1537, @0x0000000002e9da10, libserver.so)  // inlines: CAttributeIterator_HasAttribute, CSchemaFieldHandle, CSocketIterator, CSocketPair, FindAttribute, FindAttribute<IEconItemInterface>, GEconItemSchema, Get, GetItemSocket, GetSocket, GetSocketAttribute, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: CEconItem::GetQuality
// strings: "ignore socket quality"
// globals: `guard variable for'GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality, GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
EEconItemQuality __fastcall GetSocketQuality(const IEconItemInterface *pEconItem, EEconItemQuality eQualityDefault)
{
  uint32 v4; // ebx
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r12
  CEconItemSystem *v7; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  EEconItemQuality result; // eax
  CSocketIterator *m_Sockets; // rax
  int (**v11)(...); // rax
  CSocketIterator::CSocketPair *v12; // r15
  int v13; // r12d
  EEconItemQuality v14; // r14d
  const CAttribute_Socket *m_pAttribute; // rax
  IItemSocket *m_pSocket; // rbx
  unsigned __int16 (__fastcall ***v17)(_QWORD); // rax
  EEconItemQuality v18; // eax
  CEconItemSystem *v19; // rax
  uint32 m_unResetCount; // eax
  __int16 v21; // [rsp+Eh] [rbp-F2h]
  CSocketIterator socketIterator; // [rsp+10h] [rbp-F0h] BYREF

  if ( pEconItem != 0 )
  {
    if ( `guard variable for'GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality == 0
      && __cxa_guard_acquire(&`guard variable for'GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality) != 0 )
    {
      GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_szName = "ignore socket quality";
      v19 = ItemSystem();
      GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v19->m_itemSchema, "ignore socket quality");
      m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
      GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_bDestructName = 0;
      GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_unSchemaGeneration = m_unResetCount;
      __cxa_guard_release(&`guard variable for'GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality,
        &_dso_handle);
    }
    if ( GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_szName != 0 )
    {
      v4 = ItemSystem()->m_itemSchema.m_unResetCount;
      m_pRef = GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_pRef;
      if ( v4 != GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_unSchemaGeneration )
      {
        m_szName = GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_szName;
        v7 = ItemSystem();
        m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v7->m_itemSchema, m_szName);
        GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_unSchemaGeneration = v4;
        GetSocketQuality(IEconItemInterface const*,EEconItemQuality)::pAttrDef_IgnoreSocketQuality.m_pRef = m_pRef;
      }
      if ( m_pRef != 0 )
      {
        socketIterator.m_Sockets[0].m_pAttribute = m_pRef;
        vptr_IEconItemInterface = pEconItem->_vptr_IEconItemInterface;
        LOBYTE(socketIterator.m_Sockets[0].m_pAttributeDefinition) = 0;
        socketIterator._vptr_IEconItemAttributeIterator = off_40F17F0;
        vptr_IEconItemInterface[28](pEconItem, &socketIterator);
        result = eQualityDefault;
        if ( LOBYTE(socketIterator.m_Sockets[0].m_pAttributeDefinition) != 0 )
          return result;
      }
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
    v11 = pEconItem->_vptr_IEconItemInterface;
    socketIterator.m_nSocketCount = 0;
    socketIterator.m_nGemCount = 0;
    socketIterator.m_unAttribStorageTypeFlags = 1;
    v11[28](pEconItem, &socketIterator);
    if ( socketIterator.m_nSocketCount > 0 )
    {
      v12 = socketIterator.m_Sockets;
      v13 = 0;
      v14 = EEconItemQuality::AE_UNDEFINED;
      do
      {
        while ( 1 )
        {
          m_pAttribute = v12->m_pAttribute;
          if ( v12->m_pAttribute != 0 )
          {
            m_pSocket = m_pAttribute->m_pSocket;
            if ( m_pAttribute->m_pSocket != 0 && (*(m_pSocket->_vptr_IItemSocket + 11))(m_pSocket) == 0 )
            {
              v21 = (*(m_pSocket->_vptr_IItemSocket + 21))(m_pSocket);
              v17 = (*(pEconItem->_vptr_IEconItemInterface + 12))(pEconItem);
              if ( v21 != (**v17)(v17) )
                break;
            }
          }
          ++v13;
          ++v12;
          if ( socketIterator.m_nSocketCount <= v13 )
            return v14;
        }
        v18 = (*(m_pSocket->_vptr_IItemSocket + 25))(m_pSocket);
        if ( v14 < v18 )
          v14 = v18;
        ++v13;
        ++v12;
      }
      while ( socketIterator.m_nSocketCount > v13 );
      return v14;
    }
  }
  return EEconItemQuality::AE_UNDEFINED;
}


// GetFreeSocketAttrib  (line 1571, @0x0000000002e6f2c0, libserver.so)  // inlines: CSocketIterator, CSocketPair
// calls: CSocketIterator::GetSocketByAttributeDef
int __fastcall GetFreeSocketAttrib(const IEconItemInterface *pItem)
{
  CSocketIterator *m_Sockets; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  int v3; // ebx
  CSocketIterator socketIterator; // [rsp+0h] [rbp-D0h] BYREF

  socketIterator._vptr_IEconItemAttributeIterator = off_47A8B30;
  m_Sockets = socketIterator.m_Sockets;
  do
  {
    m_Sockets->_vptr_IEconItemAttributeIterator = 0;
    m_Sockets = (m_Sockets + 16);
    *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
  }
  while ( m_Sockets != &socketIterator.m_nSocketCount );
  vptr_IEconItemInterface = pItem->_vptr_IEconItemInterface;
  socketIterator.m_nSocketCount = 0;
  socketIterator.m_nGemCount = 0;
  socketIterator.m_unAttribStorageTypeFlags = 1;
  vptr_IEconItemInterface[28](pItem, &socketIterator, &socketIterator.m_nSocketCount);
  if ( socketIterator.m_nGemCount <= 0 )
    return 1;
  v3 = 1;
  while ( CSocketIterator::GetSocketByAttributeDef(&socketIterator, v3) != 0 )
  {
    if ( ++v3 == 6 )
      return 0;
  }
  return v3;
}


// GetStatsGemValue  (line 1593, @0x0000000002e6f390, libserver.so)  // inlines: CSocketIterator, CSocketPair, GetItemSocket, GetSocket, GetSocketAttribute, GetSocketAttributeDefinition, TSocketIterator
// callers: CDOTA_ParticleManager::CreateParticle, GetStatsGemValueIncludingCurrentGame
uint32 __fastcall GetStatsGemValue(const IEconItemInterface *pItem, uint32 unEventType, uint32 unDefaultValue)
{
  TSocketIterator<CItemSocket_Strange> *m_Sockets; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  const CEconItemAttributeDefinition **p_m_pAttributeDefinition; // r13
  int v8; // r12d
  _DWORD **v9; // rax
  _DWORD *v10; // rbx
  TSocketIterator<CItemSocket_Strange> socketIterator; // [rsp+0h] [rbp-F0h] BYREF

  m_Sockets = socketIterator.m_Sockets;
  do
  {
    m_Sockets->_vptr_IEconItemAttributeIterator = 0;
    m_Sockets = (m_Sockets + 16);
    *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
  }
  while ( m_Sockets != &socketIterator.m_nSocketCount );
  socketIterator.m_nSocketCount = 0;
  socketIterator._vptr_IEconItemAttributeIterator = off_40FC710;
  vptr_IEconItemInterface = pItem->_vptr_IEconItemInterface;
  socketIterator.m_nGemCount = 0;
  socketIterator.m_unAttribStorageTypeFlags = 1;
  vptr_IEconItemInterface[28](pItem, &socketIterator, &socketIterator.m_nSocketCount);
  if ( socketIterator.m_nGemCount <= 0 )
    return 0;
  p_m_pAttributeDefinition = &socketIterator.m_Sockets[0].m_pAttributeDefinition;
  v8 = 0;
  if ( socketIterator.m_nSocketCount <= 0 )
    return unDefaultValue;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(p_m_pAttributeDefinition - 1);
      if ( v9 != 0 )
      {
        v10 = *v9;
        if ( *v9 != 0 )
          break;
      }
      ++v8;
      p_m_pAttributeDefinition += 2;
      if ( v8 >= socketIterator.m_nSocketCount )
        return unDefaultValue;
    }
    if ( (*(*v10 + 88LL))(v10) == 0
      && unEventType == v10[10]
      && socketIterator.m_nSocketCount > v8
      && *p_m_pAttributeDefinition != 0 )
    {
      break;
    }
    ++v8;
    p_m_pAttributeDefinition += 2;
    if ( v8 >= socketIterator.m_nSocketCount )
      return unDefaultValue;
  }
  return v10[11];
}


// GetStatsGemValueIncludingCurrentGame  (line 1625, @0x0000000002e6f4a0, libserver.so)  // inlines: DOTAGameRules, Element, Find, IsIdxValid, IsValidIndex, KillCountAdjustmentValue_t, LeftChild, Node_t, RightChild, operator(), operator[]
// calls: GetStatsGemValue
// callers: CDOTA_BaseNPC_Pet::UpdatePetLevel
uint32 __fastcall GetStatsGemValueIncludingCurrentGame(
        AccountID_t unAccountID,
        const IEconItemInterface *pItem,
        kill_eater_event_t unEventType,
        uint32 unDefaultValue)
{
  __int64 v7; // rax
  CGameRules *v8; // r12
  unsigned __int16 v9; // bx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v14; // rax
  uint32 nValue; // [rsp+Ch] [rbp-54h]
  _DWORD v16[2]; // [rsp+10h] [rbp-50h] BYREF
  __int64 v17; // [rsp+18h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-40h]

  nValue = GetStatsGemValue(pItem, unEventType, unDefaultValue);
  v7 = (*(pItem->_vptr_IEconItemInterface + 14))(pItem);
  v16[0] = unAccountID;
  v18 = 0;
  v16[1] = unEventType;
  v17 = v7;
  v8 = g_pGameRules;
  v9 = *&g_pGameRules[52].m_szQuestName[120];
  if ( v9 == 0xFFFF )
  {
LABEL_7:
    v11 = 0xFFFF;
    v9 = -1;
  }
  else
  {
    v10 = *&g_pGameRules[52].m_szQuestName[104];
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v9;
        v12 = 32LL * v9;
        if ( (*&v8[52].m_szQuestName[96])(v16, v10 + v12 + 8) == 0 )
          break;
        v10 = *&v8[52].m_szQuestName[104];
        v9 = *(v10 + 32LL * v9);
        if ( v9 == 0xFFFF )
          goto LABEL_7;
      }
      if ( (*&v8[52].m_szQuestName[96])(*&v8[52].m_szQuestName[104] + v12 + 8, v16) == 0 )
        break;
      v10 = *&v8[52].m_szQuestName[104];
      v9 = *(v10 + v12 + 2);
      if ( v9 == 0xFFFF )
        goto LABEL_7;
    }
  }
  if ( *&v8[52].m_szQuestName[112] > v11 && *&v8[52].m_szQuestName[126] >= v9 && v9 != 0xFFFF )
  {
    v14 = *&v8[52].m_szQuestName[104] + 32LL * v9;
    if ( *v14 != v9 )
      nValue += *(v14 + 24);
  }
  return nValue;
}


