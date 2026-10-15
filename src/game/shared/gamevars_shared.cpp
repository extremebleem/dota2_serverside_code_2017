
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// MPForceCameraCallback  (line 14, @0x00000000022570e0, libserver.so)  // inlines: GetInt
// calls: ConVar::SetValue
// globals: mp_forcecamera
void __fastcall MPForceCameraCallback(IConVar *var, const char *pOldString, double a3, float flOldValue)
{
  if ( mp_forcecamera.m_pParent->m_Value.m_nValue > 2u )
    ConVar::SetValue(&mp_forcecamera, 1);
}


