
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_interval.cpp  (line 0, @0x0000000001a6aca0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_interval_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// ReadInterval  (line 21, @0x000000000312e050, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy, V_strtok, V_atof, __stack_chk_fail
// callers: CSoundParametersInternal::VolumeFromString, CSoundParametersInternal::PitchFromString, CSoundParametersInternal::SoundLevelFromString, CResponseFileParser::ParseResponse_WeaponDelay, CResponseFileParser::ParseResponseGroup_WeaponDelay, CResponseFileParser::ParseResponse_Delay, CResponseFileParser::ParseResponse_PreDelay, CResponseFileParser::ParseResponseGroup_PreDelay, CResponseFileParser::ParseResponseGroup_RespeakDelay, CResponseFileParser::ParseResponse_RespeakDelay, CResponseFileParser::ParseResponseGroup_Delay
interval_t __fastcall ReadInterval(const char *pString)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __m128i v3; // xmm0
  unsigned int tempString[35]; // [rsp+Ch] [rbp-A4h] BYREF
  unsigned __int64 v6; // [rsp+98h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  _V_strncpy(&tempString[1], pString, 128);
  v1 = V_strtok(&tempString[1], ",");
  if ( v1 != 0 )
  {
    tempString[0] = V_atof(v1);
    v2 = V_strtok(0, ",");
    v3 = 0;
    if ( v2 != 0 )
      *v3.m128i_i32 = V_atof(v2) - *tempString;
  }
  else
  {
    v3 = 0;
    tempString[0] = 0;
  }
  return ((_mm_cvtsi128_si32(v3) << 32) | tempString[0]);
}


// RandomInterval  (line 50, @0x000000000312e120, libserver.so)
// calls: RandomFloat
// callers: CRR_Response::GetRespeakDelay, CRR_Response::GetWeaponDelay, CRR_Response::GetDelay, CRR_Response::GetPreDelay
float __fastcall RandomInterval(const interval_t *const interval)
{
  float range; // xmm1_4
  float out; // [rsp+Ch] [rbp-4h]

  range = interval->range;
  if ( range == 0.0 )
    return interval->start;
  out = interval->start;
  return out + RandomFloat(0.0, range);
}


