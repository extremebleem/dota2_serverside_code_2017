
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// float16::ConvertFloatTo16bits  (line 534, @0x000000000204e620, libserver.so)
// callers: CSpeechScriptBridge::MakeOldResponse, CResponseFileParser::ParseOneCriterion
unsigned __int16 __fastcall float16::ConvertFloatTo16bits(float a1, float input)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int v6; // edi
  int v7; // eax
  __int16 v8; // si
  int v9; // edi
  int v10; // esi

  if ( a1 > 65504.0 )
  {
    v3 = 0x477FE000u;
  }
  else
  {
    v2 = 0xC77FE000;
    *v2.m128i_i32 = fmaxf(-65504.0, a1);
    v3 = v2;
  }
  v4 = _mm_cvtsi128_si32(v3);
  v5 = v4 >> 31 << 15;
  v6 = v4 & 0x7FFFFFFF;
  LOWORD(v7) = v4 >> 31 << 15;
  if ( (v4 & 0x7FFFFFFF) == 0 )
    goto LABEL_13;
  v8 = (_mm_cvtsi128_si32(v3) >> 16) & 0x7F80;
  if ( v8 != 0 )
  {
    if ( v6 != 2139095040 )
    {
      if ( v8 == 32640 && (v4 & 0x7FFFFF) != 0 )
        goto LABEL_13;
      goto LABEL_7;
    }
LABEL_17:
    LOWORD(v7) = v5 | 0x7BFF;
    return v7;
  }
  if ( (v4 & 0x7FFFFF) != 0 )
  {
LABEL_13:
    LOWORD(v7) = v4 >> 31 << 15;
    return v7;
  }
  if ( v6 == 2139095040 )
    goto LABEL_17;
LABEL_7:
  v9 = (v4 >> 23);
  v10 = v9 - 127;
  if ( v9 - 127 < -24 )
  {
    LOWORD(v7) = v4 >> 31 << 15;
    goto LABEL_9;
  }
  if ( v10 >= -14 )
  {
    if ( v10 <= 15 )
      return ((v4 & 0x7FFFFF) >> 13) | v5 | (((v10 + 15) & 0x1F) << 10);
    goto LABEL_17;
  }
LABEL_9:
  BYTE1(v7) &= 0x83u;
  if ( (113 - v9 - 1) <= 9 )
    LOWORD(v7) = ((1 << (10 - (113 - v9))) + ((v4 & 0x7FFFFF) >> (113 - v9 + 13))) & 0x3FF | v7 & 0xFC00;
  return v7;
}


