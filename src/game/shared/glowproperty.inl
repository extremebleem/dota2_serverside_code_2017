
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGlowProperty::Schema_DynamicBinding  (line 31, @0x000000000208fcb0, libserver.so)
// calls: CGlowProperty::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CGlowProperty::Schema_DynamicBinding(const CGlowProperty *const this)
{
  CGlowProperty::Schema_VerifyBindingIsRegistered();
  return CGlowProperty::s_pSchemaBinding;
}


// CGlowProperty::NetworkStateChanged  (line 37, @0x000000000227a470, libserver.so)
void __fastcall CGlowProperty::NetworkStateChanged(CGlowProperty *const this)
{
  ;
}


// CGlowProperty::NetworkStateChanged  (line 37, @0x000000000227a480, libserver.so)
void __fastcall CGlowProperty::NetworkStateChanged(
        CGlowProperty *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CGlowProperty::NetworkStateChangedLog  (line 37, @0x000000000227a490, libserver.so)
void __fastcall CGlowProperty::NetworkStateChangedLog(
        const CGlowProperty *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


