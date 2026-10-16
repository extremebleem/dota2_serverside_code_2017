
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_rtime.cpp  (line 0, @0x0000000001a6e720, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_rtime_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CRTime::CRTime  (line 215, @0x000000000323bb50, libserver.so)
// calls: time
// globals: CRTime::sm_nTimeCur
void __fastcall CRTime::CRTime(CRTime *const this)
{
  RTime32 v2; // eax

  v2 = CRTime::sm_nTimeCur;
  if ( CRTime::sm_nTimeCur == 0 )
  {
    v2 = time(0);
    CRTime::sm_nTimeCur = v2;
  }
  this->m_nStartTime = v2;
  this->m_bGMT = 0;
}


// CRTime::CSecsPassed  (line 232, @0x000000000323bb80, libserver.so)
// globals: CRTime::sm_nTimeCur
int __fastcall CRTime::CSecsPassed(const CRTime *const this)
{
  return CRTime::sm_nTimeCur - this->m_nStartTime;
}


// CRTime::UpdateRealTime  (line 244, @0x000000000323bb90, libserver.so)
// calls: time, Plat_gmtime, strftime, GCSDK::EGInternal_EmitInfo
// callers: GetSystemTime, GetSystemDate, CDOTAGCServerSystem::FrameUpdatePostEntityThink
// strings: "%m/%d/%y", "Warning: system time went backward by %d seconds\n"
// globals: CRTime::sm_nTimeCur, CRTime::sm_nTimeLastSystemTimeUpdate, CRTime::sm_rgchLocalTimeCur, CRTime::sm_rgchLocalDateCur
void __cdecl CRTime::UpdateRealTime()
{
  RTime32 v0; // ebx
  RTime32 v1; // eax
  RTime32 v2; // edx
  const struct tm *v3; // rbx
  time_t now; // [rsp+8h] [rbp-58h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-50h] BYREF

  v0 = CRTime::sm_nTimeCur;
  v1 = time(0);
  CRTime::sm_nTimeCur = v1;
  v2 = v1;
  if ( v0 > v1 )
  {
    GCSDK::EGInternal_EmitInfo(
      &GCSDK::SPEW_SYSTEM_MISC,
      1,
      1,
      "Warning: system time went backward by %d seconds\n",
      v0 - v1);
    v2 = CRTime::sm_nTimeCur;
  }
  if ( CRTime::sm_nTimeLastSystemTimeUpdate != v2 )
  {
    time(&now);
    v3 = Plat_gmtime(&now, &tmStruct);
    strftime(CRTime::sm_rgchLocalTimeCur, 0x10u, "%H:%M:%S", v3);
    strftime(CRTime::sm_rgchLocalDateCur, 0x10u, "%m/%d/%y", v3);
    CRTime::sm_nTimeLastSystemTimeUpdate = CRTime::sm_nTimeCur;
  }
}


// CRTime::SetSystemClock  (line 285, @0x000000000323bc50, libserver.so)
void __fastcall CRTime::SetSystemClock(RTime32 rTime32Current)
{
  ;
}


// CRTime::Render  (line 317, @0x000000000323bd50, libserver.so)
// calls: CRTime::Render
const char *__fastcall CRTime::Render(const CRTime *const this, char (*const buf)[25])
{
  return CRTime::Render(this->m_nStartTime, buf);
}


// CRTime::Render  (line 327, @0x000000000323bc60, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: Plat_ctime, _V_strncpy, __stack_chk_fail
// callers: CDOTAGCServerSystem::GetMatchStartTimeString, CDOTAGCServerSystem::MatchSignOut, CRTime::Render
// strings: "Nil time value", "Invalid time value", "Infinite time value"
const char *__fastcall CRTime::Render(const RTime32 rTime32, char (*const buf)[25])
{
  time_t tTime; // [rsp+8h] [rbp-58h] BYREF
  char pchTime[40]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( buf != 0 )
  {
    tTime = rTime32;
    if ( Plat_ctime(&tTime, pchTime, 32) != 0 )
    {
      pchTime[24] = 0;
      if ( rTime32 == 0x7FFFFFFF )
      {
        _V_strncpy(buf, "Infinite time value", 25);
        goto LABEL_6;
      }
      if ( rTime32 != 0 )
      {
        if ( rTime32 > 9 )
        {
LABEL_6:
          _V_strncpy(buf, pchTime, 25);
          return *buf;
        }
      }
      else
      {
        _V_strncpy(buf, "Nil time value", 25);
      }
      _V_strncpy(buf, "Invalid time value", 25);
      goto LABEL_6;
    }
  }
  return 0;
}


// CRTime::GetYear  (line 359, @0x000000000323bd60, libserver.so)
// calls: Plat_localtime, Plat_gmtime
// callers: GCSDK::CGCReportPrinter::FormatValue
int __fastcall CRTime::GetYear(const CRTime *const this)
{
  bool v1; // zf
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  v1 = !this->m_bGMT;
  timeCur = this->m_nStartTime;
  if ( v1 )
    return *(Plat_localtime(&timeCur, &tmStruct) + 20) + 1900;
  else
    return *(Plat_gmtime(&timeCur, &tmStruct) + 20) + 1900;
}


// CRTime::GetMonth  (line 371, @0x000000000323bda0, libserver.so)
// calls: Plat_localtime, Plat_gmtime
// callers: GCSDK::CGCReportPrinter::FormatValue
int __fastcall CRTime::GetMonth(const CRTime *const this)
{
  bool v1; // zf
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  v1 = !this->m_bGMT;
  timeCur = this->m_nStartTime;
  if ( v1 )
    return *(Plat_localtime(&timeCur, &tmStruct) + 16);
  else
    return *(Plat_gmtime(&timeCur, &tmStruct) + 16);
}


// CRTime::GetDayOfYear  (line 383, @0x000000000323bde0, libserver.so)
// calls: Plat_localtime, Plat_gmtime
// callers: CRTime::GetISOWeekOfYear
int __fastcall CRTime::GetDayOfYear(const CRTime *const this)
{
  bool v1; // zf
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  v1 = !this->m_bGMT;
  timeCur = this->m_nStartTime;
  if ( v1 )
    return *(Plat_localtime(&timeCur, &tmStruct) + 28);
  else
    return *(Plat_gmtime(&timeCur, &tmStruct) + 28);
}


// CRTime::GetDayOfMonth  (line 395, @0x000000000323be20, libserver.so)
// calls: Plat_localtime, Plat_gmtime
// callers: GCSDK::CGCReportPrinter::FormatValue
int __fastcall CRTime::GetDayOfMonth(const CRTime *const this)
{
  bool v1; // zf
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  v1 = !this->m_bGMT;
  timeCur = this->m_nStartTime;
  if ( v1 )
    return *(Plat_localtime(&timeCur, &tmStruct) + 12);
  else
    return *(Plat_gmtime(&timeCur, &tmStruct) + 12);
}


// CRTime::GetDayOfWeek  (line 407, @0x000000000323be60, libserver.so)
// calls: Plat_localtime, Plat_gmtime
// callers: CRTime::GetISOWeekOfYear
int __fastcall CRTime::GetDayOfWeek(const CRTime *const this)
{
  bool v1; // zf
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  v1 = !this->m_bGMT;
  timeCur = this->m_nStartTime;
  if ( v1 )
    return *(Plat_localtime(&timeCur, &tmStruct) + 24);
  else
    return *(Plat_gmtime(&timeCur, &tmStruct) + 24);
}


// CRTime::GetHour  (line 419, @0x000000000323bea0, libserver.so)
// calls: Plat_localtime, Plat_gmtime
// callers: GCSDK::CGCReportPrinter::FormatValue
int __fastcall CRTime::GetHour(const CRTime *const this)
{
  bool v1; // zf
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  v1 = !this->m_bGMT;
  timeCur = this->m_nStartTime;
  if ( v1 )
    return *(Plat_localtime(&timeCur, &tmStruct) + 8);
  else
    return *(Plat_gmtime(&timeCur, &tmStruct) + 8);
}


// CRTime::GetMinute  (line 431, @0x000000000323bee0, libserver.so)
// calls: Plat_localtime, Plat_gmtime
// callers: GCSDK::CGCReportPrinter::FormatValue
int __fastcall CRTime::GetMinute(const CRTime *const this)
{
  bool v1; // zf
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  v1 = !this->m_bGMT;
  timeCur = this->m_nStartTime;
  if ( v1 )
    return *(Plat_localtime(&timeCur, &tmStruct) + 4);
  else
    return *(Plat_gmtime(&timeCur, &tmStruct) + 4);
}


// CRTime::GetSecond  (line 443, @0x000000000323bf20, libserver.so)
// calls: Plat_localtime, Plat_gmtime
// callers: GCSDK::CGCReportPrinter::FormatValue
int __fastcall CRTime::GetSecond(const CRTime *const this)
{
  bool v1; // zf
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  v1 = !this->m_bGMT;
  timeCur = this->m_nStartTime;
  if ( v1 )
    return *Plat_localtime(&timeCur, &tmStruct);
  else
    return *Plat_gmtime(&timeCur, &tmStruct);
}


// CRTime::GetISOWeekOfYear  (line 455, @0x000000000323bf60, libserver.so)
// calls: CRTime::GetDayOfYear, CRTime::GetDayOfWeek
int __fastcall CRTime::GetISOWeekOfYear(const CRTime *const this)
{
  int DayOfYear; // r12d

  DayOfYear = CRTime::GetDayOfYear(this);
  return (DayOfYear + ~CRTime::GetDayOfWeek(this)) / 7;
}


// CRTime::BIsLeapYear  (line 466, @0x000000000323bfa0, libserver.so)
bool __fastcall CRTime::BIsLeapYear(int nYear)
{
  bool result; // al

  if ( (nYear & 3) != 0 )
    return nYear == 400 * (nYear / 400);
  result = 1;
  if ( nYear == 100 * (nYear / 100) )
    return nYear == 400 * (nYear / 400);
  return result;
}


// CRTime::RTime32FromFmtString  (line 488, @0x000000000323bff0, libserver.so)  // inlines: V_memset, V_strlen, V_strncpy<int>, V_strncpy<long unsigned int>, V_strnicmp_fast<int>, _V_strstr, memset, strstr
// calls: _V_strncpy, strlen, strstr, strtol, _V_strnicmp_fast, mktime, __stack_chk_fail
// callers: CEconTool_DropRateBooster::BInitFromKV, EconRTime32FromString
// strings: "YYYY", "MM", "Mnt", "hh", "Z0000"
// globals: CRTime::RTime32FromFmtString(char const*,char const*)::rgszMonthNames
RTime32 __fastcall CRTime::RTime32FromFmtString(const char *pchFmt, const char *pchValue)
{
  int v3; // eax
  int v4; // ecx
  char *v5; // r13
  char *v6; // r15
  char *v7; // r14
  char *v8; // rax
  __int64 v9; // rbx
  const char *v10; // r15
  __int64 v11; // kr00_8
  int v12; // eax
  RTime32 result; // eax
  int v14; // r15d
  char *pchFmta; // [rsp+8h] [rbp-108h]
  const char *pchFmtb; // [rsp+8h] [rbp-108h]
  char *v17; // [rsp+10h] [rbp-100h]
  char *v18; // [rsp+18h] [rbp-F8h]
  char *v19; // [rsp+20h] [rbp-F0h]
  char *v20; // [rsp+28h] [rbp-E8h]
  char *v21; // [rsp+30h] [rbp-E0h]
  tm tm; // [rsp+40h] [rbp-D0h] BYREF
  char rgchNum[16]; // [rsp+80h] [rbp-90h] BYREF
  char rgchValue[72]; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int64 v25; // [rsp+D8h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  memset(&tm, 0, sizeof(tm));
  _V_strncpy(rgchValue, pchValue, 64);
  if ( pchFmt == 0 )
    return 0;
  v3 = strlen(pchFmt);
  v4 = strlen(rgchValue);
  if ( v3 <= 3 || v3 != v4 )
    return 0;
  v5 = strstr(pchFmt, "YYYY");
  pchFmta = strstr(pchFmt, "YY");
  v6 = strstr(pchFmt, "MM");
  v7 = strstr(pchFmt, "Mnt");
  v21 = strstr(pchFmt, "DD");
  v20 = strstr(pchFmt, "hh");
  v19 = strstr(pchFmt, "mm");
  v18 = strstr(pchFmt, "ss");
  v17 = strstr(pchFmt, "Z0000");
  if ( v5 != 0 )
  {
    _V_strncpy(rgchNum, &rgchValue[v5 - pchFmt], 5);
    tm.tm_year = strtol(rgchNum, 0, 10) - 1900;
  }
  else
  {
    result = 0;
    if ( pchFmta == 0 )
      return result;
    _V_strncpy(rgchNum, &rgchValue[pchFmta - pchFmt], 3);
    tm.tm_year = strtol(rgchNum, 0, 10) + 100;
  }
  if ( v6 != 0 )
  {
    _V_strncpy(rgchNum, &rgchValue[v6 - pchFmt], 3);
    tm.tm_mon = strtol(rgchNum, 0, 10) - 1;
  }
  if ( v7 != 0 )
  {
    pchFmtb = pchFmt;
    v8 = &rgchValue[v7 - pchFmt];
    v9 = 0;
    v10 = v8;
    while ( _V_strnicmp_fast(CRTime::RTime32FromFmtString(char const*,char const*)::rgszMonthNames[v9], v10, 3) != 0 )
    {
      if ( ++v9 == 12 )
      {
        pchFmt = pchFmtb;
        goto LABEL_13;
      }
    }
    v14 = v9;
    pchFmt = pchFmtb;
    tm.tm_mon = v14;
  }
LABEL_13:
  if ( v21 != 0 )
  {
    _V_strncpy(rgchNum, &rgchValue[v21 - pchFmt], 3);
    tm.tm_mday = strtol(rgchNum, 0, 10);
  }
  if ( v20 != 0 )
  {
    _V_strncpy(rgchNum, &rgchValue[v20 - pchFmt], 3);
    tm.tm_hour = strtol(rgchNum, 0, 10);
  }
  if ( v19 != 0 )
  {
    _V_strncpy(rgchNum, &rgchValue[v19 - pchFmt], 3);
    tm.tm_min = strtol(rgchNum, 0, 10);
  }
  if ( v18 != 0 )
  {
    _V_strncpy(rgchNum, &rgchValue[v18 - pchFmt], 3);
    tm.tm_sec = strtol(rgchNum, 0, 10);
  }
  if ( v17 != 0 )
  {
    _V_strncpy(rgchNum, &rgchValue[v17 - pchFmt], 6);
    v11 = strtol(rgchNum, 0, 10);
    v12 = tm.tm_hour + v11 / -100;
    tm.tm_hour = v12;
    if ( (v11 % 100) != 0 )
      tm.tm_min -= v11 % 100;
    tm.tm_sec -= timezone;
    tm.tm_hour = (daylight != 0) + v12;
  }
  tm.tm_isdst = -1;
  return mktime(&tm);
}


// CRTime::RTime32FromHTTPDateString  (line 619, @0x000000000323c450, libserver.so)
// calls: strptime, Plat_timegm
// strings: "%a, %e %b %Y %H:%M:%S", "%a, %e-%b-%y %H:%M:%S"
RTime32 __fastcall CRTime::RTime32FromHTTPDateString(const char *pchValue)
{
  RTime32 result; // eax
  char *v3; // rdx
  tm tm; // [rsp+0h] [rbp-50h] BYREF

  if ( strptime(pchValue, "%a, %e %b %Y %H:%M:%S", &tm) != 0 )
    return Plat_timegm(&tm);
  v3 = strptime(pchValue, "%a, %e-%b-%y %H:%M:%S", &tm);
  result = 0;
  if ( v3 != 0 )
    return Plat_timegm(&tm);
  return result;
}


// CRTime::RTime32FromRFC3339UTCString  (line 643, @0x000000000323c4b0, libserver.so)
// calls: strptime, Plat_timegm
// strings: "%Y-%m-%dT%H:%M:%SZ"
RTime32 __fastcall CRTime::RTime32FromRFC3339UTCString(const char *pchValue)
{
  char *v1; // rax
  RTime32 v2; // edx
  tm tm; // [rsp+0h] [rbp-50h] BYREF

  v1 = strptime(pchValue, "%Y-%m-%dT%H:%M:%SZ", &tm);
  v2 = 0;
  if ( v1 != 0 )
    return Plat_timegm(&tm);
  return v2;
}


// CRTime::RTime32ToRFC3339UTCString  (line 663, @0x000000000323c4f0, libserver.so)
// calls: Plat_gmtime, V_snprintf
// strings: "Infinite time value", "Invalid time value", "NIL", "%04u-%02u-%02uT%02u:%02u:%02uZ"
const char *__fastcall CRTime::RTime32ToRFC3339UTCString(const RTime32 rTime32, char (*const buf)[25])
{
  _DWORD *v4; // rdx
  const char *result; // rax
  time_t tTime; // [rsp+28h] [rbp-58h] BYREF
  tm tmStruct; // [rsp+30h] [rbp-50h] BYREF

  if ( buf == 0 )
    return 0;
  tTime = rTime32;
  v4 = Plat_gmtime(&tTime, &tmStruct);
  if ( v4 == 0 || rTime32 == 0 )
    return "NIL";
  result = "Infinite time value";
  if ( rTime32 != 0x7FFFFFFF )
  {
    result = "Invalid time value";
    if ( rTime32 > 9 )
    {
      V_snprintf(buf, 25, "%04u-%02u-%02uT%02u:%02u:%02uZ", v4[5] + 1900, v4[4] + 1, v4[3], v4[2], v4[1], *v4);
      return *buf;
    }
  }
  return result;
}


// CRTime::RTime32FromString  (line 694, @0x000000000323c5c0, libserver.so)  // inlines: V_memset, V_strncpy<long unsigned int>, memset
// calls: _V_strncpy, strtol, mktime, __stack_chk_fail
// callers: CEconTool_PlayerCard::BInitFromKV
RTime32 __fastcall CRTime::RTime32FromString(const char *pszValue)
{
  char *v1; // r12
  char v2; // al
  char v3; // al
  _BYTE *v4; // r14
  char v5; // al
  char v6; // al
  char v7; // al
  _BYTE *v8; // r12
  char v9; // al
  _BYTE *v10; // r14
  char v11; // al
  char v12; // al
  int v13; // eax
  _BYTE *v14; // rdx
  char v15; // al
  char v16; // al
  tm tm; // [rsp+0h] [rbp-C0h] BYREF
  char num[16]; // [rsp+40h] [rbp-80h] BYREF
  char szValue[72]; // [rsp+50h] [rbp-70h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp-28h]

  v1 = &szValue[4];
  v21 = __readfsqword(0x28u);
  memset(&tm, 0, sizeof(tm));
  _V_strncpy(szValue, pszValue, 64);
  num[4] = 0;
  num[0] = szValue[0];
  num[1] = szValue[1];
  num[2] = szValue[2];
  num[3] = szValue[3];
  tm.tm_year = strtol(num, 0, 10) - 1900;
  v2 = szValue[4];
  if ( szValue[4] == 45 )
  {
    v2 = szValue[5];
    v1 = &szValue[5];
  }
  num[0] = v2;
  v3 = v1[1];
  num[2] = 0;
  v4 = v1 + 2;
  num[1] = v3;
  tm.tm_mon = strtol(num, 0, 10) - 1;
  v5 = v1[2];
  if ( v5 == 45 )
  {
    v4 = v1 + 3;
    v5 = v1[3];
  }
  num[0] = v5;
  v6 = v4[1];
  num[2] = 0;
  num[1] = v6;
  tm.tm_mday = strtol(num, 0, 10);
  v7 = v4[2];
  if ( v7 != 0 )
  {
    if ( v7 == 84 || (v8 = v4 + 2, v7 == 32) )
    {
      v7 = v4[3];
      v8 = v4 + 3;
    }
    num[0] = v7;
    v9 = v8[1];
    num[2] = 0;
    v10 = v8 + 2;
    num[1] = v9;
    tm.tm_hour = strtol(num, 0, 10);
    v11 = v8[2];
    if ( v11 == 58 )
    {
      v10 = v8 + 3;
      v11 = v8[3];
    }
    num[0] = v11;
    v12 = v10[1];
    num[2] = 0;
    num[1] = v12;
    v13 = strtol(num, 0, 10);
    v14 = v10 + 2;
    tm.tm_min = v13;
    v15 = v10[2];
    if ( v15 == 58 )
    {
      v14 = v10 + 3;
      v15 = v10[3];
    }
    num[0] = v15;
    v16 = v14[1];
    num[2] = 0;
    num[1] = v16;
    tm.tm_sec = strtol(num, 0, 10);
  }
  tm.tm_isdst = -1;
  return mktime(&tm);
}


// CRTime::RTime32ToString  (line 745, @0x000000000323c800, libserver.so)
// calls: Plat_localtime, V_snprintf
// strings: "%04u%02u%02u", "%04u%02u%02u%02u%02u%02u", "%04u-%02u-%02u", "%04u-%02u-%02u %02u:%02u:%02u", "Infinite time value", "Invalid time value" (7 total)
const char *__fastcall CRTime::RTime32ToString(
        const RTime32 rTime32,
        char (*const buf)[25],
        bool bNoPunct,
        bool bOnlyDate)
{
  __int64 v8; // rax
  const char *v9; // r11
  const char *v10; // rdx
  _DWORD *v11; // r8
  const char *result; // rax
  time_t tTime; // [rsp+28h] [rbp-68h] BYREF
  tm tmStruct; // [rsp+30h] [rbp-60h] BYREF

  if ( buf == 0 )
    return 0;
  tTime = rTime32;
  v8 = Plat_localtime(&tTime, &tmStruct);
  v9 = "%04u%02u%02u";
  v10 = "%04u%02u%02u%02u%02u%02u";
  v11 = v8;
  if ( !bNoPunct )
  {
    v9 = "%04u-%02u-%02u";
    v10 = "%04u-%02u-%02u %02u:%02u:%02u";
  }
  if ( v8 == 0 || rTime32 == 0 )
    return "NIL";
  result = "Infinite time value";
  if ( rTime32 != 0x7FFFFFFF )
  {
    result = "Invalid time value";
    if ( rTime32 > 9 )
    {
      if ( bOnlyDate )
      {
        V_snprintf(buf, 25, v9, (v11[5] + 1900), (v11[4] + 1), v11[3]);
        return *buf;
      }
      else
      {
        V_snprintf(buf, 25, v10, (v11[5] + 1900), (v11[4] + 1), v11[3], v11[2], v11[1], *v11);
        return *buf;
      }
    }
  }
  return result;
}


// CRTime::RTime32ToDayString  (line 791, @0x000000000323c940, libserver.so)
// calls: Plat_localtime, strftime, Plat_gmtime
// strings: "%b %d"
const char *__fastcall CRTime::RTime32ToDayString(const RTime32 rTime32, char (*const buf)[25], bool bGMT)
{
  const struct tm *v4; // rax
  time_t tTime; // [rsp+8h] [rbp-58h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-50h] BYREF

  if ( buf == 0 )
    return 0;
  tTime = rTime32;
  if ( bGMT )
    v4 = Plat_gmtime(&tTime, &tmStruct);
  else
    v4 = Plat_localtime(&tTime, &tmStruct);
  strftime(buf, 0x19u, "%b %d", v4);
  return *buf;
}


// CRTime::RTime32BeginningOfDay  (line 814, @0x000000000323c9b0, libserver.so)
// calls: Plat_localtime, mktime
RTime32 __fastcall CRTime::RTime32BeginningOfDay(const RTime32 rtime32)
{
  struct tm *v1; // rdi
  RTime32 result; // eax
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  timeCur = rtime32;
  v1 = Plat_localtime(&timeCur, &tmStruct);
  result = 0;
  if ( v1 != 0 )
  {
    v1->tm_hour = 0;
    v1->tm_min = 0;
    v1->tm_sec = 0;
    v1->tm_isdst = -1;
    return mktime(v1);
  }
  return result;
}


// CRTime::RTime32BeginningOfNextDay  (line 839, @0x000000000323ca00, libserver.so)
// calls: Plat_localtime, mktime
RTime32 __fastcall CRTime::RTime32BeginningOfNextDay(const RTime32 rtime32)
{
  struct tm *v1; // rdi
  RTime32 result; // eax
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  timeCur = rtime32;
  v1 = Plat_localtime(&timeCur, &tmStruct);
  result = 0;
  if ( v1 != 0 )
  {
    ++v1->tm_mday;
    v1->tm_hour = 0;
    v1->tm_min = 0;
    v1->tm_sec = 0;
    v1->tm_isdst = -1;
    return mktime(v1);
  }
  return result;
}


// CRTime::RTime32FirstDayOfMonth  (line 867, @0x000000000323ca50, libserver.so)
// calls: Plat_localtime, mktime
// callers: CRTime::RTime32MonthAddChooseDay
RTime32 __fastcall CRTime::RTime32FirstDayOfMonth(const RTime32 rtime32)
{
  struct tm *v1; // rdi
  RTime32 result; // eax
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  timeCur = rtime32;
  v1 = Plat_localtime(&timeCur, &tmStruct);
  result = 0;
  if ( v1 != 0 )
  {
    v1->tm_mday = 1;
    v1->tm_hour = 0;
    v1->tm_min = 0;
    v1->tm_sec = 0;
    v1->tm_isdst = -1;
    return mktime(v1);
  }
  return result;
}


// CRTime::RTime32LastDayOfMonth  (line 895, @0x000000000323caa0, libserver.so)
// calls: Plat_localtime, mktime
RTime32 __fastcall CRTime::RTime32LastDayOfMonth(const RTime32 rtime32)
{
  struct tm *v1; // rdi
  RTime32 result; // eax
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  timeCur = rtime32;
  v1 = Plat_localtime(&timeCur, &tmStruct);
  result = 0;
  if ( v1 != 0 )
  {
    ++v1->tm_mon;
    v1->tm_mday = 0;
    v1->tm_hour = 0;
    v1->tm_min = 0;
    v1->tm_sec = 0;
    v1->tm_isdst = -1;
    return mktime(v1);
  }
  return result;
}


// CRTime::RTime32FirstDayOfNextMonth  (line 924, @0x000000000323cb00, libserver.so)
// calls: Plat_localtime, mktime
RTime32 __fastcall CRTime::RTime32FirstDayOfNextMonth(const RTime32 rtime32)
{
  struct tm *v1; // rdi
  RTime32 result; // eax
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  timeCur = rtime32;
  v1 = Plat_localtime(&timeCur, &tmStruct);
  result = 0;
  if ( v1 != 0 )
  {
    ++v1->tm_mon;
    v1->tm_mday = 1;
    v1->tm_hour = 0;
    v1->tm_min = 0;
    v1->tm_sec = 0;
    v1->tm_isdst = -1;
    return mktime(v1);
  }
  return result;
}


// CRTime::RTime32LastDayOfNextMonth  (line 952, @0x000000000323cb60, libserver.so)
// calls: Plat_localtime, mktime
RTime32 __fastcall CRTime::RTime32LastDayOfNextMonth(const RTime32 rtime32)
{
  struct tm *v1; // rdi
  RTime32 result; // eax
  time_t timeCur; // [rsp+8h] [rbp-48h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-40h] BYREF

  timeCur = rtime32;
  v1 = Plat_localtime(&timeCur, &tmStruct);
  result = 0;
  if ( v1 != 0 )
  {
    v1->tm_mon += 2;
    v1->tm_mday = 0;
    v1->tm_hour = 0;
    v1->tm_min = 0;
    v1->tm_sec = 0;
    v1->tm_isdst = -1;
    return mktime(v1);
  }
  return result;
}


// CRTime::RTime32NthDayOfMonth  (line 988, @0x000000000323cbc0, libserver.so)
// calls: Plat_localtime, mktime
// callers: CRTime::RTime32MonthAddChooseDay
RTime32 __fastcall CRTime::RTime32NthDayOfMonth(const RTime32 rtime32, int nDay)
{
  struct tm *v3; // rbx
  RTime32 result; // eax
  int tm_mon; // r13d
  time_t timeCur; // [rsp+8h] [rbp-68h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-60h] BYREF

  timeCur = rtime32;
  v3 = Plat_localtime(&timeCur, &tmStruct);
  result = 0;
  if ( v3 != 0 )
  {
    tm_mon = v3->tm_mon;
    v3->tm_mday = nDay;
    v3->tm_hour = 0;
    v3->tm_min = 0;
    v3->tm_sec = 0;
    v3->tm_isdst = -1;
    result = mktime(v3);
    if ( v3->tm_mon != tm_mon )
    {
      v3->tm_mday = 0;
      v3->tm_isdst = -1;
      return mktime(v3);
    }
  }
  return result;
}


// CRTime::RTime32MonthAddChooseDay  (line 1039, @0x000000000323cd20, libserver.so)  // inlines: GetFirstDayOfMonth
// calls: CRTime::RTime32FirstDayOfMonth, CRTime::RTime32DateAdd, CRTime::RTime32NthDayOfMonth
RTime32 __fastcall CRTime::RTime32MonthAddChooseDay(int nNthDayOfMonth, RTime32 rtime32StartDate, int nMonthsToAdd)
{
  RTime32 DayOfMonth; // eax
  RTime32 v6; // eax

  DayOfMonth = CRTime::RTime32FirstDayOfMonth(rtime32StartDate);
  v6 = CRTime::RTime32DateAdd(DayOfMonth, nMonthsToAdd, ETimeUnit::k_ETimeUnitMonth);
  return CRTime::RTime32NthDayOfMonth(v6, nNthDayOfMonth);
}


// CRTime::RTime32DateAdd  (line 1064, @0x000000000323cc40, libserver.so)
// calls: Plat_localtime, mktime
// callers: CDOTAItemDefinition::IsOlderThan, CRTime::RTime32MonthAddChooseDay
// globals: jpt_323CC7F
RTime32 __fastcall CRTime::RTime32DateAdd(const RTime32 rtime32, int nAmount, ETimeUnit eTimeAmountType)
{
  struct tm *v5; // rax
  RTime32 result; // eax
  time_t timeCur; // [rsp+8h] [rbp-58h] BYREF
  tm tmStruct; // [rsp+10h] [rbp-50h] BYREF

  timeCur = rtime32;
  v5 = Plat_localtime(&timeCur, &tmStruct);
  if ( v5 == 0 )
    return 0;
  switch ( eTimeAmountType )
  {
    case ETimeUnit::k_ETimeUnitSecond:
      v5->tm_sec += nAmount;
      goto LABEL_4;
    case ETimeUnit::k_ETimeUnitMinute:
      v5->tm_min += nAmount;
      goto LABEL_4;
    case ETimeUnit::k_ETimeUnitHour:
      v5->tm_hour += nAmount;
      goto LABEL_4;
    case ETimeUnit::k_ETimeUnitDay:
      v5->tm_mday += nAmount;
      goto LABEL_4;
    case ETimeUnit::k_ETimeUnitWeek:
      v5->tm_mday += 7 * nAmount;
      goto LABEL_4;
    case ETimeUnit::k_ETimeUnitMonth:
      v5->tm_mon += nAmount;
      goto LABEL_4;
    case ETimeUnit::k_ETimeUnitYear:
      v5->tm_year += nAmount;
      goto LABEL_4;
    case ETimeUnit::k_ETimeUnitForever:
      return 0x7FFFFFFF;
    default:
LABEL_4:
      v5->tm_isdst = -1;
      result = mktime(v5);
      break;
  }
  return result;
}


// CRTime::FindTimeBoundaryCrossings  (line 1130, @0x000000000323cd50, libserver.so)
// calls: Plat_localtime
ETimeUnit __fastcall CRTime::FindTimeBoundaryCrossings(RTime32 unTime1, RTime32 unTime2, bool *pbWeekChanged)
{
  int *v6; // rax
  int v7; // r14d
  int v8; // r15d
  _DWORD *v9; // rdx
  ETimeUnit result; // eax
  int v11; // [rsp+8h] [rbp-D8h]
  int v12; // [rsp+Ch] [rbp-D4h]
  int v13; // [rsp+10h] [rbp-D0h]
  int v14; // [rsp+14h] [rbp-CCh]
  int v15; // [rsp+18h] [rbp-C8h]
  int v16; // [rsp+1Ch] [rbp-C4h]
  time_t time1; // [rsp+20h] [rbp-C0h] BYREF
  time_t time2; // [rsp+28h] [rbp-B8h] BYREF
  tm tmStruct1; // [rsp+30h] [rbp-B0h] BYREF
  tm tmStruct2; // [rsp+70h] [rbp-70h] BYREF

  time1 = unTime1;
  time2 = unTime2;
  v6 = Plat_localtime(&time1, &tmStruct1);
  if ( v6 != 0 )
  {
    v7 = v6[5];
    v8 = v6[6];
    v11 = *v6;
    v16 = v6[4];
    v12 = v6[1];
    v13 = v6[2];
    v15 = v6[7];
    v14 = v6[8];
    v9 = Plat_localtime(&time2, &tmStruct2);
    if ( v9 != 0 )
    {
      *pbWeekChanged = 0;
      if ( unTime1 > unTime2 && unTime1 - unTime2 > &stru_93A80 )
        goto LABEL_5;
      if ( unTime1 < unTime2 )
      {
        if ( unTime2 - unTime1 <= &stru_93A80 && (v9[7] == v15 || v9[6] > v8) )
          goto LABEL_6;
LABEL_5:
        *pbWeekChanged = 1;
        goto LABEL_6;
      }
      if ( v9[7] != v15 && v9[6] >= v8 )
        goto LABEL_5;
LABEL_6:
      result = ETimeUnit::k_ETimeUnitYear;
      if ( v9[5] == v7 )
      {
        LOBYTE(result) = 6;
        if ( v9[4] == v16 )
        {
          LOBYTE(result) = 5;
          if ( !*pbWeekChanged )
          {
            LOBYTE(result) = 4;
            if ( v9[7] == v15 )
            {
              LOBYTE(result) = 3;
              if ( v9[2] == v13 && v9[8] == v14 )
              {
                LOBYTE(result) = 2;
                if ( v9[1] == v12 )
                  return *v9 != v11;
              }
            }
          }
        }
      }
      return result;
    }
  }
  return ETimeUnit::k_ETimeUnitForever;
}


