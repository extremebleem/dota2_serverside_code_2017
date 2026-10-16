
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IDebugVisualizer::~IDebugVisualizer  (line 28, @0x0000000001f71e30, libserver.so)
void __fastcall IDebugVisualizer::~IDebugVisualizer(IDebugVisualizer *const this)
{
  this->_vptr_IDebugVisualizer = off_3FCBB90;  // vptr: IDebugVisualizer
}


// IDebugVisualizer::~IDebugVisualizer  (line 28, @0x0000000001f73c30, libserver.so)  // inlines: ~IDebugVisualizer
// calls: operator delete
void __fastcall IDebugVisualizer::~IDebugVisualizer(IDebugVisualizer *const this)
{
  this->_vptr_IDebugVisualizer = off_3FCBB90;  // vptr: IDebugVisualizer
  operator delete(this);
}


