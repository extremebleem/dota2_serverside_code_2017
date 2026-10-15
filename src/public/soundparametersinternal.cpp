
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SoundLevelToString  (line 48, @0x000000000241c060, libserver.so)  // inlines: CUtlString, GetNameByToken, ~CUtlString
// calls: CUtlString::Format, CUtlString::Set, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CSoundParametersInternal::SoundLevelToString
// globals: g_pSoundLevels
CUtlString __fastcall SoundLevelToString(CUtlString *a1, soundlevel_t level)
{
  const char *name; // r8
  tokenset_t<soundlevel_t> *v4; // rcx
  CUtlString s; // [rsp+0h] [rbp-20h] BYREF

  name = g_pSoundLevels[0].name;
  if ( g_pSoundLevels[0].name == 0 )
  {
LABEL_6:
    s.m_pString = 0;
    CUtlString::Format(&s, "%i", level);
    a1->m_pString = s.m_pString;
    return a1;
  }
  if ( level != g_pSoundLevels[0].token )
  {
    v4 = g_pSoundLevels;
    do
    {
      ++v4;
      name = v4->name;
      if ( v4->name == 0 )
        goto LABEL_6;
    }
    while ( level != v4->token );
  }
  a1->m_pString = 0;
  CUtlString::Set(a1, name);
  return a1;
}


// ChannelToString  (line 61, @0x000000000241c110, libserver.so)  // inlines: CUtlString, GetNameByToken, ~CUtlString
// calls: CUtlString::Format, CUtlString::Set, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CSoundParametersInternal::ChannelToString
// globals: g_pChannelNames
CUtlString __fastcall ChannelToString(CUtlString *a1, int channel)
{
  const char *name; // r8
  tokenset_t<int> *v4; // rcx
  CUtlString s; // [rsp+0h] [rbp-20h] BYREF

  name = g_pChannelNames[0].name;
  if ( g_pChannelNames[0].name == 0 )
  {
LABEL_6:
    s.m_pString = 0;
    CUtlString::Format(&s, "%i", channel);
    a1->m_pString = s.m_pString;
    return a1;
  }
  if ( channel != g_pChannelNames[0].token )
  {
    v4 = g_pChannelNames;
    do
    {
      ++v4;
      name = v4->name;
      if ( v4->name == 0 )
        goto LABEL_6;
    }
    while ( channel != v4->token );
  }
  a1->m_pString = 0;
  CUtlString::Set(a1, name);
  return a1;
}


// VolumeToString  (line 74, @0x000000000241c1c0, libserver.so)  // inlines: CUtlString, GetNameByToken, ~CUtlString
// calls: CUtlString::Format, CUtlString::Set, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CSoundParametersInternal::VolumeToString
// globals: g_pVolumeLevels
CUtlString __fastcall VolumeToString(float a1, float volume, CUtlString *a3)
{
  const char *name; // rsi
  tokenset_t<float> *v5; // rdx
  CUtlString s; // [rsp+0h] [rbp-20h] BYREF

  name = g_pVolumeLevels[0].name;
  if ( g_pVolumeLevels[0].name == 0 )
  {
LABEL_6:
    s.m_pString = 0;
    CUtlString::Format(&s, "%.3f", a1);
    a3->m_pString = s.m_pString;
    return a3;
  }
  if ( a1 != g_pVolumeLevels[0].token )
  {
    v5 = g_pVolumeLevels;
    do
    {
      ++v5;
      name = v5->name;
      if ( v5->name == 0 )
        goto LABEL_6;
    }
    while ( a1 != v5->token );
  }
  a3->m_pString = 0;
  CUtlString::Set(a3, name);
  return a3;
}


// PitchToString  (line 87, @0x000000000241c280, libserver.so)  // inlines: CUtlString, GetNameByToken, ~CUtlString
// calls: CUtlString::Format, CUtlString::Set, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CSoundParametersInternal::PitchToString
// globals: g_pPitchLookup
CUtlString __fastcall PitchToString(float a1, float pitch, CUtlString *a3)
{
  const char *name; // rsi
  tokenset_t<float> *v5; // rdx
  CUtlString s; // [rsp+0h] [rbp-20h] BYREF

  name = g_pPitchLookup[0].name;
  if ( g_pPitchLookup[0].name == 0 )
  {
LABEL_6:
    s.m_pString = 0;
    CUtlString::Format(&s, "%.3f", a1);
    a3->m_pString = s.m_pString;
    return a3;
  }
  if ( a1 != g_pPitchLookup[0].token )
  {
    v5 = g_pPitchLookup;
    do
    {
      ++v5;
      name = v5->name;
      if ( v5->name == 0 )
        goto LABEL_6;
    }
    while ( a1 != v5->token );
  }
  a3->m_pString = 0;
  CUtlString::Set(a3, name);
  return a3;
}


// TextToSoundLevel  (line 102, @0x000000000241c340, libserver.so)  // inlines: GetTokenI, V_strnicmp_fast<int>
// calls: V_stricmp_fast, _V_strnicmp_fast, V_atoi, V_stristr_fast(char const*,char const*), V_atof, DevMsg(char const*,...), Warning
// callers: CSoundParametersInternal::SoundLevelFromString
// strings: "SNDLVL_", "CSoundEmitterSystem:  Unknown sound level %s\n", "SoundLevel string appears to be a Volume level %f\n"
// globals: g_pSoundLevels
soundlevel_t __fastcall TextToSoundLevel(const char *key)
{
  const char *name; // rsi
  tokenset_t<soundlevel_t> *i; // rbx
  soundlevel_t result; // eax
  float v5; // xmm0_4

  if ( key == 0 )
    return soundlevel_t::SNDLVL_NORM;
  name = g_pSoundLevels[0].name;
  for ( i = g_pSoundLevels; i->name != 0; name = i->name )
  {
    if ( V_stricmp_fast(key, name) == 0 )
      break;
    ++i;
  }
  result = i->token;
  if ( result < soundlevel_t::SNDLVL_NONE
    && (_V_strnicmp_fast(key, "SNDLVL_", 7) != 0 || ((result = V_atoi(key + 7)) - 1) > 0xB3) )
  {
    if ( V_stristr_fast(key, "db") != 0 )
    {
      return V_atoi(key);
    }
    else
    {
      v5 = V_atof(key);
      if ( v5 > 1.0 || v5 <= 0.0 )
      {
        if ( v5 < 20.0 )
        {
          DevMsg("CSoundEmitterSystem:  Unknown sound level %s\n", key);
          return soundlevel_t::SNDLVL_NORM;
        }
        else
        {
          return v5;
        }
      }
      else
      {
        Warning("SoundLevel string appears to be a Volume level %f\n", v5);
        return soundlevel_t::SNDLVL_NORM;
      }
    }
  }
  return result;
}


// TextToChannel  (line 156, @0x000000000241c460, libserver.so)  // inlines: GetTokenI, V_strnicmp_fast<int>
// calls: _V_strnicmp_fast, V_stricmp_fast, V_atoi, DevMsg(char const*,...)
// callers: CSoundParametersInternal::ChannelFromString
// strings: "chan_", "CSoundEmitterSystem:  Warning, unknown channel type in sounds.txt (%s)\n"
// globals: g_pChannelNames
int __fastcall TextToChannel(const char *name)
{
  const char *v2; // rsi
  tokenset_t<int> *i; // rbx
  int result; // eax

  if ( name == 0 )
    return 0;
  if ( _V_strnicmp_fast(name, "chan_", 5) != 0 )
    return V_atoi(name);
  v2 = g_pChannelNames[0].name;
  for ( i = g_pChannelNames; i->name != 0; v2 = i->name )
  {
    if ( V_stricmp_fast(name, v2) == 0 )
      break;
    ++i;
  }
  result = i->token;
  if ( result == -2 )
  {
    DevMsg("CSoundEmitterSystem:  Warning, unknown channel type in sounds.txt (%s)\n", name);
    return 0;
  }
  return result;
}


// CSoundParametersInternal::CSoundParametersInternal  (line 183, @0x000000000241c560, libserver.so)
// calls: CSoundParametersInternal::Clear
void __fastcall CSoundParametersInternal::CSoundParametersInternal(CSoundParametersInternal *const this)
{
  CSoundParametersInternal::Clear(this);
}


// CSoundParametersInternal::Clear  (line 188, @0x000000000241c500, libserver.so)  // inlines: operator=
// callers: CSoundParametersInternal::CSoundParametersInternal
void __fastcall CSoundParametersInternal::Clear(CSoundParametersInternal *const this)
{
  this->m_nSoundNames = 0;
  this->volume.start.m_storage.rawWord = 15360;
  this->volume.range.m_storage.rawWord = 0;
  this->soundlevel.start = 75;
  this->m_flSoundDuration = 0.0;
  this->m_pSoundNames = 0;
  this->channel = 0;
  this->pitch.start = 100;
  this->pitch.range = 0;
  *(this + 43) &= 0xFAu;
  this->soundlevel.range = 0;
  this->delay_msec = 0;
  this->m_pOperatorsKV = 0;
  this->m_pGameData = 0;
}


// CSoundParametersInternal::CSoundParametersInternal  (line 214, @0x000000000241c830, libserver.so)
// calls: CSoundParametersInternal::Clear, CSoundParametersInternal::CopyFrom
void __fastcall CSoundParametersInternal::CSoundParametersInternal(
        CSoundParametersInternal *const this,
        const CSoundParametersInternal *const src)
{
  CSoundParametersInternal::Clear(this);
  CSoundParametersInternal::CopyFrom(this, src);
}


// CSoundParametersInternal::~CSoundParametersInternal  (line 220, @0x000000000241c570, libserver.so)
// calls: KeyValues::deleteThis, operator delete []
void __fastcall CSoundParametersInternal::~CSoundParametersInternal(CSoundParametersInternal *const this)
{
  KeyValues *m_pOperatorsKV; // rdi
  SoundFile *m_pSoundNames; // rdi

  m_pOperatorsKV = this->m_pOperatorsKV;
  if ( m_pOperatorsKV != 0 )
  {
    KeyValues::deleteThis(m_pOperatorsKV);
    this->m_pOperatorsKV = 0;
  }
  if ( this->m_pGameData != 0 )
  {
    KeyValues::deleteThis(this->m_pGameData);
    this->m_pGameData = 0;
  }
  m_pSoundNames = this->m_pSoundNames;
  if ( m_pSoundNames != 0 )
    operator delete[](m_pSoundNames);
  this->m_pSoundNames = 0;
  this->m_nSoundNames = 0;
}


// CSoundParametersInternal::SetOperatorsKV  (line 239, @0x000000000241c5d0, libserver.so)
// calls: KeyValues::deleteThis, KeyValues::operator new, KeyValues::KeyValues, KeyValues::CopySubkeys, KeyValues::operator delete, _Unwind_Resume
// callers: CSoundParametersInternal::CopyFrom
// strings: "operator_stacks"
void __fastcall CSoundParametersInternal::SetOperatorsKV(
        CSoundParametersInternal *const this,
        KeyValues *src,
        bool bTakeOwnership)
{
  KeyValues *m_pOperatorsKV; // rdi
  KeyValues *v7; // r13

  m_pOperatorsKV = this->m_pOperatorsKV;
  if ( m_pOperatorsKV != 0 )
    KeyValues::deleteThis(m_pOperatorsKV);
  this->m_pOperatorsKV = 0;
  if ( src != 0 )
  {
    if ( bTakeOwnership )
    {
      this->m_pOperatorsKV = src;
    }
    else
    {
      v7 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v7, "operator_stacks");
      this->m_pOperatorsKV = v7;
      KeyValues::CopySubkeys(src, v7);
    }
  }
}


// CSoundParametersInternal::SetGameData  (line 261, @0x000000000241c660, libserver.so)
// calls: KeyValues::deleteThis, KeyValues::operator new, KeyValues::KeyValues, KeyValues::CopySubkeys, KeyValues::operator delete, _Unwind_Resume
// callers: CSoundParametersInternal::CopyFrom
// strings: "GameData"
void __fastcall CSoundParametersInternal::SetGameData(
        CSoundParametersInternal *const this,
        KeyValues *src,
        bool bTakeOwnership)
{
  KeyValues *m_pGameData; // rdi
  KeyValues *v7; // r13

  m_pGameData = this->m_pGameData;
  if ( m_pGameData != 0 )
    KeyValues::deleteThis(m_pGameData);
  this->m_pGameData = 0;
  if ( src != 0 )
  {
    if ( bTakeOwnership )
    {
      this->m_pGameData = src;
    }
    else
    {
      v7 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v7, "GameData");
      this->m_pGameData = v7;
      KeyValues::CopySubkeys(src, v7);
    }
  }
}


// CSoundParametersInternal::CopyFrom  (line 283, @0x000000000241c6f0, libserver.so)  // inlines: CUtlSymbol, SoundFile, V_memcpy, memcpy
// calls: operator delete [], operator new [], memcpy, CSoundParametersInternal::SetOperatorsKV, CSoundParametersInternal::SetGameData
// callers: CSoundParametersInternal::CSoundParametersInternal
void __fastcall CSoundParametersInternal::CopyFrom(
        CSoundParametersInternal *const this,
        const CSoundParametersInternal *const src)
{
  SoundFile *m_pSoundNames; // rdi
  uint16 m_nSoundNames; // cx
  __int64 v6; // r13
  SoundFile *v7; // rax
  __int64 v8; // rcx
  SoundFile *v9; // rdx
  signed __int64 v10; // rsi

  m_pSoundNames = this->m_pSoundNames;
  if ( m_pSoundNames != 0 )
    operator delete[](m_pSoundNames);
  this->channel = src->channel;
  this->volume = src->volume;
  this->pitch = src->pitch;
  this->soundlevel = src->soundlevel;
  this->delay_msec = src->delay_msec;
  *(this + 43) = *(src + 43) & 1 | *(this + 43) & 0xFE;
  m_nSoundNames = src->m_nSoundNames;
  this->m_nSoundNames = m_nSoundNames;
  if ( m_nSoundNames != 0 )
  {
    v6 = m_nSoundNames;
    v7 = operator new[](8LL * m_nSoundNames);
    v8 = v6 - 2;
    v9 = v7;
    do
    {
      --v8;
      v10 = v9++ - v7;
      *(&v7->symbol.m_Id + v10) = -1;
      v9[-1].nSpecialWaveFlags = 0;
      *(&v9[-1] + 6) = 0x80;
      v9[-1].m_flDuration = 0.0;
    }
    while ( v8 != -2 );
    this->m_pSoundNames = v7;
    memcpy(v7, src->m_pSoundNames, 8LL * this->m_nSoundNames);
  }
  else
  {
    this->m_pSoundNames = 0;
  }
  CSoundParametersInternal::SetOperatorsKV(this, src->m_pOperatorsKV, 0);
  CSoundParametersInternal::SetGameData(this, src->m_pGameData, 0);
  *(this + 43) = *(src + 43) & 4 | *(this + 43) & 0xFB;
  this->m_flSoundDuration = src->m_flSoundDuration;
}


// CSoundParametersInternal::operator==  (line 314, @0x000000000241c860, libserver.so)  // inlines: GetSoundNames, operator const UtlSymId_t
// calls: memcmp
bool __fastcall CSoundParametersInternal::operator==(
        const CSoundParametersInternal *const this,
        const CSoundParametersInternal *const other)
{
  bool v4; // r13
  int m_nSoundNames; // edx
  SoundFile *m_pSoundNames; // rsi
  SoundFile *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  UtlSymId_t m_Id; // dx

  if ( this != other )
  {
    v4 = 0;
    if ( this->channel != other->channel )
      return v4;
    if ( memcmp(&this->volume, &other->volume, 4u) != 0 )
      return v4;
    if ( memcmp(&this->pitch, &other->pitch, 2u) != 0 )
      return v4;
    if ( memcmp(&this->soundlevel, &other->soundlevel, 4u) != 0 )
      return v4;
    if ( this->delay_msec != other->delay_msec )
      return v4;
    if ( ((*(this + 43) ^ *(other + 43)) & 1) != 0 )
      return v4;
    m_nSoundNames = this->m_nSoundNames;
    v4 = (*(this + 43) ^ *(other + 43)) & 1;
    if ( m_nSoundNames != other->m_nSoundNames )
      return v4;
    if ( m_nSoundNames != 0 )
    {
      m_pSoundNames = other->m_pSoundNames;
      v8 = this->m_pSoundNames;
      if ( v8->symbol.m_Id == m_pSoundNames->symbol.m_Id )
      {
        v9 = 0;
        v10 = 8LL * (m_nSoundNames - 1);
        while ( v9 != v10 )
        {
          m_Id = v8[v9 / 8 + 1].symbol.m_Id;
          v9 += 8LL;
          if ( m_Id != m_pSoundNames[v9 / 8].symbol.m_Id )
            return 0;
        }
        return 1;
      }
      return 0;
    }
  }
  return 1;
}


// CSoundParametersInternal::VolumeToString  (line 348, @0x000000000241c970, libserver.so)  // inlines: CUtlString, Convert16bitFloatTo32bits, IsInfinity, IsNaN, operator float, operator==, ~CUtlString
// calls: CUtlString::Format, VolumeToString, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "%.3f, %.3f"
// globals: ZERO_FLOAT16
CUtlString __fastcall CSoundParametersInternal::VolumeToString(
        CUtlString *a1,
        const CSoundParametersInternal *const this,
        __m128i a3,
        float a4,
        __m128i a5)
{
  float16::float16bits v6; // dx
  float16::float16bits v7; // ax
  float v8; // ecx
  float v9; // xmm1_4
  double v10; // xmm0_8
  int v11; // eax
  float v12; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float16::float16bits v16; // ax
  int v17; // edx
  float v18; // xmm0_4
  CUtlString s; // [rsp+0h] [rbp-20h] BYREF

  v6.rawWord = this->volume.range.m_storage;
  if ( v6.rawWord != ZERO_FLOAT16.m_storage.rawWord )
  {
    v7.rawWord = this->volume.start.m_storage;
    s.m_pString = 0;
    if ( (v7.rawWord & 0x7FFF) == 0x7C00 )
    {
      if ( (v7.rawWord & 0x8000u) != 0 )
      {
        v10 = -65504.0;
        v9 = -65504.0;
      }
      else
      {
        v10 = 65504.0;
        v9 = 65504.0;
      }
    }
    else
    {
      if ( (HIBYTE(v7.rawWord) & 0x7C) != 0x7C )
      {
        if ( (v7.rawWord & 0x7C00) == 0 && (v7.rawWord & 0x3FF) != 0 )
        {
          v14 = 1.0;
          if ( (v7.rawWord & 0x8000u) != 0 )
            v14 = -1.0;
          *a3.m128i_i32 = (((v7.rawWord & 0x3FF) * 0.0009765625) * v14) * 0.000061035156;
          v8 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
          goto LABEL_7;
        }
LABEL_6:
        LODWORD(v8) = (((((v7.rawWord >> 10) & 0x1F) + 112) * (((v7.rawWord >> 10) & 0x1F) != 0)) << 23)
                    | (((v7.rawWord & 0x8000u) != 0) << 31)
                    | ((v7.rawWord & 0x3FF) << 13);
LABEL_7:
        v9 = v8;
        v10 = v8;
        goto LABEL_8;
      }
      v10 = 0.0;
      v9 = 0.0;
      if ( (v7.rawWord & 0x3FF) == 0 )
        goto LABEL_6;
    }
LABEL_8:
    if ( (v6.rawWord & 0x7FFF) == 0x7C00 )
    {
      v12 = 65504.0;
      if ( (v6.rawWord & 0x8000u) != 0 )
        v12 = -65504.0;
      goto LABEL_14;
    }
    if ( (HIBYTE(v6.rawWord) & 0x7C) == 0x7C )
    {
      v12 = 0.0;
      if ( (v6.rawWord & 0x3FF) != 0 )
        goto LABEL_14;
    }
    else if ( (v6.rawWord & 0x7C00) == 0 && (v6.rawWord & 0x3FF) != 0 )
    {
      v15 = 1.0;
      if ( (v6.rawWord & 0x8000u) != 0 )
        v15 = -1.0;
      *a5.m128i_i32 = (((v6.rawWord & 0x3FF) * 0.0009765625) * v15) * 0.000061035156;
      *&v11 = COERCE_FLOAT(_mm_cvtsi128_si32(a5));
      goto LABEL_13;
    }
    v11 = (((((v6.rawWord >> 10) & 0x1F) + 112) * (((v6.rawWord >> 10) & 0x1F) != 0)) << 23)
        | (((v6.rawWord & 0x8000u) != 0) << 31)
        | ((v6.rawWord & 0x3FF) << 13);
LABEL_13:
    v12 = *&v11;
LABEL_14:
    CUtlString::Format(&s, "%.3f, %.3f", v10, (v9 + v12));
    a1->m_pString = s.m_pString;
    return a1;
  }
  v16.rawWord = this->volume.start.m_storage;
  if ( (v16.rawWord & 0x7FFF) == 0x7C00 )
  {
    v18 = 65504.0;
    if ( (v16.rawWord & 0x8000u) != 0 )
      v18 = -65504.0;
    goto LABEL_38;
  }
  if ( (HIBYTE(v16.rawWord) & 0x7C) != 0x7C )
  {
    if ( (v16.rawWord & 0x7C00) == 0 && (v16.rawWord & 0x3FF) != 0 )
    {
      a4 = 1.0;
      if ( (v16.rawWord & 0x8000u) != 0 )
        a4 = -1.0;
      *a3.m128i_i32 = (((v16.rawWord & 0x3FF) * 0.0009765625) * a4) * 0.000061035156;
      v17 = _mm_cvtsi128_si32(a3);
      goto LABEL_37;
    }
LABEL_36:
    v17 = (((((v16.rawWord >> 10) & 0x1F) + 112) * (((v16.rawWord >> 10) & 0x1F) != 0)) << 23)
        | (((v16.rawWord & 0x8000u) != 0) << 31)
        | ((v16.rawWord & 0x3FF) << 13);
LABEL_37:
    v18 = *&v17;
    goto LABEL_38;
  }
  v18 = 0.0;
  if ( (v16.rawWord & 0x3FF) == 0 )
    goto LABEL_36;
LABEL_38:
  VolumeToString(v18, a4, a1);
  return a1;
}


// CSoundParametersInternal::ChannelToString  (line 360, @0x000000000241ccc0, libserver.so)
// calls: ChannelToString
CUtlString __fastcall CSoundParametersInternal::ChannelToString(
        CUtlString *a1,
        const CSoundParametersInternal *const this)
{
  ChannelToString(a1, this->channel);
  return a1;
}


// CSoundParametersInternal::SoundLevelToString  (line 365, @0x000000000241cce0, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::Format, SoundLevelToString, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "%i, %i"
CUtlString __fastcall CSoundParametersInternal::SoundLevelToString(
        CUtlString *a1,
        const CSoundParametersInternal *const this)
{
  int range; // ecx
  int start; // edx
  CUtlString s; // [rsp+0h] [rbp-20h] BYREF

  range = this->soundlevel.range;
  if ( range != 0 )
  {
    start = this->soundlevel.start;
    s.m_pString = 0;
    CUtlString::Format(&s, "%i, %i", start, start + range);
    a1->m_pString = s.m_pString;
  }
  else
  {
    SoundLevelToString(a1, this->soundlevel.start);
  }
  return a1;
}


// CSoundParametersInternal::PitchToString  (line 377, @0x000000000241cd60, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::Format, PitchToString, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "%i, %i"
CUtlString __fastcall CSoundParametersInternal::PitchToString(
        CUtlString *a1,
        const CSoundParametersInternal *const this,
        double a3,
        float a4)
{
  int range; // ecx
  int start; // edx
  CUtlString s; // [rsp+0h] [rbp-20h] BYREF

  range = this->pitch.range;
  if ( range != 0 )
  {
    start = this->pitch.start;
    s.m_pString = 0;
    CUtlString::Format(&s, "%i, %i", start, start + range);
    a1->m_pString = s.m_pString;
  }
  else
  {
    PitchToString(this->pitch.start, a4, a1);
  }
  return a1;
}


// CSoundParametersInternal::VolumeFromString  (line 389, @0x000000000241cdf0, libserver.so)  // inlines: ConvertFloatTo16bits, FromInterval, operator=
// calls: V_stricmp_fast, ReadInterval
// strings: "VOL_NORM"
void __fastcall CSoundParametersInternal::VolumeFromString(CSoundParametersInternal *const this, const char *sz)
{
  float range; // rsi^4
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // r8d
  float16::float16bits v10; // dx
  __int16 v11; // di
  __int16 v12; // cx
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // edi
  float16::float16bits v18; // dx
  __int16 v19; // si
  int v20; // r8d
  int v21; // edi
  int v22; // edi
  int v23; // esi
  interval_t Interval; // 0:xmm0_8.8

  if ( V_stricmp_fast(sz, "VOL_NORM") == 0 )
  {
    this->volume.start.m_storage.rawWord = 15360;
    this->volume.range.m_storage.rawWord = 0;
    return;
  }
  Interval = ReadInterval(sz);
  range = Interval.range;
  if ( Interval.start > 65504.0 )
  {
    v6 = 0x477FE000u;
  }
  else
  {
    v5 = 0xC77FE000;
    *v5.m128i_i32 = fmaxf(-65504.0, Interval.start);
    v6 = v5;
  }
  v7 = _mm_cvtsi128_si32(v6);
  v8 = v7 >> 31 << 15;
  v9 = v7 & 0x7FFFFFFF;
  v10.rawWord = v7 >> 31 << 15;
  if ( (v7 & 0x7FFFFFFF) == 0 )
    goto LABEL_12;
  v11 = (_mm_cvtsi128_si32(v6) >> 16) & 0x7F80;
  if ( v11 == 0 )
  {
    if ( (v7 & 0x7FFFFF) == 0 )
    {
      if ( v9 == 2139095040 )
      {
LABEL_9:
        v12 = v8 | 0x3FF;
        LOBYTE(v10.rawWord) = v12;
        HIBYTE(v10.rawWord) = HIBYTE(v12) | 0x78;
        goto LABEL_13;
      }
      goto LABEL_26;
    }
LABEL_12:
    v10.rawWord = v7 >> 31 << 15;
    goto LABEL_13;
  }
  if ( v9 == 2139095040 )
    goto LABEL_9;
  if ( v11 == 32640 && (v7 & 0x7FFFFF) != 0 )
    goto LABEL_12;
LABEL_26:
  v20 = (v7 >> 23);
  v21 = v20 - 127;
  if ( v20 - 127 < -24 )
  {
    v10.rawWord = v7 >> 31 << 15;
    goto LABEL_28;
  }
  if ( v21 < -14 )
  {
LABEL_28:
    HIBYTE(v10.rawWord) &= 0x83u;
    if ( (113 - v20 - 1) <= 9 )
      v10.rawWord = ((1 << (10 - (113 - v20))) + ((v7 & 0x7FFFFF) >> (113 - v20 + 13))) & 0x3FF | v10.rawWord & 0xFC00;
    goto LABEL_13;
  }
  if ( v21 > 15 )
    goto LABEL_9;
  v10.rawWord = ((v7 & 0x7FFFFF) >> 13) | v8 | (((v21 + 15) & 0x1F) << 10);
LABEL_13:
  this->volume.start.m_storage = v10;
  if ( range > 65504.0 )
  {
    v14 = 0x477FE000u;
  }
  else
  {
    v13 = 0xC77FE000;
    *v13.m128i_i32 = fmaxf(-65504.0, range);
    v14 = v13;
  }
  v15 = _mm_cvtsi128_si32(v14);
  v16 = v15 >> 31 << 15;
  v17 = v15 & 0x7FFFFFFF;
  v18.rawWord = v15 >> 31 << 15;
  if ( (v15 & 0x7FFFFFFF) == 0 )
    goto LABEL_21;
  v19 = (_mm_cvtsi128_si32(v14) >> 16) & 0x7F80;
  if ( v19 != 0 )
  {
    if ( v17 == 2139095040 )
      goto LABEL_19;
    if ( v19 != 32640 || (v15 & 0x7FFFFF) == 0 )
    {
LABEL_32:
      v22 = (v15 >> 23);
      v23 = v22 - 127;
      if ( v22 - 127 >= -24 )
      {
        if ( v23 >= -14 )
        {
          if ( v23 <= 15 )
          {
            v18.rawWord = ((v15 & 0x7FFFFF) >> 13) | v16 | (((v23 + 15) & 0x1F) << 10);
            goto LABEL_22;
          }
          goto LABEL_19;
        }
      }
      else
      {
        v18.rawWord = v15 >> 31 << 15;
      }
      HIBYTE(v18.rawWord) &= 0x83u;
      if ( (113 - v22 - 1) <= 9 )
        v18.rawWord = ((1 << (10 - (113 - v22))) + ((v15 & 0x7FFFFF) >> (113 - v22 + 13))) & 0x3FF
                    | v18.rawWord & 0xFC00;
      goto LABEL_22;
    }
LABEL_21:
    v18.rawWord = v15 >> 31 << 15;
    goto LABEL_22;
  }
  if ( (v15 & 0x7FFFFF) != 0 )
    goto LABEL_21;
  if ( v17 != 2139095040 )
    goto LABEL_32;
LABEL_19:
  v18.rawWord = v16 | 0x7BFF;
LABEL_22:
  this->volume.range.m_storage = v18;
}


// CSoundParametersInternal::ChannelFromString  (line 402, @0x000000000241d0e0, libserver.so)
// calls: TextToChannel
void __fastcall CSoundParametersInternal::ChannelFromString(CSoundParametersInternal *const this, const char *sz)
{
  this->channel = TextToChannel(sz);
}


// CSoundParametersInternal::PitchFromString  (line 407, @0x000000000241d100, libserver.so)  // inlines: FromInterval
// calls: V_stricmp_fast, ReadInterval
// strings: "PITCH_NORM", "PITCH_LOW", "PITCH_HIGH"
void __fastcall CSoundParametersInternal::PitchFromString(CSoundParametersInternal *const this, const char *sz)
{
  interval_t Interval; // 0:xmm0_8.8

  if ( V_stricmp_fast(sz, "PITCH_NORM") != 0 )
  {
    if ( V_stricmp_fast(sz, "PITCH_LOW") != 0 )
    {
      if ( V_stricmp_fast(sz, "PITCH_HIGH") != 0 )
      {
        Interval = ReadInterval(sz);
        this->pitch.start = Interval.start;
        this->pitch.range = Interval.range;
      }
      else
      {
        this->pitch.start = 120;
        this->pitch.range = 0;
      }
    }
    else
    {
      this->pitch.start = 95;
      this->pitch.range = 0;
    }
  }
  else
  {
    this->pitch.start = 100;
    this->pitch.range = 0;
  }
}


// CSoundParametersInternal::SoundLevelFromString  (line 430, @0x000000000241d1a0, libserver.so)  // inlines: FromInterval, V_strnicmp_fast<int>
// calls: _V_strnicmp_fast, ReadInterval, TextToSoundLevel
// strings: "SNDLVL_"
void __fastcall CSoundParametersInternal::SoundLevelFromString(CSoundParametersInternal *const this, const char *sz)
{
  interval_t Interval; // 0:xmm0_8.8

  if ( _V_strnicmp_fast(sz, "SNDLVL_", 7) != 0 )
  {
    Interval = ReadInterval(sz);
    this->soundlevel.start = Interval.start;
    this->soundlevel.range = Interval.range;
  }
  else
  {
    this->soundlevel.start = TextToSoundLevel(sz);
    this->soundlevel.range = 0;
  }
}


// CSoundParametersInternal::AddToTail  (line 443, @0x000000000241d210, libserver.so)  // inlines: operator=
void __fastcall CSoundParametersInternal::AddToTail(
        CSoundParametersInternal *const this,
        SoundFile **pDest,
        uint16 *pDestCount,
        const SoundFile *const source)
{
  uint16 v7; // dx
  SoundFile *v8; // rax
  __int64 v9; // rax
  char v10; // dl
  char v11; // dl

  v7 = *pDestCount + 1;
  *pDestCount = v7;
  v8 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, *pDest, 8LL * v7);
  *pDest = v8;
  v9 = &v8[*pDestCount - 1];
  *v9 = source->m_flDuration;
  *(v9 + 4) = source->symbol.m_Id;
  v10 = *(source + 6) & 0x3F | *(v9 + 6) & 0xC0;
  *(v9 + 6) = v10;
  v11 = *(source + 6) & 0x40 | v10 & 0xBF;
  *(v9 + 6) = v11;
  *(v9 + 6) = *(source + 6) & 0x80 | v11 & 0x7F;
  *(v9 + 7) = source->nSpecialWaveFlags;
}


