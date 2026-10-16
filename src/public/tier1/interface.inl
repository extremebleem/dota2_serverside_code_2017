
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IBaseInterface::~IBaseInterface  (line 44, @0x00000000020f0ff0, libserver.so)
void __fastcall IBaseInterface::~IBaseInterface(IBaseInterface *const this)
{
  this->_vptr_IBaseInterface = off_3FF3D10;  // vptr: IBaseInterface
}


// IBaseInterface::~IBaseInterface  (line 44, @0x00000000020f4a90, libserver.so)  // inlines: ~IBaseInterface
// calls: operator delete
void __fastcall IBaseInterface::~IBaseInterface(IBaseInterface *const this)
{
  this->_vptr_IBaseInterface = off_3FF3D10;  // vptr: IBaseInterface
  operator delete(this);
}


