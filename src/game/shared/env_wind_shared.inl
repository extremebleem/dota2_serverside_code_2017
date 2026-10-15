
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvWindShared::Schema_DynamicBinding  (line 146, @0x00000000021e1920, libserver.so)
// calls: CEnvWindShared::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvWindShared::Schema_DynamicBinding(const CEnvWindShared *const this)
{
  CEnvWindShared::Schema_VerifyBindingIsRegistered();
  return CEnvWindShared::s_pSchemaBinding;
}


// CEnvWindShared::NetworkStateChanged  (line 152, @0x000000000220dca0, libserver.so)
void __fastcall CEnvWindShared::NetworkStateChanged(CEnvWindShared *const this)
{
  ;
}


// CEnvWindShared::NetworkStateChanged  (line 152, @0x000000000220dcb0, libserver.so)
void __fastcall CEnvWindShared::NetworkStateChanged(
        CEnvWindShared *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CEnvWindShared::NetworkStateChangedLog  (line 152, @0x000000000220dcc0, libserver.so)
void __fastcall CEnvWindShared::NetworkStateChangedLog(
        const CEnvWindShared *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


