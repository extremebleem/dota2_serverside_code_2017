
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IEconItemAttributeIterator::~IEconItemAttributeIterator  (line 81, @0x0000000002496d20, libserver.so)
void __fastcall IEconItemAttributeIterator::~IEconItemAttributeIterator(IEconItemAttributeIterator *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// IEconItemAttributeIterator::~IEconItemAttributeIterator  (line 81, @0x00000000024990f0, libserver.so)  // inlines: ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall IEconItemAttributeIterator::~IEconItemAttributeIterator(IEconItemAttributeIterator *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CEconItemSpecificAttributeIterator::~CEconItemSpecificAttributeIterator  (line 101, @0x00000000024974b0, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CEconItemSpecificAttributeIterator::~CEconItemSpecificAttributeIterator(
        CEconItemSpecificAttributeIterator *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CEconItemSpecificAttributeIterator::~CEconItemSpecificAttributeIterator  (line 101, @0x0000000002499130, libserver.so)  // inlines: ~CEconItemSpecificAttributeIterator, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CEconItemSpecificAttributeIterator::~CEconItemSpecificAttributeIterator(
        CEconItemSpecificAttributeIterator *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CEconItemSpecificAttributeIterator::OnIterateAttributeValue  (line 104, @0x0000000002496d30, libserver.so)
bool __fastcall CEconItemSpecificAttributeIterator::OnIterateAttributeValue(
        CEconItemSpecificAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  return 1;
}


// CEconItemSpecificAttributeIterator::OnIterateAttributeValue  (line 105, @0x0000000002496d40, libserver.so)
__int64 __fastcall CEconItemSpecificAttributeIterator::OnIterateAttributeValue(
        CEconItemSpecificAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  return 1;
}


// CEconItemSpecificAttributeIterator::OnIterateAttributeValue  (line 106, @0x0000000002496d50, libserver.so)
bool __fastcall CEconItemSpecificAttributeIterator::OnIterateAttributeValue(
        CEconItemSpecificAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  return 1;
}


// CEconItemSpecificAttributeIterator::OnIterateAttributeValue  (line 107, @0x0000000002496d60, libserver.so)
bool __fastcall CEconItemSpecificAttributeIterator::OnIterateAttributeValue(
        CEconItemSpecificAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  return 1;
}


// CEconItemSpecificAttributeIterator::OnIterateAttributeValue  (line 108, @0x0000000002496d70, libserver.so)
bool __fastcall CEconItemSpecificAttributeIterator::OnIterateAttributeValue(
        CEconItemSpecificAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  return 1;
}


// CEconItemSpecificAttributeIterator::OnIterateAttributeValue  (line 109, @0x0000000002496d80, libserver.so)
bool __fastcall CEconItemSpecificAttributeIterator::OnIterateAttributeValue(
        CEconItemSpecificAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  return 1;
}


// CEconItemSpecificAttributeIterator::OnIterateAttributeValue  (line 111, @0x0000000002496d90, libserver.so)
bool __fastcall CEconItemSpecificAttributeIterator::OnIterateAttributeValue(
        CEconItemSpecificAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  return 1;
}


// IEconItemUntypedAttributeIterator::~IEconItemUntypedAttributeIterator  (line 124, @0x0000000002551dc0, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall IEconItemUntypedAttributeIterator::~IEconItemUntypedAttributeIterator(
        IEconItemUntypedAttributeIterator *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// IEconItemUntypedAttributeIterator::~IEconItemUntypedAttributeIterator  (line 124, @0x0000000002554a80, libserver.so)  // inlines: ~IEconItemAttributeIterator, ~IEconItemUntypedAttributeIterator
// calls: operator delete
void __fastcall IEconItemUntypedAttributeIterator::~IEconItemUntypedAttributeIterator(
        IEconItemUntypedAttributeIterator *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// IEconItemUntypedAttributeIterator::OnIterateAttributeValue  (line 127, @0x0000000002551d50, libserver.so)
bool __fastcall IEconItemUntypedAttributeIterator::OnIterateAttributeValue(
        IEconItemUntypedAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t a3)
{
  return (*(this->_vptr_IEconItemAttributeIterator + 9))(this, pAttrDef, a3);
}


// IEconItemUntypedAttributeIterator::OnIterateAttributeValue  (line 132, @0x0000000002551d60, libserver.so)
bool __fastcall IEconItemUntypedAttributeIterator::OnIterateAttributeValue(
        IEconItemUntypedAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float a4)
{
  return (*(this->_vptr_IEconItemAttributeIterator + 9))(this, pAttrDef, a3, a4);
}


// IEconItemUntypedAttributeIterator::OnIterateAttributeValue  (line 137, @0x0000000002551d70, libserver.so)
bool __fastcall IEconItemUntypedAttributeIterator::OnIterateAttributeValue(
        IEconItemUntypedAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 a3)
{
  return (*(this->_vptr_IEconItemAttributeIterator + 9))(this, pAttrDef, a3);
}


// IEconItemUntypedAttributeIterator::OnIterateAttributeValue  (line 142, @0x0000000002551d80, libserver.so)
bool __fastcall IEconItemUntypedAttributeIterator::OnIterateAttributeValue(
        IEconItemUntypedAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const a3)
{
  return (*(this->_vptr_IEconItemAttributeIterator + 9))(this, pAttrDef, a3);
}


// IEconItemUntypedAttributeIterator::OnIterateAttributeValue  (line 147, @0x0000000002551d90, libserver.so)
bool __fastcall IEconItemUntypedAttributeIterator::OnIterateAttributeValue(
        IEconItemUntypedAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const a3)
{
  return (*(this->_vptr_IEconItemAttributeIterator + 9))(this, pAttrDef, a3);
}


// IEconItemUntypedAttributeIterator::OnIterateAttributeValue  (line 152, @0x0000000002551da0, libserver.so)
bool __fastcall IEconItemUntypedAttributeIterator::OnIterateAttributeValue(
        IEconItemUntypedAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const a3)
{
  return (*(this->_vptr_IEconItemAttributeIterator + 9))(this, pAttrDef, a3);
}


// IEconItemUntypedAttributeIterator::OnIterateAttributeValue  (line 158, @0x0000000002551db0, libserver.so)
bool __fastcall IEconItemUntypedAttributeIterator::OnIterateAttributeValue(
        IEconItemUntypedAttributeIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const a3)
{
  return (*(this->_vptr_IEconItemAttributeIterator + 9))(this, pAttrDef, a3);
}


// CAttributeIterator_HasAttribute::~CAttributeIterator_HasAttribute  (line 173, @0x00000000025529a0, libserver.so)  // inlines: ~IEconItemAttributeIterator, ~IEconItemUntypedAttributeIterator
void __fastcall CAttributeIterator_HasAttribute::~CAttributeIterator_HasAttribute(
        CAttributeIterator_HasAttribute *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_HasAttribute::~CAttributeIterator_HasAttribute  (line 173, @0x0000000002554ae0, libserver.so)  // inlines: ~CAttributeIterator_HasAttribute, ~IEconItemAttributeIterator, ~IEconItemUntypedAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_HasAttribute::~CAttributeIterator_HasAttribute(
        CAttributeIterator_HasAttribute *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_HasAttribute::OnIterateAttributeValueUntyped  (line 189, @0x0000000002551dd0, libserver.so)
bool __fastcall CAttributeIterator_HasAttribute::OnIterateAttributeValueUntyped(
        CAttributeIterator_HasAttribute *const this,
        const CEconItemAttributeDefinition *pAttrDef)
{
  if ( this->m_pAttrDef != pAttrDef )
    return !this->m_bFound;
  this->m_bFound = 1;
  return 0;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002498100, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002499170, libserver.so)  // inlines: ~CAttributeIterator_GetTypedAttributeValue, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, float>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x00000000025529e0, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,float>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,float> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002552a20, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, float>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002554b00, libserver.so)  // inlines: ~CAttributeIterator_GetTypedAttributeValue, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,float>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,float> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002554b20, libserver.so)  // inlines: ~CAttributeIterator_GetTypedAttributeValue, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002e4f170, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002e4f190, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002e4f1a0, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002e4faf0, libserver.so)  // inlines: ~CAttributeIterator_GetTypedAttributeValue, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002e4fb10, libserver.so)  // inlines: ~CAttributeIterator_GetTypedAttributeValue, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002e4fb30, libserver.so)  // inlines: ~CAttributeIterator_GetTypedAttributeValue, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002ea1ff0, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned long long,unsigned long long>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<long long unsigned int,long long unsigned int> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_GetTypedAttributeValue<float, float>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002ea2d90, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CAttributeIterator_GetTypedAttributeValue<float,float>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<float,float> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002ea2da0, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
}


// CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002ea30e0, libserver.so)  // inlines: ~CAttributeIterator_GetTypedAttributeValue, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned long long,unsigned long long>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<long long unsigned int,long long unsigned int> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_GetTypedAttributeValue<float, float>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002ea3270, libserver.so)  // inlines: ~CAttributeIterator_GetTypedAttributeValue, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_GetTypedAttributeValue<float,float>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<float,float> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>::~CAttributeIterator_GetTypedAttributeValue  (line 229, @0x0000000002ea3290, libserver.so)  // inlines: ~CAttributeIterator_GetTypedAttributeValue, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent>::~CAttributeIterator_GetTypedAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent> *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;  // vptr: IEconItemAttributeIterator
  operator delete(this);
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int>::OnIterateAttributeValue  (line 260, @0x00000000024981c0, libserver.so)  // inlines: CopyAttributeValueToOutput, OnIterateAttributeValueTyped
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  unsigned int *m_outpValue; // rax

  if ( pAttrDef == this->m_pAttrDef )
  {
    m_outpValue = this->m_outpValue;
    this->m_bFound = 1;
    *m_outpValue = value;
  }
  return !this->m_bFound;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue>::OnIterateAttributeValue  (line 260, @0x0000000002553270, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, float>::OnIterateAttributeValue  (line 260, @0x00000000025536d0, libserver.so)  // inlines: CopyAttributeValueToOutput, OnIterateAttributeValueTyped
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  float *m_outpValue; // rax

  if ( pAttrDef == this->m_pAttrDef )
  {
    m_outpValue = this->m_outpValue;
    this->m_bFound = 1;
    *m_outpValue = value;
  }
  return !this->m_bFound;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>::OnIterateAttributeValue  (line 260, @0x0000000002e4f1d0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::OnIterateAttributeValue  (line 260, @0x0000000002e4f230, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>::OnIterateAttributeValue  (line 260, @0x0000000002e4fa20, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int>::OnIterateAttributeValue  (line 260, @0x0000000002ea21c0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned long long,unsigned long long>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<long long unsigned int,long long unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue  (line 260, @0x0000000002ea2db0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<float, float>::OnIterateAttributeValue  (line 260, @0x0000000002ea2e10, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<float,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<float,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int>::OnIterateAttributeValue  (line 265, @0x00000000024981f0, libserver.so)
__int64 __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue>::OnIterateAttributeValue  (line 265, @0x0000000002553280, libserver.so)
__int64 __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, float>::OnIterateAttributeValue  (line 265, @0x0000000002553700, libserver.so)
__int64 __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>::OnIterateAttributeValue  (line 265, @0x0000000002e4f1e0, libserver.so)
__int64 __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::OnIterateAttributeValue  (line 265, @0x0000000002e4f240, libserver.so)
__int64 __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>::OnIterateAttributeValue  (line 265, @0x0000000002e4fa30, libserver.so)
__int64 __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int>::OnIterateAttributeValue  (line 265, @0x0000000002ea21d0, libserver.so)
__int64 __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned long long,unsigned long long>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<long long unsigned int,long long unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue  (line 265, @0x0000000002ea2dc0, libserver.so)
__int64 __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<float, float>::OnIterateAttributeValue  (line 265, @0x0000000002ea2e20, libserver.so)  // inlines: CopyAttributeValueToOutput, OnIterateAttributeValueTyped
_BOOL8 __fastcall CAttributeIterator_GetTypedAttributeValue<float,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<float,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        float a3,
        float value)
{
  float *m_outpValue; // rax

  if ( pAttrDef == this->m_pAttrDef )
  {
    m_outpValue = this->m_outpValue;
    this->m_bFound = 1;
    *m_outpValue = a3;
  }
  return !this->m_bFound;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int>::OnIterateAttributeValue  (line 270, @0x0000000002498200, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue>::OnIterateAttributeValue  (line 270, @0x0000000002553290, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, float>::OnIterateAttributeValue  (line 270, @0x0000000002553710, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>::OnIterateAttributeValue  (line 270, @0x0000000002e4f1f0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::OnIterateAttributeValue  (line 270, @0x0000000002e4f250, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>::OnIterateAttributeValue  (line 270, @0x0000000002e4fa40, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int>::OnIterateAttributeValue  (line 270, @0x0000000002ea21e0, libserver.so)  // inlines: CopyAttributeValueToOutput, OnIterateAttributeValueTyped
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned long long,unsigned long long>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<long long unsigned int,long long unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  unsigned __int64 *m_outpValue; // rax

  if ( pAttrDef == this->m_pAttrDef )
  {
    m_outpValue = this->m_outpValue;
    this->m_bFound = 1;
    *m_outpValue = value;
  }
  return !this->m_bFound;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue  (line 270, @0x0000000002ea2dd0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<float, float>::OnIterateAttributeValue  (line 270, @0x0000000002ea2e50, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<float,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<float,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int>::OnIterateAttributeValue  (line 275, @0x0000000002498210, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue>::OnIterateAttributeValue  (line 275, @0x00000000025532a0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, float>::OnIterateAttributeValue  (line 275, @0x0000000002553720, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::OnIterateAttributeValue  (line 275, @0x0000000002e4f260, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>::OnIterateAttributeValue  (line 275, @0x0000000002e50610, libserver.so)  // inlines: CopyAttributeValueToOutput, OnIterateAttributeValueTyped, operator=
// calls: CAttribute_String::CopyFrom
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  if ( pAttrDef != this->m_pAttrDef )
    return !this->m_bFound;
  this->m_bFound = 1;
  CAttribute_String::CopyFrom(this->m_outpValue, value);
  return !this->m_bFound;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>::OnIterateAttributeValue  (line 275, @0x0000000002e51840, libserver.so)  // inlines: CopyAttributeValueToOutput, OnIterateAttributeValueTyped
// calls: CopyStringAttributeValueToCharPointerOutput
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  const char **m_outpValue; // rsi

  if ( pAttrDef != this->m_pAttrDef )
    return !this->m_bFound;
  m_outpValue = this->m_outpValue;
  this->m_bFound = 1;
  CopyStringAttributeValueToCharPointerOutput(value, m_outpValue);
  return !this->m_bFound;
}


// CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int>::OnIterateAttributeValue  (line 275, @0x0000000002ea2210, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned long long,unsigned long long>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<long long unsigned int,long long unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue  (line 275, @0x0000000002ea2de0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<float, float>::OnIterateAttributeValue  (line 275, @0x0000000002ea2e60, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<float,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<float,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int>::OnIterateAttributeValue  (line 280, @0x0000000002498220, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue>::OnIterateAttributeValue  (line 280, @0x00000000025532b0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, float>::OnIterateAttributeValue  (line 280, @0x0000000002553730, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>::OnIterateAttributeValue  (line 280, @0x0000000002e4f200, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::OnIterateAttributeValue  (line 280, @0x0000000002e4f270, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>::OnIterateAttributeValue  (line 280, @0x0000000002e4fa50, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int>::OnIterateAttributeValue  (line 280, @0x0000000002ea2220, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned long long,unsigned long long>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<long long unsigned int,long long unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<float, float>::OnIterateAttributeValue  (line 280, @0x0000000002ea2e70, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<float,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<float,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue  (line 280, @0x0000000002ea4000, libserver.so)  // inlines: CopyAttributeValueToOutput, OnIterateAttributeValueTyped, operator=
// calls: CAttribute_ItemDynamicRecipeComponent::CopyFrom
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  if ( pAttrDef != this->m_pAttrDef )
    return !this->m_bFound;
  this->m_bFound = 1;
  CAttribute_ItemDynamicRecipeComponent::CopyFrom(this->m_outpValue, value);
  return !this->m_bFound;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int>::OnIterateAttributeValue  (line 285, @0x0000000002498230, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue>::OnIterateAttributeValue  (line 285, @0x00000000025532c0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, float>::OnIterateAttributeValue  (line 285, @0x0000000002553740, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>::OnIterateAttributeValue  (line 285, @0x0000000002e4f210, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>::OnIterateAttributeValue  (line 285, @0x0000000002e4fa60, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::OnIterateAttributeValue  (line 285, @0x0000000002e51660, libserver.so)  // inlines: CopyAttributeValueToOutput, OnIterateAttributeValueTyped
// calls: CAttribute_Socket::operator=
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  if ( pAttrDef != this->m_pAttrDef )
    return !this->m_bFound;
  this->m_bFound = 1;
  CAttribute_Socket::operator=(this->m_outpValue, value);
  return !this->m_bFound;
}


// CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int>::OnIterateAttributeValue  (line 285, @0x0000000002ea2230, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned long long,unsigned long long>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<long long unsigned int,long long unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue  (line 285, @0x0000000002ea2df0, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<float, float>::OnIterateAttributeValue  (line 285, @0x0000000002ea2e80, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<float,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<float,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int>::OnIterateAttributeValue  (line 291, @0x0000000002498240, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<unsigned int, float>::OnIterateAttributeValue  (line 291, @0x0000000002553750, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned int,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<unsigned int,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue>::OnIterateAttributeValue  (line 291, @0x0000000002557cc0, libserver.so)  // inlines: CopyAttributeValueToOutput, OnIterateAttributeValueTyped, operator=
// calls: CProtoItemHeroStatue::CopyFrom
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue,CAttribute_HeroStatue> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  if ( pAttrDef != this->m_pAttrDef )
    return !this->m_bFound;
  this->m_bFound = 1;
  CProtoItemHeroStatue::CopyFrom(this->m_outpValue, value);
  return !this->m_bFound;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>::OnIterateAttributeValue  (line 291, @0x0000000002e4f220, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>::OnIterateAttributeValue  (line 291, @0x0000000002e4f280, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket,CAttribute_Socket> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>::OnIterateAttributeValue  (line 291, @0x0000000002e4fa70, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int>::OnIterateAttributeValue  (line 291, @0x0000000002ea2240, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<unsigned long long,unsigned long long>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<long long unsigned int,long long unsigned int> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue  (line 291, @0x0000000002ea2e00, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent,CAttribute_ItemDynamicRecipeComponent> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  return 1;
}


// CAttributeIterator_GetTypedAttributeValue<float, float>::OnIterateAttributeValue  (line 291, @0x0000000002ea2e90, libserver.so)
bool __fastcall CAttributeIterator_GetTypedAttributeValue<float,float>::OnIterateAttributeValue(
        CAttributeIterator_GetTypedAttributeValue<float,float> *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  return 1;
}


// FindAttribute<CEconItemDefinition>  (line 389, @0x0000000002ebd830, libserver.so)  // inlines: CAttributeIterator_HasAttribute, IterateAttributes
// calls: InternalIterateItemDefAttributes<CIterateAllAttributes>
// callers: TItemSocket<CProtoItemSocket_AssetModifier>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Spectator>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Effect>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Empty>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Autograph>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Strange>::HasUnremovableGem, TItemSocket<CProtoItemSocket_Color>::HasUnremovableGem
bool __fastcall FindAttribute<CEconItemDefinition>(
        const CEconItemDefinition *pSomethingThatHasAnIterateAttributesFunction,
        const CEconItemAttributeDefinition *pAttrDef)
{
  const CIterateAllAttributes *v2; // rdx
  __int64 v3; // rbp
  bool result; // al
  CAttributeIterator_HasAttribute it; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+20h] [rbp-8h]

  result = 0;
  if ( pAttrDef != 0 )
  {
    v6 = v3;
    it.m_pAttrDef = pAttrDef;
    it._vptr_IEconItemAttributeIterator = off_40F17F0;
    it.m_bFound = 0;
    InternalIterateItemDefAttributes<CIterateAllAttributes>(pSomethingThatHasAnIterateAttributesFunction, &it, v2);
    return it.m_bFound;
  }
  return result;
}


// FindAttribute_UnsafeBitwiseCast<CAttribute_String, char const*, CDOTAItemDefinition>  (line 403, @0x0000000002e59650, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue
// calls: CEconItemDefinition::IterateAttributes
// callers: ComputePackagingFlagsForHero, ComputeItemContainmentDepth_R, CDOTAItemDefinition::HasOrContainsItemForHeroID, AddItemToLoadoutList
bool __fastcall FindAttribute_UnsafeBitwiseCast<CAttribute_String,char const*,CDOTAItemDefinition>(
        const CDOTAItemDefinition *pSomethingThatHasAnIterateAttributesFunction,
        const CEconItemAttributeDefinition *pAttrDef,
        const char **out_pValue)
{
  __int64 v3; // rbp
  bool result; // al
  CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const*> it; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+20h] [rbp-8h]

  result = 0;
  if ( pAttrDef != 0 )
  {
    v6 = v3;
    it.m_pAttrDef = pAttrDef;
    it._vptr_IEconItemAttributeIterator = off_479F250;
    it.m_outpValue = out_pValue;
    it.m_bFound = 0;
    CEconItemDefinition::IterateAttributes(pSomethingThatHasAnIterateAttributesFunction, &it);
    return it.m_bFound;
  }
  return result;
}


// FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, CEconItemDefinition>  (line 403, @0x0000000002ebd7f0, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, IterateAttributes
// calls: InternalIterateItemDefAttributes<CIterateAllAttributes>
// callers: TItemSocket<CProtoItemSocket_Strange>::GetQuality, TItemSocket<CProtoItemSocket_Autograph>::GetQuality, TItemSocket<CProtoItemSocket_Color>::GetQuality, TItemSocket<CProtoItemSocket_Spectator>::GetQuality, TItemSocket<CProtoItemSocket_AssetModifier>::GetQuality, TItemSocket<CProtoItemSocket_Empty>::GetQuality, TItemSocket<CProtoItemSocket_Effect>::GetQuality, CAttribute_Socket::ItemSocketFactory
bool __fastcall FindAttribute_UnsafeBitwiseCast<unsigned int,unsigned int,CEconItemDefinition>(
        const CEconItemDefinition *pSomethingThatHasAnIterateAttributesFunction,
        const CEconItemAttributeDefinition *pAttrDef,
        unsigned int *out_pValue)
{
  __int64 v3; // rbp
  bool result; // al
  CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> it; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+20h] [rbp-8h]

  result = 0;
  if ( pAttrDef != 0 )
  {
    v6 = v3;
    it.m_pAttrDef = pAttrDef;
    it._vptr_IEconItemAttributeIterator = &wrapper;
    it.m_outpValue = out_pValue;
    it.m_bFound = 0;
    InternalIterateItemDefAttributes<CIterateAllAttributes>(
      pSomethingThatHasAnIterateAttributesFunction,
      &it,
      out_pValue);
    return it.m_bFound;
  }
  return result;
}


// IItemSocket::~IItemSocket  (line 451, @0x0000000002ea1a70, libserver.so)
void __fastcall IItemSocket::~IItemSocket(IItemSocket *const this)
{
  this->_vptr_IItemSocket = off_47A5E50;  // vptr: IItemSocket
}


// IItemSocket::~IItemSocket  (line 451, @0x0000000002ea2ec0, libserver.so)  // inlines: ~IItemSocket
// calls: operator delete
void __fastcall IItemSocket::~IItemSocket(IItemSocket *const this)
{
  this->_vptr_IItemSocket = off_47A5E50;  // vptr: IItemSocket
  operator delete(this);
}


// IEconItemInterface::Schema_DynamicBinding  (line 525, @0x0000000002e50360, libserver.so)
// calls: IEconItemInterface::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IEconItemInterface::Schema_DynamicBinding(
        const IEconItemInterface *const this)
{
  IEconItemInterface::Schema_VerifyBindingIsRegistered();
  return IEconItemInterface::s_pSchemaBinding;
}


// IEconItemInterface::~IEconItemInterface  (line 528, @0x0000000002ea1a80, libserver.so)
void __fastcall IEconItemInterface::~IEconItemInterface(IEconItemInterface *const this)
{
  this->_vptr_IEconItemInterface = &off_47A67F0;
}


// IEconItemInterface::~IEconItemInterface  (line 528, @0x0000000002ea2ee0, libserver.so)  // inlines: ~IEconItemInterface
// calls: operator delete
void __fastcall IEconItemInterface::~IEconItemInterface(IEconItemInterface *const this)
{
  this->_vptr_IEconItemInterface = &off_47A67F0;
  operator delete(this);
}


