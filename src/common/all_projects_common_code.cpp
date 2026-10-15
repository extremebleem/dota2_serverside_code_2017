
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_all_projects_common_code.cpp  (line 0, @0x000000000199b250, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_all_projects_common_code_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// ResolveOrderedSystem_EarlyInit_Common  (line 160, @0x0000000001a6f020, libserver.so)
// calls: EarlyInit_Tier0
void __fastcall ResolveOrderedSystem_EarlyInit_Common(COrderedSystem_DependencyManagement *const owner)
{
  EarlyInit_Tier0(owner);
}


// BinaryProperties_GetValue  (line 296, @0x0000000001a6f030, libserver.so)  // inlines: ThreadInterlockedOr, Touch
// calls: Plat_DebugPrint
// strings: "Release", "Intentionally vague touch behavior for %p\n"
// globals: g_EarlyInit_Common, jpt_1A6F076
int __fastcall BinaryProperties_GetValue(BinaryProperties_Lookups_t propertyLookup, BinaryProperties_Value_t *pOutput)
{
  volatile uint32 m_nRefCount; // eax
  volatile uint32 v5; // edx
  volatile uint32 v6; // ett
  int result; // eax

  m_nRefCount = g_EarlyInit_Common.m_nRefCount;
  do
  {
    v5 = m_nRefCount;
    v6 = m_nRefCount;
    m_nRefCount = _InterlockedCompareExchange(&g_EarlyInit_Common, m_nRefCount | 0x40000000, m_nRefCount);
  }
  while ( v6 != m_nRefCount );
  if ( v5 == -1 )
    Plat_DebugPrint("Intentionally vague touch behavior for %p\n", &g_EarlyInit_Common);
  switch ( propertyLookup )
  {
    case _BinaryProperties_Lookups_t::BPL_BUILDCONFIGURATION:
      pOutput->valueType = _BinaryProperties_ValueType_t::BPV_STRING;
      pOutput->val.nInt64 = "Release";
      result = 1;
      break;
    case _BinaryProperties_Lookups_t::BPL_ISDEBUG:
    case _BinaryProperties_Lookups_t::BPL_DEV_BUILD:
      pOutput->valueType = _BinaryProperties_ValueType_t::BPV_INT64;
      result = 1;
      pOutput->val.nInt64 = 0;
      break;
    case _BinaryProperties_Lookups_t::BPL_ISRELEASE:
    case _BinaryProperties_Lookups_t::BPL_RETAIL_BUILD:
      pOutput->val.nInt64 = 1;
      pOutput->valueType = _BinaryProperties_ValueType_t::BPV_INT64;
      result = 1;
      break;
    case _BinaryProperties_Lookups_t::BPL_BINARY_TYPE:
      pOutput->val.nInt64 = 2;
      pOutput->valueType = _BinaryProperties_ValueType_t::BPV_INT64;
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ResolveExeProbe  (line 421, @0x0000000001a6f010, libserver.so)
int __fastcall ResolveExeProbe(BinaryProperties_Lookups_t propertyLookup, BinaryProperties_Value_t *pOutput)
{
  return 0;
}


// BinaryProperties_GetExeValue  (line 451, @0x0000000001a6f130, libserver.so)
// globals: g_BP_ExeProbe
int __fastcall BinaryProperties_GetExeValue(
        BinaryProperties_Lookups_t propertyLookup,
        BinaryProperties_Value_t *pOutput)
{
  if ( g_BP_ExeProbe != 0 )
    return g_BP_ExeProbe(propertyLookup, pOutput);
  else
    return 0;
}


