
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IHandleEntity::Schema_DynamicBinding  (line 20, @0x00000000030a00a0, libserver.so)
// calls: IHandleEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IHandleEntity::Schema_DynamicBinding(const IHandleEntity *const this)
{
  IHandleEntity::Schema_VerifyBindingIsRegistered();
  return IHandleEntity::s_pSchemaBinding;
}


// IHandleEntity::~IHandleEntity  (line 22, @0x00000000030a0030, libserver.so)
void __fastcall IHandleEntity::~IHandleEntity(IHandleEntity *const this)
{
  this->_vptr_IHandleEntity = &off_47C2D70;
}


// IHandleEntity::~IHandleEntity  (line 22, @0x00000000030a0080, libserver.so)  // inlines: ~IHandleEntity
// calls: operator delete
void __fastcall IHandleEntity::~IHandleEntity(IHandleEntity *const this)
{
  this->_vptr_IHandleEntity = &off_47C2D70;
  operator delete(this);
}


