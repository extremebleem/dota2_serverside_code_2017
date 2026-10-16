
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSingleplayRules::~CSingleplayRules  (line 59, @0x00000000023aad80, libserver.so)
// calls: CGameRules::~CGameRules
void __fastcall CSingleplayRules::~CSingleplayRules(CSingleplayRules *const this)
{
  this->_vptr_CGameRules = off_40A94B0;  // vptr: CSingleplayRules
  CGameRules::~CGameRules(this);
}


// CSingleplayRules::~CSingleplayRules  (line 59, @0x00000000023aada0, libserver.so)  // inlines: operator delete, ~CSingleplayRules
// calls: CGameRules::~CGameRules
void __fastcall CSingleplayRules::~CSingleplayRules(CSingleplayRules *const this)
{
  this->_vptr_CGameRules = off_40A94B0;  // vptr: CSingleplayRules
  CGameRules::~CGameRules(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CSingleplayRules::FAllowFlashlight  (line 64, @0x00000000023a9120, libserver.so)
bool __fastcall CSingleplayRules::FAllowFlashlight(CSingleplayRules *const this)
{
  return 1;
}


