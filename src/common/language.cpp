// Reconstructed from DWARF by pahole; not original source.

// src/common/language.cpp:15
struct Language_t {
	const char * m_pchName;  // +0x0
	const char * m_pchShortName;  // +0x8
	const char * m_pchVGUILocalizationName;  // +0x10
	const char * m_pchICUName;  // +0x18
	const char * m_pchISO639_1Name;  // +0x20
	int m_LanguageCodeID;  // +0x2c

	// sizeof = 48
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_language.cpp  (line 0, @0x00000000019a5d40, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_language_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// PchLanguageToELanguage  (line 63, @0x0000000001e985b0, libserver.so)
// calls: V_stricmp_fast
ELanguage __fastcall PchLanguageToELanguage(const char *pchShortName, ELanguage eDefault)
{
  const char **p_m_pchShortName; // rbx
  int i; // r12d

  if ( pchShortName == 0 )
    return ELanguage::k_Lang_First;
  p_m_pchShortName = &s_LanguageNames[0].m_pchShortName;
  for ( i = 0; i != 27; ++i )
  {
    if ( V_stricmp_fast(pchShortName, *p_m_pchShortName) == 0 )
      return s_LanguageNames[i].m_ELanguage;
    p_m_pchShortName += 6;
  }
  return eDefault;
}


// PchLanguageICUCodeToELanguage  (line 84, @0x0000000001e98630, libserver.so)  // inlines: V_strlen, V_strncpy<long unsigned int>, V_strnicmp_fast<int>
// calls: strlen, _V_strncpy, _V_strnicmp_fast, __stack_chk_fail
ELanguage __fastcall PchLanguageICUCodeToELanguage(const char *pchICUCode, ELanguage eDefault)
{
  int v4; // r14d
  __int64 v5; // rcx
  __int64 v6; // r8
  const char **p_m_pchICUName; // rbx
  __int64 v8; // r12
  char rchCleanedCode[8]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( pchICUCode == 0 )
    return eDefault;
  v4 = strlen(pchICUCode);
  _V_strncpy(rchCleanedCode, pchICUCode, 6, v5, v6);
  if ( v4 > 2 && rchCleanedCode[2] == 45 )
    rchCleanedCode[2] = 95;
  p_m_pchICUName = &s_LanguageNames[0].m_pchICUName;
  v8 = 0;
  while ( _V_strnicmp_fast(rchCleanedCode, *p_m_pchICUName, v4) != 0 )
  {
    v8 = (v8 + 1);
    p_m_pchICUName += 6;
    if ( v8 == 27 )
      return eDefault;
  }
  return s_LanguageNames[v8].m_ELanguage;
}


// PchISO639_1ToELanguage  (line 118, @0x0000000001e98710, libserver.so)
// calls: V_stricmp_fast
// callers: CChatLanguageAnalyzer::BInit
ELanguage __fastcall PchISO639_1ToELanguage(const char *pchISO639_1, ELanguage eDefault)
{
  int v4; // r12d
  const char **p_m_pchISO639_1Name; // rbx

  v4 = 0;
  p_m_pchISO639_1Name = &s_LanguageNames[0].m_pchISO639_1Name;
  if ( pchISO639_1 == 0 )
    return eDefault;
  while ( V_stricmp_fast(pchISO639_1, *p_m_pchISO639_1Name) != 0 )
  {
    ++v4;
    p_m_pchISO639_1Name += 6;
    if ( v4 == 27 )
      return eDefault;
  }
  return s_LanguageNames[v4].m_ELanguage;
}


// GetLanguageShortName  (line 140, @0x0000000001e987a0, libserver.so)
// globals: s_LanguageNames
const char *__fastcall GetLanguageShortName(ELanguage eLang)
{
  const char *result; // rax
  __int64 v2; // rdx

  result = "none";
  v2 = eLang + 1;
  if ( s_LanguageNames[v2].m_ELanguage == eLang )
    return s_LanguageNames[v2].m_pchShortName;
  return result;
}


// GetLanguageICUName  (line 160, @0x0000000001e987e0, libserver.so)
const char *__fastcall GetLanguageICUName(ELanguage eLang)
{
  const char *result; // rax
  __int64 v2; // rdx

  result = "none";
  v2 = eLang + 1;
  if ( s_LanguageNames[v2].m_ELanguage == eLang )
    return s_LanguageNames[v2].m_pchICUName;
  return result;
}


// GetLanguageName  (line 176, @0x0000000001e98820, libserver.so)
// globals: s_LanguageNames
const char *__fastcall GetLanguageName(ELanguage eLang)
{
  const char *result; // rax

  result = "none";
  if ( s_LanguageNames[eLang + 1].m_ELanguage == eLang )
    return s_LanguageNames[eLang + 1].m_pchName;
  return result;
}


// GetLanguageVGUILocalization  (line 197, @0x0000000001e98860, libserver.so)
const char *__fastcall GetLanguageVGUILocalization(ELanguage eLang)
{
  const char *result; // rax

  result = "None";
  if ( s_LanguageNames[eLang + 1].m_ELanguage == eLang )
    return s_LanguageNames[eLang + 1].m_pchVGUILocalizationName;
  return result;
}


// GetLanguageISO639_1Name  (line 218, @0x0000000001e988a0, libserver.so)
const char *__fastcall GetLanguageISO639_1Name(ELanguage eLang)
{
  const char **p_m_pchISO639_1Name; // rdx
  const char *result; // rax

  p_m_pchISO639_1Name = &s_LanguageNames[eLang + 1].m_pchISO639_1Name;
  result = "none";
  if ( *(p_m_pchISO639_1Name + 2) == eLang )
    return *p_m_pchISO639_1Name;
  return result;
}


// GetLanguageCodeID  (line 239, @0x0000000001e988e0, libserver.so)
int __fastcall GetLanguageCodeID(ELanguage eLang)
{
  const char **p_m_pchISO639_1Name; // rdx
  int result; // eax

  p_m_pchISO639_1Name = &s_LanguageNames[eLang + 1].m_pchISO639_1Name;
  result = 0;
  if ( *(p_m_pchISO639_1Name + 2) == eLang )
    return *(p_m_pchISO639_1Name + 3);
  return result;
}


