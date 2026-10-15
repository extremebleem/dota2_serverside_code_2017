
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSimpleLoggingListener::Log  (line 42, @0x000000000306c540, libserver.so)
// calls: Plat_Printf
void __fastcall CSimpleLoggingListener::Log(
        CSimpleLoggingListener *const this,
        const LoggingContext_t *pContext,
        const tchar *pMessage)
{
  if ( !this->m_bQuietPrintf )
    Plat_Printf("%s", pMessage);
}


// CSimpleWindowsLoggingListener::Log  (line 137, @0x000000000306c570, libserver.so)  // inlines: Plat_IsInDebugSession
// calls: Plat_IsInDebugSessionRaw, Plat_DebugString, Plat_IsInTestMode, Plat_MessageBox
void __fastcall CSimpleWindowsLoggingListener::Log(
        CSimpleWindowsLoggingListener *const this,
        const LoggingContext_t *pContext,
        const tchar *pMessage)
{
  if ( (pContext->m_Flags & 0x10) != 0 || Plat_IsInDebugSessionRaw(this) == 0 )
  {
    if ( pContext->m_Severity != LoggingSeverity_t::LS_ERROR )
      return;
  }
  else
  {
    Plat_DebugString(pMessage);
    if ( pContext->m_Severity != LoggingSeverity_t::LS_ERROR )
      return;
  }
  if ( Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  if ( Plat_IsInTestMode() == 0 )
    Plat_MessageBox("Error", pMessage);
}


