
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GLocalizationProvider  (line 476, @0x0000000002e720e0, libserver.so)  // inlines: CVGUILocalizationProvider
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CItemSocket_Empty::GetString, CItemSocket_Effect::GetString, CItemSocket_Spectator::GetItemType, CItemSocket_Color::GetString, CItemSocket_Strange::GetString, CItemSocket_Spectator::GetString, CItemSocket_AssetModifier::GetString, CItemSocket_Autograph::GetString, TItemSocket<CProtoItemSocket_Autograph>::GetItemType, TItemSocket<CProtoItemSocket_AssetModifier>::GetItemType, TItemSocket<CProtoItemSocket_Strange>::GetItemType, TItemSocket<CProtoItemSocket_Color>::GetItemType (15 total)
// globals: `guard variable for'GLocalizationProvider(void)::g_VGUILocalizationProvider, GLocalizationProvider(void)::g_VGUILocalizationProvider
CLocalizationProvider *__cdecl GLocalizationProvider()
{
  if ( `guard variable for'GLocalizationProvider(void)::g_VGUILocalizationProvider != 0 )
    return &GLocalizationProvider(void)::g_VGUILocalizationProvider;
  if ( __cxa_guard_acquire(&`guard variable for'GLocalizationProvider(void)::g_VGUILocalizationProvider) != 0 )
  {
    GLocalizationProvider(void)::g_VGUILocalizationProvider._vptr_CLocalizationProvider = &off_47AAD90;
    __cxa_guard_release(&`guard variable for'GLocalizationProvider(void)::g_VGUILocalizationProvider);
  }
  return &GLocalizationProvider(void)::g_VGUILocalizationProvider;
}


// CVGUILocalizationProvider::CVGUILocalizationProvider  (line 484, @0x0000000002e72130, libserver.so)
void __fastcall CVGUILocalizationProvider::CVGUILocalizationProvider(CVGUILocalizationProvider *const this)
{
  this->_vptr_CLocalizationProvider = &off_47AAD90;
}


// CVGUILocalizationProvider::Find  (line 489, @0x0000000002e69ea0, libserver.so)
// globals: CVGUILocalizationProvider::Find(char const*)::empty
locchar_t *__fastcall CVGUILocalizationProvider::Find(CVGUILocalizationProvider *const this, const char *pchKey)
{
  if ( pchKey != 0 && *pchKey != 0 )
    return (*(*g_pVGuiLocalize + 112LL))(g_pVGuiLocalize);
  else
    return &CVGUILocalizationProvider::Find(char const*)::empty;
}


// CVGUILocalizationProvider::ConstructString  (line 497, @0x0000000002e69760, libserver.so)  // inlines: ConstructStringVArgs<wchar_t>
void CVGUILocalizationProvider::ConstructString(
        CVGUILocalizationProvider *const this,
        locchar_t *unicodeOutput,
        int unicodeBufferSizeInBytes,
        const locchar_t *formatString,
        int numFormatParameters,
        ...)
{
  va_list argList; // [rsp+8h] [rbp-C8h] BYREF

  va_start(argList, numFormatParameters);
  (*(*g_pVGuiLocalize + 336LL))(
    g_pVGuiLocalize,
    unicodeOutput,
    unicodeBufferSizeInBytes,
    formatString,
    numFormatParameters,
    argList);
}


// CVGUILocalizationProvider::ConstructString  (line 505, @0x0000000002e69660, libserver.so)  // inlines: ConstructString<wchar_t>
void __fastcall CVGUILocalizationProvider::ConstructString(
        CVGUILocalizationProvider *const this,
        locchar_t *unicodeOutput,
        int unicodeBufferSizeInBytes,
        const locchar_t *formatString,
        KeyValues *localizationVariables)
{
  (*(*g_pVGuiLocalize + 352LL))(
    g_pVGuiLocalize,
    unicodeOutput,
    unicodeBufferSizeInBytes,
    formatString,
    localizationVariables);
}


// CVGUILocalizationProvider::ConvertLoccharToANSI  (line 510, @0x0000000002e73400, libserver.so)  // inlines: operator=
// calls: CUtlConstStringBase<char>::Set, __stack_chk_fail
void __fastcall CVGUILocalizationProvider::ConvertLoccharToANSI(
        const CVGUILocalizationProvider *const this,
        const locchar_t *loc_In,
        CUtlConstString *out_ansi)
{
  char ansi_Scratch[1032]; // [rsp+0h] [rbp-420h] BYREF
  unsigned __int64 v5; // [rsp+408h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  (*(*g_pVGuiLocalize + 128LL))(g_pVGuiLocalize, loc_In, ansi_Scratch, 1024);
  CUtlConstStringBase<char>::Set(out_ansi, ansi_Scratch);
}


// CVGUILocalizationProvider::ConvertLoccharToUnicode  (line 518, @0x0000000002e733a0, libserver.so)  // inlines: operator=
// calls: CUtlConstStringBase<wchar_t>::Set
void __fastcall CVGUILocalizationProvider::ConvertLoccharToUnicode(
        const CVGUILocalizationProvider *const this,
        const locchar_t *loc_In,
        CUtlConstWideString *out_unicode)
{
  CUtlConstStringBase<wchar_t>::Set(out_unicode, loc_In);
}


// CVGUILocalizationProvider::ConvertUTF8ToLocchar  (line 523, @0x0000000002e733b0, libserver.so)  // inlines: operator=
// calls: V_UTF8ToUTF32, CUtlConstStringBase<wchar_t>::Set
void __fastcall CVGUILocalizationProvider::ConvertUTF8ToLocchar(
        const CVGUILocalizationProvider *const this,
        const char *utf8_In,
        CUtlConstStringBase<wchar_t> *out_loc)
{
  wchar_t loc_Scratch[1028]; // [rsp+0h] [rbp-1010h] BYREF

  V_UTF8ToUTF32(utf8_In, loc_Scratch, 1024, 4);
  CUtlConstStringBase<wchar_t>::Set(out_loc, loc_Scratch);
}


// CVGUILocalizationProvider::ConvertUTF8ToLocchar  (line 531, @0x0000000002e69e00, libserver.so)
// calls: V_UTF8ToUTF32
void __fastcall CVGUILocalizationProvider::ConvertUTF8ToLocchar(
        CVGUILocalizationProvider *const this,
        const char *utf8,
        locchar_t *locchar,
        int cubDestSizeInBytes)
{
  V_UTF8ToUTF32(utf8, locchar, cubDestSizeInBytes, 4);
}


// CVGUILocalizationProvider::ConvertLoccharToANSI  (line 536, @0x0000000002e69680, libserver.so)
int __fastcall CVGUILocalizationProvider::ConvertLoccharToANSI(
        CVGUILocalizationProvider *const this,
        const locchar_t *loc,
        char *ansi,
        int ansiBufferSize)
{
  return (*(*g_pVGuiLocalize + 128LL))(g_pVGuiLocalize, loc, ansi, ansiBufferSize);
}


// CVGUILocalizationProvider::ConvertLoccharToUnicode  (line 541, @0x0000000002e69e20, libserver.so)  // inlines: V_wcsncpy<int>
// calls: _V_wcsncpy_bytes
int __fastcall CVGUILocalizationProvider::ConvertLoccharToUnicode(
        CVGUILocalizationProvider *const this,
        const locchar_t *loc,
        wchar_t *unicode,
        int unicodeBufferSizeInBytes)
{
  _V_wcsncpy_bytes(unicode, loc, unicodeBufferSizeInBytes);
  return 0;
}


