
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IRecipientFilter::Schema_DynamicBinding  (line 20, @0x0000000001f74020, libserver.so)
// calls: IRecipientFilter::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IRecipientFilter::Schema_DynamicBinding(const IRecipientFilter *const this)
{
  IRecipientFilter::Schema_VerifyBindingIsRegistered();
  return IRecipientFilter::s_pSchemaBinding;
}


// IRecipientFilter::~IRecipientFilter  (line 23, @0x0000000001f71a90, libserver.so)
void __fastcall IRecipientFilter::~IRecipientFilter(IRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCAC70;
}


// IRecipientFilter::~IRecipientFilter  (line 23, @0x0000000001f73bb0, libserver.so)  // inlines: ~IRecipientFilter
// calls: operator delete
void __fastcall IRecipientFilter::~IRecipientFilter(IRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCAC70;
  operator delete(this);
}


