
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DebugCheckEHandleAccess  (line 17, @0x00000000021cd140, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: Msg
// strings: "Access of EHANDLE/CHandle for class %s:%p in destructor!\n"
void __fastcall DebugCheckEHandleAccess(void *pEnt)
{
  __int64 v1; // rax
  const char *v2; // rsi

  if ( g_bDisableEhandleAccess )
  {
    v1 = *(pEnt + 1);
    v2 = "";
    if ( *(v1 + 32) != 0 )
      v2 = *(v1 + 32);
    Msg("Access of EHANDLE/CHandle for class %s:%p in destructor!\n", v2, pEnt);
  }
}


