
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IRagdoll::Schema_DynamicBinding  (line 30, @0x0000000002373220, libserver.so)
// calls: IRagdoll::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall IRagdoll::Schema_DynamicBinding(const IRagdoll *const this)
{
  IRagdoll::Schema_VerifyBindingIsRegistered();
  return IRagdoll::s_pSchemaBinding;
}


// IRagdoll::~IRagdoll  (line 33, @0x0000000002371210, libserver.so)
void __fastcall IRagdoll::~IRagdoll(IRagdoll *const this)
{
  this->_vptr_IRagdoll = &off_40A2A70;
}


// IRagdoll::~IRagdoll  (line 33, @0x0000000002372260, libserver.so)  // inlines: ~IRagdoll
// calls: operator delete
void __fastcall IRagdoll::~IRagdoll(IRagdoll *const this)
{
  this->_vptr_IRagdoll = &off_40A2A70;
  operator delete(this);
}


// IRagdoll::GetActiveWound  (line 69, @0x0000000002371220, libserver.so)
int __fastcall IRagdoll::GetActiveWound(IRagdoll *const this, int iWound)
{
  return -1;
}


// IRagdoll::AddExplosionImpulseFrom  (line 70, @0x0000000002371230, libserver.so)
void __fastcall IRagdoll::AddExplosionImpulseFrom(IRagdoll *const this, const Vector *const vecEpicenter)
{
  ;
}


