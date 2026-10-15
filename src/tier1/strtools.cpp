
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_strtools.cpp  (line 0, @0x0000000001a67290, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_strtools_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// _V_strnlen  (line 101, @0x0000000002f81e00, libserver.so)
// calls: strnlen
// callers: CUtlString::Append
int __fastcall _V_strnlen(const char *str, int count)
{
  if ( str != 0 )
    return strnlen(str, count);
  else
    return 0;
}


// _V_strrchr  (line 110, @0x0000000002f81e20, libserver.so)  // inlines: V_strlen
// calls: strlen
// callers: CNavConfig::NavAttributeAutocomplete
char *__fastcall _V_strrchr(const char *s, char c)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  char *result; // rax
  char *v7; // rdx

  if ( s != 0 )
  {
    v4 = strlen(s) + 1;
    v5 = v4;
  }
  else
  {
    v5 = 1;
    v4 = 1;
  }
  result = &s[v5];
  v7 = &result[-v4];
  while ( result != v7 )
  {
    if ( *--result == c )
      return result;
  }
  return 0;
}


// _V_strncmp  (line 119, @0x0000000002f81e80, libserver.so)
// callers: CServerAchievementManager::IsCurrentMap, CPlayerAchievementState::OnMapEvent, CPropData::GetRandomChunkModel, CC_Ent_Orient, CCommentarySystem::ConvarChanged, CCommentarySystem::LoadCommentaryFile, CEventLog::PrintEvent, CEventLog::PrintPlayerEvent, CBreakable::ParsePropData, CMultiplayRules::GetNextLevelName, CPhysMagnet::VPhysicsCollision, CSceneEntity::EndEvent (29 total)
int __fastcall _V_strncmp(const char *s1, const char *s2, int count)
{
  char v3; // cl
  char v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax

  if ( count <= 0 )
    return 0;
  v3 = *s1;
  v4 = *s2;
  if ( *s1 == *s2 )
  {
    if ( v3 != 0 )
    {
      v5 = (count - 1);
      v6 = 0;
      do
      {
        if ( v6 == v5 )
          break;
        v3 = s1[v6 + 1];
        v4 = s2[v6 + 1];
        if ( v3 != v4 )
          return 2 * (v3 >= v4) - 1;
        ++v6;
      }
      while ( v3 != 0 );
    }
    return 0;
  }
  return 2 * (v3 >= v4) - 1;
}


// _V_wcscmp  (line 137, @0x0000000002f81ee0, libserver.so)
// callers: CKeyValues_Data::Internal_IsEqual
int __fastcall _V_wcscmp(const wchar_t *s1, const wchar_t *s2)
{
  wchar_t v2; // eax
  wchar_t v3; // edx

  v2 = *s1;
  v3 = *s2;
  if ( *s1 != *s2 )
    return 2 * (v2 >= v3) - 1;
  while ( v2 != 0 )
  {
    ++s1;
    ++s2;
    v2 = *s1;
    v3 = *s2;
    if ( *s1 != *s2 )
      return 2 * (v2 >= v3) - 1;
  }
  return 0;
}


// V_strnchr  (line 153, @0x0000000002f81f20, libserver.so)
// callers: CDynamicProp::InputSetAnimationTransition, UTIL_GetModDir, CCommentarySystem::ReplaceQuotesInEntityKeyValues, CFlexExpresser::InputSpeakResponseConcept, CUtlBuffer::ConvertCRLF
const char *__fastcall V_strnchr(const char *pStr, char c, int n)
{
  const char *v3; // rdx

  v3 = &pStr[n];
  if ( pStr >= v3 || *pStr == 0 )
    return 0;
  if ( *pStr != c )
  {
    while ( ++pStr != v3 && *pStr != 0 )
    {
      if ( *pStr == c )
        return pStr;
    }
    return 0;
  }
  return pStr;
}


// _V_hextobinary  (line 204, @0x0000000002f81f70, libserver.so)  // inlines: V_nibble, V_strlen, memset
// calls: strlen, memset
void __fastcall _V_hextobinary(const char *in, int numchars, uint8 *out, int maxoutputbytes)
{
  signed __int64 v6; // r12
  int v8; // eax
  uint8 *v9; // rcx
  const char *v10; // rdi
  uint8 *v11; // rdx
  char v12; // r8
  char v13; // al
  char v14; // si
  char v15; // si
  unsigned __int8 v16; // si
  char v17; // al

  v6 = maxoutputbytes;
  if ( in != 0 )
    v8 = strlen(in);
  else
    v8 = 0;
  if ( v8 <= numchars )
    numchars = v8;
  memset(out, 0, v6);
  if ( numchars >= 0 && (numchars & 0xFFFFFFFE) != 0 )
  {
    v9 = out;
    if ( v6 > 0 )
    {
      v10 = in;
      v11 = &out[(((numchars & 0xFFFFFFFE) - 1) >> 1) + 1];
      while ( 1 )
      {
        v15 = *v10;
        if ( (*v10 - 48) > 9u )
        {
          if ( (v15 - 65) > 5u )
          {
            v12 = 0;
            if ( (v15 - 97) <= 5u )
              v12 = 16 * (v15 - 87);
          }
          else
          {
            v12 = 16 * (v15 - 55);
          }
        }
        else
        {
          v12 = 16 * (*v10 - 48);
        }
        v13 = v10[1];
        v14 = v13 - 48;
        if ( (v13 - 48) <= 9u )
          goto LABEL_13;
        if ( (v13 - 65) <= 5u )
          break;
        v16 = v13 - 97;
        v17 = v13 - 87;
        if ( v16 > 5u )
          v17 = 48;
        *out++ = v17 | v12;
        if ( out == v11 )
          return;
LABEL_14:
        v10 += 2;
        if ( out - v9 >= v6 )
          return;
      }
      v14 = v13 - 55;
LABEL_13:
      *out++ = v14 | v12;
      if ( out == v11 )
        return;
      goto LABEL_14;
    }
  }
}


// _V_binarytohex  (line 235, @0x0000000002f820a0, libserver.so)  // inlines: V_strncat<int>
// calls: V_snprintf, _V_strncat, __stack_chk_fail
// callers: GetHexStringFromPaintColor, MD5_Print
// strings: "%02x"
void __fastcall _V_binarytohex(const uint8 *in, int inputbytes, char *out, int outsize)
{
  const uint8 *v6; // rbx
  const uint8 *v7; // r15
  int v8; // ecx
  char doublet[10]; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-38h]

  *out = 0;
  v10 = __readfsqword(0x28u);
  if ( inputbytes > 0 )
  {
    v6 = in;
    v7 = &in[inputbytes - 1 + 1];
    do
    {
      v8 = *v6++;
      V_snprintf(doublet, 10, "%02x", v8);
      _V_strncat(out, doublet, outsize, 0xFFFFFFFFLL);
    }
    while ( v6 != v7 );
  }
}


// StrReplaceChar  (line 255, @0x0000000002f82140, libserver.so)
void __fastcall StrReplaceChar(char *pStr, char nOrigChar, char nNewChar)
{
  char i; // al

  for ( i = *pStr; *pStr != 0; i = *pStr )
  {
    while ( i != nOrigChar )
    {
      i = *++pStr;
      if ( *pStr == 0 )
        return;
    }
    *pStr++ = nNewChar;
  }
}


// V_TranslateLineFeedsToUnix  (line 268, @0x0000000002f82170, libserver.so)
void __fastcall V_TranslateLineFeedsToUnix(char *pStr)
{
  char *v1; // rdx
  char v2; // al
  char v3; // al

  v1 = pStr;
  v2 = *pStr;
  if ( *pStr != 0 )
  {
    while ( 1 )
    {
      if ( v2 == 13 && (v3 = pStr[1]) == 10 )
        ++pStr;
      else
        v3 = *pStr;
      *v1++ = v3;
      v2 = pStr[1];
      if ( v2 == 0 )
        break;
      ++pStr;
    }
  }
  *v1 = 0;
}


// HexToValue  (line 286, @0x0000000002f821c0, libserver.so)
int __fastcall HexToValue(char hex)
{
  if ( (hex - 48) <= 9u )
    return hex - 48;
  if ( (hex - 65) <= 5u )
    return hex - 55;
  if ( (hex - 97) > 5u )
    return -1;
  return hex - 87;
}


// V_StringToBin  (line 304, @0x0000000002f82210, libserver.so)  // inlines: HexToValue, V_strlen
// calls: strlen
bool __fastcall V_StringToBin(const char *pString, void *pBin, uint nBinSize)
{
  int v6; // eax
  __int64 v8; // rax
  int i; // r8d
  char v10; // cl
  int v11; // ecx
  int v12; // r9d
  char v13; // cl

  if ( pString != 0 )
    v6 = strlen(pString);
  else
    v6 = 0;
  if ( 2 * nBinSize != v6 )
    return 0;
  v8 = 0;
  for ( i = 1; nBinSize > v8; ++v8 )
  {
    v11 = pString[(2 * v8)];
    v12 = v11 - 48;
    if ( (pString[(2 * v8)] - 48) > 9u )
    {
      v12 = v11 - 55;
      if ( (v11 - 65) > 5u )
      {
        v12 = -1;
        if ( (v11 - 97) <= 5u )
          v12 = v11 - 87;
      }
    }
    v13 = pString[i];
    if ( (v13 - 48) <= 9u )
    {
      v10 = v13 - 48;
    }
    else if ( (v13 - 65) > 5u )
    {
      if ( (v13 - 97) > 5u )
        return 0;
      v10 = v13 - 87;
    }
    else
    {
      v10 = v13 - 55;
    }
    if ( v12 < 0 )
      return 0;
    i += 2;
    *(pBin + v8) = v10 | (16 * v12);
  }
  return 1;
}


// V_BinToString  (line 326, @0x0000000002f82320, libserver.so)
// strings: "0123456789ABCDEF"
bool __fastcall V_BinToString(char *pString, void *pBin, uint nBinSize)
{
  char *v3; // r10
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v8; // [rsp-8h] [rbp-8h]

  if ( nBinSize != 0 )
  {
    v3 = pBin + nBinSize;
    v4 = 0;
    do
    {
      v5 = *pBin;
      pBin = pBin + 1;
      pString[v4] = s_hex[v5 >> 4];
      v6 = (v4 + 1);
      v4 += 2;
      *(&v8 - 16) = *(pBin - 1);
      pString[v6] = s_hex[*(&v8 - 2) & 0xF];
    }
    while ( pBin != v3 );
    pString[2 * nBinSize] = 0;
    return 1;
  }
  else
  {
    *pString = 0;
    return 1;
  }
}


