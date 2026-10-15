
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_rangecheckedvar.cpp  (line 0, @0x0000000001a67260, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_rangecheckedvar_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CDisableRangeChecks::CDisableRangeChecks  (line 18, @0x0000000002f81dc0, libserver.so)
// calls: ThreadInMainThread
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Interpolate, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolateInternal
// globals: g_nDisables, g_bDoRangeChecks
void __fastcall CDisableRangeChecks::CDisableRangeChecks(CDisableRangeChecks *const this)
{
  if ( ThreadInMainThread(this) != 0 )
  {
    ++g_nDisables;
    g_bDoRangeChecks = 0;
  }
}


// CDisableRangeChecks::~CDisableRangeChecks  (line 27, @0x0000000002f81de0, libserver.so)
// calls: ThreadInMainThread
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Interpolate, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::InterpolateInternal
// globals: g_nDisables, g_bDoRangeChecks
void __fastcall CDisableRangeChecks::~CDisableRangeChecks(CDisableRangeChecks *const this)
{
  if ( ThreadInMainThread(this) != 0 && --g_nDisables == 0 )
    g_bDoRangeChecks = 1;
}


