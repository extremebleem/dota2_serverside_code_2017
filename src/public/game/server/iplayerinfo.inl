
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBotCmd::~CBotCmd  (line 23, @0x0000000002302e00, libserver.so)
void __fastcall CBotCmd::~CBotCmd(CBotCmd *const this)
{
  this->_vptr_CBotCmd = off_4073650;  // vptr: CBotCmd
}


// CBotCmd::~CBotCmd  (line 23, @0x0000000002305660, libserver.so)  // inlines: ~CBotCmd
// calls: operator delete
void __fastcall CBotCmd::~CBotCmd(CBotCmd *const this)
{
  this->_vptr_CBotCmd = off_4073650;  // vptr: CBotCmd
  operator delete(this);
}


// IPlayerInfo::Schema_DynamicBinding  (line 103, @0x00000000020050d0, libserver.so)
// calls: IPlayerInfo::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IPlayerInfo::Schema_DynamicBinding(const IPlayerInfo *const this)
{
  IPlayerInfo::Schema_VerifyBindingIsRegistered();
  return IPlayerInfo::s_pSchemaBinding;
}


// IBotController::Schema_DynamicBinding  (line 164, @0x00000000020050f0, libserver.so)
// calls: IBotController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IBotController::Schema_DynamicBinding(const IBotController *const this)
{
  IBotController::Schema_VerifyBindingIsRegistered();
  return IBotController::s_pSchemaBinding;
}


