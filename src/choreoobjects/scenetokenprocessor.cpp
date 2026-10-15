
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_scenetokenprocessor.cpp  (line 0, @0x0000000001a67830, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_scenetokenprocessor_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CSceneTokenProcessor::CSceneTokenProcessor  (line 17, @0x000000000308e7e0, libserver.so)
// calls: CharacterSetBuild
// strings: "{}()':"
void __fastcall CSceneTokenProcessor::CSceneTokenProcessor(CSceneTokenProcessor *const this)
{
  characterset_t *p_m_BreakSetIncludingColons; // rdi

  p_m_BreakSetIncludingColons = &this->m_BreakSetIncludingColons;
  *&p_m_BreakSetIncludingColons[-5].set[240] = &off_47C2B10;
  *&p_m_BreakSetIncludingColons[-5].set[248] = 0;
  CharacterSetBuild(p_m_BreakSetIncludingColons, "{}()':");
}


// CSceneTokenProcessor::CSceneTokenProcessor  (line 22, @0x000000000308e820, libserver.so)  // inlines: SetBuffer
// calls: CharacterSetBuild
// callers: CSceneEntity::ScriptLoadSceneFromString
// strings: "{}()':"
void __fastcall CSceneTokenProcessor::CSceneTokenProcessor(CSceneTokenProcessor *const this, const char *buffer)
{
  characterset_t *p_m_BreakSetIncludingColons; // rdi

  this->_vptr_ISceneTokenProcessor = &off_47C2B10;
  p_m_BreakSetIncludingColons = &this->m_BreakSetIncludingColons;
  *&p_m_BreakSetIncludingColons[-5].set[248] = 0;
  CharacterSetBuild(p_m_BreakSetIncludingColons, "{}()':");
  this->m_pBuffer = buffer;
}


// CSceneTokenProcessor::CSceneTokenProcessor  (line 28, @0x000000000308e860, libserver.so)  // inlines: SetBuffer
// calls: CharacterSetBuild
// callers: CChoreoScene::RestoreFromTextBuffer
// strings: "{}()':"
void __fastcall CSceneTokenProcessor::CSceneTokenProcessor(
        CSceneTokenProcessor *const this,
        const CUtlBuffer *const buffer)
{
  characterset_t *p_m_BreakSetIncludingColons; // rdi

  this->_vptr_ISceneTokenProcessor = &off_47C2B10;
  p_m_BreakSetIncludingColons = &this->m_BreakSetIncludingColons;
  *&p_m_BreakSetIncludingColons[-5].set[248] = 0;
  CharacterSetBuild(p_m_BreakSetIncludingColons, "{}()':");
  this->m_pBuffer = buffer->m_Memory.m_pMemory;
}


// CSceneTokenProcessor::SetBuffer  (line 34, @0x000000000308e8b0, libserver.so)
void __fastcall CSceneTokenProcessor::SetBuffer(CSceneTokenProcessor *const this, const CUtlBuffer *const buffer)
{
  this->m_pBuffer = buffer->m_Memory.m_pMemory;
}


// CSceneTokenProcessor::SetBuffer  (line 39, @0x000000000308e8c0, libserver.so)
void __fastcall CSceneTokenProcessor::SetBuffer(CSceneTokenProcessor *const this, const char *buffer)
{
  this->m_pBuffer = buffer;
}


// CSceneTokenProcessor::CurrentToken  (line 44, @0x000000000308e690, libserver.so)
const char *__fastcall CSceneTokenProcessor::CurrentToken(const CSceneTokenProcessor *const this)
{
  return this->m_szToken;
}


// CSceneTokenProcessor::GetToken  (line 49, @0x000000000308e9f0, libserver.so)
// calls: CSceneTokenProcessor::ParseNextToken
bool __fastcall CSceneTokenProcessor::GetToken(CSceneTokenProcessor *const this, bool crossline)
{
  const char *Token; // rax
  bool v4; // zf

  Token = CSceneTokenProcessor::ParseNextToken(this, this->m_pBuffer);
  v4 = this->m_szToken[0] == 0;
  this->m_pBuffer = Token;
  return !v4;
}


// CSceneTokenProcessor::TokenAvailable  (line 58, @0x000000000308e6a0, libserver.so)
bool __fastcall CSceneTokenProcessor::TokenAvailable(const CSceneTokenProcessor *const this)
{
  const char *m_pBuffer; // rcx
  char v2; // dl
  bool result; // al

  m_pBuffer = this->m_pBuffer;
  v2 = *m_pBuffer;
  while ( v2 <= 32 )
  {
    if ( v2 != 10 )
    {
      v2 = *++m_pBuffer;
      if ( *m_pBuffer != 0 )
        continue;
    }
    return 0;
  }
  result = v2 == 35 || v2 == 59;
  if ( result )
    return 0;
  if ( v2 != 47 || m_pBuffer[1] != 47 )
    return 1;
  return result;
}


// CSceneTokenProcessor::Error  (line 79, @0x000000000308e700, libserver.so)
// calls: V_vsnprintf, Warning, __stack_chk_fail
void CSceneTokenProcessor::Error(CSceneTokenProcessor *const this, const char *fmt, ...)
{
  va_list argptr; // [rsp+8h] [rbp-8E8h] BYREF
  char string[2056]; // [rsp+20h] [rbp-8D0h] BYREF
  unsigned __int64 v4; // [rsp+828h] [rbp-C8h]

  va_start(argptr, fmt);
  v4 = __readfsqword(0x28u);
  V_vsnprintf(string, 2048, fmt, argptr);
  Warning("%s", string);
}


// CSceneTokenProcessor::ParseNextToken  (line 91, @0x000000000308e8d0, libserver.so)
// callers: CSceneTokenProcessor::GetToken
const char *__fastcall CSceneTokenProcessor::ParseNextToken(CSceneTokenProcessor *const this, const char *data)
{
  unsigned __int8 v2; // al
  char v3; // dl
  char v5; // al
  const char *v6; // rdx
  char *v7; // rcx
  int v8; // esi
  char v9; // r9
  int v10; // r8d
  char *m_szToken; // rax
  bool v12; // zf

  this->m_szToken[0] = 0;
  if ( data == 0 )
    return 0;
  v2 = *data;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = v2;
      if ( v2 > 0x20u )
        break;
      if ( v2 == 0 )
        return 0;
      v2 = *++data;
    }
    if ( v2 != 47 )
      break;
    if ( data[1] != 47 )
    {
      v9 = 47;
      v10 = data;
      m_szToken = this->m_szToken;
      if ( this->m_BreakSetIncludingColons.set[47] != 0 )
        goto LABEL_25;
      do
      {
LABEL_22:
        ++data;
        *m_szToken = v3;
        v3 = *data;
        if ( this->m_BreakSetIncludingColons.set[*data] != 0 )
          break;
        ++m_szToken;
      }
      while ( v3 > 0x20u );
      this->m_szToken[data - v10] = 0;
      return data;
    }
    while ( 1 )
    {
      ++data;
      if ( v2 == 10 || v2 == 0 )
        break;
      v2 = data[1];
    }
  }
  if ( v2 != 34 )
  {
    v9 = v2;
    v10 = data;
    v12 = this->m_BreakSetIncludingColons.set[v2] == 0;
    m_szToken = this->m_szToken;
    if ( !v12 )
    {
LABEL_25:
      this->m_szToken[0] = v9;
      this->m_szToken[1] = 0;
      return data + 1;
    }
    goto LABEL_22;
  }
  v5 = data[1];
  v6 = data + 2;
  if ( v5 == 0 || v5 == 34 )
  {
    v8 = 0;
  }
  else
  {
    v7 = this->m_szToken;
    v8 = 0;
    do
    {
      *v7 = v5;
      ++v6;
      ++v8;
      v5 = *(v6 - 1);
      ++v7;
    }
    while ( v5 != 0 && v5 != 34 );
  }
  this->m_szToken[v8] = 0;
  return v6;
}


