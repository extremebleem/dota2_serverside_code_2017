
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_particleslib_utils.cpp  (line 0, @0x0000000001a6e200, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_particleslib_utils_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GetAttachTypeFromString  (line 37, @0x0000000003211290, libserver.so)
// calls: V_stricmp_fast
// callers: Particle_Test_Start, CDOTA_ActionRunner::PerformAction_AttachEffect, CDOTA_ActionRunner::PerformAction_FireEffect, CDOTA_Modifier_DataDriven::ReadKeyValues, CEconItemSchema::GetAttachedParticleSystemInfo
// globals: g_szParticleAttachTypes, GetAttachTypeFromString(char const*)::s_pAlternameAttachmentNames, GetAttachTypeFromString(char const*)::pAttachmentNamesShort
ParticleAttachment_t __fastcall GetAttachTypeFromString(const char *pszString)
{
  __int64 v2; // rbx

  if ( pszString == 0 || *pszString == 0 )
    return ParticleAttachment_t::PATTACH_INVALID;
  v2 = 0;
  while ( V_stricmp_fast(g_szParticleAttachTypes[v2], pszString) != 0
       && V_stricmp_fast(GetAttachTypeFromString(char const*)::s_pAlternameAttachmentNames[v2], pszString) != 0
       && V_stricmp_fast(GetAttachTypeFromString(char const*)::pAttachmentNamesShort[v2], pszString) != 0 )
  {
    if ( ++v2 == 14 )
      return ParticleAttachment_t::PATTACH_INVALID;
  }
  return v2;
}


// GetAttachTypeName  (line 94, @0x0000000003211340, libserver.so)
// globals: g_szParticleAttachTypes
const char *__fastcall GetAttachTypeName(ParticleAttachment_t nAttachType)
{
  const char *result; // rax

  result = "invalid";
  if ( nAttachType <= ParticleAttachment_t::PATTACH_CENTER_FOLLOW )
    return g_szParticleAttachTypes[nAttachType];
  return result;
}


