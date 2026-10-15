
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_parseentityioaction.cpp  (line 0, @0x0000000001a68f00, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_parseentityioaction_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CEntityIOActionParsedData::CEntityIOActionParsedData  (line 7, @0x00000000030d3ee0, libserver.so)
// callers: ParseConnections
void __fastcall CEntityIOActionParsedData::CEntityIOActionParsedData(CEntityIOActionParsedData *const this)
{
  this->m_pTargetName = 0;
  this->m_pTargetInput = 0;
  this->m_pTargetParam = 0;
  this->m_flDelay = 0.0;
  this->m_nTimesToFire = -1;
  this->m_pTargetNameStorage[0] = 0;
  this->m_pTargetInputStorage[0] = 0;
  this->m_pTargetParamStorage[0] = 0;
}


// CEntityIOActionParsedData::CEntityIOActionParsedData  (line 20, @0x00000000030d3f20, libserver.so)  // inlines: V_memcpy, memcpy
// calls: memcpy
void __fastcall CEntityIOActionParsedData::CEntityIOActionParsedData(
        CEntityIOActionParsedData *const this,
        const CEntityIOActionParsedData *const other)
{
  _QWORD *v3; // rcx

  v3 = memcpy(this, other, sizeof(CEntityIOActionParsedData));
  if ( other->m_pTargetInput == other->m_pTargetInputStorage )
    v3[1] = v3 + 292;
  if ( other->m_pTargetName == other->m_pTargetNameStorage )
    *v3 = v3 + 4;
  if ( other->m_pTargetParam == other->m_pTargetParamStorage )
    v3[2] = v3 + 69;
}


// ParseEntityIOAction  (line 48, @0x00000000030d3fa0, libserver.so)  // inlines: V_strcpy_safe<260ul>, atof, atoi, strchr
// calls: strchr, nexttoken, strtol, _V_strncpy, strtod, __stack_chk_fail
// callers: ParseConnections
bool __fastcall ParseEntityIOAction(CEntityIOActionParsedData *pParsedDataOut, const char *pActionData)
{
  char *m_pTargetNameStorage; // r14
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v11; // eax
  __m128d v12; // xmm0
  const char *psz; // [rsp+8h] [rbp-138h]
  const char *psza; // [rsp+8h] [rbp-138h]
  char szToken[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v16; // [rsp+118h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  if ( pActionData == 0 )
    return 0;
  m_pTargetNameStorage = pParsedDataOut->m_pTargetNameStorage;
  v5 = strchr(pActionData, 27) == 0 ? 44 : 27;
  v6 = nexttoken(m_pTargetNameStorage, pActionData, v5);
  if ( *m_pTargetNameStorage != 0 )
    pParsedDataOut->m_pTargetName = m_pTargetNameStorage;
  v7 = nexttoken(pParsedDataOut->m_pTargetInputStorage, v6, v5);
  if ( pParsedDataOut->m_pTargetInputStorage[0] == 0 )
  {
    psz = v7;
    _V_strncpy(pParsedDataOut->m_pTargetInputStorage, "Use", 260);
    v7 = psz;
  }
  pParsedDataOut->m_pTargetInput = pParsedDataOut->m_pTargetInputStorage;
  v8 = nexttoken(pParsedDataOut->m_pTargetParamStorage, v7, v5);
  if ( pParsedDataOut->m_pTargetParamStorage[0] != 0 )
    pParsedDataOut->m_pTargetParam = pParsedDataOut->m_pTargetParamStorage;
  v9 = nexttoken(szToken, v8, v5);
  if ( szToken[0] != 0 )
  {
    psza = v9;
    v12.m128d_f64[0] = strtod(szToken, 0);
    v9 = psza;
    pParsedDataOut->m_flDelay = _mm_movedup_pd(v12).m128d_f64[0];
  }
  nexttoken(szToken, v9, v5);
  if ( szToken[0] != 0 )
  {
    v11 = strtol(szToken, 0, 10);
    pParsedDataOut->m_nTimesToFire = v11;
    if ( v11 == 0 )
      pParsedDataOut->m_nTimesToFire = -1;
  }
  return 1;
}


// CEntityIOActionParsedData::SetInput  (line 113, @0x00000000030d4160, libserver.so)  // inlines: V_strcpy_safe<260ul>
// calls: _V_strncpy
void __fastcall CEntityIOActionParsedData::SetInput(CEntityIOActionParsedData *const this, const char *szNewInput)
{
  char *m_pTargetInputStorage; // r12

  m_pTargetInputStorage = this->m_pTargetInputStorage;
  _V_strncpy(this->m_pTargetInputStorage, szNewInput, 260);
  this->m_pTargetInput = m_pTargetInputStorage;
}


// CEntityIOActionParsedData::SetTarget  (line 119, @0x00000000030d4190, libserver.so)  // inlines: V_strcpy_safe<260ul>
// calls: _V_strncpy
void __fastcall CEntityIOActionParsedData::SetTarget(CEntityIOActionParsedData *const this, const char *szNewTarget)
{
  char *m_pTargetNameStorage; // r12

  m_pTargetNameStorage = this->m_pTargetNameStorage;
  _V_strncpy(this->m_pTargetNameStorage, szNewTarget, 260);
  this->m_pTargetName = m_pTargetNameStorage;
}


// CEntityIOActionParsedData::SetParameters  (line 125, @0x00000000030d41c0, libserver.so)  // inlines: V_strcpy_safe<260ul>
// calls: _V_strncpy
void __fastcall CEntityIOActionParsedData::SetParameters(
        CEntityIOActionParsedData *const this,
        const char *szNewParameters)
{
  char *m_pTargetParamStorage; // r12

  m_pTargetParamStorage = this->m_pTargetParamStorage;
  _V_strncpy(this->m_pTargetParamStorage, szNewParameters, 260);
  this->m_pTargetParam = m_pTargetParamStorage;
}


// CEntityIOActionParsedData::EncodeToString  (line 131, @0x00000000030d41f0, libserver.so)
// calls: V_snprintf
// strings: "%s%c%s%c%s%c%g%c%d"
void __fastcall CEntityIOActionParsedData::EncodeToString(
        CEntityIOActionParsedData *const this,
        char *pOut,
        size_t nOutputSize)
{
  int v3; // [rsp+0h] [rbp-30h]
  int v4; // [rsp+10h] [rbp-20h]
  int v5; // [rsp+18h] [rbp-18h]

  v5 = 27;
  v4 = 27;
  v3 = 27;
  V_snprintf(
    pOut,
    nOutputSize,
    "%s%c%s%c%s%c%g%c%d",
    this->m_pTargetName,
    27,
    this->m_pTargetInput,
    v3,
    this->m_pTargetParam,
    v4,
    this->m_flDelay,
    v5,
    this->m_nTimesToFire);
}


