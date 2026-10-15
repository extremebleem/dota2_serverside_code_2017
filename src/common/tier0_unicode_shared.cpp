
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// V_IsValidUChar32  (line 15, @0x0000000002f823a0, libserver.so)
bool __fastcall V_IsValidUChar32(uchar32 uVal)
{
  bool result; // al

  if ( uVal > 0x10FFFF || (uVal - 55296) <= 0x7FF )
    return 0;
  result = 0;
  if ( uVal <= 0xFFFDu )
    return (uVal - 64976) > 0x1F;
  return result;
}


// V_UChar32ToUTF8Len  (line 25, @0x0000000002f823e0, libserver.so)
int __fastcall V_UChar32ToUTF8Len(uchar32 uVal)
{
  int result; // eax

  result = 1;
  if ( uVal > 127 )
  {
    LOBYTE(result) = 2;
    if ( uVal > 2047 )
      return (uVal > 0xFFFF) + 3;
  }
  return result;
}


// V_UChar32ToUTF16Len  (line 41, @0x0000000002f82410, libserver.so)
int __fastcall V_UChar32ToUTF16Len(uchar32 uVal)
{
  return (uVal > 0xFFFF) + 1;
}


// V_UChar32ToUTF8  (line 53, @0x0000000002f82430, libserver.so)
// callers: CChatLanguageAnalyzer::IdentifyPhrasesInSnippet
int __fastcall V_UChar32ToUTF8(uchar32 uVal, char *pUTF8Out)
{
  if ( uVal <= 127 )
  {
    *pUTF8Out = uVal;
    return 1;
  }
  else if ( uVal > 2047 )
  {
    if ( uVal > 0xFFFF )
    {
      *pUTF8Out = (uVal >> 18) & 7 | 0xF0;
      pUTF8Out[1] = (uVal >> 12) & 0x3F | 0x80;
      pUTF8Out[3] = uVal & 0x3F | 0x80;
      pUTF8Out[2] = (uVal >> 6) & 0x3F | 0x80;
      return 4;
    }
    else
    {
      *pUTF8Out = (uVal >> 12) | 0xE0;
      pUTF8Out[2] = uVal & 0x3F | 0x80;
      pUTF8Out[1] = (uVal >> 6) & 0x3F | 0x80;
      return 3;
    }
  }
  else
  {
    *pUTF8Out = (uVal >> 6) | 0xC0;
    pUTF8Out[1] = uVal & 0x3F | 0x80;
    return 2;
  }
}


// V_UChar32ToUTF16  (line 84, @0x0000000002f824e0, libserver.so)
int __fastcall V_UChar32ToUTF16(uchar32 uVal, uchar16 *pUTF16Out)
{
  if ( uVal <= 0xFFFF )
  {
    *pUTF16Out = uVal;
    return 1;
  }
  else
  {
    pUTF16Out[1] = uVal & 0x3FF | 0xDC00;
    *pUTF16Out = ((uVal - 0x10000) >> 10) | 0xD800;
    return 2;
  }
}


// V_UTF8ToUChar32  (line 101, @0x0000000002f82530, libserver.so)  // inlines: V_IsValidUChar32
int __fastcall V_UTF8ToUChar32(const char *pUTF8_, uchar32 *const uValueOut, bool *const bErrorOut)
{
  unsigned int v3; // ecx
  int result; // eax
  int v5; // r8d
  int v6; // edi
  unsigned int v7; // r8d
  int v8; // r9d
  unsigned __int8 v9; // r10

  v3 = *pUTF8_;
  if ( v3 <= 0x7F )
  {
    result = 1;
    goto decodeFinishedNoCheck;
  }
  if ( v3 - 192 > 0x37 )
  {
    result = 1;
    goto decodeError;
  }
  result = 1;
  if ( (pUTF8_[1] & 0xC0) != 0x80 )
  {
decodeError:
    *uValueOut = 63;
    *bErrorOut = 1;
    return result;
  }
  v3 = (v3 << 6) + *(pUTF8_ + 1) - 12416;
  if ( (v3 & 0x800) == 0 )
  {
    v7 = 128;
    result = 2;
    goto decodeFinished;
  }
  LOBYTE(result) = 2;
  if ( (pUTF8_[2] & 0xC0) != 0x80 )
    goto decodeError;
  v5 = (v3 << 6) + *(pUTF8_ + 2);
  v3 = v5 - 131200;
  if ( ((v5 - 131200) & 0x10000) != 0 )
  {
    v6 = *(pUTF8_ + 3);
    LOBYTE(result) = 3;
    if ( (v6 & 0xC0) != 0x80 )
      goto decodeError;
    v7 = 0x10000;
    LOBYTE(result) = 4;
    v3 = (v3 << 6) + v6 - 4194432;
    goto decodeFinished;
  }
  v8 = v5 - 186496;
  if ( (v5 - 186496) <= 0x3FF )
  {
    v7 = 2048;
    result = 3;
    if ( pUTF8_[3] != -19 || (v9 = pUTF8_[4] + 80) > 0xFu )
    {
decodeFinished:
      if ( v3 < v7 )
        goto decodeError;
      goto LABEL_15;
    }
    if ( (pUTF8_[5] & 0xC0) == 0x80 )
    {
      result = 6;
      v3 = (v8 << 10) + *(pUTF8_ + 5) + (v9 << 6) + 65408;
LABEL_15:
      if ( v3 > 0x10FFFF || v3 - 55296 <= 0x7FF || v3 > 0xFFFDu || v3 - 64976 <= 0x1F )
        goto decodeError;
decodeFinishedNoCheck:
      *uValueOut = v3;
      *bErrorOut = 0;
      return result;
    }
  }
  v7 = 2048;
  result = 3;
  goto decodeFinished;
}


// V_UTF16ToUChar32  (line 173, @0x0000000002f826c0, libserver.so)  // inlines: V_IsValidUChar32
int __fastcall V_UTF16ToUChar32(const uchar16 *pUTF16, uchar32 *const uValueOut, bool *const bErrorOut)
{
  uchar32 v3; // r8d
  unsigned int v4; // eax
  int v6; // ecx
  uchar32 v7; // eax

  v3 = *pUTF16;
  v4 = v3 - 55296;
  if ( (v3 - 55296) > 0x7FF )
  {
    if ( *pUTF16 <= 0xFFFDu && (v3 - 64976) > 0x1F )
    {
      *uValueOut = v3;
      *bErrorOut = 0;
      return 1;
    }
  }
  else if ( v4 <= 0x3FF )
  {
    v6 = pUTF16[1];
    if ( (v6 - 56320) <= 0x3FF )
    {
      v7 = v6 + (v4 << 10) + 9216;
      if ( v7 > 0xFFFDu )
      {
        *uValueOut = 63;
        *bErrorOut = 1;
        return 2;
      }
      else
      {
        *uValueOut = v7;
        *bErrorOut = 0;
        return 2;
      }
    }
  }
  *uValueOut = 63;
  *bErrorOut = 1;
  return 1;
}


