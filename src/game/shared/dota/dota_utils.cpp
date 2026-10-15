// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_utils.cpp:899
class CPrecacheUnitFromTableAsyncCallback {
private:

	HSCRIPT m_hCallback;  // +0x0
	CPrecacheUnitFromTableAsyncCallback(HSCRIPT);
	~CPrecacheUnitFromTableAsyncCallback();
	void CallBackAndDeleteMe(SpawnGroupHandle_t, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);

	// sizeof = 8
};

// src/game/shared/dota/dota_utils.cpp:978
class CCreateUnitSpawnCallback {
private:

	HSCRIPT m_hCallback;  // +0x0
	bool m_bFindClearSpace;  // +0x14
	CCreateUnitSpawnCallback(HSCRIPT, const Vector &, bool);
	~CCreateUnitSpawnCallback();
	void CallBackAndDeleteMe(CDOTA_BaseNPC *, const CEntityKeyValues *);

	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetDOTAChatMessageString  (line 175, @0x00000000027ac940, libserver.so)
// globals: skChatMessageStrings
const char *__fastcall GetDOTAChatMessageString(int nMessage)
{
  const SChatMessageStringEntry *v1; // rdx
  int v2; // eax

  if ( nMessage != 0 )
  {
    v1 = &skChatMessageStrings[1];
    v2 = 1;
    while ( v1->nMessage != nMessage )
    {
      ++v2;
      ++v1;
      if ( v2 == 93 )
        return "";
    }
  }
  else
  {
    v2 = 0;
  }
  return skChatMessageStrings[v2].pszMessage;
}


// GetDOTAChatMessageTerse  (line 187, @0x00000000027ac9a0, libserver.so)
bool __fastcall GetDOTAChatMessageTerse(int nMessage)
{
  const SChatMessageStringEntry *v1; // rdx
  int v2; // eax

  if ( nMessage != 0 )
  {
    v1 = &skChatMessageStrings[1];
    v2 = 1;
    while ( v1->nMessage != nMessage )
    {
      ++v2;
      ++v1;
      if ( v2 == 93 )
        return 0;
    }
  }
  else
  {
    v2 = 0;
  }
  return (skChatMessageStrings[v2].nFlags & 4) != 0;
}


// GetDOTAChatMessage  (line 199, @0x00000000027aca00, libserver.so)
// globals: skChatMessageStrings
const SChatMessageStringEntry *__fastcall GetDOTAChatMessage(int nMessage)
{
  const SChatMessageStringEntry *v1; // rdx
  int v2; // eax

  if ( nMessage != 0 )
  {
    v1 = &skChatMessageStrings[1];
    v2 = 1;
    while ( v1->nMessage != nMessage )
    {
      ++v2;
      ++v1;
      if ( v2 == 93 )
        return 0;
    }
  }
  else
  {
    v2 = 0;
  }
  return &skChatMessageStrings[v2];
}


// GetDOTAChatMessageNumber  (line 211, @0x00000000027aca50, libserver.so)
// calls: V_stricmp_fast
// callers: CDOTAHeroTaunt::GetChatMessage, CDOTAVictoryPrediction::GetChatMessage
// globals: skChatMessageStrings
int __fastcall GetDOTAChatMessageNumber(const char *pszMessage)
{
  int v2; // r12d
  const char **p_pszMessage; // rbx

  v2 = 0;
  p_pszMessage = &skChatMessageStrings[0].pszMessage;
  do
  {
    if ( V_stricmp_fast(*p_pszMessage, pszMessage) == 0 )
      return skChatMessageStrings[v2].nMessage;
    ++v2;
    p_pszMessage += 3;
  }
  while ( v2 != 93 );
  return -1;
}


// IsChatWheelMessageSentToAll  (line 223, @0x00000000027acac0, libserver.so)
// callers: CDOTAPlayer::SendChatWheelMessage
bool __fastcall IsChatWheelMessageSentToAll(EDOTAChatWheelMessage eMessage)
{
  return (eMessage - 75) <= 1;
}


// CDOTA_UnitFilterCache::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 236, @0x00000000027acad0, libserver.so)
void __cdecl CDOTA_UnitFilterCache::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// IsStableMode  (line 239, @0x00000000027acae0, libserver.so)
// callers: CDOTAGameManager::SetHeroAvailableByHeroID, CDOTAGamerules::CM_IsBannedHero, CDOTAGamerules::CM_AddSelectedHero, CDOTAGameManager::SetupGameKeyValues, CDOTAGameManager::ResetLowViolenceHeroes, CDOTAGameManager::IsHeroAvailableByHeroID, CDOTAGamerules::HeroPickState_Enter_CM_INTRO, CGCJobLoadSaveGame::BYieldingRunJob, CDOTAGCServerSystem::FrameUpdatePostEntityThink
// globals: s_bStableMode
bool __cdecl IsStableMode()
{
  return s_bStableMode;
}


// SetStableMode  (line 244, @0x00000000027acaf0, libserver.so)
// callers: CDOTAGCServerSystem::FrameUpdatePostEntityThink
// globals: s_bStableMode
void __fastcall SetStableMode(bool bValue)
{
  s_bStableMode = bValue;
}


// IsUnexplored  (line 249, @0x00000000027acb00, libserver.so)
// callers: CDOTA_Ability_AntiMage_Blink::CastFilterResult, CDOTA_Ability_QueenOfPain_Blink::CastFilterResult, CDOTA_Ability_Furion_Teleportation::CastFilterResult, CDOTA_Item_BlinkDagger::CastFilterResult
bool __fastcall IsUnexplored(uint32 iResult)
{
  return 0;
}


// localtime_timezone  (line 265, @0x00000000027acb10, libserver.so)  // inlines: _putenv_s
// calls: getenv, setenv, tzset, localtime
// callers: RenderLocalizedDate
// strings: "GMT", "UTC-10AEDT", "PST8PDT", "EST5EDT", "CET-1CEST", "GST-4GDT" (7 total)
// globals: jpt_27ACB49
tm *__fastcall localtime_timezone(const time_t *timep, tm *result, DOTAFantasy_Timezone_t timezone)
{
  char *v5; // r12
  tm *v6; // rbx

  v5 = getenv("TZ");
  switch ( timezone )
  {
    case DOTAFantasy_Timezone_t::FANTASY_TIMEZONE_US_WEST:
      setenv("TZ", "PST8PDT", 1);
      break;
    case DOTAFantasy_Timezone_t::FANTASY_TIMEZONE_US_EAST:
      setenv("TZ", "EST5EDT", 1);
      break;
    case DOTAFantasy_Timezone_t::FANTASY_TIMEZONE_EU_CET:
      setenv("TZ", "CET-1CEST", 1);
      break;
    case DOTAFantasy_Timezone_t::FANTASY_TIMEZONE_EU_MOSCOW:
      setenv("TZ", "GST-4GDT", 1);
      break;
    case DOTAFantasy_Timezone_t::FANTASY_TIMEZONE_CN:
      setenv("TZ", "PRC-8", 1);
      break;
    case DOTAFantasy_Timezone_t::FANTASY_TIMEZONE_AU_SYDNEY:
      setenv("TZ", "UTC-10AEDT", 1);
      break;
    case DOTAFantasy_Timezone_t::FANTASY_TIMEZONE_GMT:
      setenv("TZ", "GMT", 1);
      break;
    default:
      break;
  }
  tzset();
  v6 = localtime(timep);
  if ( v5 != 0 )
    setenv("TZ", v5, 1);
  else
    setenv("TZ", "", 1);
  tzset();
  return v6;
}


// RenderLocalizedDateUTF8  (line 295, @0x00000000027ad2b0, libserver.so)
// calls: RenderLocalizedDate, V_UTF32ToUTF8, __stack_chk_fail
void __fastcall RenderLocalizedDateUTF8(
        RTime32 rtTime,
        char *pbufUTF8,
        int iBufferSize,
        DATE_FORMAT format,
        DOTAFantasy_Timezone_t nTimezone)
{
  int v7; // edx
  void *v8; // rsp
  wchar_t v9; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]

  v7 = 4 * iBufferSize + 4;
  v10 = __readfsqword(0x28u);
  v8 = alloca(v7 + 15LL);
  RenderLocalizedDate(rtTime, &v9, v7, format, nTimezone);
  V_UTF32ToUTF8(&v9, pbufUTF8, iBufferSize, 4);
}


// RenderLocalizedDate  (line 304, @0x00000000027acc70, libserver.so)  // inlines: V_wcsncpy<long unsigned int>
// calls: localtime_timezone, wcsftime, wcslen, Plat_localtime, _V_wcsncpy_bytes
// callers: RenderLocalizedDateUTF8
// strings: "#DOTA_Date_Format_Day_Month", "#DOTA_Date_Format_DayOfWeek_Day_Month_Hour_Minute_24", "#DOTA_Date_Format_Day_Month_Year", "#DOTA_Date_Format_Day_Month_Year_Hour_Minute_24", "#DOTA_Date_Format_Day_Month_Year_Hour_Minute_Second_24", "#DOTA_Date_Format_Hour_Minute_24" (11 total)
// globals: jpt_27ACE5F
void __fastcall RenderLocalizedDate(
        RTime32 rtTime,
        wchar_t *pwcBuf,
        int iBufferSize,
        DATE_FORMAT format,
        DOTAFantasy_Timezone_t nTimezone)
{
  tm *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  void (__fastcall *v10)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *); // r13
  __int64 v11; // rax
  __int64 v12; // rax
  void (__fastcall *v13)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *); // r13
  __int64 v14; // rax
  void (__fastcall *v15)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *); // r13
  __int64 v16; // rax
  void (__fastcall *v17)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *); // r13
  __int64 v18; // rax
  __int64 v19; // rax
  void (__fastcall *v20)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *); // r13
  __int64 v21; // rax
  __int64 v22; // rax
  void (__fastcall *v23)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *); // r13
  __int64 v24; // rax
  __int64 v25; // rax
  void (__fastcall *v26)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *); // r13
  __int64 v27; // rax
  void (__fastcall *v28)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *); // r13
  __int64 v29; // rax
  void (__fastcall *v30)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *); // r14
  __int64 v31; // rax
  void (__fastcall *v32)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *); // r14
  __int64 v33; // rax
  void (__fastcall *v34)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *); // r14
  __int64 v35; // rax
  void (__fastcall *v36)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *); // r14
  __int64 v37; // rax
  time_t tTime; // [rsp+88h] [rbp-258h] BYREF
  wchar_t wszHour24[8]; // [rsp+90h] [rbp-250h] BYREF
  wchar_t wszHour12[8]; // [rsp+B0h] [rbp-230h] BYREF
  wchar_t wszMinute[8]; // [rsp+D0h] [rbp-210h] BYREF
  wchar_t wszSecond[8]; // [rsp+F0h] [rbp-1F0h] BYREF
  wchar_t wszAMPM[8]; // [rsp+110h] [rbp-1D0h] BYREF
  tm tmStruct; // [rsp+130h] [rbp-1B0h] BYREF
  wchar_t wszYear[16]; // [rsp+170h] [rbp-170h] BYREF
  wchar_t wszMonth[16]; // [rsp+1B0h] [rbp-130h] BYREF
  wchar_t wszMonthShort[16]; // [rsp+1F0h] [rbp-F0h] BYREF
  wchar_t wszDay[16]; // [rsp+230h] [rbp-B0h] BYREF
  wchar_t wszDayOfWeek[28]; // [rsp+270h] [rbp-70h] BYREF

  if ( pwcBuf != 0 )
  {
    tTime = rtTime;
    if ( nTimezone == DOTAFantasy_Timezone_t::FANTASY_TIMEZONE_INVALID )
      v7 = Plat_localtime(&tTime, &tmStruct);
    else
      v7 = localtime_timezone(&tTime, &tmStruct, nTimezone);
    wcsftime(wszYear, 0x10u, U"%Y", v7);
    wcsftime(wszMonth, 0x10u, U"%B", v7);
    wcsftime(wszMonthShort, 0x10u, U"%b", v7);
    wcsftime(wszDay, 0x10u, U"%d", v7);
    wcsftime(wszDayOfWeek, 0x10u, U"%A", v7);
    wcsftime(wszHour24, 8u, U"%H", v7);
    wcsftime(wszHour12, 8u, U"%I", v7);
    wcsftime(wszMinute, 8u, U"%M", v7);
    wcsftime(wszSecond, 8u, U"%S", v7);
    wcsftime(wszAMPM, 8u, U"%p", v7);
    if ( wszHour12[0] == 48 )
      _V_wcsncpy_bytes(wszHour12, &wszHour12[1], 32);
    LOBYTE(v9) = wcslen(wszAMPM) == 0;
    switch ( format )
    {
      case DATE_FORMAT::DATE_DAY_MONTH:
        v15 = *(*g_pVGuiLocalize + 144LL);
        v16 = (*(*g_pVGuiLocalize + 112LL))(g_pVGuiLocalize, "#DOTA_Date_Format_Day_Month", v8, v9);
        v15(g_pVGuiLocalize, pwcBuf, iBufferSize, v16, 2, wszDay, wszMonth);
        break;
      case DATE_FORMAT::DATE_DAY_MONTH_YEAR:
        v17 = *(*g_pVGuiLocalize + 144LL);
        v18 = (*(*g_pVGuiLocalize + 112LL))(g_pVGuiLocalize, "#DOTA_Date_Format_Day_Month_Year", v8, v9);
        v17(g_pVGuiLocalize, pwcBuf, iBufferSize, v18, 3, wszDay, wszMonth, wszYear);
        break;
      case DATE_FORMAT::DATE_DAY_MONTH_YEAR_HOUR_MINUTE:
        v19 = *g_pVGuiLocalize;
        if ( v9 != 0 )
        {
          v20 = *(v19 + 144);
          v21 = (*(v19 + 112))(g_pVGuiLocalize, "#DOTA_Date_Format_Day_Month_Year_Hour_Minute_24");
          v20(g_pVGuiLocalize, pwcBuf, iBufferSize, v21, 5, wszDay, wszMonth, wszYear, wszHour24, wszMinute);
        }
        else
        {
          v34 = *(v19 + 144);
          v35 = (*(v19 + 112))(g_pVGuiLocalize, "#DOTA_Date_Format_Day_Month_Year_Hour_Minute_12");
          v34(g_pVGuiLocalize, pwcBuf, iBufferSize, v35, 6, wszDay, wszMonth, wszYear, wszHour12, wszMinute, wszAMPM);
        }
        break;
      case DATE_FORMAT::DATE_DAY_MONTH_YEAR_HOUR_MINUTE_SECOND:
        v22 = *g_pVGuiLocalize;
        if ( v9 != 0 )
        {
          v23 = *(v22 + 144);
          v24 = (*(v22 + 112))(g_pVGuiLocalize, "#DOTA_Date_Format_Day_Month_Year_Hour_Minute_Second_24");
          v23(g_pVGuiLocalize, pwcBuf, iBufferSize, v24, 6, wszDay, wszMonth, wszYear, wszHour24, wszMinute, wszSecond);
        }
        else
        {
          v32 = *(v22 + 144);
          v33 = (*(v22 + 112))(g_pVGuiLocalize, "#DOTA_Date_Format_Day_Month_Year_Hour_Minute_Second_12");
          v32(
            g_pVGuiLocalize,
            pwcBuf,
            iBufferSize,
            v33,
            7,
            wszDay,
            wszMonth,
            wszYear,
            wszHour12,
            wszMinute,
            wszSecond,
            wszAMPM);
        }
        break;
      case DATE_FORMAT::DATE_HOUR_MINUTE:
        v25 = *g_pVGuiLocalize;
        if ( v9 != 0 )
        {
          v26 = *(v25 + 144);
          v27 = (*(v25 + 112))(g_pVGuiLocalize, "#DOTA_Date_Format_Hour_Minute_24");
          v26(g_pVGuiLocalize, pwcBuf, iBufferSize, v27, 2, wszHour24, wszMinute);
        }
        else
        {
          v30 = *(v25 + 144);
          v31 = (*(v25 + 112))(g_pVGuiLocalize, "#DOTA_Date_Format_Hour_Minute_12");
          v30(g_pVGuiLocalize, pwcBuf, iBufferSize, v31, 3, wszHour12, wszMinute, wszAMPM);
        }
        break;
      case DATE_FORMAT::DATE_DAY_OF_WEEK:
        v28 = *(*g_pVGuiLocalize + 144LL);
        v29 = (*(*g_pVGuiLocalize + 112LL))(g_pVGuiLocalize, "#DOTA_Date_Format_DayOfWeek", v8, v9);
        v28(g_pVGuiLocalize, pwcBuf, iBufferSize, v29, 1, wszDayOfWeek);
        break;
      case DATE_FORMAT::DATE_DAY_OF_WEEK_DAY_MONTH_HOUR_MINUTE:
        v12 = *g_pVGuiLocalize;
        if ( v9 != 0 )
        {
          v13 = *(v12 + 144);
          v14 = (*(v12 + 112))(g_pVGuiLocalize, "#DOTA_Date_Format_DayOfWeek_Day_Month_Hour_Minute_24");
          v13(g_pVGuiLocalize, pwcBuf, iBufferSize, v14, 5, wszDayOfWeek, wszDay, wszMonth, wszHour24, wszMinute);
        }
        else
        {
          v36 = *(v12 + 144);
          v37 = (*(v12 + 112))(g_pVGuiLocalize, "#DOTA_Date_Format_DayOfWeek_Day_Month_Hour_Minute_12");
          v36(
            g_pVGuiLocalize,
            pwcBuf,
            iBufferSize,
            v37,
            6,
            wszDayOfWeek,
            wszDay,
            wszMonth,
            wszHour12,
            wszMinute,
            wszAMPM);
        }
        break;
      case DATE_FORMAT::DATE_DAY_MONTH_SHORT:
        v10 = *(*g_pVGuiLocalize + 144LL);
        v11 = (*(*g_pVGuiLocalize + 112LL))(g_pVGuiLocalize, "#DOTA_Date_Format_Day_Month", v8, v9);
        v10(g_pVGuiLocalize, pwcBuf, iBufferSize, v11, 2, wszDay, wszMonthShort);
        break;
      default:
        return;
    }
  }
}


// CDOTA_Grinder::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 491, @0x00000000027ad330, libserver.so)
void __cdecl CDOTA_Grinder::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetEntitySerial  (line 493, @0x00000000027ad340, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set
// callers: CDOTA_CombatLog::SendKillCamInformation
__int64 __fastcall GetEntitySerial(CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rax
  int v2; // edx
  __int16 v3; // cx
  __int16 v4; // ax
  int v5; // eax
  int v6; // ecx
  __int64 v8; // [rsp+8h] [rbp-8h]

  if ( pEntity == 0 )
    return 0;
  *(&v8 - 4) = -1;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v2 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v3 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    *(&v8 - 8) = v3 | *(&v8 - 2) & 0x8000;
    *(&v8 - 4) = (v2 << 15) | *(&v8 - 2) & 0x7FFF;
  }
  else
  {
    v4 = -1;
  }
  v5 = v4 & 0x3FF;
  v6 = 0x7FFF;
  if ( *(&v8 - 4) != -1 )
  {
    *(&v8 - 16) = *(&v8 - 8);
    v6 = *(&v8 - 4) & 0x7FFF;
  }
  return v6 | (v5 << 14);
}


// CancelAttacksOfNPCsAttacking  (line 508, @0x00000000027bb760, libserver.so)  // inlines: AddToTail, CDOTABaseNPCCollector, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, Element, ForEachBot<CDOTABaseNPCCollector>, GetTeamNumber, GrowMemory, Purge, RemoveAll, ToDOTABaseNPC, operator(), operator[], ~CDOTABaseNPCCollector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: UnitFilter, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Ability_Greevil_Miniboss_Black_Nightmare::OnSpellStart, CDOTA_Ability_Bane_Nightmare::OnSpellStart
void __fastcall CancelAttacksOfNPCsAttacking(CDOTA_BaseNPC *pNPC)
{
  int m_Value; // eax
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  CDOTA_BaseNPC *v7; // r12
  int m_Size; // eax
  CDOTA_BaseNPC **v9; // rax
  __int64 v10; // r12
  int v11; // ebx
  int v12; // [rsp+Ch] [rbp-64h]
  CDOTABaseNPCCollector roster; // [rsp+10h] [rbp-60h] BYREF

  if ( pNPC != 0 )
  {
    m_Value = pNPC->m_iTeamNum.m_Value;
    roster.m_who.m_Size = 0;
    roster.m_who.m_Memory.m_pMemory = 0;
    roster.m_who.m_Memory.m_nAllocationCount = 0;
    roster.m_who.m_Memory.m_nGrowSize = 0;
    roster.m_myTeam = m_Value;
    roster.m_iTeamFilter = 2;
    roster.m_iTypeFilter = 19;
    roster.m_iFlagFilter = 0;
    m_Head = g_NextBotManager.m_botList.m_Head;
    if ( m_Head != 0xFFFF )
    {
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      do
      {
        v5 = m_Head;
        v6 = (*(m_pMemory[v5].m_Element->_vptr_INextBotEventResponder + 66))(m_pMemory[v5].m_Element);
        v7 = v6;
        if ( v6 == 0 || *(v6 + 339) == 0 )
          v7 = 0;
        if ( UnitFilter(v7, roster.m_iTeamFilter, roster.m_iTypeFilter, roster.m_iFlagFilter, roster.m_myTeam) == 0 )
        {
          m_Size = roster.m_who.m_Size;
          v12 = roster.m_who.m_Size;
          if ( roster.m_who.m_Size == roster.m_who.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&roster.m_who.m_Memory, 1);
            m_Size = roster.m_who.m_Size;
          }
          roster.m_who.m_Size = m_Size + 1;
          v9 = &roster.m_who.m_Memory.m_pMemory[v12];
          if ( v9 != 0 )
            *v9 = v7;
        }
        m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
        m_Head = m_pMemory[v5].m_Next;
      }
      while ( m_Head != 0xFFFF );
      if ( roster.m_who.m_Size > 0 )
      {
        v10 = 0;
        v11 = 0;
        do
        {
          (*(roster.m_who.m_Memory.m_pMemory[v10]->_vptr_INextBotEventResponder + 57))(
            &roster.m_who.m_Memory.m_pMemory[v10]->INextBot,
            pNPC);
          ++v11;
          ++v10;
        }
        while ( roster.m_who.m_Size > v11 );
      }
    }
    if ( (roster.m_who.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&roster.m_who.m_Memory);
      if ( (roster.m_who.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&roster.m_who.m_Memory);
    }
  }
}


// DeAggroUnitsAggroedOn  (line 523, @0x00000000027bb580, libserver.so)  // inlines: AddToTail, CDOTABaseNPCCollector, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, Element, ForEachBot<CDOTABaseNPCCollector>, GetTeamNumber, GrowMemory, Purge, RemoveAll, ToDOTABaseNPC, operator(), operator[], ~CDOTABaseNPCCollector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: UnitFilter, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: DOTA_CreateIllusions, CDOTABehaviorCommandMoveToTargetToAttack::OnStart, CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart
void __fastcall DeAggroUnitsAggroedOn(CDOTA_BaseNPC *pNPC, bool bConsiderPlayerUnits)
{
  int m_Value; // eax
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  CDOTA_BaseNPC *v8; // r12
  int m_Size; // eax
  CDOTA_BaseNPC **v10; // rax
  __int64 v11; // rbx
  CDOTA_BaseNPC *v12; // rax
  int v13; // [rsp+8h] [rbp-68h]
  CDOTABaseNPCCollector roster; // [rsp+10h] [rbp-60h] BYREF

  if ( pNPC != 0 )
  {
    m_Value = pNPC->m_iTeamNum.m_Value;
    roster.m_who.m_Size = 0;
    roster.m_who.m_Memory.m_pMemory = 0;
    roster.m_who.m_Memory.m_nAllocationCount = 0;
    roster.m_who.m_Memory.m_nGrowSize = 0;
    roster.m_myTeam = m_Value;
    roster.m_iTeamFilter = 2;
    roster.m_iTypeFilter = 55;
    roster.m_iFlagFilter = &stru_40050;
    m_Head = g_NextBotManager.m_botList.m_Head;
    if ( m_Head != 0xFFFF )
    {
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      do
      {
        v6 = m_Head;
        v7 = (*(m_pMemory[v6].m_Element->_vptr_INextBotEventResponder + 66))(m_pMemory[v6].m_Element);
        v8 = v7;
        if ( v7 == 0 || *(v7 + 339) == 0 )
          v8 = 0;
        if ( UnitFilter(v8, roster.m_iTeamFilter, roster.m_iTypeFilter, roster.m_iFlagFilter, roster.m_myTeam) == 0 )
        {
          m_Size = roster.m_who.m_Size;
          v13 = roster.m_who.m_Size;
          if ( roster.m_who.m_Size == roster.m_who.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&roster.m_who.m_Memory, 1);
            m_Size = roster.m_who.m_Size;
          }
          roster.m_who.m_Size = m_Size + 1;
          v10 = &roster.m_who.m_Memory.m_pMemory[v13];
          if ( v10 != 0 )
            *v10 = v8;
        }
        m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
        m_Head = m_pMemory[v6].m_Next;
      }
      while ( m_Head != 0xFFFF );
      if ( roster.m_who.m_Size > 0 )
      {
        v11 = 0;
        do
        {
          v12 = roster.m_who.m_Memory.m_pMemory[v11];
          if ( v12->m_iIsControllableByPlayer64.m_Value == 0 || bConsiderPlayerUnits )
            (*(v12->_vptr_INextBotEventResponder + 58))(&v12->INextBot, pNPC);
          ++v11;
        }
        while ( roster.m_who.m_Size > v11 );
      }
    }
    if ( (roster.m_who.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&roster.m_who.m_Memory);
      if ( (roster.m_who.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&roster.m_who.m_Memory);
    }
  }
}


// EntityDistanceSort  (line 546, @0x00000000027a9970, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2DSqr, LookupEntity, VectorSubtract, operator CEntityInstance*, operator-, operator->
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList, s_vSortReferenceLocation
int __fastcall EntityDistanceSort(const EHANDLE *p1, const EHANDLE *p2)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v10; // rdi
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const Vector *v13; // rax
  float v15; // [rsp+Ch] [rbp-14h]

  m_Index = p1->m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = p1->m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p1->m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[v6 & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v10 = 0;
  if ( p2->m_Index + 2 > 1 )
  {
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p2->m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v12 = &v11[p2->m_Index & 0x1FF];
      if ( v12 != 0 && p2->m_Index == v12->m_EHandle.m_Index )
        v10 = v12->m_pInstance;
    }
  }
  v15 = ((AbsOrigin->x - s_vSortReferenceLocation.x) * (AbsOrigin->x - s_vSortReferenceLocation.x))
      + ((AbsOrigin->y - s_vSortReferenceLocation.y) * (AbsOrigin->y - s_vSortReferenceLocation.y));
  v13 = CBaseEntity::GetAbsOrigin(v10);
  return 2
       * ((((v13->x - s_vSortReferenceLocation.x) * (v13->x - s_vSortReferenceLocation.x))
         + ((v13->y - s_vSortReferenceLocation.y) * (v13->y - s_vSortReferenceLocation.y))) <= v15)
       - 1;
}


// EntityDistanceSortBackwards  (line 557, @0x00000000027a9aa0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2DSqr, LookupEntity, VectorSubtract, operator CEntityInstance*, operator-, operator->
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList, s_vSortReferenceLocation
int __fastcall EntityDistanceSortBackwards(const EHANDLE *p1, const EHANDLE *p2)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v10; // rdi
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const Vector *v13; // rax
  float v15; // [rsp+Ch] [rbp-14h]

  m_Index = p1->m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = p1->m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p1->m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[v6 & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v10 = 0;
  if ( p2->m_Index + 2 > 1 )
  {
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p2->m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v12 = &v11[p2->m_Index & 0x1FF];
      if ( v12 != 0 && p2->m_Index == v12->m_EHandle.m_Index )
        v10 = v12->m_pInstance;
    }
  }
  v15 = ((AbsOrigin->x - s_vSortReferenceLocation.x) * (AbsOrigin->x - s_vSortReferenceLocation.x))
      + ((AbsOrigin->y - s_vSortReferenceLocation.y) * (AbsOrigin->y - s_vSortReferenceLocation.y));
  v13 = CBaseEntity::GetAbsOrigin(v10);
  return 2
       * ((((v13->x - s_vSortReferenceLocation.x) * (v13->x - s_vSortReferenceLocation.x))
         + ((v13->y - s_vSortReferenceLocation.y) * (v13->y - s_vSortReferenceLocation.y))) > v15)
       - 1;
}


// SortEHANDLEVectorByLocation  (line 568, @0x00000000027b4c80, libserver.so)  // inlines: operator=
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Sort
// callers: CDOTA_BotMode_Assemble::CalculateDesiredLocation, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Farm::GetDesire, CDOTA_BotMode_PushTower::Think, CDOTA_TeamCommander::UpdateRoshanDesire, CDOTA_TeamCommander::UpdateDefendLaneDesires, CDOTA_TeamCommander::UpdatePushLaneDesires, CDOTA_BotMode_TeamRoam::CalculateDesiredLocation, CDOTA_TeamCommander::UpdateItemsDesire, CDOTA_BotMode_TeamRoam::Think, CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_HandOfMidas::GetCurrentUsageDesire (48 total)
// globals: s_vSortReferenceLocation, EntityDistanceSort(CHandle<CBaseEntity> const*,CHandle<CBaseEntity> const*), EntityDistanceSortBackwards(CHandle<CBaseEntity> const*,CHandle<CBaseEntity> const*)
void __fastcall SortEHANDLEVectorByLocation(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *const hEntityList,
        const Vector *const vLocation,
        bool bFurthestFirst)
{
  s_vSortReferenceLocation = *vLocation;
  if ( bFurthestFirst )
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Sort(
      hEntityList,
      EntityDistanceSortBackwards);
  else
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Sort(hEntityList, EntityDistanceSort);
}


// EntityHealthSort  (line 585, @0x00000000027a98a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
int __fastcall EntityHealthSort(const EHANDLE *p1, const EHANDLE *p2)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  int Health; // eax
  const CBaseEntity *v10; // rdi
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx

  m_Index = p1->m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = p1->m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p1->m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[v6 & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  Health = CBaseEntity::GetHealth(m_pInstance);
  v10 = 0;
  if ( p2->m_Index + 2 > 1 )
  {
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p2->m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v12 = &v11[p2->m_Index & 0x1FF];
      if ( v12 != 0 && p2->m_Index == v12->m_EHandle.m_Index )
        v10 = v12->m_pInstance;
    }
  }
  return 2 * (Health >= CBaseEntity::GetHealth(v10)) - 1;
}


// SortEHANDLEVectorByHealth  (line 593, @0x00000000027b4cd0, libserver.so)
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Sort
// callers: CDOTA_TeamCommander::DoCreepHealthAnalysis, CDOTA_Bot_AbilityUsage_Lich_DarkRitual::GetCurrentUsageDesire, CDOTA_BotMode_Attack_WarlockGolem::Think, CDOTA_BotMode_Attack_WitchDoctor_DeathWard::Think, CDOTA_BotMode_GenericMinion::Think, CDOTA_Bot_AbilityUsage_Warlock_ShadowWord::GetCurrentUsageDesire
// globals: EntityHealthSort(CHandle<CBaseEntity> const*,CHandle<CBaseEntity> const*)
void __fastcall SortEHANDLEVectorByHealth(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *const hEntityList)
{
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Sort(hEntityList, EntityHealthSort);
}


// FindUnitsInRadius  (line 600, @0x00000000027cbc00, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyArray, CopyConstruct<CHandle<CBaseEntity> >, Element, EnsureCapacity, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, Length2D, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, Set, Shuffle, Sort, ToDOTABaseNPC, V_swap<CHandle<CBaseEntity> >, VectorSubtract, __final_insertion_sort<CHandle<CBaseEntity>*>, __lg, __unguarded_insertion_sort<CHandle<CBaseEntity>*>, __unguarded_linear_insert<CHandle<CBaseEntity>*>, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator->, operator<, operator=, operator==<CBaseEntity>, operator[], sort<CHandle<CBaseEntity>*>, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CEntityHandle::operator CEntityInstance*, UnitFilter, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemoryFixedGrowable<CHandle<CBaseEntity>, 50ul, int> >::SetCount, std::__introsort_loop<CHandle<CBaseEntity>*, long int>, std::__insertion_sort<CHandle<CBaseEntity>*>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, RandomInt, CBaseEntity::GetAbsOrigin, CUtlMemory<CHandle<CBaseEntity>, int>::EnsureCapacity, CGridNav::PrepareObstructionManager (19 total)
// callers: CDOTA_ActionRunner::SelectActionTargets, CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CDOTA_Modifier_Creature_HybridFlyer::OnUnitMoved, CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink, CDOTA_Ability_Slithereen_Riptide::OnSpellStart, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, CDOTAGamerules::IsPingOnTeammate, CDOTAGamerules::Defeated, CDOTAGamerules::State_Enter_PRE_GAME, CDOTA_Modifier_Radar_Thinker::OnIntervalThink, CDOTAHLTVDirector::TryToGenerateTeleportEvent, CDOTAHLTVDirector::StartRandomShot (462 total)
// globals: g_pDOTAUnitFilterCache, CEntityHandle::gm_pEntityList
void __fastcall FindUnitsInRadius(
        int iTeamNumber,
        const Vector *const vPosition,
        CDOTA_BaseNPC *pCacheNPC,
        float flRadius,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pEntities,
        int iTeamFilter,
        int iTypeFilter,
        int iFlagFilter,
        int iOrder,
        bool bCanGrowCache)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v10; // r15
  const Vector *v11; // r14
  unsigned int v13; // ebx
  int v15; // eax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v16; // r13
  int m_Size; // eax
  int v18; // esi
  __int64 v19; // r12
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // r15
  CEntityIdentity *m_pEntity; // rsi
  __int16 v23; // cx
  __int64 v24; // r15
  int v25; // eax
  EHANDLE *v26; // rax
  int v27; // r12d
  CHandle<CBaseEntity> *m_pMemory; // rbx
  unsigned __int64 v29; // rax
  CHandle<CBaseEntity> *v30; // rbx
  CHandle<CBaseEntity> *v31; // r12
  __int64 v32; // r13
  unsigned __int64 v33; // rax
  CHandle<CBaseEntity> *v34; // rsi
  uint32 m_Index; // r9d
  CHandle<CBaseEntity> *v36; // rax
  uint32 v37; // edx
  CHandle<CBaseEntity> *i; // rcx
  __int64 v39; // r12
  uint32 j; // eax
  CEntityInstance *v41; // rsi
  CEntityIdentity *v42; // rdx
  CEntityIdentity *v43; // rdx
  __int64 v44; // r13
  int v45; // eax
  CHandle<CBaseEntity> *v46; // rax
  CEntityInstance *m_pInstance; // rdi
  uint32 *v48; // rdx
  uint32 v49; // ebx
  __int16 v50; // si
  CEntityIdentity *v51; // rdx
  CEntityIdentity *v52; // rdx
  uint32 v53; // eax
  int v54; // esi
  __int64 v55; // r12
  int v56; // ebx
  int v57; // eax
  CHandle<CBaseEntity> *v58; // rdx
  CHandle<CBaseEntity> *v59; // rax
  CHandle<CBaseEntity> *v60; // rdx
  uint32 v61; // ecx
  int v62; // edx
  bool v63; // al
  int v64; // r13d
  __int64 v65; // rbx
  const CBaseEntity *v66; // rdi
  CHandle<CBaseEntity> *v67; // rdx
  uint32 v68; // eax
  __int16 v69; // si
  CEntityIdentity *v70; // rdx
  CEntityIdentity *v71; // rdx
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v73; // rdi
  __int64 v74; // r13
  CHandle<CBaseEntity> *v75; // rdx
  float v76; // xmm0_4
  float v77; // xmm1_4
  uint32 v78; // eax
  __int16 v79; // si
  CEntityIdentity *v80; // rdx
  CEntityIdentity *v81; // rdx
  const Vector *v82; // rax
  float v83; // xmm0_4
  CHandle<CBaseEntity> *v84; // rax
  CHandle<CBaseEntity> *v85; // r13
  CHandle<CBaseEntity> *v86; // r12
  int v87; // eax
  __int64 v88; // r12
  int v89; // r13d
  CObstructionObject *m_pObstructionObject; // rbx
  __int64 v91; // rax
  int v92; // edx
  __int16 v93; // cx
  __int64 v94; // rbx
  int v95; // eax
  EHANDLE *v96; // rax
  CHandle<CBaseEntity> *v97; // rax
  int iGapa; // [rsp+0h] [rbp-200h]
  CUtlMemory<CHandle<CBaseEntity>,int> *iGapb; // [rsp+0h] [rbp-200h]
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *bSwapped; // [rsp+8h] [rbp-1F8h]
  char bSwappeda; // [rsp+8h] [rbp-1F8h]
  float flDista; // [rsp+14h] [rbp-1ECh]
  EHANDLE hLastValue; // [rsp+20h] [rbp-1E0h] BYREF
  CollisionResultList_t intersectionResults; // [rsp+30h] [rbp-1D0h] BYREF
  unsigned __int64 v109; // [rsp+1C8h] [rbp-38h]

  v10 = pEntities;
  v11 = vPosition;
  v109 = __readfsqword(0x28u);
  v13 = 0;
  if ( flRadius == -1.0 )
  {
    bSwapped = &pEntities->m_Memory;
    do
    {
      v15 = iTypeFilter;
      if ( _bittest(&v15, v13) )
      {
        v16 = &g_pDOTAUnitFilterCache->m_unitcategories[v13];
        m_Size = v16->m_Size;
        if ( v16->m_Size != 0 )
        {
          v18 = m_Size + pEntities->m_Size;
          if ( v18 > pEntities->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::EnsureCapacity(bSwapped, v18);
            m_Size = v16->m_Size;
          }
          if ( m_Size > 0 )
          {
            v19 = 0;
            do
            {
              v20 = CEntityHandle::operator CEntityInstance *(&v16->m_Memory.m_pMemory[v19]);
              v21 = v20;
              if ( v20 != 0
                && v20->m_bIsDOTANPC
                && !v20->m_bIsPhantom.m_Value
                && !v20->m_bIsWaitingToSpawn.m_Value
                && v20->m_iTeamNum.m_Value > 1u
                && UnitFilter(v20, iTeamFilter, -1, iFlagFilter, iTeamNumber) == 0 )
              {
                hLastValue.m_Index = -1;
                m_pEntity = v21->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v23 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  hLastValue.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                     | v23 & 0x7FFF;
                }
                v24 = pEntities->m_Size;
                v25 = pEntities->m_Size;
                if ( v24 == pEntities->m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(bSwapped, 1);
                  v25 = pEntities->m_Size;
                }
                pEntities->m_Size = v25 + 1;
                v26 = &pEntities->m_Memory.m_pMemory[v24];
                if ( v26 != 0 )
                  v26->m_Index = hLastValue.m_Index;
              }
              ++v19;
            }
            while ( v16->m_Size > v19 );
          }
        }
      }
      ++v13;
    }
    while ( v13 != 6 );
    v10 = pEntities;
    intersectionResults.m_Size = 0;
    v27 = pEntities->m_Size;
    m_pMemory = pEntities->m_Memory.m_pMemory;
    intersectionResults.m_Memory.m_nAllocationCount = 50;
    v11 = vPosition;
    intersectionResults.m_Memory.m_pMemory = &intersectionResults.m_Memory.m_FixedMemory;
    intersectionResults.m_Memory.m_nGrowSize = 0x80000000;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemoryFixedGrowable<CHandle<CBaseEntity>,50ul,int>>::SetCount(
      &intersectionResults,
      v27);
    if ( v27 > 0 )
    {
      v29 = 0;
      do
      {
        *(&intersectionResults.m_Memory.m_pMemory->m_RecordType + v29) = m_pMemory[v29 / 4];
        v29 += 4LL;
      }
      while ( v29 != 4LL * (v27 - 1) + 4 );
    }
    v30 = intersectionResults.m_Memory.m_pMemory;
    v31 = (&intersectionResults.m_Memory.m_pMemory->m_RecordType + intersectionResults.m_Size);
    if ( intersectionResults.m_Memory.m_pMemory != v31 )
    {
      v32 = 4LL * intersectionResults.m_Size;
      _BitScanReverse64(&v33, v32 >> 2);
      std::__introsort_loop<CHandle<CBaseEntity> *,long>(
        intersectionResults.m_Memory.m_pMemory,
        (intersectionResults.m_Memory.m_pMemory + v32),
        2 * (63LL - (v33 ^ 0x3F)));
      if ( v32 <= 67 )
      {
        std::__insertion_sort<CHandle<CBaseEntity> *>(v30, v31);
      }
      else
      {
        std::__insertion_sort<CHandle<CBaseEntity> *>(v30, v30 + 16);
        if ( v31 != &v30[16] )
        {
          v34 = v30 + 16;
          do
          {
            while ( 1 )
            {
              m_Index = v34->m_Index;
              v36 = v34 - 1;
              v37 = v34[-1].m_Index;
              if ( v34->m_Index < v37 )
                break;
              v97 = v34++;
              v97->m_Index = m_Index;
              if ( v31 == v34 )
                goto LABEL_37;
            }
            for ( i = v34; ; i = v36-- )
            {
              i->m_Index = v37;
              v37 = v36[-1].m_Index;
              if ( m_Index >= v37 )
                break;
            }
            ++v34;
            v36->m_Index = m_Index;
          }
          while ( v31 != v34 );
        }
      }
    }
LABEL_37:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(v10);
    hLastValue.m_Index = -1;
    if ( intersectionResults.m_Size > 0 )
    {
      v39 = 0;
      for ( j = -1; ; j = hLastValue.m_Index )
      {
        m_pInstance = 0;
        v48 = (&intersectionResults.m_Memory.m_pMemory->m_RecordType + v39);
        v49 = *v48;
        if ( *v48 + 2 > 1 )
        {
          v50 = *v48;
          v51 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v48 >> 9) & 0x3F];
          if ( v51 != 0 )
          {
            v52 = &v51[v50 & 0x1FF];
            if ( v52 != 0 && v49 == v52->m_EHandle.m_Index )
              m_pInstance = v52->m_pInstance;
          }
        }
        v41 = 0;
        if ( j + 2 > 1 )
        {
          v42 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hLastValue.m_Index) >> 9) & 0x3F];
          if ( v42 != 0 )
          {
            v43 = &v42[hLastValue.m_Index & 0x1FF];
            if ( v43 != 0 && j == v43->m_EHandle.m_Index )
              v41 = v43->m_pInstance;
          }
        }
        if ( m_pInstance != v41 )
        {
          v44 = v10->m_Size;
          hLastValue.m_Index = v49;
          v45 = v44;
          if ( v44 == v10->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v10->m_Memory, 1);
            v45 = v10->m_Size;
          }
          v10->m_Size = v45 + 1;
          v46 = &v10->m_Memory.m_pMemory[v44];
          if ( v46 != 0 )
            v46->m_Index = v49;
        }
        if ( intersectionResults.m_Size <= ++v39 )
          break;
      }
    }
    intersectionResults.m_Size = 0;
    v53 = intersectionResults.m_Memory.m_nGrowSize & 0xC0000000;
    if ( intersectionResults.m_Memory.m_nAllocationCount < 0
      || intersectionResults.m_Memory.m_pMemory == &intersectionResults.m_Memory.m_FixedMemory )
    {
      if ( v53 == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&intersectionResults.m_Memory);
    }
    else if ( intersectionResults.m_Memory.m_pMemory != 0 && v53 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
  else
  {
    CGridNav::PrepareObstructionManager(
      &g_GridNav,
      flRadius,
      0x10u,
      0x40u,
      ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
      0.0);
    intersectionResults.m_Size = 0;
    CUtlMemoryFixedGrowable<IntersectionRecord_t,16ul,int>::CUtlMemoryFixedGrowable(
      &intersectionResults.m_Memory,
      0,
      16);
    if ( pCacheNPC != 0 )
    {
      CDOTA_BaseNPC::CheckForCollisionsWithNPCs(pCacheNPC, v11, &intersectionResults, bCanGrowCache, 0);
    }
    else
    {
      hLastValue.m_Index = -2;
      CGridNav::CheckForCollisions(&g_GridNav, v11, &intersectionResults, &hLastValue.m_Index, 0);
    }
    iGapb = &v10->m_Memory;
    v87 = intersectionResults.m_Size;
    if ( intersectionResults.m_Size > v10->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::EnsureCapacity(iGapb, intersectionResults.m_Size);
      v87 = intersectionResults.m_Size;
    }
    v88 = 0;
    v89 = 0;
    if ( v87 > 0 )
    {
      do
      {
        m_pObstructionObject = intersectionResults.m_Memory.m_pMemory[v88].m_pObsRec->m_pObstructionObject;
        if ( m_pObstructionObject != 0
          && m_pObstructionObject != &stru_10.m_PVSBits.m_Ints[231]
          && UnitFilter(
               &m_pObstructionObject[-86].m_pObstructionRecord,
               iTeamFilter,
               iTypeFilter,
               iFlagFilter,
               iTeamNumber) == 0
          && BYTE4(m_pObstructionObject[4].m_pObstructionRecord) == 0 )
        {
          hLastValue.m_Index = -1;
          v91 = *&m_pObstructionObject[-86].m_nObstructionProperties;
          if ( v91 != 0 )
          {
            v92 = (*(v91 + 16) >> 15) - (*(v91 + 48) & 1);
            v93 = 0x7FFF;
            if ( *(v91 + 16) != -1 )
              v93 = *(v91 + 16) & 0x7FFF;
            LOWORD(hLastValue.m_Index) = v93 | hLastValue.m_Index & 0x8000;
            hLastValue.m_Index = (v92 << 15) | hLastValue.m_Index & 0x7FFF;
          }
          v94 = v10->m_Size;
          v95 = v10->m_Size;
          if ( v94 == v10->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(iGapb, 1);
            v95 = v10->m_Size;
          }
          v10->m_Size = v95 + 1;
          v96 = &v10->m_Memory.m_pMemory[v94];
          if ( v96 != 0 )
            v96->m_Index = hLastValue.m_Index;
        }
        ++v89;
        ++v88;
      }
      while ( intersectionResults.m_Size > v89 );
    }
    CUtlVectorBase<IntersectionRecord_t,CUtlMemoryFixedGrowable<IntersectionRecord_t,16ul,int>>::~CUtlVectorBase(&intersectionResults);
  }
  if ( iOrder != 0 )
  {
    v62 = v10->m_Size;
    iGapa = v10->m_Size;
    v63 = v10->m_Size > 1;
    while ( 1 )
    {
      if ( v63 )
        iGapa = (iGapa / 1.3);
      if ( iGapa < v62 )
        break;
      bSwappeda = 0;
LABEL_93:
      v63 = iGapa > 1;
      if ( bSwappeda == 0 && iGapa <= 1 )
        return;
      v62 = v10->m_Size;
    }
    v64 = iGapa;
    v65 = 0;
    bSwappeda = 0;
    while ( 1 )
    {
      v66 = 0;
      v67 = &v10->m_Memory.m_pMemory[v65];
      v68 = v67->m_Index;
      if ( v67->m_Index + 2 > 1 )
      {
        v69 = v67->m_Index;
        v70 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v67->m_Index) >> 9) & 0x3F];
        if ( v70 != 0 )
        {
          v71 = &v70[v69 & 0x1FF];
          if ( v71 != 0 && v68 == v71->m_EHandle.m_Index )
            v66 = v71->m_pInstance;
        }
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(v66);
      v73 = 0;
      v74 = v64;
      v75 = &v10->m_Memory.m_pMemory[v74];
      v76 = (AbsOrigin->x - v11->x) * (AbsOrigin->x - v11->x);
      v77 = (AbsOrigin->y - v11->y) * (AbsOrigin->y - v11->y);
      v78 = v75->m_Index;
      flDista = fsqrt(v76 + v77);
      if ( v75->m_Index + 2 > 1 )
      {
        v79 = v75->m_Index;
        v80 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v75->m_Index) >> 9) & 0x3F];
        if ( v80 != 0 )
        {
          v81 = &v80[v79 & 0x1FF];
          if ( v81 != 0 && v78 == v81->m_EHandle.m_Index )
            v73 = v81->m_pInstance;
        }
      }
      v82 = CBaseEntity::GetAbsOrigin(v73);
      v83 = fsqrt(((v82->x - v11->x) * (v82->x - v11->x)) + ((v82->y - v11->y) * (v82->y - v11->y)));
      if ( iOrder != 1 )
        break;
      if ( flDista > v83 )
        goto LABEL_89;
LABEL_76:
      v64 = iGapa + 1 + v65++;
      if ( v10->m_Size <= v64 )
        goto LABEL_93;
    }
    if ( iOrder != 2 || v83 <= flDista )
      goto LABEL_76;
LABEL_89:
    v84 = v10->m_Memory.m_pMemory;
    bSwappeda = 1;
    v85 = &v84[v74];
    v86 = &v84[v65];
    LODWORD(v84) = v86->m_Index;
    v86->m_Index = v85->m_Index;
    v85->m_Index = v84;
    goto LABEL_76;
  }
  v54 = v10->m_Size;
  v55 = 0;
  v56 = 0;
  if ( v10->m_Size > 1 )
  {
    do
    {
      v57 = RandomInt(v56, (v54 - 1));
      if ( v56 != v57 )
      {
        v58 = v10->m_Memory.m_pMemory;
        v59 = &v58[v57];
        v60 = &v58[v55];
        v61 = v60->m_Index;
        v60->m_Index = v59->m_Index;
        v59->m_Index = v61;
      }
      v54 = v10->m_Size;
      ++v56;
      ++v55;
    }
    while ( v10->m_Size > v56 );
  }
}


// FindUnitsInRadius_Script  (line 722, @0x00000000027cc650, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EntityToHScript, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, Purge, TakeOwnership, ToDOTABaseNPC, ToEnt, ToHScript, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: HScriptToEntity<CBaseEntity>, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
__int64 *__fastcall FindUnitsInRadius_Script(
        __int64 *iTeamNumber,
        const Vector *const vPosition,
        const Vector *hCacheUnit,
        float flRadius,
        HSCRIPT iTeamFilter,
        int iTypeFilter,
        int iFlagFilter,
        int iOrder,
        int bCanGrowCache,
        bool bCanGrowCachea)
{
  CBaseEntity *v13; // rax
  CDOTA_BaseNPC *v14; // rdx
  __int64 v15; // r12
  int i; // ebx
  __int16 v17; // cx
  CEntityIdentity *v18; // rax
  __int64 v19; // rcx
  bool v20; // zf
  CEntityIdentity *v21; // rcx
  HSCRIPT m_hScope; // rax
  IScriptVM *v23; // rdi
  void (__fastcall *v24)(IScriptVM *, __int64, _QWORD, HSCRIPT *); // r13
  CHandle<CBaseEntity> *v25; // rax
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // r15
  __int64 varTable_8; // [rsp+40h] [rbp-70h]
  int iTeamNumbera; // [rsp+48h] [rbp-68h]
  HSCRIPT v34; // [rsp+50h] [rbp-60h] BYREF
  __int16 v35; // [rsp+58h] [rbp-58h]
  __int16 v36; // [rsp+5Ah] [rbp-56h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+60h] [rbp-50h] BYREF

  *(iTeamNumber + 5) = 0;
  *iTeamNumber = 0;
  *(iTeamNumber + 4) = 0;
  iTeamNumbera = vPosition;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, iTeamNumber);
  varTable_8 = *iTeamNumber;
  v13 = HScriptToEntity<CBaseEntity>(iTeamFilter);
  if ( v13 != 0 && v13->m_bIsDOTANPC )
    v14 = v13;
  else
    v14 = 0;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(
    iTeamNumbera,
    hCacheUnit,
    v14,
    flRadius,
    &hEntities,
    iTypeFilter,
    iFlagFilter,
    iOrder,
    bCanGrowCache,
    bCanGrowCachea);
  v15 = 0;
  for ( i = 0; hEntities.m_Size > i; ++v15 )
  {
    v23 = g_pScriptVM;
    v24 = *(*g_pScriptVM + 248LL);
    v25 = &hEntities.m_Memory.m_pMemory[v15];
    m_Index = hEntities.m_Memory.m_pMemory[v15].m_Index;
    if ( m_Index + 2 > 1
      && (v17 = v25->m_Index,
          (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F]) != 0) )
    {
      v19 = v17 & 0x1FF;
      v20 = &v18[v19] == 0;
      v21 = &v18[v19];
      m_hScope = 0;
      if ( !v20 && m_Index == v21->m_EHandle.m_Index )
      {
        m_pInstance = v21->m_pInstance;
        if ( v21->m_pInstance != 0 )
        {
          m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( m_hScope == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v21->m_pInstance, 0);
            v23 = g_pScriptVM;
            m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
    else
    {
      m_hScope = 0;
    }
    v35 = 31;
    v36 = 0;
    v34 = m_hScope;
    v24(v23, varTable_8, i, &v34);
    if ( (v36 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v34);
    ++i;
  }
  if ( *(iTeamNumber + 4) == 31 )
    *(iTeamNumber + 4) = 36;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  return iTeamNumber;
}


// DOTA_PrecacheAbilityByNameSync  (line 740, @0x00000000027bada0, libserver.so)
// calls: DOTA_PrecacheAbilityByNameSync
// callers: CDOTA_ActionRunner::PrecacheAction_AddAbility, CDOTA_BaseNPC::Precache
void __fastcall DOTA_PrecacheAbilityByNameSync(const char *pAbilityName, const CEntityPrecacheContext *pContext)
{
  if ( pContext != 0 )
    DOTA_PrecacheAbilityByNameSync(pAbilityName, pContext->m_pManifest);
  else
    DOTA_PrecacheAbilityByNameSync(pAbilityName, 0);
}


// DOTA_PrecacheAbilityByNameSync  (line 745, @0x00000000027ba860, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<char const*>, AddToTail, Allocate, Base, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, CopyData, Element, FindKeyHash, Free, GetEntityClass, Init, OverrideAllocator, PrecacheOther, Release, ReleaseEntitySpawnerEntityVariantAllocator, SetClassName, SetName, SetValue, V_strlen, memcpy, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetName, KeyValues::GetString, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue, CEntityKeyValuesModifyScope::Release, UTIL_PrecacheOther, CUtlString::FreeMemoryBlock (23 total)
// callers: DOTA_PrecacheAbilityByNameSync
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall DOTA_PrecacheAbilityByNameSync(const char *pAbilityName, IEntityResourceManifest *pManifest)
{
  CEntitySystem *v3; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v5; // rdx
  char v6; // al
  CDOTAGameManager *v7; // rax
  KeyValues *AbilityByName; // rax
  KeyValues *v9; // r13
  const char *Name; // rax
  const char *String; // r15
  CEntityKeyValues *m_pEntityKeyValues; // r13
  CUtlScratchMemoryPool *v13; // rdi
  CEntityKeyValues *v14; // r12
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // cx
  __int64 v18; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v21; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rax
  uint16 m_flags; // ax
  void *v26; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r13
  __int16 v31; // ax
  void *v32; // rax
  signed int v33; // [rsp+4h] [rbp-ECh]
  __int64 v34; // [rsp+8h] [rbp-E8h]
  __int64 v35; // [rsp+10h] [rbp-E0h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v36; // [rsp+10h] [rbp-E0h]
  signed int v37; // [rsp+10h] [rbp-E0h]
  CEntitySpawner<CDOTABaseAbility> spawner; // [rsp+20h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_40D75B0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v3 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v3->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v3);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v5 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v5;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTABaseAbilityClass;
  if ( g_pApplication != 0 )
    v6 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v6 = 0;
  spawner.m_bValidateKeys = v6;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  v7 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v7, pAbilityName);
  v9 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    Name = KeyValues::GetName(AbilityByName);
    String = KeyValues::GetString(v9, "BaseClass", Name, 0, 0);
  }
  else
  {
    String = pAbilityName;
  }
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_6;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_27:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v21 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 9 )
        m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -971301790;
    v35 = v21;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v24 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v24 = 0;
    v34 = v35;
    v36 = &v24[v35];
    m_flags = v36->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v36->m_value.m_flags = m_flags & 0xFFFE;
    v36->m_value.m_uint64 = 0;
    v36->m_value.m_type = 30;
    if ( String != 0 )
    {
      v33 = strlen(String) + 1;
      v26 = CEntityVariantAllocator::Allocate(v33);
      v36->m_value.m_uint64 = v26;
      memcpy(v26, String, v33);
      v36->m_value.m_flags |= 1u;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v27 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v27 = 0;
    v27[v34].m_pAttributeName = 0;
  }
  else
  {
    v17 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v18 = 0;
    while ( 1 )
    {
      if ( v17 != 0 )
      {
        v19 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v17 > 9 )
          v19 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v19 = 0;
      }
      if ( v19[v18] == -971301790 )
        break;
      if ( m_nCount <= ++v18 )
        goto LABEL_27;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v28 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v29 = v18;
      v30 = &v28[v29];
      if ( v28[v29].m_pAttributeName != 0 )
      {
LABEL_41:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v28[v29].m_pAttributeName);
        goto LABEL_6;
      }
    }
    else
    {
      v29 = v18;
      v28 = 0;
      v30 = v29 * 24;
      if ( *(v29 * 24 + 16) != 0 )
        goto LABEL_41;
    }
    v31 = *(v30 + 10);
    if ( (v31 & 1) != 0 )
      *(v30 + 10) = v31 & 0xFFFE;
    *v30 = 0;
    *(v30 + 8) = 30;
    if ( String != 0 )
    {
      v37 = strlen(String) + 1;
      v32 = CEntityVariantAllocator::Allocate(v37);
      *v30 = v32;
      memcpy(v32, String, v37);
      *(v30 + 10) |= 1u;
    }
  }
LABEL_6:
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, String, &spawner.m_scriptClassName);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, 1094168427, pAbilityName);
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    UTIL_PrecacheOther(spawner.m_pEntityKeyValues, pManifest);
  }
  v13 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_40D7590;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v13 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v13);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v14 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v14);
      operator delete(v14);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// Script_AddFOWViewer  (line 759, @0x00000000027a7470, libserver.so)
// calls: CDOTAFogOfWarSystem::AddTempViewer
void __fastcall Script_AddFOWViewer(
        int nTeamID,
        const CFieldPath *vLocation,
        float flRadius,
        float flDuration,
        bool bObstructedVision)
{
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
    nTeamID,
    vLocation,
    flRadius,
    flDuration,
    bObstructedVision);
}


// DOTA_VScript_CreateUnitByName  (line 765, @0x00000000027b9500, libserver.so)  // inlines: DOTAGameRules, EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, DOTA_CreateUnitByName, CEntityInstance::CreatePublicScriptScope, Warning
// strings: "Attempting to create a unit too early, GameRules has not been created yet!."
HSCRIPT __fastcall DOTA_VScript_CreateUnitByName(
        const char *pUnitName,
        const Vector *const vLocation,
        bool bFindClearSpace,
        HSCRIPT hNPCOwner,
        HSCRIPT hUnitOwner,
        int iTeamNumber)
{
  __int64 (__fastcall *v9)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  CDOTA_BaseNPC *v11; // rcx
  __int64 (__fastcall *v12)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *v13; // rax
  __int64 v14; // rax
  CBaseEntity *v15; // r8
  CDOTA_BaseNPC *UnitByName; // rbx
  HSCRIPT result; // rax
  CDOTA_BaseNPC *pEconItemOwner; // [rsp+0h] [rbp-50h]

  if ( g_pGameRules != 0 )
  {
    if ( hNPCOwner != 0 )
    {
      v9 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v11 = v9(g_pScriptVM, hNPCOwner, Script);
    }
    else
    {
      v11 = 0;
    }
    if ( hUnitOwner != 0 )
    {
      pEconItemOwner = v11;
      v12 = *(*g_pScriptVM + 208LL);
      v13 = GetScriptDesc<CEntityInstance>(0);
      v14 = v12(g_pScriptVM, hUnitOwner, v13);
      v11 = pEconItemOwner;
      v15 = v14;
    }
    else
    {
      v15 = 0;
    }
    UnitByName = DOTA_CreateUnitByName(pUnitName, vLocation, bFindClearSpace, v11, v15, iTeamNumber);
    result = 0;
    if ( UnitByName != 0 )
    {
      result = UnitByName->m_pEntity->m_hPublicScope.m_hScope;
      if ( result == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(UnitByName, 0);
        return UnitByName->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
  }
  else
  {
    Warning(
      "Attempting to create a unit too early, GameRules has not been created yet!.",
      vLocation,
      bFindClearSpace,
      hNPCOwner,
      hUnitOwner);
    return 0;
  }
  return result;
}


// DOTA_PrecacheUnitByNameSync  (line 782, @0x00000000027b98d0, libserver.so)
// calls: DOTA_PrecacheUnitByNameSync
// callers: CDOTA_ActionRunner::PrecacheAction_SpawnUnit, CDOTA_Unit_Hero_PhantomAssassin::Precache, CDOTA_Unit_Hero_Pugna::Precache, CDOTA_Unit_Hero_Brewmaster::Precache, CDOTA_Unit_Hero_LoneDruid::Precache, CDOTA_Ability_Elder_Titan_AncestralSpirit::Precache, CDOTA_Unit_Hero_Visage::Precache
void __fastcall DOTA_PrecacheUnitByNameSync(
        const char *pUnitName,
        const CEntityPrecacheContext *pContext,
        int nPlayerID)
{
  if ( pContext != 0 )
    DOTA_PrecacheUnitByNameSync(pUnitName, pContext->m_pManifest, nPlayerID);
  else
    DOTA_PrecacheUnitByNameSync(pUnitName, 0, nPlayerID);
}


// DOTA_VScript_Hero_Spawn  (line 787, @0x00000000027a91f0, libserver.so)  // inlines: DOTAGameRules, EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, DOTA_Hero_Spawn_Synchronous, CEntityInstance::CreatePublicScriptScope, Warning
// strings: "Attempting to create a hero too early, GameRules has not been created yet!."
HSCRIPT __fastcall DOTA_VScript_Hero_Spawn(const char *pUnitName, HSCRIPT hPlayer)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CDOTAPlayer *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *pResult; // [rsp+8h] [rbp-28h]

  if ( g_pGameRules != 0 )
  {
    if ( hPlayer != 0
      && (v4 = *(*g_pScriptVM + 208LL),
          Script = GetScriptDesc<CEntityInstance>(0),
          (v6 = v4(g_pScriptVM, hPlayer, Script)) != 0)
      && (v7 = DOTA_Hero_Spawn_Synchronous(pUnitName, v6)) != 0 )
    {
      if ( v7->m_pEntity->m_hPublicScope.m_hScope != 0 )
      {
        return v7->m_pEntity->m_hPublicScope.m_hScope;
      }
      else
      {
        pResult = v7;
        CEntityInstance::CreatePublicScriptScope(v7, 0);
        return pResult->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    Warning("Attempting to create a hero too early, GameRules has not been created yet!.", hPlayer);
    return 0;
  }
}


// DOTA_CreateUnitByName  (line 806, @0x00000000027b8ea0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawner, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, Set, SetClassName, SetValue, SetValue<CBaseEntity*>, SetValue<CDOTA_BaseNPC*>, SetValue<int>, Spawn, ToDOTABaseNPC, operator CDOTA_BaseNPC*, operator CEntityInstance*, operator!, operator(), operator=, ~CDotaNPCSpawner, ~CEntitySpawner, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, GetClassNameForUnitName, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<CBaseEntity*>, CEntityKeyValues::SetValue<int>, CEntityKeyValues::SetValue<CDOTA_BaseNPC*>, CEntityKeyValues::HasValue (23 total)
// callers: CDOTA_Ability_Healing_Campfire::OnSpellStart, CDOTA_Ability_EnragedWildkin_Tornado::OnSpellStart, CDOTA_Ability_DarkTrollWarlord_RaiseDead::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Purple_PlagueWard::OnSpellStart, DOTA_VScript_CreateUnitByName, CDOTA_ScriptedSpawner::SpawnObserverWard, CDOTA_Ability_Razor_PlasmaField::OnSpellStart, CDOTA_Ability_Juggernaut_HealingWard::OnSpellStart, CDOTA_Ability_ShadowShaman_MassSerpentWard::OnSpellStart, CDOTA_Ability_StormSpirit_StaticRemnant::CreateRemnant, CDOTA_Ability_Beastmaster_CallOfTheWild::OnSpellStart, CDOTA_Ability_Beastmaster_CallOfTheWildBoar::OnSpellStart (43 total)
// strings: "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
CDOTA_BaseNPC *__fastcall DOTA_CreateUnitByName(
        const char *pUnitName,
        const Vector *const vLocation,
        bool bFindClearSpace,
        CDOTA_BaseNPC *pEconItemOwner,
        CBaseEntity *pOwner,
        int iTeamNumber)
{
  CEntitySystem *v8; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v10; // rdx
  char v11; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  const char *ClassNameForUnitName; // rax
  const char *v14; // rbx
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // r9d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v18; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v20; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v22; // si
  int v23; // edx
  CEntitySpawnerContext<CDOTA_BaseNPC> *m_pContext; // rbx
  CEntityKeyValues *j; // r13
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v28; // rdi
  CEntityIdentity *v29; // rax
  CEntityIdentity *v30; // rax
  CDOTA_BaseNPC *m_pInstance; // rbx
  const char *m_pszClassname; // rdx
  bool v34; // [rsp+27h] [rbp-109h]
  int iTeamNumbera; // [rsp+2Ch] [rbp-104h] BYREF
  CBaseEntity *pOwnera; // [rsp+30h] [rbp-100h] BYREF
  CDOTA_BaseNPC *pEconItemOwnera; // [rsp+38h] [rbp-F8h] BYREF
  int v39; // [rsp+40h] [rbp-F0h]
  __int128 vLocationOnGround; // [rsp+50h] [rbp-E0h] OVERLAPPED BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> spawner; // [rsp+60h] [rbp-D0h] BYREF

  pEconItemOwnera = pEconItemOwner;
  pOwnera = pOwner;
  iTeamNumbera = iTeamNumber;
  if ( pUnitName == 0 )
    return 0;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_40FC030;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v8 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v8->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v8);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v10 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v10;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
  if ( g_pApplication != 0 )
    v11 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v11 = 0;
  spawner.m_bValidateKeys = v11;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  spawner._vptr_CEntitySpawnerBase = off_40FC050;
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, pUnitName);
  AppendNPCKeyValues(pUnitName, spawner.m_pEntityKeyValues, 0);
  for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
  ClassNameForUnitName = GetClassNameForUnitName(pUnitName);
  v14 = ClassNameForUnitName;
  if ( ClassNameForUnitName == 0 )
    goto LABEL_38;
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, ClassNameForUnitName);
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, v14, &spawner.m_scriptClassName);
  if ( pOwnera != 0 )
  {
    CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &pOwnera);
    if ( pOwnera != 0 && pOwnera->m_bIsDOTANPC )
    {
      LODWORD(vLocationOnGround) = (*(pOwnera->_vptr_IHandleEntity + 414))();
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &vLocationOnGround);
    }
  }
  if ( pEconItemOwnera != 0 )
    CEntityKeyValues::SetValue<CDOTA_BaseNPC *>(spawner.m_pEntityKeyValues, -1872306864, &pEconItemOwnera);
  if ( iTeamNumbera != 0 )
    CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, -175874245, &iTeamNumbera);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  v39 = -1;
  if ( spawner.m_pEntityKeyValues == 0 )
    goto LABEL_38;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v34 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v18 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v18,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v20 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v22 = 0x7FFF;
      v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v39) = v22 | v39 & 0x8000;
      v39 = (v23 << 15) | v39 & 0x7FFF;
    }
    *&vLocationOnGround = m_pEntity;
    *(&vLocationOnGround + 1) = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      &vLocationOnGround,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v20, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( j = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v28 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v28 - 1);
        (pfn)(v28, v20, j);
      }
    }
  }
  if ( v34 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v39 + 2) > 1
    && (v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v39 >> 9) & 0x3F]) != 0
    && (v30 = &v29[v39 & 0x1FF]) != 0
    && v39 == v30->m_EHandle.m_Index
    && (m_pInstance = v30->m_pInstance, v30->m_pInstance != 0) )
  {
    if ( bFindClearSpace )
    {
      FindClearSpaceForUnit(v30->m_pInstance, *vLocation, 1);
    }
    else
    {
      *&vLocationOnGround = GetPositionOnGround(vLocation, m_pInstance);
      (*(m_pInstance->_vptr_IHandleEntity + 128))(m_pInstance, &vLocationOnGround, 0, 0);
    }
  }
  else
  {
LABEL_38:
    m_pInstance = 0;
  }
  spawner._vptr_CEntitySpawnerBase = off_40FC030;
  CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
  return m_pInstance;
}


// PopulateNPCSpawner<CDotaNPCSpawner<CDOTA_BaseNPC> >  (line 859, @0x00000000027b9970, libserver.so)  // inlines: AddKeyValue<CVariantBase<CEntityVariantAllocator> >, AddToTail, AssignTo, Base, CVariantBase, Element, FindKeyHash, MakeStringToken, SetValue<CVariantBase<CEntityVariantAllocator> >, TempString, ToString, operator=, operator[], ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, GetClassNameForUnitName, CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName, V_stricmp_fast, V_snprintf, VariantFieldTypeName, Warning, MurmurHash2LowerCase, RegisterStringToken, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator> (13 total)
// callers: DOTA_VScript_PrecacheUnitFromTableSync, DOTA_VScript_CreateUnitFromTable
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: jpt_27B9B47, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
bool __fastcall PopulateNPCSpawner<CDotaNPCSpawner<CDOTA_BaseNPC>>(
        CDotaNPCSpawner<CDOTA_BaseNPC> *pSpawner,
        HSCRIPT hTable)
{
  ScriptVariant_t varUnitName; // [rsp+40h] [rbp-60h] BYREF

  varUnitName.m_type = 0;
  varUnitName.m_flags = 0;
  varUnitName.m_uint64 = 0;
  (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "MapUnitName");
  CVariantBase<CVariantDefaultAllocator>::Free(&varUnitName);
  return 0;
}


// CPrecacheUnitFromTableAsyncCallback::CallBackAndDeleteMe  (line 912, @0x00000000027d6a40, libserver.so)  // inlines: CVariantBase, Call<int>, Free, operator=, ~CPrecacheUnitFromTableAsyncCallback, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, operator delete, _Unwind_Resume
void __fastcall CPrecacheUnitFromTableAsyncCallback::CallBackAndDeleteMe(
        CPrecacheUnitFromTableAsyncCallback *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const entities)
{
  HSCRIPT m_hCallback; // rax
  HSCRIPT v5; // rsi
  CVariantBase<CVariantDefaultAllocator> v6; // [rsp+10h] [rbp-30h] BYREF

  m_hCallback = this->m_hCallback;
  if ( this->m_hCallback != 0 )
  {
    if ( hSpawnGroup != 0 )
    {
      v6.m_flags = 0;
      v6.m_type = 5;
      v6.m_uint64 = hSpawnGroup;
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, m_hCallback, &v6, 1, 0, 0, 1);
      CVariantBase<CVariantDefaultAllocator>::Free(&v6);
      v5 = this->m_hCallback;
    }
    else
    {
      v5 = this->m_hCallback;
    }
  }
  else
  {
    v5 = 0;
  }
  (*(*g_pScriptVM + 152LL))(g_pScriptVM, v5);
  operator delete(this);
}


// DOTA_VScript_PrecacheUnitFromTableAsync  (line 925, @0x00000000027bcff0, libserver.so)  // inlines: AddKeyValue<CVariantBase<CEntityVariantAllocator> >, AddNPCKeyValuesForUnit, AddToTail, ApplyContextKeys, AssignTo, Base, CDotaNPCSpawnerAsync, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CPrecacheUnitFromTableAsyncCallback, CUtlAbstractDelegate, CUtlDelegate, CUtlDelegate<CPrecacheUnitFromTableAsyncCallback, CPrecacheUnitFromTableAsyncCallback>, CUtlString, CVariantBase, ClosurePtr, Convert<CPrecacheUnitFromTableAsyncCallback, void (CPrecacheUnitFromTableAsyncCallback::*)(unsigned int, const CUtlVector<CEntityHandle>&), void (detail::GenericClass::*)()>, Element, EntitySpawnerAsyncDesc_t, FastDelegate2, FastDelegate2<CPrecacheUnitFromTableAsyncCallback, CPrecacheUnitFromTableAsyncCallback>, FindKeyHash, MakeStringToken, PopulateNPCSpawner<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> >, PrecacheOther, SetValue, SetValue<CVariantBase<CEntityVariantAllocator> >, TempString, ToString, UtlMakeDelegate<CPrecacheUnitFromTableAsyncCallback, CPrecacheUnitFromTableAsyncCallback, unsigned int, const CUtlVector<CEntityHandle>&, void>, bindmemfunc<CPrecacheUnitFromTableAsyncCallback, void (CPrecacheUnitFromTableAsyncCallback::*)(unsigned int, const CUtlVector<CEntityHandle>&)>, operator=, operator[], ~CDotaNPCSpawnerAsync, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase, GetClassNameForUnitName, CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName, V_stricmp_fast, V_snprintf, VariantFieldTypeName (23 total)
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "false", "true", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: jpt_27BD3EA, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, CPrecacheUnitFromTableAsyncCallback::CallBackAndDeleteMe(uint,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> const&)
void __fastcall DOTA_VScript_PrecacheUnitFromTableAsync(HSCRIPT hTable, HSCRIPT hCallbackFn)
{
  ScriptVariant_t varUnitName; // [rsp+60h] [rbp-150h] BYREF

  varUnitName.m_flags = 0;
  varUnitName.m_type = 0;
  varUnitName.m_uint64 = 0;
  (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "MapUnitName");
  CVariantBase<CVariantDefaultAllocator>::Free(&varUnitName);
}


// DOTA_VScript_PrecacheUnitFromTableSync  (line 941, @0x00000000027b9fe0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawner, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, CVariantBase, Free, GetEntityClass, Init, OverrideAllocator, PrecacheOther, SetValue, TempString, ~CDotaNPCSpawner, ~CEntitySpawner, ~CVariantBase
// calls: CEntityScriptFramework::GetPrecacheContext, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, PopulateNPCSpawner<CDotaNPCSpawner<CDOTA_BaseNPC> >, CEntityKeyValuesModifyScope::Release, UTIL_PrecacheOther, CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase, CVariantBase<CVariantDefaultAllocator>::Free (13 total)
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall DOTA_VScript_PrecacheUnitFromTableSync(HSCRIPT hTable, HSCRIPT hContext)
{
  const CEntityPrecacheContext *PrecacheContext; // rax
  const CEntityPrecacheContext *v4; // r13
  const char *m_uint64; // r15
  CEntitySystem *v6; // rdi
  CUtlScratchMemoryPool *v7; // rax
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v9; // rdx
  char v10; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // r15
  IEntityResourceManifest *m_pManifest; // rbx
  ScriptVariant_t varUnitName; // [rsp+0h] [rbp-E0h] BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> spawner; // [rsp+10h] [rbp-D0h] BYREF

  PrecacheContext = CEntityScriptFramework::GetPrecacheContext(&g_EntityScriptFramework, hContext);
  varUnitName.m_uint64 = 0;
  v4 = PrecacheContext;
  varUnitName.m_type = 0;
  varUnitName.m_flags = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "MapUnitName", &varUnitName) == 0 || varUnitName.m_type != 30 )
    goto LABEL_3;
  m_uint64 = varUnitName.m_uint64;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  spawner._vptr_CEntitySpawnerBase = off_40FBED0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_pContext = 0;
  spawner._vptr_CEntitySpawnerBase = off_40FC030;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pSpawnBatch = 0;
  v6 = g_pEntitySystem;
  v7 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v6->m_entitySpawnerData;
  spawner.m_pPrevAllocator = v7;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v6);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v9 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v9;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
  if ( g_pApplication != 0 )
    v10 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v10 = 0;
  spawner.m_bValidateKeys = v10;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  spawner._vptr_CEntitySpawnerBase = off_40FC050;
  if ( m_uint64 != 0 )
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, m_uint64);
  AppendNPCKeyValues(m_uint64, spawner.m_pEntityKeyValues, 0);
  for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
  if ( !PopulateNPCSpawner<CDotaNPCSpawner<CDOTA_BaseNPC>>(&spawner, hTable) )
  {
    spawner._vptr_CEntitySpawnerBase = off_40FC030;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
LABEL_3:
    if ( (varUnitName.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, varUnitName.m_uint64);
    return;
  }
  if ( v4 != 0 )
    m_pManifest = v4->m_pManifest;
  else
    m_pManifest = 0;
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    UTIL_PrecacheOther(spawner.m_pEntityKeyValues, m_pManifest);
  }
  spawner._vptr_CEntitySpawnerBase = off_40FC030;
  CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
  CVariantBase<CVariantDefaultAllocator>::Free(&varUnitName);
}


// DOTA_VScript_CreateUnitFromTable  (line 956, @0x00000000027ba300, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawner, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CVariantBase, EntityToHScript, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetPublicScriptScope, GetSerialNumber, Init, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, Set, SetValue, Spawn, TempString, ToHScript, operator CDOTA_BaseNPC*, operator!, operator(), operator=, ~CDotaNPCSpawner, ~CEntitySpawner, ~CVProfScope, ~CVariantBase
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, PopulateNPCSpawner<CDotaNPCSpawner<CDOTA_BaseNPC> >, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity (21 total)
// strings: "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
HSCRIPT __fastcall DOTA_VScript_CreateUnitFromTable(HSCRIPT hTable, double a2, vec_t a3)
{
  const char *m_uint64; // r14
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // r14
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // edx
  EntityNetworkingMode_t m_nMode; // r14d
  const char *v13; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v15; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v17; // si
  CEntitySpawnerContext<CDOTA_BaseNPC> *m_pContext; // rbx
  CEntityKeyValues *j; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v22; // rdi
  CDOTA_BaseNPC *v23; // rax
  CEntityInstance *v24; // r14
  HSCRIPT m_hScope; // rbx
  const char *m_pszClassname; // rdx
  bool v28; // [rsp+1Fh] [rbp-111h]
  Vector vLocationa; // [rsp+20h] [rbp-110h]
  CEntityHandle v30; // [rsp+30h] [rbp-100h] BYREF
  ScriptVariant_t varUnitName; // [rsp+40h] [rbp-F0h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-E0h] BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> spawner; // [rsp+60h] [rbp-D0h] BYREF

  varUnitName.m_type = 0;
  varUnitName.m_flags = 0;
  varUnitName.m_uint64 = 0;
  *&vLocationa.x = a2;
  vLocationa.z = a3;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "MapUnitName", &varUnitName) != 0 && varUnitName.m_type == 30 )
  {
    m_uint64 = varUnitName.m_uint64;
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    spawner._vptr_CEntitySpawnerBase = off_40FBED0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    spawner.m_scriptClassName.m_pString = 0;
    spawner._vptr_CEntitySpawnerBase = off_40FC030;
    spawner.m_pContext = 0;
    spawner.m_pSpawnBatch = 0;
    v5 = g_pEntitySystem;
    spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v5->m_entitySpawnerData;
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v5);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    v7 = *&SpawnOriginOffset->m_flMatVal[0][2];
    spawner.m_pEntityKeyValues = 0;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v7;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
    spawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
    if ( g_pApplication != 0 )
      v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v8 = 0;
    spawner.m_bValidateKeys = v8;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*spawner._vptr_CEntitySpawnerBase)(&spawner);
    spawner._vptr_CEntitySpawnerBase = off_40FC050;
    if ( m_uint64 != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, m_uint64);
    AppendNPCKeyValues(m_uint64, spawner.m_pEntityKeyValues, 0);
    for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
      CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
    if ( !PopulateNPCSpawner<CDotaNPCSpawner<CDOTA_BaseNPC>>(&spawner, hTable) )
      goto LABEL_32;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    v30.m_Index = -1;
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v28 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      }
      if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
      {
        m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
        if ( m_pszClassname != 0 )
          CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
      }
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      m_nMode = spawner.m_nMode;
      v13 = CUtlString::Get(&spawner.m_scriptClassName);
      Entity = CEntitySystem::CreateEntity(
                 g_pEntitySystem,
                 spawner.m_hSpawnGroupHandle,
                 spawner.m_pEntityClass,
                 v13,
                 m_nMode,
                 -1,
                 -1,
                 0,
                 0);
      v15 = Entity;
      if ( Entity != 0 )
      {
        m_pEntity = Entity->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v17 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v30.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
        }
        else
        {
          v30.m_Index = -1;
        }
        v32[0] = m_pEntity;
        v32[1] = spawner.m_pEntityKeyValues;
        (*(*g_pGameResourceService + 280LL))(
          g_pGameResourceService,
          spawner.m_hSpawnGroupHandle,
          1,
          v32,
          &spawner.m_mSpawnGroupToWorld);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v15, spawner.m_pEntityKeyValues);
        if ( spawner.m_pSpawnBatch == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        m_pContext = spawner.m_pContext;
        for ( j = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
        {
          m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
          pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
          if ( m_pthis != 0 || pfn != 0 )
          {
            v22 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
            if ( (pfn & 1) != 0 )
              pfn = *(pfn + *v22 - 1);
            (pfn)(v22, v15, j);
          }
        }
      }
      if ( v28 )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
    }
    v23 = CEntityHandle::operator CEntityInstance *(&v30);
    v24 = v23;
    if ( v23 != 0 )
    {
      FindClearSpaceForUnit(v23, vLocationa, 1);
      m_hScope = v24->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(v24, 0);
        m_hScope = v24->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
LABEL_32:
      m_hScope = 0;
    }
    spawner._vptr_CEntitySpawnerBase = off_40FC030;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
  }
  else
  {
    m_hScope = 0;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&varUnitName);
  return m_hScope;
}


// CCreateUnitSpawnCallback::CallBackAndDeleteMe  (line 993, @0x00000000027dbc80, libserver.so)  // inlines: CVariantBase, Call<CVariantBase<CVariantDefaultAllocator> >, Free, Get, GetPublicScriptScope, operator=, ~CCreateUnitSpawnCallback, ~CVariantBase
// calls: FindClearSpaceForUnit, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, operator delete, GetPositionOnGround, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
void __fastcall CCreateUnitSpawnCallback::CallBackAndDeleteMe(
        CCreateUnitSpawnCallback *const this,
        CDOTA_BaseNPC *pDOTANPC,
        const CEntityKeyValues *pKV)
{
  HSCRIPT m_hScope; // r12
  HSCRIPT m_hCallback; // rdx
  IScriptVM *v7; // r14
  HSCRIPT v8; // rsi
  int (**vptr_IHandleEntity)(...); // rax
  HSCRIPT v10; // [rsp+10h] [rbp-70h]
  ScriptVariant_t arg1; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+30h] [rbp-50h] BYREF
  Vector vLocationOnGround; // [rsp+40h] [rbp-40h] BYREF
  Vector PositionOnGround; // 0:kr00_12.12

  if ( pDOTANPC != 0 )
  {
    if ( !this->m_bFindClearSpace )
    {
      PositionOnGround = GetPositionOnGround(&this->m_vLocation, pDOTANPC);
      vptr_IHandleEntity = pDOTANPC->_vptr_IHandleEntity;
      vLocationOnGround = PositionOnGround;
      vptr_IHandleEntity[128](pDOTANPC, &vLocationOnGround, 0, 0);
      if ( this->m_hCallback != 0 )
        goto LABEL_5;
LABEL_16:
      v8 = 0;
      goto LABEL_14;
    }
    FindClearSpaceForUnit(pDOTANPC, this->m_vLocation, 1);
  }
  if ( this->m_hCallback == 0 )
    goto LABEL_16;
LABEL_5:
  arg1.m_flags = 0;
  arg1.m_type = 0;
  arg1.m_uint64 = 0;
  if ( pDOTANPC != 0 )
  {
    if ( pDOTANPC->m_pEntity->m_hPublicScope.m_hScope == 0 )
      CEntityInstance::CreatePublicScriptScope(pDOTANPC, 0);
    m_hScope = pDOTANPC->m_pEntity->m_hPublicScope.m_hScope;
    CVariantBase<CVariantDefaultAllocator>::Free(&arg1);
    arg1.m_uint64 = m_hScope;
    arg1.m_type = 31;
  }
  pDest.m_type = 0;
  pDest.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&arg1, &pDest);
  m_hCallback = this->m_hCallback;
  vLocationOnGround.z = 0.0;
  v10 = m_hCallback;
  v7 = g_pScriptVM;
  *&vLocationOnGround.x = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&pDest, &vLocationOnGround);
  (*(*v7 + 160LL))(v7, v10, &vLocationOnGround, 1, 0, 0, 1);
  CVariantBase<CVariantDefaultAllocator>::Free(&vLocationOnGround);
  if ( (pDest.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pDest.m_uint64);
  if ( (arg1.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, arg1.m_uint64);
  v8 = this->m_hCallback;
LABEL_14:
  (*(*g_pScriptVM + 152LL))(g_pScriptVM, v8);
  operator delete(this);
}


// DOTA_VScript_CreateUnitByNameAsync  (line 1026, @0x00000000027bd9c0, libserver.so)  // inlines: AddNPCKeyValuesForUnit, ApplyContextKeys, CCreateUnitSpawnCallback, CDotaNPCSpawnerAsync, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlDelegate, CUtlString, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, DOTAGameRules, EntitySpawnerAsyncDesc_t, FastDelegate2, HScriptToEntity<CBaseEntity>, SetClassName, SetMementoFrom, SetValue, SetValue<CDOTA_BaseNPC*>, SetValue<int>, Spawn, ToEnt, ~CDotaNPCSpawnerAsync, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase
// calls: GetScriptDesc<CEntityInstance>, GetClassNameForUnitName, CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<CDOTA_BaseNPC*>, CEntityKeyValues::SetValue<int>, operator new, CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal (16 total)
// strings: "Attempting to create a unit too early, GameRules has not been created yet!."
// globals: CCreateUnitSpawnCallback::CallBackAndDeleteMe(CDOTA_BaseNPC *,CEntityKeyValues const*)
int __fastcall DOTA_VScript_CreateUnitByNameAsync(
        const char *pUnitName,
        const Vector *const vLocation,
        bool bFindClearSpace,
        HSCRIPT hNPCOwner,
        HSCRIPT hUnitOwner,
        int iTeamNumber,
        HSCRIPT hCallback)
{
  ScriptClassDesc_t *Script; // rax
  CDOTA_BaseNPC *v12; // rax
  __int64 (__fastcall *v13)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const char *ClassNameForUnitName; // r13
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  _QWORD *v18; // rbx
  __int64 (__fastcall *v20)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // [rsp+0h] [rbp-150h]
  SpawnGroupHandle_t m_hSpawnGroupHandle; // [rsp+0h] [rbp-150h]
  int iTeamNumbera; // [rsp+Ch] [rbp-144h] BYREF
  CDOTA_BaseNPC *pNPCOwner; // [rsp+10h] [rbp-140h] BYREF
  CDOTA_BaseNPC *pUnitOwner; // [rsp+18h] [rbp-138h] BYREF
  EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC> spawnerDesc; // [rsp+40h] [rbp-110h] BYREF
  CDotaNPCSpawnerAsync<CDOTA_BaseNPC> spawner; // [rsp+70h] [rbp-E0h] BYREF

  iTeamNumbera = iTeamNumber;
  if ( g_pGameRules != 0 )
  {
    if ( hNPCOwner != 0 )
    {
      v20 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v12 = v20(g_pScriptVM, hNPCOwner, Script);
    }
    else
    {
      v12 = 0;
    }
    pNPCOwner = v12;
    if ( hUnitOwner != 0 )
    {
      v13 = *(*g_pScriptVM + 208LL);
      v14 = GetScriptDesc<CEntityInstance>(0);
      v15 = v13(g_pScriptVM, hUnitOwner, v14);
    }
    else
    {
      v15 = 0;
    }
    pUnitOwner = v15;
    if ( pUnitName != 0 && (ClassNameForUnitName = GetClassNameForUnitName(pUnitName)) != 0 )
    {
      spawner.m_modifyScope.m_pKeyValues = 0;
      spawner.m_modifyScope.m_pPrevAllocator = 0;
      spawner._vptr_CEntitySpawnerBase = off_40FBED0;
      CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
      spawner.m_scriptClassName.m_pString = 0;
      spawner.m_pContext = 0;
      spawner.m_pFilter = 0;
      spawner._vptr_CEntitySpawnerBase = off_40FBF10;
      spawnerDesc.m_hOwnerSpawnGroup = 0;
      spawnerDesc.m_pContext = 0;
      spawnerDesc.m_pSpawnGroupToWorld = 0;
      spawnerDesc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
      spawnerDesc.m_iPriorityLoader = -2;
      spawnerDesc.m_bManualCompletion = 0;
      spawnerDesc.m_worldGroupId.m_nHashCode = 0;
      spawnerDesc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_CREATE_NEW_SPAWN_GROUP;
      spawnerDesc.m_flTimeoutInterval = 30.0;
      CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(&spawner, &spawnerDesc);
      spawner._vptr_CEntitySpawnerBase = off_40FBF30;
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, pUnitName);
      AppendNPCKeyValues(pUnitName, spawner.m_pEntityKeyValues, 0);
      for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
        CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, ClassNameForUnitName);
      spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                                 g_pEntitySystem,
                                 ClassNameForUnitName,
                                 &spawner.m_scriptClassName);
      if ( pUnitOwner != 0 )
      {
        CEntityKeyValues::SetValue<CDOTA_BaseNPC *>(spawner.m_pEntityKeyValues, -1104771937, &pUnitOwner);
        spawnerDesc.m_behavior = (*(pUnitOwner->_vptr_IHandleEntity + 414))(pUnitOwner);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &spawnerDesc);
      }
      if ( pNPCOwner != 0 )
        CEntityKeyValues::SetValue<CDOTA_BaseNPC *>(spawner.m_pEntityKeyValues, -1872306864, &pNPCOwner);
      if ( iTeamNumbera != 0 )
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, -175874245, &iTeamNumbera);
      v18 = operator new(0x18u);
      v18[1] = *&vLocation->x;
      *(v18 + 4) = LODWORD(vLocation->z);
      *(v18 + 20) = bFindClearSpace;
      *v18 = (*(*g_pScriptVM + 128LL))(g_pScriptVM, hCallback);
      spawnerDesc.m_pContext = 0;
      *&spawnerDesc.m_flTimeoutInterval = CCreateUnitSpawnCallback::CallBackAndDeleteMe;
      *&spawnerDesc.m_behavior = v18;
      CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal(&spawner, 0, &spawnerDesc);
      m_hSpawnGroupHandle = spawner.m_hSpawnGroupHandle;
      spawner._vptr_CEntitySpawnerBase = off_40FBEF0;
      CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
      return m_hSpawnGroupHandle;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    Warning(
      "Attempting to create a unit too early, GameRules has not been created yet!.",
      vLocation,
      bFindClearSpace,
      hNPCOwner,
      hUnitOwner);
    return 0;
  }
}


// SpawnerSpawn  (line 1063, @0x00000000027b8bf0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, FastDelegate2, FilterSpawnGroupEntity, GetClassInfo, IsEmpty, Purge, QueueContextCallbacks, RemoveAll, SetMementoFrom, SetToIdentity, Spawn, SpawnInternal, operator!, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, SetIdentityMatrix, CGameEntitySystem::ListenForEntityInSpawnGroupToFinish, CEntityKeyValues::SetValue, CUtlMemory<const CEntityKeyValues*, int>::Purge, CUtlVectorBase<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >::~CUtlVectorBase, _Unwind_Resume
CDOTA_BaseNPC *__fastcall SpawnerSpawn(CDotaNPCSpawnerAsync<CDOTA_BaseNPC> *const spawner)
{
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  ISpawnGroupEntityFilter *m_pFilter; // rdi
  CEntityKeyValues *v6; // r12
  __int64 m_hSpawnGroupHandle; // rsi
  bool v8; // zf
  CEntityInstance *v9; // r13
  SpawnGroupHandle_t v10; // r14d
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  __int64 delta; // rcx
  const CEntityKeyValues **pfn; // rdx
  CEntityKeyValues *v15; // [rsp+0h] [rbp-90h] BYREF
  CEntityKeyValues *v16; // [rsp+8h] [rbp-88h] BYREF
  detail::GenericClass *m_pthis; // [rsp+10h] [rbp-80h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v18; // [rsp+18h] [rbp-78h] BYREF
  matrix3x4_t matrix; // [rsp+30h] [rbp-60h] BYREF

  m_pEntityKeyValues = spawner->m_pEntityKeyValues;
  if ( m_pEntityKeyValues == 0 )
    return 0;
  if ( spawner->m_pEntityClass == 0 )
  {
    CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790);
    return 0;
  }
  HasValue = CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790);
  m_pszClassname = spawner->m_pEntityClass->m_pClassInfo->m_pszClassname;
  if ( !HasValue && m_pszClassname != 0 )
  {
    CEntityKeyValues::SetValue(spawner->m_pEntityKeyValues, -971301790, m_pszClassname);
    m_pszClassname = spawner->m_pEntityClass->m_pClassInfo->m_pszClassname;
  }
  (*(*engine + 464LL))(engine, spawner->m_hSpawnGroupHandle, m_pszClassname);
  CEntityKeyValuesModifyScope::Release(&spawner->m_modifyScope);
  m_pFilter = spawner->m_pFilter;
  v6 = spawner->m_pEntityKeyValues;
  if ( m_pFilter != 0 )
  {
    v15 = spawner->m_pEntityKeyValues;
    m_hSpawnGroupHandle = spawner->m_hSpawnGroupHandle;
    v8 = spawner->m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY;
    v18.m_pMemory = &v15;
    LODWORD(m_pthis) = 1;
    v16 = 0;
    *&v18.m_nAllocationCount = 0x4000000000000001LL;
    matrix.m_flMatVal[0][0] = 0.0;
    *&matrix.m_flMatVal[0][2] = &v16;
    *&matrix.m_flMatVal[1][0] = 0x4000000000000001LL;
    (*(m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(m_pFilter, m_hSpawnGroupHandle, v8, &m_pthis, &matrix);
    v6 = 0;
    v8 = LODWORD(matrix.m_flMatVal[0][0]) == 1;
    matrix.m_flMatVal[0][0] = 0.0;
    if ( v8 )
      v6 = v16;
    if ( (LODWORD(matrix.m_flMatVal[1][1]) & 0xC0000000) != 0
      || (CUtlMemory<CEntityKeyValues const*,int>::Purge(&matrix.m_flMatVal[0][2]),
          (LODWORD(matrix.m_flMatVal[1][1]) & 0xC0000000) != 0) )
    {
      LODWORD(m_pthis) = 0;
      if ( (v18.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_9;
    }
    else
    {
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&matrix.m_flMatVal[0][2]);
      LODWORD(m_pthis) = 0;
      if ( (v18.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_9;
    }
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&v18);
    if ( (v18.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&v18);
      if ( v6 == 0 )
        return 0;
      goto LABEL_10;
    }
LABEL_9:
    if ( v6 == 0 )
      return 0;
  }
LABEL_10:
  SetIdentityMatrix(&matrix);
  v9 = (*(spawner->m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
         spawner->m_pLoadingSpawnGroup,
         spawner->m_hOwnerSpawnGroup,
         &matrix,
         1,
         v6);
  if ( v9 != 0 )
  {
    v10 = spawner->m_hSpawnGroupHandle;
    for ( i = spawner->m_pContext; i != 0; i = i->m_pParent )
    {
      pfn = i->m_callback.m_Closure.m_pFunction.__pfn;
      if ( i->m_callback.m_Closure.m_pthis != 0 || pfn != 0 )
      {
        delta = i->m_callback.m_Closure.m_pFunction.__delta;
        m_pthis = i->m_callback.m_Closure.m_pthis;
        v18.m_pMemory = pfn;
        *&v18.m_nAllocationCount = delta;
        CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
          g_pGameEntitySystem,
          v10,
          v9,
          v6,
          i->m_pCompletionListener,
          &m_pthis);
      }
    }
  }
  return 0;
}


// SpawnerSpawn  (line 1069, @0x00000000027b8b80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CDOTA_BaseNPC*, operator CEntityInstance*
// calls: CEntitySpawner<CDOTA_BaseNPC>::Spawn
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall SpawnerSpawn(CDotaNPCSpawner<CDOTA_BaseNPC> *const spawner)
{
  CDOTA_BaseNPC *result; // rax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rcx
  int v4[4]; // [rsp+0h] [rbp-10h] BYREF

  CEntitySpawner<CDOTA_BaseNPC>::Spawn(v4, spawner);
  result = 0;
  if ( (v4[0] + 2) > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4[0]) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[v4[0] & 0x1FF];
      if ( v3 != 0 && v4[0] == v3->m_EHandle.m_Index )
        return v3->m_pInstance;
    }
  }
  return result;
}


// GetClassNameForUnitName  (line 1075, @0x00000000027ad3f0, libserver.so)  // inlines: GetHeroesKeyValues, GetUnitsKeyValues, IsAddOnGame
// calls: DOTAGameManager, KeyValues::FindKey, KeyValues::GetString
// callers: CDOTAGamerules::PrecacheNextARDMHeroForPlayer, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, AppendNPCKeyValues, DOTA_CreateUnitByName, DOTA_PrecacheUnitByNameSync, PopulateNPCSpawner<CDotaNPCSpawner<CDOTA_BaseNPC> >, DOTA_PrecacheUnitByNameAsync, DOTA_VScript_PrecacheUnitFromTableAsync, DOTA_VScript_CreateUnitByNameAsync, DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> >, DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawner<CDOTA_BaseNPC> >, CDOTA_Item_Ward_Dispenser::OnSpellStart (14 total)
const char *__fastcall GetClassNameForUnitName(const char *pUnitName)
{
  CDOTAGameManager *v2; // rax
  KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *Key; // r12
  CDOTAGameManager *v5; // rax
  KeyValues *m_pkvAddOnUnits; // rdi
  KeyValues *v7; // rax
  const char *result; // rax

  if ( pUnitName == 0 )
    return 0;
  v2 = DOTAGameManager();
  if ( v2->m_bCustomGame || v2->m_bEventGame )
    m_pkvAddOnHeroes = v2->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = v2->m_pkvHeroes;
  Key = 0;
  if ( m_pkvAddOnHeroes != 0 )
    Key = KeyValues::FindKey(m_pkvAddOnHeroes, pUnitName, 0);
  v5 = DOTAGameManager();
  if ( v5->m_bCustomGame || v5->m_bEventGame )
  {
    m_pkvAddOnUnits = v5->m_pkvAddOnUnits;
    if ( m_pkvAddOnUnits == 0 )
      goto LABEL_16;
LABEL_8:
    v7 = KeyValues::FindKey(m_pkvAddOnUnits, pUnitName, 0);
    if ( Key == 0 )
    {
      if ( v7 == 0 )
        return pUnitName;
      Key = v7;
    }
    goto LABEL_9;
  }
  m_pkvAddOnUnits = v5->m_pkvUnits;
  if ( m_pkvAddOnUnits != 0 )
    goto LABEL_8;
LABEL_16:
  if ( Key == 0 )
    return pUnitName;
LABEL_9:
  result = KeyValues::GetString(Key, "BaseClass", "", 0, 0);
  if ( result == 0 || *result == 0 )
    return pUnitName;
  return result;
}


// FindUnitNameBySubString  (line 1111, @0x00000000027ad4f0, libserver.so)  // inlines: GetHeroesKeyValues, GetUnitsKeyValues, IsAddOnGame
// calls: DOTAGameManager, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetName, V_stristr_fast(char const*,char const*)
// callers: CSource2Server::FindUnitDataByModelNameCheckModelModifiers
const char *__fastcall FindUnitNameBySubString(const char *pUnitNameSubStr)
{
  CDOTAGameManager *v2; // rax
  KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *NextTrueSubKey; // rbx
  const char *Name; // r12
  CDOTAGameManager *v7; // rax
  KeyValues *m_pkvAddOnUnits; // rdi
  KeyValues *FirstTrueSubKey; // rbx

  if ( pUnitNameSubStr != 0 )
  {
    v2 = DOTAGameManager();
    if ( v2->m_bCustomGame || v2->m_bEventGame )
      m_pkvAddOnHeroes = v2->m_pkvAddOnHeroes;
    else
      m_pkvAddOnHeroes = v2->m_pkvHeroes;
    if ( m_pkvAddOnHeroes != 0 && (NextTrueSubKey = KeyValues::GetFirstTrueSubKey(m_pkvAddOnHeroes)) != 0 )
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(NextTrueSubKey);
        if ( V_stristr_fast(Name, pUnitNameSubStr) != 0 )
          break;
        NextTrueSubKey = KeyValues::GetNextTrueSubKey(NextTrueSubKey);
        if ( NextTrueSubKey == 0 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v7 = DOTAGameManager();
      if ( v7->m_bCustomGame || v7->m_bEventGame )
        m_pkvAddOnUnits = v7->m_pkvAddOnUnits;
      else
        m_pkvAddOnUnits = v7->m_pkvUnits;
      if ( m_pkvAddOnUnits == 0 )
        return 0;
      FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(m_pkvAddOnUnits);
      if ( FirstTrueSubKey == 0 )
        return 0;
      while ( 1 )
      {
        Name = KeyValues::GetName(FirstTrueSubKey);
        if ( V_stristr_fast(Name, pUnitNameSubStr) != 0 )
          break;
        FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
        if ( FirstTrueSubKey == 0 )
          return 0;
      }
    }
    return Name;
  }
  return 0;
}


// DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> >  (line 1146, @0x00000000027dde60, libserver.so)  // inlines: AddKeyValue<char const*>, AddNPCKeyValuesForUnit, AddToTail, Allocate, ApplyContextKeys, Base, CDotaNPCSpawnerAsync, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlAbstractDelegate, CUtlDelegate, CUtlString, CVProfScope, ClosurePtr, CopyData, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, Element, EntitySpawnerAsyncDesc_t, FastDelegate2, FindKeyHash, Free, IsEnabled, MakeEntityKeyId, MakeStringToken, SetClassName, SetMementoFrom, SetValue, SetValue<CBaseEntity*>, SetValue<Vector>, SetValue<int>, Spawn, SpawnerSpawn, ToDOTABaseNPC, V_strlen, memcpy, operator=, operator[], ~CDotaNPCSpawnerAsync, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CVProfScope
// calls: GetClassNameForUnitName, CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<CBaseEntity*>, CEntityKeyValues::SetValue<int>, KeyValues::GetFirstSubKey, KeyValues::GetNextKey (27 total)
// callers: DOTA_Character_ScriptSpawn, DebugCreateUnit
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Server Game", "DOTA_Character_ScriptSpawn"
CDOTA_BaseNPC *__fastcall DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC>>(
        IEntityResourceManifest *pManifest,
        const char *pszScriptName,
        Vector vOrigin,
        int iTeamNumber,
        CBaseEntity *pOwner,
        KeyValues *pLoadKeys,
        CDotaNPCSpawnerContext *pContext)
{
  int m_enabled; // edx
  const char *ClassNameForUnitName; // r12
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  KeyValues *j; // rax
  CEntityKeyValues *m_pEntityKeyValues; // r12
  const KeyValues *v15; // rbx
  const char *String; // r14
  const char *Name; // rax
  uint32 v18; // r13d
  const char *v19; // r12
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v21; // cx
  __int64 v22; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v23; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  __int16 v27; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v30; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v31; // r13
  uint16 m_flags; // ax
  void *v33; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v34; // rax
  bool v36; // zf
  __int16 v37; // ax
  signed int v38; // r13d
  void *v39; // rax
  signed int v40; // [rsp+Ch] [rbp-144h]
  __int64 v41; // [rsp+18h] [rbp-138h]
  __int64 v42; // [rsp+18h] [rbp-138h]
  CBaseEntity *pOwnera; // [rsp+20h] [rbp-130h] BYREF
  CVProfScope VProf_1150; // [rsp+2Bh] [rbp-125h]
  int iTeamNumbera; // [rsp+2Ch] [rbp-124h] BYREF
  Vector vOrigina; // [rsp+30h] [rbp-120h] BYREF
  EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC> spawnerDesc; // [rsp+40h] [rbp-110h] BYREF
  CDotaNPCSpawnerAsync<CDOTA_BaseNPC> spawner; // [rsp+70h] [rbp-E0h] BYREF

  iTeamNumbera = iTeamNumber;
  pOwnera = pOwner;
  vOrigina = vOrigin;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_1150.m_bEnabled = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "DOTA_Character_ScriptSpawn", 0, "Server Game", 0, 4);
  ClassNameForUnitName = GetClassNameForUnitName(pszScriptName);
  if ( ClassNameForUnitName != 0 )
  {
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    spawner._vptr_CEntitySpawnerBase = off_40FBED0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    spawner.m_pContext = pContext;
    spawner._vptr_CEntitySpawnerBase = off_40FBF10;
    spawner.m_pFilter = 0;
    spawner.m_scriptClassName.m_pString = 0;
    spawnerDesc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP;
    spawnerDesc.m_pSpawnGroupToWorld = 0;
    spawnerDesc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
    spawnerDesc.m_iPriorityLoader = -2;
    spawnerDesc.m_bManualCompletion = 0;
    spawnerDesc.m_worldGroupId.m_nHashCode = 0;
    spawnerDesc.m_hOwnerSpawnGroup = -1;
    spawnerDesc.m_flTimeoutInterval = 30.0;
    spawnerDesc.m_pContext = pContext;
    CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(&spawner, &spawnerDesc);
    spawner._vptr_CEntitySpawnerBase = off_40FBF30;
    if ( pszScriptName != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, pszScriptName);
    AppendNPCKeyValues(pszScriptName, spawner.m_pEntityKeyValues, 0);
    for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
      CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, ClassNameForUnitName);
    spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                               g_pEntitySystem,
                               ClassNameForUnitName,
                               &spawner.m_scriptClassName);
    CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, &vOrigina);
    if ( pOwnera != 0 )
    {
      CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &pOwnera);
      if ( pOwnera != 0 && pOwnera->m_bIsDOTANPC )
      {
        spawnerDesc.m_behavior = (*(pOwnera->_vptr_IHandleEntity + 414))();
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &spawnerDesc);
        CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1872306864, &pOwnera);
      }
    }
    if ( pLoadKeys != 0 )
    {
      for ( j = KeyValues::GetFirstSubKey(pLoadKeys); ; j = KeyValues::GetNextKey(v15) )
      {
        v15 = j;
        if ( j == 0 )
          break;
        String = KeyValues::GetString(j, 0, "", 0, 0);
        Name = KeyValues::GetName(v15);
        v18 = 0;
        v19 = Name;
        if ( Name != 0 && *Name != 0 && (v18 = MurmurHash2LowerCase(Name, 0x31415926u), g_bUpdateStringTokenDatabase) )
        {
          RegisterStringToken(v18, v19, 0, 1);
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
          if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
            continue;
        }
        else
        {
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
          if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
            continue;
        }
        m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
        if ( m_nCount <= 0 )
        {
LABEL_32:
          CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
          v27 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
          m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
          if ( m_nAllocated != 0 )
          {
            if ( m_nAllocated <= 9 )
              m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            else
              m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = v18;
          v41 = v27;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
          if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v30 = m_pEntityKeyValues->m_keyValues.m_pElements;
          else
            v30 = 0;
          v31 = &v30[v41];
          v42 = v41;
          m_flags = v31->m_value.m_flags;
          if ( (m_flags & 1) != 0 )
            v31->m_value.m_flags = m_flags & 0xFFFE;
          v31->m_value.m_uint64 = 0;
          v31->m_value.m_type = 30;
          if ( String != 0 )
          {
            v40 = strlen(String) + 1;
            v33 = CEntityVariantAllocator::Allocate(v40);
            v31->m_value.m_uint64 = v33;
            memcpy(v33, String, v40);
            v31->m_value.m_flags |= 1u;
          }
          if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v34 = m_pEntityKeyValues->m_keyValues.m_pElements;
          else
            v34 = 0;
          v34[v42].m_pAttributeName = 0;
          continue;
        }
        v21 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        v22 = 0;
        while ( v21 == 0 )
        {
          if ( v18 == *(4 * v22) )
            goto LABEL_29;
LABEL_26:
          if ( m_nCount <= ++v22 )
            goto LABEL_32;
        }
        v23 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v21 > 9 )
          v23 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        if ( v18 != v23[v22] )
          goto LABEL_26;
LABEL_29:
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        {
          v24 = m_pEntityKeyValues->m_keyValues.m_pElements;
          v25 = v22;
          v26 = &v24[v25];
          if ( v24[v25].m_pAttributeName != 0 )
            goto LABEL_31;
LABEL_51:
          v37 = *(v26 + 10);
          if ( (v37 & 1) != 0 )
            *(v26 + 10) = v37 & 0xFFFE;
          *v26 = 0;
          *(v26 + 8) = 30;
          if ( String != 0 )
          {
            v38 = strlen(String) + 1;
            v39 = CEntityVariantAllocator::Allocate(v38);
            *v26 = v39;
            memcpy(v39, String, v38);
            *(v26 + 10) |= 1u;
          }
        }
        else
        {
          v24 = 0;
          v36 = *(&stru_10.m_Lock.gap0 + 3 * v22) == 0;
          v26 = 24 * v22;
          v25 = v22;
          if ( v36 )
            goto LABEL_51;
LABEL_31:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v24[v25].m_pAttributeName);
        }
      }
    }
    if ( iTeamNumbera != 0 )
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, -175874245, &iTeamNumbera);
    memset(&spawnerDesc, 0, 24);
    CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal(&spawner, 0, &spawnerDesc);
    spawner._vptr_CEntitySpawnerBase = off_40FBEF0;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
  }
  if ( VProf_1150.m_bEnabled )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  return 0;
}


// DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawner<CDOTA_BaseNPC> >  (line 1146, @0x00000000027de4b0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<char const*>, AddNPCKeyValuesForUnit, AddToTail, Allocate, ApplyContextKeys, Base, CDotaNPCSpawner, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, CVProfScope, CopyData, Element, FindKeyHash, Free, Get, GetEntityClass, GetInstance, Init, IsEnabled, MakeEntityKeyId, MakeStringToken, OverrideAllocator, SetClassName, SetValue, SetValue<CBaseEntity*>, SetValue<Vector>, SetValue<int>, SpawnerSpawn, ToDOTABaseNPC, V_strlen, memcpy, operator CDOTA_BaseNPC*, operator=, operator[], ~CDotaNPCSpawner, ~CEntitySpawner, ~CVProfScope
// calls: GetClassNameForUnitName, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<CBaseEntity*>, KeyValues::GetFirstSubKey, KeyValues::GetNextKey (29 total)
// callers: DOTA_Character_ScriptSpawn_Synchronous, DOTA_CreateIllusions
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Server Game", "DOTA_Character_ScriptSpawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CDOTA_BaseNPC *__fastcall DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawner<CDOTA_BaseNPC>>(
        IEntityResourceManifest *pManifest,
        const char *pszScriptName,
        Vector vOrigin,
        int iTeamNumber,
        CBaseEntity *pOwner,
        KeyValues *pLoadKeys,
        CDotaNPCSpawnerContext *pContext)
{
  int m_enabled; // r8d
  const char *ClassNameForUnitName; // r12
  CEntitySystem *v12; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v14; // rdx
  char v15; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  KeyValues *j; // rax
  CEntityKeyValues *m_pEntityKeyValues; // r12
  const KeyValues *v19; // rbx
  const char *String; // r14
  const char *Name; // rax
  uint32 v22; // r13d
  const char *v23; // r12
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v25; // cx
  __int64 v26; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v27; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r12
  __int16 v31; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v34; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v35; // r13
  uint16 m_flags; // ax
  void *v37; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v38; // rax
  bool v39; // zf
  __int16 v40; // ax
  signed int v41; // r13d
  void *v42; // rax
  CDOTA_BaseNPC *v43; // rbx
  CDOTA_BaseNPC *result; // rax
  signed int v45; // [rsp+4h] [rbp-10Ch]
  __int64 v46; // [rsp+8h] [rbp-108h]
  __int64 v47; // [rsp+8h] [rbp-108h]
  CDOTA_BaseNPC *v48; // [rsp+8h] [rbp-108h]
  CBaseEntity *pOwnera; // [rsp+10h] [rbp-100h] BYREF
  CVProfScope VProf_1150; // [rsp+1Bh] [rbp-F5h]
  int iTeamNumbera; // [rsp+1Ch] [rbp-F4h] BYREF
  Vector vOrigina; // [rsp+20h] [rbp-F0h] BYREF
  CEntityHandle v53; // [rsp+30h] [rbp-E0h] BYREF
  CEntitySpawner<CDOTA_BaseNPC> v54; // [rsp+40h] [rbp-D0h] BYREF

  iTeamNumbera = iTeamNumber;
  pOwnera = pOwner;
  vOrigina = vOrigin;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_1150.m_bEnabled = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "DOTA_Character_ScriptSpawn", 0, "Server Game", 0, 4);
  ClassNameForUnitName = GetClassNameForUnitName(pszScriptName);
  if ( ClassNameForUnitName != 0 )
  {
    v54.m_modifyScope.m_pKeyValues = 0;
    v54.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&v54.m_modifyScope, 0);
    v54.m_pContext = pContext;
    v54._vptr_CEntitySpawnerBase = off_40FC030;
    v54.m_scriptClassName.m_pString = 0;
    v54.m_pSpawnBatch = 0;
    v12 = g_pEntitySystem;
    v54.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v12->m_entitySpawnerData;
    v54.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v12);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&v54.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    v14 = *&SpawnOriginOffset->m_flMatVal[0][2];
    v54.m_pEntityKeyValues = 0;
    *&v54.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v14;
    *&v54.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
    *&v54.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
    v54.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
    if ( g_pApplication != 0 )
      v15 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v15 = 0;
    v54.m_bValidateKeys = v15;
    v54.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*v54._vptr_CEntitySpawnerBase)(&v54);
    v54._vptr_CEntitySpawnerBase = off_40FC050;
    if ( pszScriptName != 0 )
      CEntityKeyValues::SetValue(v54.m_pEntityKeyValues, -782893907, pszScriptName);
    AppendNPCKeyValues(pszScriptName, v54.m_pEntityKeyValues, 0);
    for ( i = v54.m_pContext; i != 0; i = i->m_pParent )
      CEntityKeyValues::CopyFrom(v54.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
    CEntityKeyValues::SetValue(v54.m_pEntityKeyValues, -971301790, ClassNameForUnitName);
    v54.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                           g_pEntitySystem,
                           ClassNameForUnitName,
                           &v54.m_scriptClassName);
    CEntityKeyValues::SetValue<Vector>(v54.m_pEntityKeyValues, -467664362, &vOrigina);
    if ( pOwnera != 0 )
    {
      CEntityKeyValues::SetValue<CBaseEntity *>(v54.m_pEntityKeyValues, -1104771937, &pOwnera);
      if ( pOwnera != 0 && pOwnera->m_bIsDOTANPC )
      {
        v53.m_Index = (*(pOwnera->_vptr_IHandleEntity + 414))();
        CEntityKeyValues::SetValue<int>(v54.m_pEntityKeyValues, 2034954718, &v53);
        CEntityKeyValues::SetValue<CBaseEntity *>(v54.m_pEntityKeyValues, -1872306864, &pOwnera);
      }
    }
    if ( pLoadKeys != 0 )
    {
      for ( j = KeyValues::GetFirstSubKey(pLoadKeys); ; j = KeyValues::GetNextKey(v19) )
      {
        v19 = j;
        if ( j == 0 )
          break;
        String = KeyValues::GetString(j, 0, "", 0, 0);
        Name = KeyValues::GetName(v19);
        v22 = 0;
        v23 = Name;
        if ( Name != 0 && *Name != 0 && (v22 = MurmurHash2LowerCase(Name, 0x31415926u), g_bUpdateStringTokenDatabase) )
        {
          RegisterStringToken(v22, v23, 0, 1);
          m_pEntityKeyValues = v54.m_pEntityKeyValues;
          if ( v54.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
            continue;
        }
        else
        {
          m_pEntityKeyValues = v54.m_pEntityKeyValues;
          if ( v54.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
            continue;
        }
        m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
        if ( m_nCount <= 0 )
        {
LABEL_34:
          CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
          v31 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
          m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
          if ( m_nAllocated != 0 )
          {
            if ( m_nAllocated <= 9 )
              m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            else
              m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = v22;
          v46 = v31;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
          if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v34 = m_pEntityKeyValues->m_keyValues.m_pElements;
          else
            v34 = 0;
          v35 = &v34[v46];
          v47 = v46;
          m_flags = v35->m_value.m_flags;
          if ( (m_flags & 1) != 0 )
            v35->m_value.m_flags = m_flags & 0xFFFE;
          v35->m_value.m_uint64 = 0;
          v35->m_value.m_type = 30;
          if ( String != 0 )
          {
            v45 = strlen(String) + 1;
            v37 = CEntityVariantAllocator::Allocate(v45);
            v35->m_value.m_uint64 = v37;
            memcpy(v37, String, v45);
            v35->m_value.m_flags |= 1u;
          }
          if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v38 = m_pEntityKeyValues->m_keyValues.m_pElements;
          else
            v38 = 0;
          v38[v47].m_pAttributeName = 0;
          continue;
        }
        v25 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        v26 = 0;
        while ( v25 == 0 )
        {
          if ( v22 == *(4 * v26) )
            goto LABEL_31;
LABEL_28:
          if ( m_nCount <= ++v26 )
            goto LABEL_34;
        }
        v27 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v25 > 9 )
          v27 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        if ( v22 != v27[v26] )
          goto LABEL_28;
LABEL_31:
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        {
          v28 = m_pEntityKeyValues->m_keyValues.m_pElements;
          v29 = v26;
          v30 = &v28[v29];
          if ( v28[v29].m_pAttributeName != 0 )
            goto LABEL_33;
LABEL_47:
          v40 = *(v30 + 10);
          if ( (v40 & 1) != 0 )
            *(v30 + 10) = v40 & 0xFFFE;
          *v30 = 0;
          *(v30 + 8) = 30;
          if ( String != 0 )
          {
            v41 = strlen(String) + 1;
            v42 = CEntityVariantAllocator::Allocate(v41);
            *v30 = v42;
            memcpy(v42, String, v41);
            *(v30 + 10) |= 1u;
          }
        }
        else
        {
          v28 = 0;
          v39 = *(&stru_10.m_Lock.gap0 + 3 * v26) == 0;
          v30 = 24 * v26;
          v29 = v26;
          if ( v39 )
            goto LABEL_47;
LABEL_33:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v28[v29].m_pAttributeName);
        }
      }
    }
    if ( iTeamNumbera != 0 )
      CEntityKeyValues::SetValue<int>(v54.m_pEntityKeyValues, -175874245, &iTeamNumbera);
    CEntitySpawner<CDOTA_BaseNPC>::Spawn(&v53, &v54);
    v43 = CEntityHandle::operator CEntityInstance *(&v53);
    v54._vptr_CEntitySpawnerBase = off_40FC030;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&v54);
    result = v43;
  }
  else
  {
    result = 0;
  }
  if ( VProf_1150.m_bEnabled )
  {
    v48 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v48;
  }
  return result;
}


// DOTA_Character_ScriptSpawn  (line 1193, @0x00000000027bddb0, libserver.so)
// calls: DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> >
// callers: PerformDOTALoadGame, CDOTA_BaseNPC_Hero::CreatePet, CDOTA_ScriptedSpawner::SpawnNPCs, CDOTA_RoshanSpawner::RoshanThink
void __fastcall DOTA_Character_ScriptSpawn(
        const char *pszScriptName,
        int iTeamNumber,
        CBaseEntity *pOwner,
        KeyValues *pLoadKeys,
        CDotaNPCSpawnerContext *pContext,
        Vector a6)
{
  DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC>>(
    0,
    pszScriptName,
    a6,
    iTeamNumber,
    pOwner,
    pLoadKeys,
    pContext);
}


// DOTA_Character_ScriptSpawn_Synchronous  (line 1198, @0x00000000027bebd0, libserver.so)
// calls: DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawner<CDOTA_BaseNPC> >
// callers: CDOTA_ActionRunner::PerformAction_SpawnUnit, CDOTA_ActionRunner::PerformAction_ReplaceUnit, dota_test_npc, CDOTA_Modifier_MudGolem_RockDestroy::OnDeath, Thinker_Create, CDOTA_NPCSpawner::SpawnUnitFromScript, CDOTA_NeutralSpawner::CreatePendingUnits, CDOTA_NPCSpawner::ReleaseCreeps, CDOTA_Ability_Zuus_Cloud::OnSpellStart, CDOTA_Modifier_Enigma_DemonicConversion::OnAttack, CDOTA_Ability_Pugna_NetherWard::OnSpellStart, CDOTA_Ability_Enigma_DemonicConversion::OnSpellStart (30 total)
CDOTA_BaseNPC *__fastcall DOTA_Character_ScriptSpawn_Synchronous(
        const char *pszScriptName,
        int iTeamNumber,
        CBaseEntity *pOwner,
        KeyValues *pLoadKeys,
        CDotaNPCSpawnerContext *pContext,
        Vector a6)
{
  return DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawner<CDOTA_BaseNPC>>(
           0,
           pszScriptName,
           a6,
           iTeamNumber,
           pOwner,
           pLoadKeys,
           pContext);
}


// DOTA_PrecacheUnitByNameSync  (line 1203, @0x00000000027b9640, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawner, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, GetEntityClass, Init, OverrideAllocator, PrecacheOther, SetClassName, SetValue, SetValue<int>, ~CDotaNPCSpawner, ~CEntitySpawner
// calls: GetClassNameForUnitName, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<int>, CEntityKeyValuesModifyScope::Release, UTIL_PrecacheOther, CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase (13 total)
// callers: CDOTAGamerules::PrecacheResourcesFromKeys, CDOTAGamerules::PrecacheGameModeResources, DOTA_PrecacheUnitByNameSync, DOTA_VScript_PrecacheUnitByNameSync, PrecacheCreepsForGameMode, PrecacheCharactersForGameMode, CDOTA_Unit_Hero_Zuus::Precache, CDOTA_Unit_Hero_Enigma::Precache, CDOTA_Unit_Hero_TemplarAssassin::Precache, CDOTA_Unit_Hero_Warlock::Precache, CDOTA_Unit_Hero_Broodmother::Precache, CDOTA_Unit_Hero_Furion::Precache (19 total)
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall DOTA_PrecacheUnitByNameSync(const char *pUnitName, IEntityResourceManifest *pManifest, int nPlayerID)
{
  const char *ClassNameForUnitName; // r14
  CEntitySystem *v6; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v8; // rdx
  char v9; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  int nPlayerIDa; // [rsp+Ch] [rbp-D4h] BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> spawner; // [rsp+10h] [rbp-D0h] BYREF

  nPlayerIDa = nPlayerID;
  if ( pUnitName != 0 && *pUnitName != 0 )
  {
    ClassNameForUnitName = GetClassNameForUnitName(pUnitName);
    if ( ClassNameForUnitName != 0 )
    {
      spawner.m_modifyScope.m_pKeyValues = 0;
      spawner.m_modifyScope.m_pPrevAllocator = 0;
      CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
      spawner._vptr_CEntitySpawnerBase = off_40FC030;
      spawner.m_scriptClassName.m_pString = 0;
      spawner.m_pContext = 0;
      v6 = g_pEntitySystem;
      spawner.m_pSpawnBatch = 0;
      spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v6->m_entitySpawnerData;
      spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v6);
      SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
      v8 = *&SpawnOriginOffset->m_flMatVal[0][2];
      spawner.m_pEntityKeyValues = 0;
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v8;
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
      spawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
      if ( g_pApplication != 0 )
        v9 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
      else
        v9 = 0;
      spawner.m_bValidateKeys = v9;
      spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
      (*spawner._vptr_CEntitySpawnerBase)(&spawner);
      spawner._vptr_CEntitySpawnerBase = off_40FC050;
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, pUnitName);
      AppendNPCKeyValues(pUnitName, spawner.m_pEntityKeyValues, 0);
      for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
        CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, ClassNameForUnitName);
      spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                                 g_pEntitySystem,
                                 ClassNameForUnitName,
                                 &spawner.m_scriptClassName);
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &nPlayerIDa);
      if ( spawner.m_pEntityKeyValues != 0 )
      {
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        UTIL_PrecacheOther(spawner.m_pEntityKeyValues, pManifest);
      }
      spawner._vptr_CEntitySpawnerBase = off_40FC030;
      CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
    }
  }
}


// DOTA_PrecacheUnitByNameAsync  (line 1219, @0x00000000027bcb20, libserver.so)  // inlines: AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawnerAsync, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, ClosurePtr, CopyFrom<FastDelegate2<unsigned int, const CUtlVector<CEntityHandle>&, void> >, EntitySpawnerAsyncDesc_t, FastDelegate2, OverrideAllocator, PrecacheOther, Purge, Release, ReleaseEntitySpawnerEntityVariantAllocator, SetClassName, SetMementoFrom, SetValue, SetValue<int>, operator(), ~CDotaNPCSpawnerAsync, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: GetClassNameForUnitName, CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::AddSpawnGroupCompletionCallback, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<int>, CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal, CEntityKeyValuesModifyScope::Release, CUtlString::FreeMemoryBlock (19 total)
// callers: DOTA_VScript_PrecacheUnitByNameAsync
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall DOTA_PrecacheUnitByNameAsync(
        const char *pUnitName,
        CBaseEntity *pCallbackListener,
        __int64 *nPlayerID,
        int a4)
{
  const char *ClassNameForUnitName; // r13
  CEntityKeyValues *i; // rbx
  CEntitySpawnerContext<CDOTA_BaseNPC> *v8; // rdx
  __int64 v9; // rax
  CUtlScratchMemoryPool *v10; // rdi
  CEntityHandle *m_pMemory; // rbx
  __int64 v13; // rdi
  char *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  int m_nEntitySpawnerDataUseCount; // ecx
  int nPlayerIDa; // [rsp+Ch] [rbp-114h] BYREF
  EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC> spawnerDesc; // [rsp+10h] [rbp-110h] BYREF
  CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > empty; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-C8h]
  CEntityClass *ClassByDesignName; // [rsp+60h] [rbp-C0h]
  CUtlString v24; // [rsp+68h] [rbp-B8h] BYREF
  CEntitySpawnerAsyncBase<CDOTA_BaseNPC> *v25; // [rsp+74h] [rbp-ACh]
  CUtlScratchMemoryPool *v26; // [rsp+B8h] [rbp-68h]
  CEntityKeyValues *pOther; // [rsp+C0h] [rbp-60h]
  __int64 v28; // [rsp+E0h] [rbp-40h]

  nPlayerIDa = a4;
  ClassNameForUnitName = GetClassNameForUnitName(pUnitName);
  if ( ClassNameForUnitName != 0 )
  {
    *&empty.m_Memory.m_nAllocationCount = 0;
    v22 = 0;
    CEntityKeyValuesModifyScope::BeginModify(&empty.m_Memory.m_nAllocationCount, 0);
    v24.m_pString = 0;
    pOther = 0;
    v28 = 0;
    *&empty.m_Size = off_40FBF10;
    spawnerDesc.m_hOwnerSpawnGroup = 0;
    spawnerDesc.m_pContext = 0;
    spawnerDesc.m_pSpawnGroupToWorld = 0;
    spawnerDesc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
    spawnerDesc.m_iPriorityLoader = -2;
    spawnerDesc.m_bManualCompletion = 0;
    spawnerDesc.m_worldGroupId.m_nHashCode = 0;
    spawnerDesc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY;
    spawnerDesc.m_flTimeoutInterval = 30.0;
    CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(&empty, &spawnerDesc);
    *&empty.m_Size = off_40FBF30;
    if ( pUnitName != 0 )
      CEntityKeyValues::SetValue(empty.m_Memory.m_pMemory, -782893907, pUnitName);
    AppendNPCKeyValues(pUnitName, empty.m_Memory.m_pMemory, 0);
    for ( i = pOther; i != 0; i = *&i[1].m_keyHashes.m_nCount )
      CEntityKeyValues::CopyFrom(empty.m_Memory.m_pMemory, i, 0);
    v8 = nPlayerID[2];
    *&spawnerDesc.m_flTimeoutInterval = nPlayerID[1];
    v9 = *nPlayerID;
    spawnerDesc.m_pContext = v8;
    *&spawnerDesc.m_behavior = v9;
    CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::AddSpawnGroupCompletionCallback(v25, pCallbackListener, &spawnerDesc);
    CEntityKeyValues::SetValue(empty.m_Memory.m_pMemory, -971301790, ClassNameForUnitName);
    ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, ClassNameForUnitName, &v24);
    CEntityKeyValues::SetValue<int>(empty.m_Memory.m_pMemory, 2034954718, &nPlayerIDa);
    memset(&spawnerDesc, 0, 24);
    CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal(&empty, 0, &spawnerDesc);
    v10 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    *&empty.m_Size = off_40FBED0;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v26;
    if ( v10 == &g_pEntitySystem->m_entitySpawnerData )
    {
      m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
      if ( m_nEntitySpawnerDataUseCount == 1 )
        CUtlScratchMemoryPool::FreeAll(v10);
    }
    if ( empty.m_Memory.m_pMemory != 0 )
    {
      CEntityKeyValuesModifyScope::Release(&empty.m_Memory.m_nAllocationCount);
      m_pMemory = empty.m_Memory.m_pMemory;
      if ( --LOWORD(empty.m_Memory.m_pMemory[20].m_Index) <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(m_pMemory);
        operator delete(m_pMemory);
      }
    }
    if ( v24.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v24);
    CEntityKeyValuesModifyScope::Release(&empty.m_Memory.m_nAllocationCount);
  }
  else
  {
    v13 = *nPlayerID;
    empty.m_Size = 0;
    empty.m_Memory.m_pMemory = 0;
    v14 = nPlayerID[1];
    empty.m_Memory.m_nAllocationCount = 0;
    v15 = nPlayerID[2];
    empty.m_Memory.m_nGrowSize = 0;
    v16 = (v15 + v13);
    if ( (v14 & 1) != 0 )
      v14 = *&v14[*v16 - 1];
    (v14)(v16, 0, &empty);
    CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&empty);
    if ( (empty.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityHandle,int>::Purge(&empty.m_Memory);
      if ( (empty.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityHandle,int>::Purge(&empty.m_Memory);
    }
  }
}


// CreateUnitSpawnComplete  (line 1236, @0x00000000027ae710, libserver.so)  // inlines: VectorAdd, operator+, operator=
// calls: CDOTA_PlayerResource::SetUnitShareMaskForPlayer, FindClearSpaceForUnit, CDOTA_BaseNPC::SetControllableByPlayer, CBaseEntity::GetAbsOrigin
// callers: OnCreateUnitSpawnComplete
void __fastcall CreateUnitSpawnComplete(
        CDOTA_BaseNPC *pDOTANPC,
        CDOTAPlayer *pClientPlayer,
        int iTeamNumber,
        bool bScreenCenter)
{
  float v5; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  int v7; // r12d
  int v8; // eax
  int v9; // eax
  const Vector *AbsOrigin; // rax
  int iTeamNumbera; // [rsp+4h] [rbp-2Ch]
  float vOrigin; // [rsp+8h] [rbp-28h]
  CDOTAPlayer *vOrigina; // [rsp+8h] [rbp-28h]
  Vector vOrigin_8; // 0:^10.12

  if ( pDOTANPC != 0 && pClientPlayer != 0 )
  {
    if ( bScreenCenter )
    {
      iTeamNumbera = iTeamNumber;
      vOrigina = pClientPlayer;
      AbsOrigin = CBaseEntity::GetAbsOrigin(pClientPlayer);
      pClientPlayer = vOrigina;
      vOrigin_8.x = AbsOrigin->x;
      v5 = AbsOrigin->y + 300.0;
      vOrigin_8.z = AbsOrigin->z;
      iTeamNumber = iTeamNumbera;
    }
    else
    {
      v5 = pClientPlayer->m_vecCrosshairTracePos.y + 0.0;
      vOrigin_8.z = pClientPlayer->m_vecCrosshairTracePos.z + 10.0;
      vOrigin_8.x = pClientPlayer->m_vecCrosshairTracePos.x + 0.0;
    }
    if ( iTeamNumber != 4 )
    {
      vOrigin = v5;
      vptr_IHandleEntity = pClientPlayer->_vptr_IHandleEntity;
      if ( pDOTANPC->m_iIsControllableByPlayer64.m_Value != 0 )
      {
        v7 = vptr_IHandleEntity[393](pClientPlayer);
        v8 = (*(pDOTANPC->_vptr_IHandleEntity + 414))(pDOTANPC);
        CDOTA_PlayerResource::SetUnitShareMaskForPlayer(g_pDOTAPlayerResource, v8, v7, 3, 1);
      }
      else
      {
        v9 = vptr_IHandleEntity[393](pClientPlayer);
        CDOTA_BaseNPC::SetControllableByPlayer(pDOTANPC, v9, 0);
      }
      v5 = vOrigin;
    }
    vOrigin_8.y = v5;
    FindClearSpaceForUnit(pDOTANPC, vOrigin_8, 1);
  }
}


// OnCreateUnitSpawnComplete  (line 1266, @0x00000000027ae850, libserver.so)  // inlines: AssignTo, Base, CEntityHandle, Element, FindKeyHash, Get, GetValue, GetValue<CEntityInstance*>, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, atoi, operator[]
// calls: CEntityHandle::operator CEntityInstance*, __dynamic_cast, CreateUnitSpawnComplete, VariantFieldTypeName, Warning, strtol
// callers: OnDemoHeroSpawnComplete, OnCreateNeutralheroSpawnComplete, OnCreateBotWearingItemSpawnComplete, OnCreateBotWearingSetSpawnComplete
// strings: "No free conversion of %s variant to CEntityInstance * right now\n", "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_27AE9AD
void __fastcall OnCreateUnitSpawnComplete(CDOTA_BaseNPC *pDOTANPC, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // r12d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rax
  int16 m_type; // dx
  uint32 m_int; // eax
  CEntityInstance *v12; // rdi
  CDOTAPlayer *v13; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v14; // di
  uint64 i; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v16; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rcx
  __int64 v18; // rax
  CEntityVariant *v19; // rcx
  int16 v20; // ax
  const char *v21; // rax
  const char *v22; // rax
  CEntityHandle v23; // [rsp+0h] [rbp-30h] BYREF

  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_15:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_12;
    goto LABEL_16;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -1429279605 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_15;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -1429279605 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_type = p_m_value->m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    m_int = p_m_value->m_int;
    if ( m_type == 13 )
    {
      v23.m_Index = m_int;
      v12 = CEntityHandle::operator CEntityInstance *(&v23);
      if ( v12 != 0 )
      {
        v13 = __dynamic_cast(v12, &`typeinfo for'CEntityInstance, &`typeinfo for'CDOTAPlayer, 0);
        goto LABEL_17;
      }
    }
    else
    {
      v21 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to CEntityInstance * right now\n", v21);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
    }
  }
LABEL_16:
  v13 = 0;
LABEL_17:
  if ( m_nCount > 0 )
  {
    v14 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( v14 != 0 )
      {
        v16 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v14 > 9 )
          v16 = pKeyValues->m_keyHashes.m_pElements;
        if ( v16[i] == -175874245 )
        {
LABEL_25:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v17 = pKeyValues->m_keyValues.m_pElements;
          else
            v17 = 0;
          v18 = i;
          LODWORD(i) = 0;
          v19 = &v17[v18].m_value;
          v20 = v19->m_type;
          if ( v20 != 0 )
            goto LABEL_28;
          goto LABEL_30;
        }
      }
      else if ( *(4 * i) == -175874245 )
      {
        goto LABEL_25;
      }
    }
  }
  v19 = &CEntityKeyValues::sm_EmptyVariant;
  LODWORD(i) = 0;
  v20 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v20 != 0 )
  {
LABEL_28:
    switch ( v20 )
    {
      case 1:
        LODWORD(i) = v19->m_float;
        break;
      case 5:
        LODWORD(i) = v19->m_int;
        break;
      case 6:
        LODWORD(i) = v19->m_char;
        break;
      case 26:
        LODWORD(i) = 0x7FFFFFFF;
        if ( v19->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(i) = 0x80000000;
          if ( v19->m_uint64 >= 0xFFFFFFFF80000000LL )
            i = v19->m_uint64;
        }
        break;
      case 30:
        LODWORD(i) = strtol(v19->m_pszString, 0, 10);
        break;
      case 33:
        LODWORD(i) = 0x7FFFFFFF;
        if ( v19->m_uint64 <= 0x7FFFFFFE )
          LODWORD(i) = v19->m_uint64;
        break;
      case 34:
        LODWORD(i) = v19->m_float64;
        break;
      case 37:
        LODWORD(i) = 0x7FFFFFFF;
        if ( v19->m_int <= 0x7FFFFFFEu )
          LODWORD(i) = v19->m_int;
        break;
      default:
        v22 = VariantFieldTypeName(v20);
        Warning("No conversion from %s to int now\n", v22);
        LODWORD(i) = 0;
        break;
    }
  }
LABEL_30:
  CreateUnitSpawnComplete(pDOTANPC, v13, i, 0);
}


// DebugCreateUnit  (line 1273, @0x00000000027bddd0, libserver.so)  // inlines: Bind, CDotaNPCSpawnerContext, CEntityKeyValuesModifyScope, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlDelegate, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, DOTA_Character_ScriptSpawn, FastDelegate2, GetBool, GetHeroesKeyValues, GetInstance, GetUnitsKeyValues, IndexToIdentity, Instance, IsAddOnGame, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SetMementoFrom, SetValue<CDOTAPlayer*>, ToDOTAPlayer, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope
// calls: DOTAGameManager, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetName, V_stristr_fast(char const*,char const*), KeyValues::GetInt, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue<CDOTAPlayer*>, CEntityKeyValuesModifyScope::Release, DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> >, CEntityKeyValues::~CEntityKeyValues (25 total)
// callers: CDOTAGamerules::OnDemoHero, dota_create_unit, dota_create_bot_wearing_set, dota_create_bot_wearing_item, dota_create_neutral_hero
// strings: "Failed to create Bot.\n", "Hero is not enabled!", "Couldn't find unit by that name!"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnCreateUnitSpawnComplete(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall DebugCreateUnit(
        CDOTAPlayer *pClientPlayer,
        const char *pUnit,
        int iTeamNumber,
        bool bScreenCenter,
        CDotaNPCSpawnerContext *pContext)
{
  CDOTAGameManager *v8; // rax
  KeyValues *FirstTrueSubKey; // rbx
  const char *Name; // rax
  CDOTAPlayer *v11; // r14
  const char *v12; // rax
  vec_t z; // edx
  CDOTAGameManager *v14; // rax
  const KeyValues *m_pkvAddOnUnits; // rdi
  const char *v16; // rax
  KeyValues *m_pkvAddOnHeroes; // rdi
  CDOTA_Commander *v18; // rax
  const char *UnusedBotName; // rsi
  int v20; // eax
  __int64 v21; // rsi
  CGameEntitySystem *v22; // rdx
  CEntityIdentity *v23; // rcx
  __int64 v24; // rdx
  CDOTATeam *v25; // rax
  CDOTAPlayer *v26; // r14
  const char *v27; // rax
  CTeam *GlobalTeam; // rax
  CTeam *v29; // rax
  bool v30; // cc
  int (**vptr_IHandleEntity)(...); // rax
  char v32; // [rsp+10h] [rbp-100h]
  CBaseEntity *v33; // [rsp+10h] [rbp-100h]
  CDOTAPlayer *vptr_IEntityResourceManifestBuilder; // [rsp+10h] [rbp-100h]
  int v35; // [rsp+10h] [rbp-100h]
  CDOTAPlayer *pClientPlayera; // [rsp+18h] [rbp-F8h] BYREF
  CDOTAPlayer *pPlayer; // [rsp+20h] [rbp-F0h] BYREF
  CUtlAbstractDelegate::GenericMemFuncType vOrigin; // [rsp+28h] [rbp-E8h]
  CDotaNPCSpawnerContext defaultCtx; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v40; // [rsp+D8h] [rbp-38h]
  Vector v41; // 0:xmm0_8.8,8:xmm1_4.4

  pClientPlayera = pClientPlayer;
  v40 = __readfsqword(0x28u);
  v8 = DOTAGameManager();
  if ( *&v8->m_bCustomGame != 0 )
    m_pkvAddOnHeroes = v8->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = v8->m_pkvHeroes;
  FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(m_pkvAddOnHeroes);
  if ( FirstTrueSubKey != 0 )
  {
    while ( 1 )
    {
      Name = KeyValues::GetName(FirstTrueSubKey);
      if ( V_stristr_fast(Name, pUnit) != 0 )
        break;
      FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
      if ( FirstTrueSubKey == 0 )
        goto LABEL_16;
    }
    if ( KeyValues::GetInt(FirstTrueSubKey, "Enabled", 0) == 0 && !IsAppDota2Main() )
    {
      Msg("Hero is not enabled!");
      return;
    }
    v32 = 1;
  }
  else
  {
LABEL_16:
    v14 = DOTAGameManager();
    if ( v14->m_bCustomGame || v14->m_bEventGame )
      m_pkvAddOnUnits = v14->m_pkvAddOnUnits;
    else
      m_pkvAddOnUnits = v14->m_pkvUnits;
    FirstTrueSubKey = KeyValues::GetFirstSubKey(m_pkvAddOnUnits);
    if ( FirstTrueSubKey == 0 )
    {
LABEL_41:
      Msg("Couldn't find unit by that name!");
      return;
    }
    while ( 1 )
    {
      v16 = KeyValues::GetName(FirstTrueSubKey);
      if ( V_stristr_fast(v16, pUnit) != 0 )
        break;
      FirstTrueSubKey = KeyValues::GetNextKey(FirstTrueSubKey);
      if ( FirstTrueSubKey == 0 )
        goto LABEL_41;
    }
    v32 = 0;
  }
  vOrigin.__delta = 0;
  vOrigin.__pfn = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
  CEntityKeyValues::CEntityKeyValues(&defaultCtx.m_entityKeyValues);
  if ( pContext == 0 )
    pContext = &defaultCtx;
  defaultCtx.m_pParent = 0;
  defaultCtx.m_pCompletionListener = 0;
  defaultCtx.m_callback.m_Closure.m_pFunction = vOrigin;
  defaultCtx.m_callback.m_Closure.m_pthis = OnCreateUnitSpawnComplete;
  pPlayer = 0;
  vOrigin.__pfn = 0;
  CEntityKeyValuesModifyScope::BeginModify(&pPlayer, &pContext->m_entityKeyValues);
  vOrigin.__delta = pContext;
  CEntityKeyValues::SetValue<CDOTAPlayer *>(&pContext->m_entityKeyValues, -1429279605, &pClientPlayera);
  CEntityKeyValuesModifyScope::Release(&pPlayer);
  if ( v32 != 0 )
  {
    v33 = *(*engine + 376LL);
    v18 = DOTACommander();
    UnusedBotName = CDOTA_Commander::GetUnusedBotName(v18);
    v20 = (v33)(engine, UnusedBotName);
    v22 = g_pGameEntitySystem;
    if ( v20 <= 0x7FFE
      && (v23 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v20 >> 9]) != 0
      && (v24 = v20 & 0x1FF, v21 = 8 * v24, (v22 = &v23[v24]) != 0)
      && v20 == (*&v22->m_EntityList.m_Lock.gap0 & 0x7FFF)
      && (vptr_IEntityResourceManifestBuilder = v22->_vptr_IEntityResourceManifestBuilder,
          v22->_vptr_IEntityResourceManifestBuilder != 0)
      && (*(*v22->_vptr_IEntityResourceManifestBuilder + 140))(v22->_vptr_IEntityResourceManifestBuilder) != 0 )
    {
      pPlayer = vptr_IEntityResourceManifestBuilder;
      CBaseEntity::ClearFlags(vptr_IEntityResourceManifestBuilder);
      CBaseEntity::AddFlag(pPlayer, 384);
      if ( pClientPlayera != 0 )
      {
        (*(pPlayer->_vptr_IHandleEntity + 70))(pPlayer, iTeamNumber);
      }
      else
      {
        GlobalTeam = GetGlobalTeam(2);
        v35 = (*(GlobalTeam->_vptr_IHandleEntity + 218))(GlobalTeam);
        v29 = GetGlobalTeam(3);
        v30 = v35 <= (*(v29->_vptr_IHandleEntity + 218))(v29);
        vptr_IHandleEntity = pPlayer->_vptr_IHandleEntity;
        if ( v30 )
          vptr_IHandleEntity[70](pPlayer, 2);
        else
          vptr_IHandleEntity[70](pPlayer, 3);
      }
      v25 = GetGlobalTeam(iTeamNumber);
      if ( v25 != 0 && CDOTATeam::IsTeamFull(v25) )
        CEntityKeyValues::SetValue<CDOTAPlayer *>(&pContext->m_entityKeyValues, -1104771937, &pClientPlayera);
      else
        CEntityKeyValues::SetValue<CDOTAPlayer *>(&pContext->m_entityKeyValues, -1104771937, &pPlayer);
      (*(pPlayer->_vptr_IHandleEntity + 400))(pPlayer, 1);
      v26 = pPlayer;
      v27 = KeyValues::GetName(FirstTrueSubKey);
      DOTA_Hero_Spawn(v27, v26, pContext);
    }
    else
    {
      pPlayer = 0;
      Msg("Failed to create Bot.\n", v21, v22);
    }
  }
  else
  {
    v11 = pClientPlayera;
    if ( pClientPlayera != 0 )
    {
      v12 = KeyValues::GetName(FirstTrueSubKey);
      z = vec3_origin.z;
      pPlayer = *&vec3_origin.x;
      *&v41.x = *&vec3_origin.x;
      *&vOrigin.__pfn = z;
      v41.z = z;
      DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC>>(0, v12, v41, iTeamNumber, v11, 0, pContext);
    }
  }
  CEntityKeyValues::~CEntityKeyValues(&defaultCtx.m_entityKeyValues);
}


// dota_treerespawn  (line 1384, @0x00000000027a7670, libserver.so)
// calls: CDOTAGamerules::IsCheatMode, CGridNav::RegrowAllTrees
void __fastcall dota_treerespawn(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( CDOTAGamerules::IsCheatMode() )
    CGridNav::RegrowAllTrees(&g_GridNav);
}


// DotaCreateUnitAutocomplete  (line 1396, @0x00000000027bba20, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<CUtlString>, Element, GetHeroesKeyValues, GetUnitsKeyValues, GrowMemory, IsAddOnGame, Purge, PurgeAndDeleteElements, RemoveAll, V_strlen, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: strlen, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CFmtStrN<256, false>::CFmtStrN, CUtlString::Set, V_stristr_fast(char const*,char const*), CUtlMemory<CUtlString, int>::Grow, operator delete, CUtlMemory<char*, int>::Purge, DOTAGameManager, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetName (15 total)
// strings: "%s %s %s"
// globals: DotaCreateUnitAutocomplete(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &)::s_pValidTeamNames, skChatMessageStrings
void __fastcall DotaCreateUnitAutocomplete(
        const char *pPartial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  int v4; // r13d
  const char *v5; // r14
  int m_Size; // edx
  const char *const *v7; // r12
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // r13
  CUtlString *v11; // rax
  const char *v12; // r15
  int v13; // r13d
  int v14; // eax
  CUtlString *v15; // rax
  CUtlString *v16; // rdi
  __int64 v17; // r12
  int i; // ebx
  char *v19; // rdi
  CDOTAGameManager *v20; // rax
  KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *FirstTrueSubKey; // r12
  __int64 v23; // r13
  int v24; // eax
  __int64 v25; // r13
  CUtlString *v26; // rax
  const char *Name; // rax
  const char *v28; // r15
  CDOTAGameManager *v29; // rax
  KeyValues *m_pkvAddOnUnits; // rdi
  KeyValues *NextTrueSubKey; // r12
  __int64 v32; // r13
  int v33; // eax
  __int64 v34; // r13
  CUtlString *v35; // rax
  const char *v36; // rax
  const char *v37; // r15
  CUtlVector<char*,CUtlMemory<char*,int> > args; // [rsp+20h] [rbp-170h] BYREF
  CFmtStrN<256,false> v39; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v40; // [rsp+158h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  if ( pPartial != 0 )
    v4 = strlen(pPartial);
  else
    v4 = 0;
  args.m_Size = 0;
  args.m_Memory.m_pMemory = 0;
  args.m_Memory.m_nAllocationCount = 0;
  args.m_Memory.m_nGrowSize = 0;
  V_SplitString(pPartial, " ", &args);
  v5 = "";
  m_Size = args.m_Size - 1;
  if ( pPartial[v4 - 1] == 32 )
    m_Size = args.m_Size;
  else
    v5 = args.m_Memory.m_pMemory[m_Size];
  if ( m_Size == 1 )
  {
    v20 = DOTAGameManager();
    if ( v20->m_bCustomGame || v20->m_bEventGame )
      m_pkvAddOnHeroes = v20->m_pkvAddOnHeroes;
    else
      m_pkvAddOnHeroes = v20->m_pkvHeroes;
    FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(m_pkvAddOnHeroes);
    if ( FirstTrueSubKey != 0 )
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(FirstTrueSubKey);
        v28 = Name;
        if ( *v5 == 0 )
          break;
        if ( V_stristr_fast(Name, v5) != 0 )
        {
          v23 = commands->m_Size;
          if ( v23 == commands->m_Memory.m_nAllocationCount )
          {
LABEL_44:
            CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
            v24 = commands->m_Size;
            goto LABEL_37;
          }
LABEL_36:
          v24 = v23;
LABEL_37:
          v25 = v23;
          commands->m_Size = v24 + 1;
          v26 = &commands->m_Memory.m_pMemory[v25];
          if ( v26 != 0 )
            v26->m_pString = 0;
          CFmtStrN<256,false>::CFmtStrN(&v39, "%s %s", *args.m_Memory.m_pMemory, v28);
          CUtlString::Set(&commands->m_Memory.m_pMemory[v25], v39.m_szBuf);
        }
        FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
        if ( FirstTrueSubKey == 0 )
          goto LABEL_45;
      }
      v23 = commands->m_Size;
      if ( v23 == commands->m_Memory.m_nAllocationCount )
        goto LABEL_44;
      goto LABEL_36;
    }
LABEL_45:
    v29 = DOTAGameManager();
    if ( v29->m_bCustomGame || v29->m_bEventGame )
      m_pkvAddOnUnits = v29->m_pkvAddOnUnits;
    else
      m_pkvAddOnUnits = v29->m_pkvUnits;
    NextTrueSubKey = KeyValues::GetFirstTrueSubKey(m_pkvAddOnUnits);
    if ( NextTrueSubKey == 0 )
      goto LABEL_24;
    while ( 1 )
    {
      v36 = KeyValues::GetName(NextTrueSubKey);
      v37 = v36;
      if ( *v5 == 0 )
        break;
      if ( V_stristr_fast(v36, v5) != 0 )
      {
        v32 = commands->m_Size;
        if ( v32 == commands->m_Memory.m_nAllocationCount )
        {
LABEL_58:
          CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
          v33 = commands->m_Size;
          goto LABEL_51;
        }
LABEL_50:
        v33 = v32;
LABEL_51:
        v34 = v32;
        commands->m_Size = v33 + 1;
        v35 = &commands->m_Memory.m_pMemory[v34];
        if ( v35 != 0 )
          v35->m_pString = 0;
        CFmtStrN<256,false>::CFmtStrN(&v39, "%s %s", *args.m_Memory.m_pMemory, v37);
        CUtlString::Set(&commands->m_Memory.m_pMemory[v34], v39.m_szBuf);
      }
      NextTrueSubKey = KeyValues::GetNextTrueSubKey(NextTrueSubKey);
      if ( NextTrueSubKey == 0 )
        goto LABEL_24;
    }
    v32 = commands->m_Size;
    if ( v32 == commands->m_Memory.m_nAllocationCount )
      goto LABEL_58;
    goto LABEL_50;
  }
  if ( m_Size == 2 )
  {
    v7 = DotaCreateUnitAutocomplete(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &)::s_pValidTeamNames;
    while ( 1 )
    {
      v12 = *v7;
      if ( *v5 == 0 )
        break;
      if ( V_stristr_fast(*v7, v5) != 0 )
      {
        v8 = commands->m_Size;
        if ( v8 == commands->m_Memory.m_nAllocationCount )
        {
LABEL_18:
          CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
          v9 = commands->m_Size;
          goto LABEL_11;
        }
LABEL_10:
        v9 = v8;
LABEL_11:
        v10 = v8;
        commands->m_Size = v9 + 1;
        v11 = &commands->m_Memory.m_pMemory[v10];
        if ( v11 != 0 )
          v11->m_pString = 0;
        CFmtStrN<256,false>::CFmtStrN(&v39, "%s %s %s", *args.m_Memory.m_pMemory, *(args.m_Memory.m_pMemory + 1), v12);
        CUtlString::Set(&commands->m_Memory.m_pMemory[v10], v39.m_szBuf);
      }
      if ( ++v7 == skChatMessageStrings )
        goto LABEL_24;
    }
    v8 = commands->m_Size;
    if ( v8 == commands->m_Memory.m_nAllocationCount )
      goto LABEL_18;
    goto LABEL_10;
  }
  v13 = commands->m_Size;
  v14 = commands->m_Size;
  if ( commands->m_Size == commands->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
    v14 = commands->m_Size;
  }
  commands->m_Size = v14 + 1;
  v15 = &commands->m_Memory.m_pMemory[v13];
  if ( v15 != 0 )
  {
    v15->m_pString = 0;
    v16 = &commands->m_Memory.m_pMemory[v13];
  }
  else
  {
    v16 = 0;
  }
  CUtlString::Set(v16, pPartial);
LABEL_24:
  v17 = 0;
  for ( i = 0; i < args.m_Size; ++i )
  {
    v19 = args.m_Memory.m_pMemory[v17++];
    operator delete(v19);
  }
  args.m_Size = 0;
  if ( (args.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&args.m_Memory);
    args.m_Size = 0;
    if ( (args.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&args.m_Memory);
      if ( (args.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&args.m_Memory);
    }
  }
}


// dota_create_unit  (line 1490, @0x00000000027be2f0, libserver.so)  // inlines: Arg, DOTAGameRules, FStrEq, GetTeamNumber, ToDOTAPlayer, _V_strcmp, operator[]
// calls: CDOTAGamerules::IsCheatMode, ConVar::SetValue, UTIL_GetCommandClient, DOTA_ServerHasEntitySpace, Msg, DebugCreateUnit, V_stristr_fast(char const*,char const*), sscanf
// strings: "-no_mouse", "No unit specified\n", "Not enough edict slots remaining to create entity!\n", "custom%i"
void __fastcall dota_create_unit(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rax
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v5; // r12
  int m_nArgc; // eax
  unsigned __int8 m_Value; // dl
  int v8; // r14d
  const char *v9; // r13
  int v10; // edx
  const char *v11; // rsi
  char v12; // cl
  const char *v13; // rsi
  int v14; // [rsp-8h] [rbp-2Ch] BYREF

  if ( g_pGameRules != 0 && CDOTAGamerules::IsCheatMode() )
  {
    ConVar::SetValue(&dota_bot_mode, 1);
    v3 = "";
    if ( args->m_nArgc > 1 )
      v3 = args->m_ppArgv[1];
    if ( *v3 == 0 )
    {
      Msg("No unit specified\n");
      return;
    }
    CommandClient = UTIL_GetCommandClient();
    v5 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( DOTA_ServerHasEntitySpace() )
      {
        m_nArgc = args->m_nArgc;
        m_Value = v5->m_iTeamNum.m_Value;
        v8 = m_Value;
        if ( args->m_nArgc <= 2 )
        {
          v12 = 0;
        }
        else
        {
          v9 = args->m_ppArgv[2];
          if ( v9 == 0 )
          {
            v11 = 0;
LABEL_24:
            v12 = strcmp(v11, "-no_mouse") == 0;
            goto LABEL_27;
          }
          if ( *v9 == 0 )
            goto LABEL_22;
          if ( v9 == "enemy" || strcmp(args->m_ppArgv[2], "enemy") == 0 )
          {
            v8 = (m_Value == 2) + 2;
            goto LABEL_22;
          }
          if ( v9 == "neutral" || strcmp(args->m_ppArgv[2], "neutral") == 0 )
          {
            v8 = 4;
            goto LABEL_22;
          }
          if ( v9 == "radiant" || strcmp(args->m_ppArgv[2], "radiant") == 0 )
          {
            v8 = 2;
            goto LABEL_22;
          }
          if ( v9 == "dire" || strcmp(args->m_ppArgv[2], "dire") == 0 )
          {
            v8 = 3;
LABEL_22:
            v10 = args->m_nArgc;
            goto LABEL_23;
          }
          if ( v9 == V_stristr_fast(args->m_ppArgv[2], "custom") )
          {
            v14 = -1;
            if ( sscanf(v9, "custom%i", &v14) == 1 && (v14 - 1) <= 7 )
              v8 = v14 + 5;
          }
          v10 = args->m_nArgc;
          v12 = 0;
          m_nArgc = args->m_nArgc;
          if ( args->m_nArgc > 2 )
          {
            v9 = args->m_ppArgv[2];
LABEL_23:
            v11 = v9;
            m_nArgc = v10;
            if ( v9 == "-no_mouse" )
            {
              v12 = 1;
              goto LABEL_28;
            }
            goto LABEL_24;
          }
        }
LABEL_27:
        v13 = "";
        if ( m_nArgc <= 1 )
        {
LABEL_29:
          DebugCreateUnit(v5, v13, v8, v12, 0);
          return;
        }
LABEL_28:
        v13 = args->m_ppArgv[1];
        goto LABEL_29;
      }
      Msg("Not enough edict slots remaining to create entity!\n");
    }
  }
}


// dota_spawn_rune  (line 1557, @0x00000000027a78d0, libserver.so)
// calls: CDOTAGamerules::IsCheatMode, CDOTAGamerules::SpawnRune
void __fastcall dota_spawn_rune(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( CDOTAGamerules::IsCheatMode() )
    CDOTAGamerules::SpawnRune(g_pGameRules, 0);
}


// OnCreateNeutralheroSpawnComplete  (line 1565, @0x00000000027aeac0, libserver.so)  // inlines: AssignTo, Base, CEntityHandle, Element, FindKeyHash, Get, GetValue, GetValue<CEntityInstance*>, operator[]
// calls: OnCreateUnitSpawnComplete, CDOTA_BaseNPC::SetControllableByPlayer, CEntityHandle::operator CEntityInstance*, __dynamic_cast, VariantFieldTypeName, Warning
// strings: "No free conversion of %s variant to CEntityInstance * right now\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall OnCreateNeutralheroSpawnComplete(CDOTA_BaseNPC *pDOTANPC, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rax
  int16 m_type; // dx
  void *v11; // rdi
  int v12; // eax
  uint32 m_int; // eax
  CEntityInstance *v14; // rdi
  const char *v15; // rax
  CEntityHandle v16; // [rsp+0h] [rbp-20h] BYREF

  OnCreateUnitSpawnComplete(pDOTANPC, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_14:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      goto LABEL_12;
    goto LABEL_15;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -1429279605 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_14;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -1429279605 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
  {
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
LABEL_15:
  m_int = p_m_value->m_int;
  if ( m_type != 13 )
  {
    v15 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to CEntityInstance * right now\n", v15);
    goto LABEL_12;
  }
  v16.m_Index = m_int;
  v14 = CEntityHandle::operator CEntityInstance *(&v16);
  if ( v14 == 0 )
    goto LABEL_12;
  v11 = __dynamic_cast(v14, &`typeinfo for'CEntityInstance, &`typeinfo for'CDOTAPlayer, 0);
LABEL_13:
  v12 = (*(*v11 + 3144LL))(v11);
  CDOTA_BaseNPC::SetControllableByPlayer(pDOTANPC, v12, 0);
}


// dota_create_neutral_hero  (line 1575, @0x00000000027bea60, libserver.so)  // inlines: Arg, Bind, CDotaNPCSpawnerContext, CEntitySpawnerContext, CEntitySpawnerContextBase, CUtlDelegate, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, FStrEq, FastDelegate2, SetMementoFrom, ToDOTAPlayer, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, operator[], ~CDotaNPCSpawnerContext, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase
// calls: Msg, UTIL_GetCommandClient, CEntityKeyValues::CEntityKeyValues, DebugCreateUnit, CEntityKeyValues::~CEntityKeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "No unit specified\n", "-no_mouse"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnCreateNeutralheroSpawnComplete(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall dota_create_neutral_hero(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rax
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v5; // r12
  int m_nArgc; // eax
  char v7; // cl
  const char *v8; // rsi
  char *v9; // rsi
  CDotaNPCSpawnerContext spawnerCtx; // [rsp+20h] [rbp-C0h] BYREF
  unsigned __int64 v11; // [rsp+B8h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  v3 = "";
  if ( args->m_nArgc > 1 )
    v3 = args->m_ppArgv[1];
  if ( *v3 == 0 )
  {
    Msg("No unit specified\n");
    return;
  }
  CommandClient = UTIL_GetCommandClient();
  v5 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    CEntityKeyValues::CEntityKeyValues(&spawnerCtx.m_entityKeyValues);
    spawnerCtx.m_callback.m_Closure.m_pthis = OnCreateNeutralheroSpawnComplete;
    m_nArgc = args->m_nArgc;
    spawnerCtx.m_pParent = 0;
    spawnerCtx.m_pCompletionListener = 0;
    spawnerCtx.m_callback.m_Closure.m_pFunction.__pfn = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
    spawnerCtx.m_callback.m_Closure.m_pFunction.__delta = 0;
    if ( m_nArgc > 2 )
    {
      v9 = args->m_ppArgv[2];
      if ( v9 == "-no_mouse" )
      {
        v7 = 1;
        goto LABEL_11;
      }
      v7 = strcmp(v9, "-no_mouse") == 0;
    }
    else
    {
      v7 = 0;
    }
    v8 = "";
    if ( m_nArgc <= 1 )
    {
LABEL_12:
      DebugCreateUnit(v5, v8, 4, v7, &spawnerCtx);
      CEntityKeyValues::~CEntityKeyValues(&spawnerCtx.m_entityKeyValues);
      return;
    }
LABEL_11:
    v8 = args->m_ppArgv[1];
    goto LABEL_12;
  }
}


// dota_ping  (line 1627, @0x00000000027a8cd0, libserver.so)  // inlines: CDOTAUserMsg_Ping_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_Ping_t>, FindOrCreateGameEvent<CDOTAUserMsg_Ping_t>, PostEvent<CDOTAUserMsg_Ping_t>, SendUserMessage<CDOTAUserMsg_Ping_t>, ToDOTAPlayer, entindex, set_has_loss, set_has_ping, set_loss, set_ping, ~CDOTAUserMsg_Ping_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: UTIL_GetCommandClient, CEntityInstance::GetEntityIndex, UTIL_GetPlayerConnectionInfo, CDOTAUserMsg_Ping::CDOTAUserMsg_Ping, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_Ping::~CDOTAUserMsg_Ping, __stack_chk_fail, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_Ping_t>(bool)::s_hEvent
void __fastcall dota_ping(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  const CEntityInstance *v3; // rbx
  CEntityIndex v4; // eax
  CBasePlayer *v5; // r13
  __int64 v6; // r14
  IGameEventSystem *v7; // r13
  void (__fastcall *v8)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  int iping; // [rsp+18h] [rbp-198h] BYREF
  int iloss; // [rsp+1Ch] [rbp-194h] BYREF
  _QWORD v11[2]; // [rsp+20h] [rbp-190h] BYREF
  int v12; // [rsp+30h] [rbp-180h]
  int v13; // [rsp+38h] [rbp-178h]
  int v14; // [rsp+3Ch] [rbp-174h]
  CSingleUserRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+178h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    v4.m_Data = CEntityInstance::GetEntityIndex(v3).m_Data;
    UTIL_GetPlayerConnectionInfo(v4, &iping, &iloss);
    CDOTAUserMsg_Ping::CDOTAUserMsg_Ping(v11);
    v11[0] = off_42B20B0;
    v5 = UTIL_GetCommandClient();
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&filter, v5);
    CRecipientFilter::MakeReliable(&filter);
    v6 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_Ping_t>(bool)::s_hEvent;
    v12 |= 3u;
    v13 = iping;
    v14 = iloss;
    v7 = g_pGameEventSystem;
    v8 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_Ping_t>(bool)::s_hEvent);
    v8(v7, 0, 0, &filter, v6, v11, 32);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&filter);
    v11[0] = &off_42B1F30;
    CDOTAUserMsg_Ping::~CDOTAUserMsg_Ping(v11);
  }
}


// RequestEndGame  (line 1648, @0x00000000027ce530, libserver.so)  // inlines: CSteamID, DOTAGameRules, Get, Get<google::protobuf::RepeatedPtrField<CSODOTALobby_CExtraMsg>::TypeHandler>, GetAccountID, GetExtraMessage<CMsgLeagueAdminList>, GetLobby, extra_messages
// calls: GDOTAGCClientSystem, CBaseMultiplayerPlayer::GetSteamID, CDOTALobby::FindFirstExtraMessage, CMsgLeagueAdminList::CMsgLeagueAdminList, google::protobuf::MessageLite::ParseFromString(std::string const&), CMsgLeagueAdminList::~CMsgLeagueAdminList, CDOTAGamerules::MakeTeamLose, _Unwind_Resume
// callers: dota_ref_winner_dire, dota_ref_winner_radiant
void __fastcall RequestEndGame(CDOTAPlayer *pPlayer, int iTeam)
{
  CDOTAGCServerSystem *v4; // rax
  __int64 v5; // r13
  int FirstExtraMessage; // eax
  __int64 v7; // r14
  _DWORD *v8; // rax
  CSteamID steamID; // [rsp+0h] [rbp-60h] BYREF
  _BYTE v10[24]; // [rsp+10h] [rbp-50h] BYREF
  _DWORD *v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+30h] [rbp-30h]

  if ( GDOTAGCClientSystem() != 0 )
  {
    HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
    steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
    CBaseMultiplayerPlayer::GetSteamID(pPlayer, &steamID);
    if ( GDOTAGCClientSystem() != 0 )
    {
      v4 = GDOTAGCClientSystem();
      v5 = *(v4 + 260);
      if ( v5 != 0 )
      {
        FirstExtraMessage = CDOTALobby::FindFirstExtraMessage(*(v4 + 260), 0x1D0Au);
        v7 = FirstExtraMessage;
        if ( FirstExtraMessage != -1 )
        {
          CMsgLeagueAdminList::CMsgLeagueAdminList(v10);
          if ( google::protobuf::MessageLite::ParseFromString(v10, *(*(*(v5 + 360) + 8 * v7) + 24LL)) != 0 && v12 > 0 )
          {
            if ( *v11 == steamID.m_steamid.m_comp )
            {
LABEL_13:
              if ( g_pGameRules != 0 )
              {
                CDOTAGamerules::MakeTeamLose(g_pGameRules, iTeam);
                CMsgLeagueAdminList::~CMsgLeagueAdminList(v10);
                return;
              }
            }
            else
            {
              v8 = v11 + 1;
              while ( v8 != &v11[v12 - 1 + 1] )
              {
                if ( *v8++ == steamID.m_steamid.m_comp )
                  goto LABEL_13;
              }
            }
          }
          CMsgLeagueAdminList::~CMsgLeagueAdminList(v10);
        }
      }
    }
  }
}


// dota_ref_winner_radiant  (line 1686, @0x00000000027ce6a0, libserver.so)  // inlines: ToDOTAPlayer
// calls: UTIL_GetCommandClient, RequestEndGame
void __fastcall dota_ref_winner_radiant(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v3; // rbx

  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    RequestEndGame(v3, 3);
}


// dota_ref_winner_dire  (line 1695, @0x00000000027ce650, libserver.so)  // inlines: ToDOTAPlayer
// calls: UTIL_GetCommandClient, RequestEndGame
void __fastcall dota_ref_winner_dire(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v3; // rbx

  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    RequestEndGame(v3, 2);
}


// IsPurchasedFromSecretShop  (line 1706, @0x00000000027ad630, libserver.so)  // inlines: GetBool
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetInt
// callers: IsPurchasedFromMainShop, CDOTA_BotMode_SecretShop::GetDesire, Script_IsItemPurchasedFromSecretShop, CDOTA_BaseNPC_Hero::PurchaseItems
bool __fastcall IsPurchasedFromSecretShop(const char *pItemName)
{
  CDOTAGameManager *v2; // rax
  KeyValues *AbilityByName; // rdi
  bool result; // al

  v2 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v2, pItemName);
  result = 0;
  if ( AbilityByName != 0 )
    return KeyValues::GetInt(AbilityByName, "SecretShop", 0) != 0;
  return result;
}


// IsPurchasedFromSideShop  (line 1717, @0x00000000027ad670, libserver.so)  // inlines: GetBool
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::GetInt
// callers: Script_IsItemPurchasedFromSideShop, CDOTA_BotMode_SideShop::GetDesire, CDOTA_BaseNPC_Hero::PurchaseItems
bool __fastcall IsPurchasedFromSideShop(const char *pItemName)
{
  CDOTAGameManager *v2; // rax
  KeyValues *AbilityByName; // rdi
  bool result; // al

  v2 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v2, pItemName);
  result = 0;
  if ( AbilityByName != 0 )
    return KeyValues::GetInt(AbilityByName, "SideShop", 0) != 0;
  return result;
}


// IsPurchasedFromMainShop  (line 1728, @0x00000000027ad6b0, libserver.so)
// calls: IsPurchasedFromSecretShop
// callers: CDOTA_BaseNPC_Hero::PurchaseItems
bool __fastcall IsPurchasedFromMainShop(const char *pItemName)
{
  return !IsPurchasedFromSecretShop(pItemName);
}


// GetItemCost  (line 1736, @0x00000000027a86c0, libserver.so)  // inlines: GetInt, HKeySymbol
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt
// callers: CDOTA_PlayerResource::ComputeNetWorth, CDOTA_BotMode_SecretShop::GetDesire, CDOTA_BotMode_Farm::GetFarmDesire, CDOTA_BotMode_SideShop::GetDesire, CDOTA_BaseNPC_Hero::PurchaseItems
int __fastcall GetItemCost(const char *pItemName)
{
  CDOTAGameManager *v2; // rax
  KeyValues *AbilityByName; // rbx
  CDOTAGameManager *v4; // rax
  KeyValues *Key; // rax

  v2 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v2, pItemName);
  if ( AbilityByName != 0
    && (v4 = DOTAGameManager(), (Key = KeyValues::FindKey(AbilityByName, v4->m_hKvSymbols[6])) != 0) )
  {
    return CKeyValues_Data::Internal_GetInt(Key);
  }
  else
  {
    return 0;
  }
}


// DOTA_AddAllTeamRecipients  (line 1747, @0x00000000027ad6c0, libserver.so)
// calls: CRecipientFilter::RemoveAllRecipients, CRecipientFilter::AddRecipientsByTeamNumber
// callers: CDOTA_UnitInventory::StartCooldown
void __fastcall DOTA_AddAllTeamRecipients(int nTeamToMatch, CRecipientFilter *pFilter)
{
  int v4; // ebx
  int v5; // esi

  v4 = 0;
  CRecipientFilter::RemoveAllRecipients(pFilter);
  do
  {
    while ( ((v4 - 6) <= 7 || (v4 - 2) <= 1) && v4 != nTeamToMatch )
    {
      if ( ++v4 == 14 )
        return;
    }
    v5 = v4++;
    CRecipientFilter::AddRecipientsByTeamNumber(pFilter, v5);
  }
  while ( v4 != 14 );
}


// DOTA_TeamNumberToString  (line 1764, @0x00000000027ad720, libserver.so)
// strings: "DOTA_TEAM_GOODGUYS", "DOTA_TEAM_BADGUYS"
const char *__fastcall DOTA_TeamNumberToString(int iTeamNumber)
{
  const char *result; // rax

  result = "DOTA_TEAM_GOODGUYS";
  if ( iTeamNumber != 2 )
  {
    result = "DOTA_TEAM_BADGUYS";
    if ( iTeamNumber != 3 )
      return "";
  }
  return result;
}


// OnCreateIllusionsSpawnCompletion  (line 1775, @0x00000000027ca780, libserver.so)  // inlines: AssignTo<long long unsigned int>, Base, CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, Element, FindKeyHash, Get, GetAbilityName, GetBKBChargesUsed, GetBaseAgility, GetBaseIntellect, GetBaseStrength, GetBool, GetCustomKillEffect, GetEHandle, GetEntryIndex, GetInstance, GetModifier_Constant_First, GetPtrValue, GetSerialNumber, GetTeamNumber, GetValue, GetValue<long long unsigned int>, GetValueString, IsListeningToEvent, IsSpecialIllusion, NetworkStateChanged, Purge, RemoveAll, ReplicateModelFromOtherHero, Set, SetAbilityPoints, SetBKBChargesUsed, SetBaseAgility, SetBaseIntellect, SetBaseStrength, SetCustomKillEffect, SetIsClonedItemProxy, TempString, ToDOTABaseNPCHero, operator!=<CDOTA_BaseNPC_Hero>, operator=, operator=<CDOTA_BaseNPC_Hero*>, operator=<float>, operator=<int>, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityKeyValues::GetValue<bool>, CEntityKeyValues::GetValue<int>, CEntityKeyValues::GetValue<CEntityInstance*>, __dynamic_cast, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::GetInt (56 total)
// strings: "illusionLabel", "modifier_illusion", "invul", "modifier_invulnerable", "fullhp", "<NoAbilityName>" (9 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_27CB319, jpt_27CB36D
void __fastcall OnCreateIllusionsSpawnCompletion(CDOTA_BaseNPC *pImage, const CEntityKeyValues *pKeyValues)
{
  int v4; // eax
  int v5; // ebx
  CEntityInstance *v6; // rax
  int m_nCount; // edx
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rcx
  CEntityVariant *p_m_value; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  CEntityVariant *v14; // rax
  const char *m_uint64; // rdx
  float v16; // xmm1_4
  int Health; // eax
  float v18; // xmm1_4
  CEntityIdentity *v19; // rax
  int v20; // edx
  __int16 v21; // cx
  int v22; // r12d
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v24; // rbx
  int16 m_type; // cx
  __int64 v26; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v27; // si
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v28; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v29; // rdx
  CEntityVariant *v30; // rax
  int16 v31; // dx
  const QAngle *AbsAngles; // rax
  int i; // ebx
  int j; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r12
  int (**vptr_IHandleEntity)(...); // rax
  int v38; // eax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *v40; // rsi
  const char *m_pszAbilityName; // rdx
  CDOTA_Item **m_pMemory; // rax
  CDOTA_Item *v43; // r12
  CDOTA_UnitInventory *v44; // rax
  int k; // r14d
  CDOTABaseAbility *AbilityByIndex; // r13
  CDOTABaseAbility *v47; // r12
  int v48; // ebx
  int v49; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v50; // cx
  __int64 v51; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v52; // rdx
  float v53; // xmm1_4
  CDOTA_BaseNPC *v54; // rbx
  __int64 v55; // rax
  float v56; // r12d
  float v57; // r12d
  float v58; // r12d
  float v59; // xmm1_4
  float v60; // xmm1_4
  CUtlStringToken v61; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v63; // cx
  CEntityInstance *v64; // r12
  const char *v65; // rax
  int m_Value; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int v68; // ebx
  CDOTA_ParticleManager *v69; // rax
  double m_float64; // rax
  double v71; // rax
  const char *v72; // rax
  const char *v73; // rax
  double v74; // xmm0_8
  float m_float; // xmm0_4
  double v76; // xmm0_8
  float v77; // xmm0_4
  CDOTA_BaseNPC *v78; // [rsp+0h] [rbp-200h]
  int iPadding; // [rsp+8h] [rbp-1F8h]
  bool bSwapImageAndOriginal; // [rsp+Dh] [rbp-1F3h]
  bool bFindClearSpaceForUnit; // [rsp+Eh] [rbp-1F2h]
  bool bNoDraw; // [rsp+Fh] [rbp-1F1h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pImageList; // [rsp+10h] [rbp-1F0h]
  KeyValues *pKV; // [rsp+18h] [rbp-1E8h]
  CDOTA_BaseNPC *pOriginal; // [rsp+38h] [rbp-1C8h]
  CEntityHandle v87; // [rsp+40h] [rbp-1C0h] BYREF
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > newItems; // [rsp+50h] [rbp-1B0h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v91; // [rsp+1C8h] [rbp-38h]

  v91 = __readfsqword(0x28u);
  if ( pImage == 0 )
    return;
  LOBYTE(newItems.m_Size) = 0;
  bNoDraw = CEntityKeyValues::GetValue<bool>(pKeyValues, 2099599974, &newItems);
  newItems.m_Size = 0;
  v4 = CEntityKeyValues::GetValue<int>(pKeyValues, -2007784921, &newItems.m_Size);
  *&newItems.m_Size = 0;
  v5 = v4;
  v6 = CEntityKeyValues::GetValue<CEntityInstance *>(pKeyValues, 304472099, &newItems);
  if ( v6 != 0 )
    pOriginal = __dynamic_cast(v6, &`typeinfo for'CEntityInstance, &`typeinfo for'CDOTA_BaseNPC, 0);
  else
    pOriginal = 0;
  newItems.m_Size = 0;
  iPadding = CEntityKeyValues::GetValue<int>(pKeyValues, 1624292375, &newItems.m_Size);
  LOBYTE(newItems.m_Size) = 1;
  bFindClearSpaceForUnit = CEntityKeyValues::GetValue<bool>(pKeyValues, -137169196, &newItems);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  LOBYTE(newItems.m_Size) = 0;
  if ( CEntityKeyValues::GetValue<bool>(pKeyValues, -1909311810, &newItems) )
  {
    CRecipientFilter::RemoveAllRecipients(&filter);
    CRecipientFilter::AddRecipientsByTeamNumber(&filter, pOriginal->m_iTeamNum.m_Value);
  }
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_42:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_43;
  }
  v8 = 0;
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v8) == -430771810 )
      goto LABEL_14;
LABEL_11:
    if ( m_nCount <= ++v8 )
      goto LABEL_42;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v8] != -430771810 )
    goto LABEL_11;
LABEL_14:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v11 = pKeyValues->m_keyValues.m_pElements;
  else
    v11 = 0;
  p_m_value = &v11[v8].m_value;
LABEL_43:
  pImageList = 0;
  m_type = p_m_value->m_type;
  if ( m_type != 0 )
  {
    if ( m_type == 33 )
    {
LABEL_137:
      m_float64 = p_m_value->m_float64;
LABEL_138:
      pImageList = *&m_float64;
    }
    else
    {
      if ( (m_type & 0xFFFD) != 0x19 && (m_type - 3) > 1u && m_type != 39 && m_type != 30 )
      {
        switch ( m_type )
        {
          case 1:
            m_float = p_m_value->m_float;
            if ( p_m_value->m_float >= 9.223372e18 )
              *&m_float64 = (m_float - 9.223372e18) ^ 0x8000000000000000LL;
            else
              *&m_float64 = m_float;
            goto LABEL_138;
          case 5:
            *&m_float64 = p_m_value->m_int;
            goto LABEL_138;
          case 6:
            *&m_float64 = p_m_value->m_char;
            goto LABEL_138;
          case 8:
            *&m_float64 = p_m_value->m_char;
            goto LABEL_138;
          case 26:
            goto LABEL_137;
          case 34:
            v74 = p_m_value->m_float64;
            if ( p_m_value->m_float64 >= 9.223372036854776e18 )
              *&m_float64 = (v74 - 9.223372036854776e18) ^ 0x8000000000000000LL;
            else
              *&m_float64 = v74;
            goto LABEL_138;
          case 37:
            *&m_float64 = p_m_value->m_uint;
            goto LABEL_138;
          default:
            goto LABEL_142;
        }
      }
      v72 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to %s right now\n", v72, "uint64");
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
LABEL_142:
      pImageList = 0;
    }
  }
  if ( m_nCount <= 0 )
  {
LABEL_55:
    v30 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_56;
  }
  v26 = 0;
  v27 = pKeyValues->m_keyHashes.m_nAllocated;
  while ( 2 )
  {
    if ( v27 == 0 )
    {
      if ( *(4 * v26) == 1703047429 )
        break;
      goto LABEL_49;
    }
    v28 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v27 > 9 )
      v28 = pKeyValues->m_keyHashes.m_pElements;
    if ( v28[v26] != 1703047429 )
    {
LABEL_49:
      if ( m_nCount <= ++v26 )
        goto LABEL_55;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v29 = pKeyValues->m_keyValues.m_pElements;
  else
    v29 = 0;
  v30 = &v29[v26].m_value;
LABEL_56:
  pKV = 0;
  v31 = v30->m_type;
  if ( v31 != 0 )
  {
    if ( v31 == 33 )
    {
LABEL_139:
      v71 = v30->m_float64;
LABEL_140:
      pKV = *&v71;
    }
    else
    {
      if ( (v31 & 0xFFFD) != 0x19 && (v31 - 3) > 1u && v31 != 39 && v31 != 30 )
      {
        switch ( v31 )
        {
          case 1:
            v77 = v30->m_float;
            if ( v30->m_float >= 9.223372e18 )
              *&v71 = (v77 - 9.223372e18) ^ 0x8000000000000000LL;
            else
              *&v71 = v77;
            goto LABEL_140;
          case 5:
            *&v71 = v30->m_int;
            goto LABEL_140;
          case 6:
            *&v71 = v30->m_char;
            goto LABEL_140;
          case 8:
            *&v71 = v30->m_char;
            goto LABEL_140;
          case 26:
            goto LABEL_139;
          case 34:
            v76 = v30->m_float64;
            if ( v30->m_float64 >= 9.223372036854776e18 )
              *&v71 = (v76 - 9.223372036854776e18) ^ 0x8000000000000000LL;
            else
              *&v71 = v76;
            goto LABEL_140;
          case 37:
            *&v71 = v30->m_uint;
            goto LABEL_140;
          default:
            goto LABEL_144;
        }
      }
      v73 = VariantFieldTypeName(v31);
      Warning("No free conversion of %s variant to %s right now\n", v73, "uint64");
LABEL_144:
      pKV = 0;
    }
  }
  LOBYTE(newItems.m_Size) = 0;
  bSwapImageAndOriginal = CEntityKeyValues::GetValue<bool>(pKeyValues, -330312208, &newItems);
  if ( pOriginal != 0 )
  {
    if ( bNoDraw )
      CBaseEntity::AddEffects(pImage, 32);
    CDOTA_BaseNPC::SetControllableByPlayer(pImage, v5, 1);
    AbsAngles = CBaseEntity::GetAbsAngles(pOriginal);
    CBaseEntity::SetAbsAngles(pImage, AbsAngles);
    for ( i = 1; i != 9; ++i )
    {
      while ( !CDOTA_BaseNPC::HasSpecialAbility(pOriginal, i) )
      {
        if ( ++i == 9 )
          goto LABEL_64;
      }
      CDOTA_BaseNPC::AddSpecialAbility(pImage, i);
    }
LABEL_64:
    if ( (pImage->m_iUnitType & 1) != 0 )
    {
      (*(pImage->_vptr_IHandleEntity + 388))(pImage, pOriginal->m_iCurrentLevel.m_Value);
      v54 = 0;
      v55 = pOriginal->m_ModifierManager.m_buffsForModifiers[108];
      if ( (pOriginal->m_iUnitType & 1) != 0 )
        v54 = pOriginal;
      if ( v55 != 0xFF
        && pOriginal->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v55].m_Size > 0
        && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &pOriginal->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
             &CModifierParams::s_Default) == 1.0
        && v54 != 0 )
      {
        v56 = *&v54[1].m_NetworkTransmitComponent.m_nStateFlags;
        if ( v56 != *&pImage[1].m_NetworkTransmitComponent.m_nStateFlags )
        {
          (*(pImage->_vptr_IHandleEntity + 22))(pImage, 4632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          *&pImage[1].m_NetworkTransmitComponent.m_nStateFlags = v56;
        }
        v57 = *&v54[1].m_NetworkTransmitComponent.m_nTransmitStateOwnedCounter;
        if ( v57 != *&pImage[1].m_NetworkTransmitComponent.m_nTransmitStateOwnedCounter )
        {
          (*(pImage->_vptr_IHandleEntity + 22))(pImage, 4636, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          *&pImage[1].m_NetworkTransmitComponent.m_nTransmitStateOwnedCounter = v57;
        }
        v58 = *&v54[1].m_NetworkTransmitComponent.m_pOuter;
        if ( v58 != *&pImage[1].m_NetworkTransmitComponent.m_pOuter )
        {
          (*(pImage->_vptr_IHandleEntity + 22))(pImage, 4640, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          *&pImage[1].m_NetworkTransmitComponent.m_pOuter = v58;
        }
      }
      else
      {
        CDOTA_BaseNPC_Hero::ModifyStrength(pImage, v53);
        CDOTA_BaseNPC_Hero::ModifyAgility(pImage, v59);
        CDOTA_BaseNPC_Hero::ModifyIntellect(pImage, v60);
      }
      v61.m_nHashCode = CBaseAnimating::GetSkin(pOriginal).m_nHashCode;
      CBaseAnimating::SetSkin(pImage, v61);
      if ( v54 != 0 )
      {
        v87.m_Index = -1;
        m_pEntity = v54->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v63 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v63 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v87.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v63 & 0x7FFF;
        }
        v64 = CEntityHandle::operator CEntityInstance *(&pImage[1].m_pfnMoveDone.__pfn + 1);
        if ( v64 != CEntityHandle::operator CEntityInstance *(&v87) )
        {
          (*(pImage->_vptr_IHandleEntity + 22))(pImage, 4812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          HIDWORD(pImage[1].m_pfnMoveDone.__pfn) = v87;
        }
        CBaseEntity::GetModel(&newItems, v54);
        CBaseModelEntity::SetModel(pImage, &newItems);
        v65 = CUtlString::Get(&v54[1].m_viewtarget);
        CUtlString::operator=(&pImage[1].m_viewtarget, v65);
        m_Value = v54->m_iBKBChargesUsed.m_Value;
        if ( m_Value != pImage->m_iBKBChargesUsed.m_Value )
        {
          (*(pImage->_vptr_IHandleEntity + 22))(pImage, 2176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          pImage->m_iBKBChargesUsed.m_Value = m_Value;
        }
      }
      v78 = pImage;
    }
    else
    {
      v78 = 0;
    }
    for ( j = 0; j != 9; ++j )
    {
      while ( 1 )
      {
        Inventory = CDOTA_BaseNPC::GetInventory(pOriginal);
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, j);
        if ( ItemInSlot != 0 )
        {
          newItems.m_Size = 0;
          vptr_IHandleEntity = pImage->_vptr_IHandleEntity;
          newItems.m_Memory.m_pMemory = 0;
          newItems.m_Memory.m_nAllocationCount = 0;
          newItems.m_Memory.m_nGrowSize = 0;
          v38 = vptr_IHandleEntity[414](pImage);
          m_pAbilityData = ItemInSlot->m_pAbilityData;
          v40 = "<NoAbilityName>";
          if ( m_pAbilityData != 0 )
          {
            m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
            if ( m_pszAbilityName != 0 )
              v40 = m_pszAbilityName;
          }
          CDOTA_BaseNPC::AddItem(pImage, v40, 3, v38, &newItems);
          if ( newItems.m_Size > 0 )
          {
            (*(**newItems.m_Memory.m_pMemory + 2744LL))(*newItems.m_Memory.m_pMemory, ItemInSlot);
            m_pMemory = newItems.m_Memory.m_pMemory;
            (*newItems.m_Memory.m_pMemory)->m_bIsClonedItemProxy = 1;
            v43 = *m_pMemory;
            v44 = CDOTA_BaseNPC::GetInventory(pImage);
            CDOTA_UnitInventory::MoveItem(v44, v43, j);
          }
          newItems.m_Size = 0;
          if ( (newItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CDOTA_Item *,int>::Purge(&newItems.m_Memory);
            if ( (newItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              break;
          }
        }
        if ( ++j == 9 )
          goto LABEL_77;
      }
      CUtlMemory<CDOTA_Item *,int>::Purge(&newItems.m_Memory);
    }
LABEL_77:
    for ( k = 0; k != 24; ++k )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(pOriginal, k);
      v47 = CDOTA_BaseNPC::GetAbilityByIndex(pImage, k);
      if ( v47 != 0 && AbilityByIndex != 0 && AbilityByIndex->m_iLevel.m_Value > 0 )
      {
        v48 = 0;
        do
        {
          while ( v47->m_iLevel.m_Value > v48 )
          {
            if ( ++v48 >= AbilityByIndex->m_iLevel.m_Value )
              goto LABEL_85;
          }
          CDOTABaseAbility::UpgradeAbility(v47, 0);
          ++v48;
        }
        while ( v48 < AbilityByIndex->m_iLevel.m_Value );
      }
LABEL_85:
      ;
    }
    if ( v78 != 0 )
    {
      if ( HIDWORD(v78[1].m_pfnTouch.__delta) != 0 )
      {
        (*(v78->_vptr_IHandleEntity + 22))(v78, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        HIDWORD(v78[1].m_pfnTouch.__delta) = 0;
      }
      (*(v78->_vptr_IHandleEntity + 491))(v78, pOriginal);
    }
    if ( pKV != 0 )
    {
      v49 = pKeyValues->m_keyHashes.m_nCount;
      if ( v49 <= 0 )
      {
LABEL_100:
        v14 = &CEntityKeyValues::sm_EmptyVariant;
        m_uint64 = 0;
        if ( CEntityKeyValues::sm_EmptyVariant.m_type != 30 )
          goto LABEL_20;
      }
      else
      {
        v50 = pKeyValues->m_keyHashes.m_nAllocated;
        v51 = 0;
        while ( 1 )
        {
          if ( v50 != 0 )
          {
            v52 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v50 > 9 )
              v52 = pKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            v52 = 0;
          }
          if ( v52[v51] == 1604283044 )
            break;
          if ( v49 <= ++v51 )
            goto LABEL_100;
        }
        if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          v13 = pKeyValues->m_keyValues.m_pElements;
        else
          v13 = 0;
        v14 = &v13[v51].m_value;
        m_uint64 = 0;
        if ( v14->m_type != 30 )
        {
LABEL_20:
          KeyValues::SetString(pKV, "illusionLabel", m_uint64);
          goto LABEL_21;
        }
      }
      m_uint64 = v14->m_uint64;
      goto LABEL_20;
    }
LABEL_21:
    CDOTA_BaseNPC::AddNewModifier(pImage, pOriginal, 0, "modifier_illusion", pKV, 0);
    KeyValues::KeyValues(&kv, "invul");
    KeyValues::SetFloat(&kv, "duration", v16);
    CDOTA_BaseNPC::AddNewModifier(pImage, pOriginal, 0, "modifier_invulnerable", &kv, 0);
    if ( KeyValues::GetInt(pKV, "fullhp", 0) != 0 )
      Health = (*(pImage->_vptr_IHandleEntity + 156))(pImage);
    else
      Health = CBaseEntity::GetHealth(pOriginal);
    CDOTA_BaseNPC::ModifyHealth(pImage, Health, 0, 0, 0);
    CDOTA_BaseNPC::SetMana(pImage, v18);
    if ( pImageList != 0 )
    {
      newItems.m_Size = -1;
      v19 = pImage->m_pEntity;
      if ( v19 != 0 )
      {
        v20 = (v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1);
        v21 = 0x7FFF;
        if ( v19->m_EHandle.m_Index != -1 )
          v21 = v19->m_EHandle.m_Index & 0x7FFF;
        LOWORD(newItems.m_Size) = v21 | newItems.m_Size & 0x8000;
        newItems.m_Size = (v20 << 15) | newItems.m_Size & 0x7FFF;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(pImageList, &newItems);
    }
    if ( bFindClearSpaceForUnit )
      FindClearRandomPositionAroundUnit(pImage, pOriginal, iPadding);
    v22 = pOriginal->m_ModifierManager.m_bufflist.m_Size - 1;
    if ( v22 >= 0 )
    {
      do
      {
        BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&pOriginal->m_ModifierManager, v22, 0);
        v24 = BuffByIndex;
        if ( BuffByIndex != 0 && (*(BuffByIndex->_vptr_CDOTA_Buff + 18))(BuffByIndex) != 0 )
          (*(v24->_vptr_CDOTA_Buff + 22))(v24, pImage);
        --v22;
      }
      while ( v22 != -1 );
    }
    CDOTA_BaseNPC::DuplicateAssetModifiers(pImage, pOriginal);
    if ( !bNoDraw )
    {
      ParticleManager = GetParticleManager();
      v68 = CDOTA_ParticleManager::CreateParticle(
              ParticleManager,
              "particles/generic_gameplay/illusion_created.vpcf",
              1,
              pImage,
              &filter,
              0);
      v69 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v69, v68);
    }
    if ( bSwapImageAndOriginal )
      SwapUnitPositions(pOriginal, pImage);
    KeyValues::~KeyValues(&kv);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// DOTA_CreateIllusions  (line 1946, @0x00000000027bebf0, libserver.so)  // inlines: AddKeyValue<CDOTA_BaseNPC*>, AddKeyValue<CFmtStrN<256> >, AddKeyValue<long long unsigned int>, AddToTail, Base, Bind, CDotaNPCSpawnerContext, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlDelegate, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, CreateEvent, DOTA_Character_ScriptSpawn_Synchronous, Element, FastDelegate2, FindKeyHash, Free, Get, GetBool, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GetUnitName, IndexToIdentity, Init, LookupEntity, SetInt, SetMementoFrom, SetPtrValue, SetValue<CDOTA_BaseNPC*>, SetValue<CFmtStrN<256> >, SetValue<bool>, SetValue<int>, SetValue<long long unsigned int>, String, ToCStr, ToDOTAPlayer, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, entindex, operator=, operator[], ~CBroadcastRecipientFilter, ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope
// calls: DOTA_ServerHasEntitySpace, RandomInt, KeyValues::GetInt, CBroadcastRecipientFilter::CBroadcastRecipientFilter, UTIL_PlayerByIndex, StopParticleEffect, CEntityKeyValues::~CEntityKeyValues, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue<bool>, CEntityKeyValues::SetValue<int>, CFmtStrN<256, false>::CFmtStrN (30 total)
// callers: CDOTA_BaseNPC::ActivateRuneEffect, CDOTA_Ability_Morphling_Replicate::CreateReplicate, CDOTA_Ability_Morphling_Hybrid::CreateHybrid, CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart, CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked, CDOTA_Ability_PhantomLancer_SpiritLance::OnProjectileHit_ExtraData, CDOTA_Modifier_VengefulSpirit_NetherSwap::OnDeath, CDOTA_Modifier_DarkSeer_WallOfReplica::OnIntervalThink, CDOTA_Ability_Spectre_Haunt::OnSpellStart, CDOTA_Modifier_Shadow_Demon_Disruption::OnDestroy, CDOTA_Modifier_ChaosKnight_Phantasm::OnDestroy, CDOTA_Modifier_NagaSiren_MirrorImage::OnDestroy (15 total)
// strings: "no_effect_on_original", "teamonlyparticles", "particles/ui_mouseactions/ping_player.vpcf", "%s%d", "Attempted to set attribute %s as if it was a non-attribute key!\n", "dota_illusions_created" (8 total)
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnCreateIllusionsSpawnCompletion(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall DOTA_CreateIllusions(
        CDOTA_BaseNPC *pOriginal,
        int iNumIllusions,
        int iPadding,
        bool bScramblePosition,
        KeyValues *pKV,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pImageList,
        CDOTA_BaseNPC *pCaster,
        const char *pszIllusionLabelPrefix,
        bool bFindClearSpaceForUnit)
{
  CDOTA_BaseNPC *v10; // r14
  int Int; // ebx
  int v12; // r13d
  CBasePlayer *v13; // rax
  CBaseEntity *v14; // rbx
  int i; // r13d
  unsigned __int16 v16; // dx
  int v17; // edi
  CEntityInstance *v18; // rsi
  int v19; // eax
  CEntitySystem *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  void (*m_pPrevAllocator)(detail::GenericClass *); // rax
  int m_Value; // r15d
  const Vector *AbsOrigin; // rax
  __int64 v26; // rsi
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // r15
  void (__fastcall *v29)(CDOTA_BaseNPC *, CEntityInstance *, unsigned __int64, CEntitySystem *); // r8
  __int64 v30; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v31; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v36; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdi
  __int16 v45; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rdx
  uint16 m_flags; // ax
  CEntityIdentity *m_pEntity; // rcx
  int v51; // eax
  __int16 v52; // si
  int v53; // eax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v54; // rax
  __int16 v55; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v56; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v57; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // rax
  uint16 v59; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v60; // rax
  __int64 v61; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v62; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int16 v66; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v67; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rax
  uint16 v70; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v71; // rax
  __int16 v72; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v73; // rax
  bool v74; // dl
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v75; // rdi
  CVariantBase<CEntityVariantAllocator> *p_m_value; // rdi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v77; // rax
  __int64 v78; // rbx
  CEntityIndex v79; // eax
  bool v80; // zf
  __int16 v81; // ax
  __int16 v82; // ax
  CEntityIdentity *v83; // rdx
  int v84; // eax
  __int16 v85; // si
  __int16 v86; // ax
  CDOTA_ParticleManager *ParticleManager; // rax
  int v88; // ebx
  CDOTA_ParticleManager *v89; // rax
  __int64 v90; // [rsp+0h] [rbp-3E0h]
  __int64 v91; // [rsp+0h] [rbp-3E0h]
  __int64 v92; // [rsp+0h] [rbp-3E0h]
  __int64 v93; // [rsp+0h] [rbp-3E0h]
  __int64 v94; // [rsp+0h] [rbp-3E0h]
  CDOTAPlayer *pControllingPlayer; // [rsp+40h] [rbp-3A0h]
  const char *pUnitName; // [rsp+48h] [rbp-398h]
  int iRandom; // [rsp+58h] [rbp-388h]
  bool v102; // [rsp+68h] [rbp-378h] BYREF
  bool bScramblePositiona; // [rsp+6Bh] [rbp-375h]
  int iPaddinga[3]; // [rsp+6Ch] [rbp-374h] BYREF
  bool bNoDraw; // [rsp+7Ah] [rbp-366h] BYREF
  bool bTeamOnly; // [rsp+7Bh] [rbp-365h] BYREF
  int iControllingPlayerID; // [rsp+7Ch] [rbp-364h] BYREF
  bool value[4]; // [rsp+80h] [rbp-360h] BYREF
  __int64 v109; // [rsp+90h] [rbp-350h]
  int vOrigin; // [rsp+98h] [rbp-348h]
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+A0h] [rbp-340h] BYREF
  CDotaNPCSpawnerContext ctx; // [rsp+C0h] [rbp-320h] BYREF
  CFmtStrN<256,false> v113; // [rsp+160h] [rbp-280h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+270h] [rbp-170h] BYREF
  unsigned __int64 v115; // [rsp+3A8h] [rbp-38h]
  Vector v116; // 0:xmm0_8.8,8:xmm1_4.4

  iPaddinga[0] = iPadding;
  v10 = pCaster;
  bScramblePositiona = bScramblePosition;
  v102 = bFindClearSpaceForUnit;
  v115 = __readfsqword(0x28u);
  if ( !DOTA_ServerHasEntitySpace() || (pOriginal->m_iUnitType & 1) == 0 )
    return;
  if ( pOriginal->m_iszUnitName.m_Value.u.m_Id != 0 )
    pUnitName = pOriginal->m_iszUnitName.m_Value.u.m_pAsString;
  else
    pUnitName = "";
  if ( pCaster == 0 )
    v10 = pOriginal;
  pControllingPlayer = (*(v10->_vptr_IHandleEntity + 413))(v10);
  iControllingPlayerID = (*(v10->_vptr_IHandleEntity + 414))(v10);
  iRandom = RandomInt(0, iNumIllusions);
  bNoDraw = KeyValues::GetInt(pKV, "nodraw", 0) != 0;
  Int = KeyValues::GetInt(pKV, "no_effect_on_original", 0);
  bTeamOnly = KeyValues::GetInt(pKV, "teamonlyparticles", 0) != 0;
  CBroadcastRecipientFilter::CBroadcastRecipientFilter(&filter);
  if ( bTeamOnly )
  {
    CRecipientFilter::RemoveAllRecipients(&filter);
    CRecipientFilter::AddRecipientsByTeamNumber(&filter, pOriginal->m_iTeamNum.m_Value);
  }
  if ( Int == 0 && !bNoDraw )
  {
    ParticleManager = GetParticleManager();
    v88 = CDOTA_ParticleManager::CreateParticle(
            ParticleManager,
            "particles/generic_gameplay/illusion_created.vpcf",
            1,
            pOriginal,
            &filter,
            0);
    v89 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v89, v88);
  }
  v12 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v13 = UTIL_PlayerByIndex(v12);
      v14 = v13;
      if ( v13 != 0
        && (*(v13->_vptr_IHandleEntity + 140))(v13) != 0
        && v14->m_iTeamNum.m_Value != v10->m_iTeamNum.m_Value )
      {
        StopParticleEffect(v14, "particles/ui_mouseactions/ping_player.vpcf");
      }
      ++v12;
    }
    while ( gpGlobals->maxClients >= v12 );
  }
  if ( iNumIllusions > 0 )
  {
    for ( i = 0; i != iNumIllusions; ++i )
    {
      if ( !DOTA_ServerHasEntitySpace() )
        break;
      sg.m_pContext = 0;
      sg.m_sg.m_pPrevAllocator = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
      CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
      m_pPrevAllocator = sg.m_sg.m_pPrevAllocator;
      ctx.m_pParent = 0;
      ctx.m_pCompletionListener = 0;
      sg.m_sg.m_pKeyValues = 0;
      sg.m_sg.m_pPrevAllocator = 0;
      ctx.m_callback.m_Closure.m_pFunction.__pfn = m_pPrevAllocator;
      ctx.m_callback.m_Closure.m_pthis = OnCreateIllusionsSpawnCompletion;
      ctx.m_callback.m_Closure.m_pFunction.__delta = sg.m_pContext;
      CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, &ctx.m_entityKeyValues);
      sg.m_pContext = &ctx;
      value[0] = 1;
      CEntityKeyValues::SetValue<bool>(&ctx.m_entityKeyValues, -541869064, value);
      CEntityKeyValues::SetValue<bool>(&ctx.m_entityKeyValues, 2099599974, &bNoDraw);
      CEntityKeyValues::SetValue<int>(&ctx.m_entityKeyValues, 636754541, &iControllingPlayerID);
      if ( ctx.m_entityKeyValues.m_nQueuedForSpawnCount > 0 )
        goto LABEL_29;
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= 0 )
      {
LABEL_74:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyHashes);
        v45 = ctx.m_entityKeyValues.m_keyHashes.m_nCount - 1;
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          m_pElements = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated >= 0xA )
            m_pElements = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        m_pElements[v45] = 304472099;
        v90 = v45;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyValues);
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v47 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v47 = 0;
        v48 = &v47[v90];
        m_flags = v48->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v48->m_value.m_flags = m_flags & 0xFFFE;
        v48->m_value.m_uint64 = 0;
        v48->m_value.m_type = 13;
        m_pEntity = pOriginal->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v51 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v52 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v52 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          *value = v52 | *value & 0x8000;
          v53 = (v51 << 15) | *value & 0x7FFF;
          *value = v53;
        }
        else
        {
          v53 = -1;
        }
        v48->m_value.m_int = v53;
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v54 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v54 = 0;
        v54[v90].m_pAttributeName = 0;
        goto LABEL_29;
      }
      v35 = 0;
      while ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated == 0 )
      {
        if ( *(4 * v35) == 304472099 )
          goto LABEL_60;
LABEL_57:
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= ++v35 )
          goto LABEL_74;
      }
      v36 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
        v36 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
      if ( v36[v35] != 304472099 )
        goto LABEL_57;
LABEL_60:
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      {
        v37 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        v38 = v35;
        v39 = &ctx.m_entityKeyValues.m_keyValues.m_pElements[v38];
        if ( ctx.m_entityKeyValues.m_keyValues.m_pElements[v38].m_pAttributeName != 0 )
          goto LABEL_62;
LABEL_138:
        v82 = *(v39 + 10);
        if ( (v82 & 1) != 0 )
          *(v39 + 10) = v82 & 0xFFFE;
        *v39 = 0;
        *(v39 + 8) = 13;
        v83 = pOriginal->m_pEntity;
        if ( v83 != 0 )
        {
          v84 = (v83->m_EHandle.m_Index >> 15) - (v83->m_flags & 1);
          v85 = 0x7FFF;
          if ( v83->m_EHandle.m_Index != -1 )
            v85 = v83->m_EHandle.m_Index & 0x7FFF;
          *value = v85 | *value & 0x8000;
          *value = (v84 << 15) | *value & 0x7FFF;
          *v39 = *value;
        }
        else
        {
          *v39 = -1;
        }
      }
      else
      {
        v37 = 0;
        v80 = *(&stru_10.m_Lock.gap0 + 3 * v35) == 0;
        v39 = 24 * v35;
        v38 = v35;
        if ( v80 )
          goto LABEL_138;
LABEL_62:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v37[v38].m_pAttributeName);
      }
LABEL_29:
      if ( (*(pOriginal->_vptr_IHandleEntity + 414))(pOriginal) != -1 )
      {
        *value = (*(pOriginal->_vptr_IHandleEntity + 414))(pOriginal);
        CEntityKeyValues::SetValue<int>(&ctx.m_entityKeyValues, -1424582124, value);
      }
      CEntityKeyValues::SetValue<int>(&ctx.m_entityKeyValues, 1624292375, iPaddinga);
      CEntityKeyValues::SetValue<bool>(&ctx.m_entityKeyValues, -1909311810, &bTeamOnly);
      if ( ctx.m_entityKeyValues.m_nQueuedForSpawnCount > 0 )
        goto LABEL_32;
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= 0 )
      {
LABEL_88:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyHashes);
        v55 = ctx.m_entityKeyValues.m_keyHashes.m_nCount - 1;
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          v56 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated >= 0xA )
            v56 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          v56 = 0;
        }
        v56[v55] = -430771810;
        v91 = v55;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyValues);
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v57 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v57 = 0;
        v58 = &v57[v91];
        v59 = v58->m_value.m_flags;
        if ( (v59 & 1) != 0 )
          v58->m_value.m_flags = v59 & 0xFFFE;
        v58->m_value.m_type = 33;
        v58->m_value.m_uint64 = pImageList;
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v60 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v60 = 0;
        v60[v91].m_pAttributeName = 0;
        goto LABEL_98;
      }
      v30 = 0;
      while ( 2 )
      {
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated == 0 )
        {
          if ( *(4 * v30) == -430771810 )
            break;
          goto LABEL_46;
        }
        v31 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
          v31 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        if ( v31[v30] != -430771810 )
        {
LABEL_46:
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= ++v30 )
            goto LABEL_88;
          continue;
        }
        break;
      }
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      {
        v32 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        v33 = v30;
        v34 = &ctx.m_entityKeyValues.m_keyValues.m_pElements[v33];
        if ( ctx.m_entityKeyValues.m_keyValues.m_pElements[v33].m_pAttributeName != 0 )
          goto LABEL_51;
LABEL_134:
        v81 = *(v34 + 10);
        if ( (v81 & 1) != 0 )
          *(v34 + 10) = v81 & 0xFFFE;
        *(v34 + 8) = 33;
        *v34 = pImageList;
      }
      else
      {
        v32 = 0;
        v80 = *(&stru_10.m_Lock.gap0 + 3 * v30) == 0;
        v34 = 24 * v30;
        v33 = v30;
        if ( v80 )
          goto LABEL_134;
LABEL_51:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v32[v33].m_pAttributeName);
      }
LABEL_98:
      if ( ctx.m_entityKeyValues.m_nQueuedForSpawnCount > 0 )
        goto LABEL_32;
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= 0 )
      {
LABEL_110:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyHashes);
        v66 = ctx.m_entityKeyValues.m_keyHashes.m_nCount - 1;
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          v67 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated >= 0xA )
            v67 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          v67 = 0;
        }
        v67[v66] = 1703047429;
        v92 = v66;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyValues);
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v68 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v68 = 0;
        v69 = &v68[v92];
        v70 = v69->m_value.m_flags;
        if ( (v70 & 1) != 0 )
          v69->m_value.m_flags = v70 & 0xFFFE;
        v69->m_value.m_type = 33;
        v69->m_value.m_uint64 = pKV;
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v71 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v71 = 0;
        v71[v92].m_pAttributeName = 0;
        goto LABEL_32;
      }
      v61 = 0;
      while ( 2 )
      {
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated == 0 )
        {
          if ( *(4 * v61) == 1703047429 )
            break;
          goto LABEL_104;
        }
        v62 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
          v62 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        if ( v62[v61] != 1703047429 )
        {
LABEL_104:
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= ++v61 )
            goto LABEL_110;
          continue;
        }
        break;
      }
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      {
        v63 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        v64 = v61;
        v65 = &ctx.m_entityKeyValues.m_keyValues.m_pElements[v64];
        if ( ctx.m_entityKeyValues.m_keyValues.m_pElements[v64].m_pAttributeName != 0 )
          goto LABEL_109;
LABEL_145:
        v86 = *(v65 + 10);
        if ( (v86 & 1) != 0 )
          *(v65 + 10) = v86 & 0xFFFE;
        *(v65 + 8) = 33;
        *v65 = pKV;
      }
      else
      {
        v63 = 0;
        v80 = *(&stru_10.m_Lock.gap0 + 3 * v61) == 0;
        v65 = 24 * v61;
        v64 = v61;
        if ( v80 )
          goto LABEL_145;
LABEL_109:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v63[v64].m_pAttributeName);
      }
LABEL_32:
      CEntityKeyValues::SetValue<bool>(&ctx.m_entityKeyValues, -137169196, &v102);
      if ( pszIllusionLabelPrefix == 0 )
        goto LABEL_34;
      CFmtStrN<256,false>::CFmtStrN(&v113, "%s%d", pszIllusionLabelPrefix, i);
      if ( ctx.m_entityKeyValues.m_nQueuedForSpawnCount > 0 )
        goto LABEL_34;
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= 0 )
      {
LABEL_120:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyHashes);
        v72 = ctx.m_entityKeyValues.m_keyHashes.m_nCount - 1;
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          v73 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated >= 0xA )
            v73 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          v73 = 0;
        }
        v73[v72] = 1604283044;
        v93 = v72;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyValues);
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v75 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v75 = 0;
        p_m_value = &v75[v93].m_value;
        v94 = v93;
        CVariantBase<CEntityVariantAllocator>::CopyData(p_m_value, v113.m_szBuf, v74);
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v77 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v77 = 0;
        v77[v94].m_pAttributeName = 0;
        goto LABEL_34;
      }
      v40 = 0;
      while ( 2 )
      {
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated == 0 )
        {
          if ( *(4 * v40) == 1604283044 )
            break;
          goto LABEL_68;
        }
        v41 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
          v41 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        if ( v41[v40] != 1604283044 )
        {
LABEL_68:
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= ++v40 )
            goto LABEL_120;
          continue;
        }
        break;
      }
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      {
        v42 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        v43 = v40;
        v44 = &ctx.m_entityKeyValues.m_keyValues.m_pElements[v43];
        if ( ctx.m_entityKeyValues.m_keyValues.m_pElements[v43].m_pAttributeName != 0 )
          goto LABEL_73;
LABEL_149:
        CVariantBase<CEntityVariantAllocator>::CopyData(v44, v113.m_szBuf, v42);
      }
      else
      {
        v42 = 0;
        v80 = *(&stru_10.m_Lock.gap0 + 3 * v40) == 0;
        v44 = 24 * v40;
        v43 = v40;
        if ( v80 )
          goto LABEL_149;
LABEL_73:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v42[v43].m_pAttributeName);
      }
LABEL_34:
      if ( i == iRandom && bScramblePositiona )
      {
        value[0] = 1;
        CEntityKeyValues::SetValue<bool>(&ctx.m_entityKeyValues, -330312208, value);
      }
      CEntityKeyValuesModifyScope::Release(&sg.m_sg);
      m_Value = v10->m_iTeamNum.m_Value;
      AbsOrigin = CBaseEntity::GetAbsOrigin(pOriginal);
      v26 = *&AbsOrigin->x;
      *&AbsOrigin = AbsOrigin->z;
      v109 = v26;
      *&v116.x = v26;
      vOrigin = AbsOrigin;
      LODWORD(v116.z) = AbsOrigin;
      v27 = DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawner<CDOTA_BaseNPC>>(
              0,
              pUnitName,
              v116,
              m_Value,
              pControllingPlayer,
              0,
              &ctx);
      v28 = v27;
      if ( v27 != 0 )
      {
        CDOTA_BaseNPC::SetControllableByPlayer(v27, iControllingPlayerID, !v102);
        v29 = *(v28->_vptr_IHandleEntity + 40);
        if ( v10->m_hOwnerEntity.m_Value.m_Index == -1 )
        {
          v16 = 0x7FFF;
          v17 = 0x7FFF;
        }
        else
        {
          v16 = v10->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
          v17 = v16;
        }
        v18 = 0;
        v19 = (v10->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v16 & 0x7FFF;
        LODWORD(sg.m_sg.m_pKeyValues) = v19;
        v20 = g_pEntitySystem;
        v21 = (v19 + 2);
        if ( v21 > 1 )
        {
          v21 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9];
          if ( v21 != 0 )
          {
            v22 = v17 & 0x1FF;
            v20 = (8 * v22);
            v21 += 120 * v22;
            if ( v21 != 0 && v19 == *(v21 + 16) )
              v18 = *v21;
          }
        }
        v29(v28, v18, v21, v20);
      }
      CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
    }
  }
  if ( bScramblePosition )
    DeAggroUnitsAggroedOn(pOriginal, 1);
  v78 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_illusions_created", 0, 0);
  if ( v78 != 0 )
  {
    v79.m_Data = CEntityInstance::GetEntityIndex(pOriginal).m_Data;
    (*(*v78 + 112LL))(v78, "original_entindex", v79.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v78, 0);
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// MoveUnit  (line 2051, @0x00000000027ad750, libserver.so)  // inlines: SetFOWDirty
// calls: CBaseEntity::SetAbsOrigin, __dynamic_cast, C2DGridObstructionManager::UpdateObjectObstruction
// callers: CDOTA_Item::LaunchLootInitialHeight, FindClearSpaceForUnit
void __fastcall MoveUnit(CBaseEntity *pUnit, bool bTeleport, double a3, vec_t a4)
{
  char *v5; // rax
  char *v6; // rbx
  Vector vPosa; // [rsp+0h] [rbp-20h] BYREF

  *&vPosa.x = a3;
  vPosa.z = a4;
  if ( bTeleport )
  {
    (*(pUnit->_vptr_IHandleEntity + 128))(pUnit, &vPosa, 0, 0);
  }
  else
  {
    CBaseEntity::SetAbsOrigin(pUnit, &vPosa);
    if ( pUnit != 0 )
    {
      v5 = __dynamic_cast(pUnit, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
      v6 = v5;
      if ( v5 != 0 )
      {
        C2DGridObstructionManager::UpdateObjectObstruction(&g_GridNav.m_ObstructionManager, (v5 + 2056));
        v6[793] = 1;
      }
    }
  }
}


// FindClearSpaceForUnit_Script  (line 2073, @0x00000000027aed00, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, FindClearSpaceForUnit
__int64 __fastcall FindClearSpaceForUnit_Script(HSCRIPT hUnit, bool bTeleport, double a3, vec_t a4)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CDOTA_BaseNPC *v8; // rax
  Vector vPosa; // [rsp+0h] [rbp-30h]

  *&vPosa.x = a3;
  vPosa.z = a4;
  if ( hUnit != 0
    && (v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v8 = v6(g_pScriptVM, hUnit, Script)) != 0) )
  {
    return FindClearSpaceForUnit(v8, vPosa, bTeleport);
  }
  else
  {
    return 0;
  }
}


// FindClearSpaceForUnit  (line 2085, @0x00000000027adb10, libserver.so)  // inlines: CEntityHandle, CHandle, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetPaddedCollisionRadius, GetSerialNumber, GridPosToWorldCenterX, GridPosToWorldCenterY, IsCurrentlyMotionControlled, Set, Square<float>, String, ToDOTABaseNPC, V_memset, Vector, WorldSpaceAABB, WorldToGridPosX, WorldToGridPosY, memset, operator=
// calls: CCollisionProperty::CollisionAABBToWorldAABB, CBaseEntity::GetAbsOrigin, GetCommonObstructionManagerFlagsForNPC, CGridNav::PrepareObstructionManager, floorf, operator new [], memset, RandomInt, sincosf, CGridNavBase::IsInWorld, CGridNav::CheckForCollisions, operator delete [] (17 total)
// callers: CDOTA_ActionRunner::PerformAction_Blink, CDOTA_ActionRunner::PerformAction_MoveUnit, CDOTA_ActionRunner::PerformAction_SpawnUnit, CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CGridNav::ResolveNPCPositions, CLoadGameHelper::OnSpawnCompletion, CDOTAGamerules::State_Enter_PRE_GAME, CDOTA_Item_Tombstone::CompleteChannelSuccessfully, CDOTA_Item_Physical::Spawn, dota_test_npc, CDOTA_Modifier_Tutorial_Roq_Teleport::OnDestroy, CDOTA_Ability_EnragedWildkin_Tornado::OnSpellStart (137 total)
// strings: "Could not find clear space for unit \"%s\" at (%f, %f, %f)!\n"
__int64 __fastcall FindClearSpaceForUnit(CDOTA_BaseNPC *pUnit, Vector vPos, bool bTeleport)
{
  CCollisionProperty *m_pCollision; // rdi
  const Vector *v4; // rax
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  float v7; // xmm2_4
  ObstructionRelationshipClass_t v8; // eax
  float v9; // xmm2_4
  int v10; // ebx
  __m128i v11; // xmm0
  float v12; // r12d
  unsigned __int64 v13; // rax
  size_t v14; // r12
  size_t v15; // rdi
  int v16; // ebx
  int v17; // r12d
  unsigned int v18; // eax
  unsigned int v19; // r14d
  CEntityIdentity *v20; // rdx
  int v21; // eax
  __int16 v22; // cx
  bool v23; // al
  float v24; // xmm2_4
  float v25; // xmm4_4
  float m_flEdgeSize; // xmm6_4
  int v27; // ebx
  float v28; // xmm0_4
  int v29; // r12d
  int v30; // r15d
  int v31; // r14d
  int v32; // r12d
  int *v33; // rbx
  float v34; // xmm0_4
  vec_t v35; // xmm3_4
  unsigned int v36; // eax
  unsigned int v37; // r9d
  CEntityIdentity *m_pEntity; // rdx
  int v39; // eax
  __int16 v40; // cx
  bool v41; // al
  float v42; // xmm2_4
  float v43; // xmm3_4
  bool v44; // zf
  const char *m_pAsString; // rsi
  CEntityIdentity *v46; // rax
  unsigned int m_bNeverMoveToClearSpace; // r15d
  __int64 v48; // xmm0_8
  vec_t v49; // xmm1_4
  CDOTALocomotor *v51; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  int v54; // [rsp+8h] [rbp-118h]
  float flRingDistance; // [rsp+Ch] [rbp-114h]
  __int64 v56; // [rsp+10h] [rbp-110h]
  int v57; // [rsp+18h] [rbp-108h]
  float flIterationDistance; // [rsp+1Ch] [rbp-104h]
  CDOTA_BaseNPC *pNPC; // [rsp+20h] [rbp-100h]
  int *pGrid; // [rsp+28h] [rbp-F8h]
  int nGridWidth; // [rsp+30h] [rbp-F0h]
  int v63; // [rsp+38h] [rbp-E8h]
  int *v64; // [rsp+48h] [rbp-D8h]
  int i; // [rsp+68h] [rbp-B8h]
  float flRingRadius; // [rsp+6Ch] [rbp-B4h]
  unsigned int v68; // [rsp+78h] [rbp-A8h]
  float flAngleIncrement; // [rsp+7Ch] [rbp-A4h]
  float flAngleIncrementa; // [rsp+7Ch] [rbp-A4h]
  float v71; // [rsp+80h] [rbp-A0h]
  float x; // [rsp+84h] [rbp-9Ch]
  float flGridContainsRadiusa; // [rsp+88h] [rbp-98h]
  float flGridContainsRadiusb; // [rsp+88h] [rbp-98h]
  float flGridContainsRadius; // [rsp+88h] [rbp-98h]
  float flGridContainsRadiusc; // [rsp+88h] [rbp-98h]
  float flGridContainsRadiusd; // [rsp+88h] [rbp-98h]
  float flWorldEdgeBuffer; // [rsp+8Ch] [rbp-94h]
  float yb; // [rsp+90h] [rbp-90h]
  float y; // [rsp+90h] [rbp-90h]
  float yc; // [rsp+90h] [rbp-90h]
  float ya; // [rsp+90h] [rbp-90h]
  float flAngb; // [rsp+94h] [rbp-8Ch]
  float flAngc; // [rsp+94h] [rbp-8Ch]
  float flAng; // [rsp+94h] [rbp-8Ch]
  float flAngd; // [rsp+94h] [rbp-8Ch]
  float flAnga; // [rsp+94h] [rbp-8Ch]
  float flAnge; // [rsp+94h] [rbp-8Ch]
  float v89; // [rsp+98h] [rbp-88h] BYREF
  float v90; // [rsp+9Ch] [rbp-84h] BYREF
  Vector vPosa; // [rsp+A0h] [rbp-80h]
  int nAllFlags; // [rsp+B8h] [rbp-68h] BYREF
  int nNoneFlags[5]; // [rsp+BCh] [rbp-64h] BYREF
  Vector vHullMins; // [rsp+D0h] [rbp-50h] BYREF
  Vector vWorldTest; // [rsp+E0h] [rbp-40h] BYREF
  Vector PositionOnGround; // 0:kr20_12.12
  Vector v97; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v98; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v99; // 0:xmm0_8.8,8:xmm1_4.4

  vPosa = vPos;
  x = vPos.x;
  v71 = vPos.y;
  if ( !g_GridNav.m_bLoaded )
  {
    m_bNeverMoveToClearSpace = 1;
    MoveUnit(pUnit, bTeleport, *&vPos.x, vPos.z);
    return m_bNeverMoveToClearSpace;
  }
  if ( pUnit == 0 || !pUnit->m_bIsDOTANPC )
  {
    m_pCollision = pUnit->m_pCollision;
    if ( m_pCollision != 0 )
    {
      CCollisionProperty::CollisionAABBToWorldAABB(
        m_pCollision,
        &m_pCollision->m_vecMins.m_Value,
        &m_pCollision->m_vecMaxs.m_Value,
        &vHullMins,
        &vWorldTest);
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(pUnit);
      vHullMins.x = AbsOrigin->x;
      vHullMins.y = AbsOrigin->y;
      z = AbsOrigin->z;
      vWorldTest.x = vHullMins.x;
      vWorldTest.y = vHullMins.y;
      vHullMins.z = z;
      vWorldTest.z = z;
    }
    v4 = CBaseEntity::GetAbsOrigin(pUnit);
    pNPC = 0;
    v5.m128_f32[0] = (v4->x - vHullMins.x) + 10.0;
    goto LABEL_7;
  }
  m_bNeverMoveToClearSpace = pUnit->m_bNeverMoveToClearSpace;
  if ( m_bNeverMoveToClearSpace != 0 )
    return m_bNeverMoveToClearSpace;
  if ( (pUnit->m_iUnitType & 0x10) != 0 )
    return pUnit->m_bIsDOTANPC;
  if ( *((*(pUnit->_vptr_IHandleEntity + 376))(pUnit) + 216) != 0 )
  {
    if ( !bTeleport )
      return m_bNeverMoveToClearSpace;
    v51 = (*(pUnit->_vptr_IHandleEntity + 376))(pUnit);
    CDOTALocomotor::InterruptMotionControllers(v51, 0);
  }
  v5.m128_i32[0] = LODWORD(pUnit->m_flHullRadius);
  if ( (pUnit->m_iUnitType & 1) == 0 )
  {
    pNPC = pUnit;
LABEL_7:
    v6 = _mm_cmplt_ss(0x3DCCCCCDu, v5);
    LODWORD(v7) = _mm_andnot_ps(v6, 0x3DCCCCCDu).m128_u32[0] | v5.m128_i32[0] & v6.m128_i32[0];
    goto LABEL_8;
  }
  v7 = 24.0;
  pNPC = pUnit;
LABEL_8:
  if ( pNPC != 0 )
  {
    yb = v7;
    GetCommonObstructionManagerFlagsForNPC(pNPC, &nAllFlags, nNoneFlags);
    flAngb = pNPC->m_flCollisionPadding;
    v8 = (*(pNPC->_vptr_IHandleEntity + 454))(pNPC);
    CGridNav::PrepareObstructionManager(&g_GridNav, yb + 0.2, nAllFlags, nNoneFlags[0], v8, flAngb);
    v9 = yb;
    flWorldEdgeBuffer = (pNPC->m_flHullRadius + pNPC->m_flCollisionPadding) + 1.0;
  }
  else
  {
    flAnge = v7;
    nAllFlags = 8;
    nNoneFlags[0] = 6;
    CGridNav::PrepareObstructionManager(
      &g_GridNav,
      v7 + 0.2,
      8u,
      6u,
      ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
      0.0);
    v9 = flAnge;
    flWorldEdgeBuffer = flAnge + 1.0;
  }
  flAngleIncrement = g_GridNav.m_flOffsetX;
  flRingDistance = v9 + 5.0;
  flAngc = g_GridNav.m_flEdgeSize;
  flIterationDistance = (v9 + v9) * 1.3;
  flGridContainsRadiusa = (79.0 * (v9 + 5.0)) + 1.0;
  v10 = floorf((((x - flGridContainsRadiusa) - flAngleIncrement) + (0.5 * flAngc)) / flAngc);
  *v11.m128i_i32 = floorf((((x + flGridContainsRadiusa) - flAngleIncrement) + (0.5 * flAngc)) / flAngc);
  v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  flAngleIncrementa = flGridContainsRadiusa;
  *v11.m128i_i32 = v71 - flGridContainsRadiusa;
  flGridContainsRadiusb = g_GridNav.m_flOffsetY;
  v57 = floorf(((*v11.m128i_i32 - flGridContainsRadiusb) + (0.5 * flAngc)) / flAngc);
  nGridWidth = v12 - v10 + 1;
  v13 = nGridWidth * (floorf((((flAngleIncrementa + v71) - flGridContainsRadiusb) + (0.5 * flAngc)) / flAngc) - v57 + 1);
  if ( v13 <= 0x1FC0000000000000LL )
  {
    v15 = 4 * v13;
    v14 = 4 * v13;
  }
  else
  {
    v14 = 4 * v13;
    v15 = -1;
  }
  pGrid = operator new[](v15);
  memset(pGrid, 0, v14);
  v54 = 80;
  flRingRadius = 0.0;
  v56 = v10;
LABEL_13:
  v16 = 1;
  if ( (((flRingRadius + flRingRadius) * 3.1415927) / flIterationDistance) > 0 )
    v16 = (((flRingRadius + flRingRadius) * 3.1415927) / flIterationDistance);
  v17 = 0;
  flAng = RandomInt(0, (v16 - 1)) * (6.2831855 / v16);
  while ( 1 )
  {
    sincosf(flAng, &v90, &v89);
    vWorldTest.z = 0.0;
    v97.z = 0.0;
    vWorldTest.x = (v89 * flRingRadius) + x;
    vWorldTest.y = (flRingRadius * v90) + v71;
    *&v97.x = *&vWorldTest.x;
    flGridContainsRadius = vWorldTest.x;
    y = vWorldTest.y;
    LOBYTE(v18) = CGridNavBase::IsInWorld(&g_GridNav, v97, flWorldEdgeBuffer);
    v19 = v18;
    if ( v18 != 0 )
      break;
LABEL_24:
    if ( v16 <= ++v17 )
    {
      flGridContainsRadiusc = g_GridNav.m_flOffsetX;
      m_flEdgeSize = g_GridNav.m_flEdgeSize;
      flAngd = m_flEdgeSize;
      yc = 0.5 * m_flEdgeSize;
      v27 = floorf((((x - flRingRadius) - flGridContainsRadiusc) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
      i = v27;
      v28 = floorf((((x + flRingRadius) - flGridContainsRadiusc) + yc) / flAngd);
      flGridContainsRadiusd = g_GridNav.m_flOffsetY;
      v29 = v28;
      v63 = v28;
      v30 = floorf((((v71 - flRingRadius) - flGridContainsRadiusd) + yc) / flAngd);
      v31 = floorf((((v71 + flRingRadius) - flGridContainsRadiusd) + yc) / flAngd);
      if ( v27 <= v29 )
      {
        v64 = &pGrid[nGridWidth * (v30 - v57) + v27 - v56];
        do
        {
          v32 = v30;
          if ( v30 <= v31 )
          {
            v33 = v64;
            do
            {
              v34 = g_GridNav.m_flEdgeSize;
              vWorldTest.z = 0.0;
              v98.z = 0.0;
              v35 = (v32 * v34) + g_GridNav.m_flOffsetY;
              vWorldTest.x = (i * v34) + g_GridNav.m_flOffsetX;
              vWorldTest.y = v35;
              *&v98.x = *&vWorldTest.x;
              ya = vWorldTest.x;
              flAnga = v35;
              LOBYTE(v36) = CGridNavBase::IsInWorld(&g_GridNav, v98, flWorldEdgeBuffer);
              v37 = v36;
              if ( v36 != 0
                && *v33 == 0
                && (((ya - x) * (ya - x)) + ((flAnga - v71) * (flAnga - v71))) <= (flRingRadius * flRingRadius) )
              {
                vHullMins.x = NAN;
                if ( pUnit != 0 )
                {
                  m_pEntity = pUnit->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v39 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    v40 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v40 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(vHullMins.x) = v40 | LOWORD(vHullMins.x) & 0x8000;
                    LODWORD(vHullMins.x) = (v39 << 15) | LOWORD(vHullMins.x) & 0x7FFF;
                  }
                }
                v68 = v37;
                v41 = CGridNav::CheckForCollisions(&g_GridNav, ya, flAnga, 0, &vHullMins, 1);
                v43 = flAnga;
                if ( !v41 )
                {
                  m_bNeverMoveToClearSpace = v68;
                  if ( pGrid != 0 )
                  {
                    operator delete[](pGrid);
                    v43 = flAnga;
                  }
                  vHullMins = GetPositionOnGround(v43, v42, pNPC);
                  MoveUnit(pUnit, bTeleport, *&vHullMins.x, vHullMins.z);
                  return m_bNeverMoveToClearSpace;
                }
                *v33 = 1;
              }
              ++v32;
              v33 += nGridWidth;
            }
            while ( v32 <= v31 );
          }
          ++i;
          ++v64;
        }
        while ( i <= v63 );
      }
      v44 = v54-- == 1;
      flRingRadius = flRingRadius + flRingDistance;
      if ( v44 )
      {
        if ( pGrid != 0 )
          operator delete[](pGrid);
        m_pAsString = "";
        v46 = pUnit->m_pEntity;
        if ( v46->m_designerName.u.m_Id != 0 )
          m_pAsString = v46->m_designerName.u.m_pAsString;
        m_bNeverMoveToClearSpace = 0;
        Warning("Could not find clear space for unit \"%s\" at (%f, %f, %f)!\n", m_pAsString, x, v71, vPosa.z);
        v99.z = vPosa.z;
        *&vPosa.x = __PAIR64__(LODWORD(v71), LODWORD(x));
        *&v99.x = __PAIR64__(LODWORD(v71), LODWORD(x));
        CGridNavBase::ClampToWorldEdge(&g_GridNav, v99, flWorldEdgeBuffer);
        *&vHullMins.x = v48;
        vHullMins.z = v49;
        vWorldTest = GetPositionOnGround(&vHullMins, pNPC);
        MoveUnit(pUnit, bTeleport, *&vWorldTest.x, vWorldTest.z);
        return m_bNeverMoveToClearSpace;
      }
      goto LABEL_13;
    }
  }
  vHullMins.x = NAN;
  if ( pUnit != 0 )
  {
    v20 = pUnit->m_pEntity;
    if ( v20 != 0 )
    {
      v21 = (v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1);
      v22 = 0x7FFF;
      if ( v20->m_EHandle.m_Index != -1 )
        v22 = v20->m_EHandle.m_Index & 0x7FFF;
      LOWORD(vHullMins.x) = v22 | LOWORD(vHullMins.x) & 0x8000;
      LODWORD(vHullMins.x) = (v21 << 15) | LOWORD(vHullMins.x) & 0x7FFF;
    }
  }
  v23 = CGridNav::CheckForCollisions(&g_GridNav, flGridContainsRadius, y, 0, &vHullMins, 1);
  v25 = y;
  if ( v23 )
  {
    flAng = flAng + (6.2831855 / v16);
    goto LABEL_24;
  }
  m_bNeverMoveToClearSpace = v19;
  if ( pGrid != 0 )
  {
    operator delete[](pGrid);
    v25 = y;
  }
  PositionOnGround = GetPositionOnGround(v25, v24, pNPC);
  MoveUnit(pUnit, bTeleport, *&PositionOnGround.x, PositionOnGround.z);
  return m_bNeverMoveToClearSpace;
}


// FindClearSpaceForUnitAroundEntity  (line 2271, @0x00000000027aed90, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
// callers: CDOTAGamerules::OnARDMDuringMatchSpawnComplete, CDOTA_Grinder::FrameUpdateHeroes, OnHeroSpawned, CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart, CDOTA_Ability_PhantomLancer_SpiritLance::OnProjectileHit_ExtraData, CDOTA_Unit_Courier::RespawnCourier, CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnIntervalThink, CDOTA_Ability_Chen_TestOfFaithTeleport::OnSpellStart, CDOTA_Ability_Spectre_Haunt::OnSpellStart, CDOTA_Modifier_Shadow_Demon_Disruption::OnDestroy, CDOTA_Modifier_KeeperOfTheLight_Recall::OnDestroy
bool __fastcall FindClearSpaceForUnitAroundEntity(CBaseEntity *pSpot, CDOTA_BaseNPC *pNPC)
{
  Vector v4; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pSpot == 0 )
    return 0;
  v4 = *CBaseEntity::GetAbsOrigin(pSpot);
  return FindClearSpaceForUnit(pNPC, v4, 1);
}


// FindClearRandomPositionAroundUnit  (line 2281, @0x00000000027aedd0, libserver.so)  // inlines: GetPaddedCollisionRadius, VectorAdd, VectorMultiply, operator*, operator+
// calls: AngleVectors, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
// callers: OnCreateIllusionsSpawnCompletion, CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnIntervalThink
// globals: FindClearRandomPositionAroundUnit(CDOTA_BaseNPC *,CDOTA_BaseNPC *,int)::AnglePos
bool __fastcall FindClearRandomPositionAroundUnit(CDOTA_BaseNPC *pUnit, CDOTA_BaseNPC *pTargetUnit, int iPadding)
{
  vec_t z; // eax
  vec_t v8; // xmm1_4
  __m128i x_low; // xmm3
  float v10; // xmm1_4
  float v11; // r13d
  const Vector *AbsOrigin; // rax
  vec_t v13; // xmm0_4
  float v14; // [rsp+8h] [rbp-58h]
  float v15; // [rsp+Ch] [rbp-54h]
  float v16; // [rsp+Ch] [rbp-54h]
  QAngle angles; // [rsp+10h] [rbp-50h] BYREF
  Vector vForward; // [rsp+20h] [rbp-40h] BYREF
  Vector vFinalPos; // [rsp+30h] [rbp-30h]
  Vector v20; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pTargetUnit == 0 || pUnit == 0 )
    return 0;
  z = vec3_angle.z;
  v15 = pTargetUnit->m_flHullRadius + pTargetUnit->m_flCollisionPadding;
  angles.x = vec3_angle.x;
  angles.z = z;
  v8 = (90 * FindClearRandomPositionAroundUnit(CDOTA_BaseNPC *,CDOTA_BaseNPC *,int)::AnglePos);
  FindClearRandomPositionAroundUnit(CDOTA_BaseNPC *,CDOTA_BaseNPC *,int)::AnglePos = (FindClearRandomPositionAroundUnit(CDOTA_BaseNPC *,CDOTA_BaseNPC *,int)::AnglePos
                                                                                    + 1)
                                                                                   % 4;
  angles.y = v8;
  AngleVectors(&angles, &vForward, 0, 0);
  x_low = LODWORD(vForward.x);
  v10 = ((pUnit->m_flHullRadius + pUnit->m_flCollisionPadding) + v15) + iPadding;
  *x_low.m128i_i32 = vForward.x * v10;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v14 = vForward.y * v10;
  v16 = v10 * vForward.z;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pTargetUnit);
  v13 = v14 + AbsOrigin->y;
  vFinalPos.x = v11 + AbsOrigin->x;
  vFinalPos.y = v13;
  v20.z = v16 + AbsOrigin->z;
  *&v20.x = *&vFinalPos.x;
  return FindClearSpaceForUnit(pUnit, v20, 1);
}


// FindClearRandomPositionAroundPosition  (line 2302, @0x00000000027aef10, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: RandomInt, AngleVectors, FindClearSpaceForUnit
// globals: FindClearRandomPositionAroundPosition(CDOTA_BaseNPC *,Vector const&,int)::AnglePos
bool __fastcall FindClearRandomPositionAroundPosition(
        CDOTA_BaseNPC *pUnit,
        const Vector *const vPosition,
        int iMaxRange)
{
  bool result; // al
  vec_t z; // eax
  int v7; // r13d
  vec_t v8; // xmm2_4
  QAngle angles; // [rsp+0h] [rbp-50h] BYREF
  Vector vForward; // [rsp+10h] [rbp-40h] BYREF
  Vector vFinalPos; // [rsp+20h] [rbp-30h]
  Vector v12; // 0:xmm0_8.8,8:xmm1_4.4

  result = 0;
  if ( pUnit != 0 )
  {
    z = vec3_angle.z;
    angles.x = vec3_angle.x;
    angles.z = z;
    angles.y = (90 * FindClearRandomPositionAroundPosition(CDOTA_BaseNPC *,Vector const&,int)::AnglePos);
    FindClearRandomPositionAroundPosition(CDOTA_BaseNPC *,Vector const&,int)::AnglePos = (FindClearRandomPositionAroundPosition(CDOTA_BaseNPC *,Vector const&,int)::AnglePos
                                                                                        + 1)
                                                                                       % 4;
    v7 = RandomInt(0, iMaxRange);
    AngleVectors(&angles, &vForward, 0, 0);
    v12.z = (vForward.z * v7) + vPosition->z;
    v8 = (v7 * vForward.x) + vPosition->x;
    vFinalPos.y = (vForward.y * v7) + vPosition->y;
    vFinalPos.x = v8;
    *&v12.x = *&vFinalPos.x;
    return FindClearSpaceForUnit(pUnit, v12, 1);
  }
  return result;
}


// SwapUnitPositions  (line 2323, @0x00000000027aeff0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
// callers: OnCreateIllusionsSpawnCompletion, CDOTA_Ability_VengefulSpirit_Nether_Swap::OnSpellStart
void __fastcall SwapUnitPositions(CBaseEntity *pUnit1, CBaseEntity *pUnit2)
{
  Vector vPos2; // [rsp+0h] [rbp-30h] BYREF
  Vector vPos1; // [rsp+10h] [rbp-20h] BYREF

  vPos2 = *CBaseEntity::GetAbsOrigin(pUnit1);
  vPos1 = *CBaseEntity::GetAbsOrigin(pUnit2);
  (*(pUnit1->_vptr_IHandleEntity + 128))(pUnit1, &vPos1, 0, 0);
  (*(pUnit2->_vptr_IHandleEntity + 128))(pUnit2, &vPos2, 0, 0);
  FindClearSpaceForUnit(pUnit1, vPos1, 1);
  FindClearSpaceForUnit(pUnit2, vPos2, 1);
}


// FindSpaceBehindOrNearUnit  (line 2336, @0x00000000027af090, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetPaddedCollisionRadius, GetSerialNumber, Set, VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin, GetCommonObstructionManagerFlagsForNPC, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, GetPositionOnGround
// callers: CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnIntervalThink, CDOTA_Ability_Riki_BlinkStrike::DoBlinkStrike
bool __fastcall FindSpaceBehindOrNearUnit(CDOTA_BaseNPC *pTargetUnit, CDOTA_BaseNPC *pNPC)
{
  __int64 v3; // r12
  ObstructionRelationshipClass_t v5; // eax
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  CEntityIdentity *m_pEntity; // rax
  int v10; // edx
  __int16 v11; // cx
  bool v12; // al
  int (**vptr_IHandleEntity)(...); // rax
  float flPlacementRadius; // [rsp+4h] [rbp-DCh]
  const Vector v16; // [rsp+8h] [rbp-D8h]
  float y; // [rsp+14h] [rbp-CCh]
  float v18; // [rsp+18h] [rbp-C8h]
  float flRelaitonshipRadiusAdjustment; // [rsp+1Ch] [rbp-C4h]
  float flRelaitonshipRadiusAdjustmenta; // [rsp+1Ch] [rbp-C4h]
  int nAllFlags; // [rsp+28h] [rbp-B8h] BYREF
  int nNoneFlags; // [rsp+2Ch] [rbp-B4h] BYREF
  QAngle angle; // [rsp+30h] [rbp-B0h] BYREF
  Vector vForward; // [rsp+40h] [rbp-A0h] BYREF
  Vector vLoc; // [rsp+50h] [rbp-90h] BYREF
  Vector vGroundPos; // [rsp+60h] [rbp-80h] BYREF
  float flVectorMultForward[8]; // [rsp+70h] [rbp-70h]
  float flVectorMultSide[8]; // [rsp+90h] [rbp-50h]
  Vector PositionOnGround; // 0:kr00_12.12

  v3 = 0;
  angle = *CBaseEntity::GetAbsAngles(pTargetUnit);
  AngleVectors(&angle, &vForward, 0, 0);
  y = vForward.y;
  v18 = -vForward.x;
  v16 = *CBaseEntity::GetAbsOrigin(pTargetUnit);
  flPlacementRadius = ((pTargetUnit->m_flHullRadius + pTargetUnit->m_flCollisionPadding)
                     + (pNPC->m_flHullRadius + pNPC->m_flCollisionPadding))
                    + 1.0;
  GetCommonObstructionManagerFlagsForNPC(pNPC, &nAllFlags, &nNoneFlags);
  flRelaitonshipRadiusAdjustment = pNPC->m_flCollisionPadding;
  v5 = (*(pNPC->_vptr_IHandleEntity + 454))(pNPC);
  CGridNav::PrepareObstructionManager(
    &g_GridNav,
    pNPC->m_flHullRadius + 0.2,
    nAllFlags,
    nNoneFlags,
    v5,
    flRelaitonshipRadiusAdjustment);
  *&flVectorMultForward[2] = 3207922931LL;
  v6 = -1.0;
  *&flVectorMultForward[4] = 0x3F3504F300000000LL;
  flVectorMultForward[7] = 1.0;
  v7 = flPlacementRadius;
  *flVectorMultSide = 0x3F3504F300000000LL;
  *&flVectorMultSide[6] = 3207922931LL;
  flVectorMultSide[3] = 1.0;
  v8 = 0.0;
  flVectorMultForward[0] = -1.0;
  flVectorMultForward[6] = 0.70710677;
  flVectorMultForward[1] = -0.70710677;
  flVectorMultSide[4] = -1.0;
  flVectorMultSide[5] = 0.70710677;
  flVectorMultSide[2] = -0.70710677;
  while ( 1 )
  {
    vGroundPos.x = NAN;
    m_pEntity = pNPC->m_pEntity;
    vLoc.y = ((v18 * v8) * v7) + (((vForward.y * v6) * v7) + v16.y);
    vLoc.z = ((0.0 * v8) * v7) + (((vForward.z * v6) * v7) + v16.z);
    vLoc.x = ((v8 * y) * v7) + (((v6 * vForward.x) * v7) + v16.x);
    if ( m_pEntity != 0 )
    {
      v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(vGroundPos.x) = v11 | LOWORD(vGroundPos.x) & 0x8000;
      LODWORD(vGroundPos.x) = (v10 << 15) | LOWORD(vGroundPos.x) & 0x7FFF;
    }
    flRelaitonshipRadiusAdjustmenta = v7;
    v12 = CGridNav::CheckForCollisions(&g_GridNav, &vLoc, 0, &vGroundPos, 0);
    v7 = flRelaitonshipRadiusAdjustmenta;
    if ( !v12 )
      break;
    if ( ++v3 == 8 )
      return 0;
    v8 = flVectorMultSide[v3];
    v6 = flVectorMultForward[v3];
  }
  PositionOnGround = GetPositionOnGround(&vLoc, pTargetUnit);
  vptr_IHandleEntity = pNPC->_vptr_IHandleEntity;
  vGroundPos = PositionOnGround;
  vptr_IHandleEntity[128](pNPC, &vGroundPos, 0, 0);
  return 1;
}


// DoAirCollisionPadding  (line 2377, @0x00000000027ad7e0, libserver.so)  // inlines: FastSqrt, HasFlyMovementCapability, InState, Length2D, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
// callers: CDOTA_Modifier_Creature_HybridFlyer::OnUnitMoved, CDOTA_Unit_VisageFamiliar::OnIdleChanged, CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnUnitMoved
void __fastcall DoAirCollisionPadding(
        CDOTA_BaseNPC *pUnit1,
        CDOTA_BaseNPC *pUnit2,
        float a3,
        float flRatio,
        float flDist)
{
  const Vector *AbsOrigin; // r13
  const Vector *v8; // rax
  const Vector *v9; // r13
  const Vector *v10; // rax
  const Vector *v11; // rax
  vec_t v12; // xmm2_4
  vec_t v13; // xmm4_4
  const Vector *v14; // r12
  const Vector *v15; // rax
  const Vector *v16; // rax
  vec_t v17; // xmm0_4
  vec_t v18; // xmm7_4
  float v20; // [rsp+4h] [rbp-4Ch]
  float v21; // [rsp+8h] [rbp-48h]
  float v22; // [rsp+Ch] [rbp-44h]
  float v23; // [rsp+10h] [rbp-40h]
  float v24; // [rsp+14h] [rbp-3Ch]
  float v25; // [rsp+18h] [rbp-38h]
  float flRatiob; // [rsp+1Ch] [rbp-34h]
  Vector vOrigin; // [rsp+20h] [rbp-30h] BYREF

  if ( pUnit1 != 0
    && ((pUnit1->m_iMoveCapabilities & 2) != 0
     || (BYTE3(pUnit1->m_nUnitState64.m_Value) & 1 | ((pUnit1->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0)
    && pUnit2 != 0
    && ((pUnit2->m_iMoveCapabilities & 2) != 0
     || (BYTE3(pUnit2->m_nUnitState64.m_Value) & 1 | ((pUnit2->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0) )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pUnit2);
    v8 = CBaseEntity::GetAbsOrigin(pUnit1);
    v20 = v8->x - AbsOrigin->x;
    v21 = v8->y - AbsOrigin->y;
    v22 = v8->z - AbsOrigin->z;
    v9 = CBaseEntity::GetAbsOrigin(pUnit1);
    v10 = CBaseEntity::GetAbsOrigin(pUnit2);
    v25 = a3;
    v23 = (v10->x - v9->x) * a3;
    v24 = (v10->y - v9->y) * a3;
    flRatiob = (v10->z - v9->z) * a3;
    v11 = CBaseEntity::GetAbsOrigin(pUnit2);
    v12 = v23 + v11->x;
    v13 = v24 + v11->y;
    vOrigin.z = flRatiob + v11->z;
    vOrigin.x = v12;
    vOrigin.y = v13;
    CBaseEntity::SetAbsOrigin(pUnit2, &vOrigin);
    v14 = CBaseEntity::GetAbsOrigin(pUnit2);
    v15 = CBaseEntity::GetAbsOrigin(pUnit1);
    if ( flRatio > fsqrt(((v15->x - v14->x) * (v15->x - v14->x)) + ((v15->y - v14->y) * (v15->y - v14->y))) )
    {
      v16 = CBaseEntity::GetAbsOrigin(pUnit1);
      v17 = (v25 * v22) + v16->z;
      v18 = (v20 * v25) + v16->x;
      vOrigin.y = (v21 * v25) + v16->y;
      vOrigin.z = v17;
      vOrigin.x = v18;
      CBaseEntity::SetAbsOrigin(pUnit1, &vOrigin);
    }
  }
}


// GetCommonObstructionManagerFlagsForNPC  (line 2395, @0x00000000027ada30, libserver.so)  // inlines: HasFlyMovementCapability, InState
// calls: CDOTA_BaseNPC::IsPhased
// callers: CDOTA_Modifier_IceSlide::UpdateHorizontalMotion, CGridNavPath::TrySkipAhead, CGridNavPath::ComputeShortPath, FindClearSpaceForUnit, FindSpaceBehindOrNearUnit, CDOTALocomotor::UpdateStandardMovement, CDOTA_BaseNPC::DoesUnitCollideAtPosition
void __fastcall GetCommonObstructionManagerFlagsForNPC(
        CDOTA_BaseNPC *pNPC,
        int *const nAllFlags,
        int *const nNoneFlags)
{
  uint32 m_iUnitType; // eax

  *nAllFlags = 0;
  *nNoneFlags = 6;
  if ( CDOTA_BaseNPC::IsPhased(pNPC) || (*(pNPC->_vptr_IHandleEntity + 408))(pNPC) == 0 )
    *nAllFlags |= 8u;
  if ( !pNPC->m_bIsWaitingToSpawn.m_Value )
    *nNoneFlags |= 0x40u;
  m_iUnitType = pNPC->m_iUnitType;
  if ( (m_iUnitType & 3) == 0 )
  {
    *nNoneFlags |= 0x100u;
    m_iUnitType = pNPC->m_iUnitType;
  }
  if ( (m_iUnitType & 0x10000) == 0 )
    *nNoneFlags |= 0x200u;
  if ( (pNPC->m_iMoveCapabilities & 2) != 0
    || (BYTE3(pNPC->m_nUnitState64.m_Value) & 1 | ((pNPC->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0 )
  {
    *nNoneFlags |= 0xCB8u;
    *nAllFlags &= ~8u;
  }
}


// SendHudErrorToPlayer  (line 2429, @0x00000000027af3e0, libserver.so)  // inlines: CDOTAUserMsg_InvalidCommand_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_InvalidCommand_t>, FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>, PostEvent<CDOTAUserMsg_InvalidCommand_t>, SendUserMessage<CDOTAUserMsg_InvalidCommand_t>, assign, length, set_has_message, set_message, ~CDOTAUserMsg_InvalidCommand_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CDOTAUserMsg_InvalidCommand::CDOTAUserMsg_InvalidCommand, strlen, std::string::assign(char const*,ulong), CDOTAUserMsg_InvalidCommand::~CDOTAUserMsg_InvalidCommand, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: DOTA_ReportCustomInvalidOrder, CDOTAGamerules::ClientMsg_SwapRequest, SendHudErrorToPlayer, CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::OnSpellStart, CDOTA_Ability_Courier_TransferItems::OnSpellStart, CDOTA_Ability_Courier_TakeStashAndTransferItems::OnSpellStart, CDOTA_Ability_Courier_TakeStashItems::OnSpellStart, CDOTA_Modifier_MonkeyKing_Bounce::OnOrder, CDOTA_Ability_MonkeyKing_TreeDance::OnAbilityPhaseStart
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>(bool)::s_hEvent
void __fastcall SendHudErrorToPlayer(const char *pErrorName, CDOTAPlayer *pPlayer)
{
  size_t v4; // rax
  __int64 v5; // r14
  IGameEventSystem *v6; // r13
  void (__fastcall *v7)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v8[2]; // [rsp+10h] [rbp-190h] BYREF
  int v9; // [rsp+20h] [rbp-180h]
  std::string *v10; // [rsp+28h] [rbp-178h]
  CSingleUserRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  if ( pPlayer != 0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&filter, pPlayer);
    CRecipientFilter::MakeReliable(&filter);
    CDOTAUserMsg_InvalidCommand::CDOTAUserMsg_InvalidCommand(v8);
    v9 |= 1u;
    v8[0] = off_416C290;
    v4 = strlen(pErrorName);
    std::string::assign(v10, pErrorName, v4);
    v5 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>(bool)::s_hEvent;
    v6 = g_pGameEventSystem;
    v7 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_InvalidCommand_t>(bool)::s_hEvent);
    v7(v6, 0, 0, &filter, v5, v8, 32);
    v8[0] = &off_416C110;
    CDOTAUserMsg_InvalidCommand::~CDOTAUserMsg_InvalidCommand(v8);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// SendHudErrorToPlayer  (line 2441, @0x00000000027af570, libserver.so)
// calls: SendHudErrorToPlayer
// callers: CDOTA_Ability_Tiny_Toss::OnSpellStart
void __fastcall SendHudErrorToPlayer(const char *pErrorName, CDOTA_BaseNPC *pNPC)
{
  CDOTAPlayer *v3; // rax

  v3 = (*(pNPC->_vptr_IHandleEntity + 413))(pNPC);
  SendHudErrorToPlayer(pErrorName, v3);
}


// SendHudErrorToPlayer  (line 2447, @0x00000000027af5a0, libserver.so)  // inlines: CDOTAUserMsg_HudError_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_HudError_t>, FindOrCreateGameEvent<CDOTAUserMsg_HudError_t>, PostEvent<CDOTAUserMsg_HudError_t>, SendUserMessage<CDOTAUserMsg_HudError_t>, set_has_order_id, set_order_id, ~CDOTAUserMsg_HudError_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CDOTAUserMsg_HudError::CDOTAUserMsg_HudError, CDOTAUserMsg_HudError::~CDOTAUserMsg_HudError, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: DOTA_ReportInvalidOrder, DOTA_ExecuteOrders, SendHudErrorToPlayer
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HudError_t>(bool)::s_hEvent
void __fastcall SendHudErrorToPlayer(int nErrorID, CDOTAPlayer *pPlayer)
{
  __int64 v4; // r14
  IGameEventSystem *v5; // r13
  void (__fastcall *v6)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v7[2]; // [rsp+10h] [rbp-190h] BYREF
  int v8; // [rsp+20h] [rbp-180h]
  int nErrorIDa; // [rsp+28h] [rbp-178h]
  CSingleUserRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( pPlayer != 0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&filter, pPlayer);
    CRecipientFilter::MakeReliable(&filter);
    CDOTAUserMsg_HudError::CDOTAUserMsg_HudError(v7);
    nErrorIDa = nErrorID;
    v4 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HudError_t>(bool)::s_hEvent;
    v8 |= 1u;
    v7[0] = off_42B1E70;
    v5 = g_pGameEventSystem;
    v6 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_HudError_t>(bool)::s_hEvent);
    v6(v5, 0, 0, &filter, v4, v7, 32);
    v7[0] = &off_42B1CF0;
    CDOTAUserMsg_HudError::~CDOTAUserMsg_HudError(v7);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// SendHudErrorToPlayer  (line 2459, @0x00000000027af720, libserver.so)
// calls: SendHudErrorToPlayer
// callers: DOTA_ExecuteOrders, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update
void __fastcall SendHudErrorToPlayer(int nErrorID, CDOTA_BaseNPC *pNPC)
{
  CDOTAPlayer *v3; // rax

  v3 = (*(pNPC->_vptr_IHandleEntity + 413))(pNPC);
  SendHudErrorToPlayer(nErrorID, v3);
}


// DestinationPassed  (line 2465, @0x00000000027af750, libserver.so)  // inlines: Dot, DotProduct, IsZero, VectorSubtract, operator-
// callers: CDOTABehaviorCommandMoveToPosition::Update, CDOTA_BaseNPC::ExecuteResumePreviousMovement
char __fastcall DestinationPassed(Vector vCurPos, Vector vStart, Vector vDestination)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  char result; // al
  __int64 vCurPosa; // [rsp+20h] [rbp-10h]

  vCurPosa = *&vCurPos.x;
  v3 = vDestination.x - vStart.x;
  v4 = vDestination.y - vStart.y;
  if ( (vDestination.x - vStart.x) <= -0.0099999998 )
    return (((v3 * (vDestination.x - *&vCurPosa)) + (v4 * (vDestination.y - *(&vCurPosa + 1)))) + 0.0) < 0.0;
  if ( v3 >= 0.0099999998 )
    return (((v3 * (vDestination.x - *&vCurPosa)) + (v4 * (vDestination.y - *(&vCurPosa + 1)))) + 0.0) < 0.0;
  if ( v4 <= -0.0099999998 )
    return (((v3 * (vDestination.x - *&vCurPosa)) + (v4 * (vDestination.y - *(&vCurPosa + 1)))) + 0.0) < 0.0;
  result = 1;
  if ( v4 >= 0.0099999998 )
    return (((v3 * (vDestination.x - *&vCurPosa)) + (v4 * (vDestination.y - *(&vCurPosa + 1)))) + 0.0) < 0.0;
  return result;
}


// SendOverheadEventMessage  (line 2479, @0x00000000027af7e0, libserver.so)  // inlines: CDOTAUserMsg_OverheadEvent_t, CEntityHandle, CHandle, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CanEntityBeSeenByTeam, FindGameEvent<CDOTAUserMsg_OverheadEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_OverheadEvent_t>, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GetTeamNumber, IndexToIdentity, LookupEntity, PostEvent<CDOTAUserMsg_OverheadEvent_t>, SendUserMessage<CDOTAUserMsg_OverheadEvent_t>, Set, ToDOTAPlayer, curtime, entindex, operator CEntityInstance*, set_has_message_type, set_has_source_player_entindex, set_has_target_entindex, set_has_target_player_entindex, set_has_value, set_message_type, set_source_player_entindex, set_target_entindex, set_target_player_entindex, set_value, ~CDOTAUserMsg_OverheadEvent_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: CDOTAPlayer::IsACoach, CDOTAPlayer::GetCoachedTeamNum, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CDOTAUserMsg_OverheadEvent::CDOTAUserMsg_OverheadEvent, CEntityInstance::GetEntityIndex, CDOTAUserMsg_OverheadEvent::~CDOTAUserMsg_OverheadEvent, CRecipientFilter::~CRecipientFilter, UTIL_PlayerByIndex, CBaseModelEntity::CanBeSeenByTeam, LoggingSystem_IsChannelEnabled (16 total)
// callers: CDOTA_ActionRunner::PerformAction_Heal, CDOTA_ActionRunner::PerformAction_Lifesteal, CDOTA_Item_BagOfGold::OnSpellStart, CDOTA_Modifier_Tutorial_LastHitHelper::OnAttacked, CDOTA_Modifier_Tutorial_LastHittable::OnDeath, CDOTA_Modifier_GnollAssassin_EnvenomedWeapon_Poison::OnIntervalThink, CDOTA_Modifier_Greevil_Miniboss_Purple_VenomousGale::OnIntervalThink, CDOTA_Modifier_BlackDragon_Fireball_Thinker::OnIntervalThink, CDOTA_Ability_Greevil_Miniboss_White_Purification::OnSpellStart, CDOTA_Modifier_Greevil_Miniboss_Blue_ColdFeet::OnIntervalThink, CDOTA_Modifier_Illusion::OnDeath, Script_SendOverheadEventMessage (86 total)
// strings: "SV", "%s:  %f tick(%d) curtime(%f) OVERHEAD_ALERT_GOLD (%d)\n"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_OverheadEvent_t>(bool)::s_hEvent, CEntityHandle::gm_pEntityList
void __fastcall SendOverheadEventMessage(
        CDOTAPlayer *pTargetPlayer,
        DOTA_OVERHEAD_ALERT iMessageType,
        CBaseEntity *pTarget,
        int iValue,
        CDOTAPlayer *pSourcePlayer)
{
  int i; // ebx
  bool IsACoach; // al
  CEntityIndex v8; // eax
  CEntityIndex v9; // eax
  __int64 v10; // r15
  IGameEventSystem *v11; // r14
  CBasePlayer *v12; // rax
  CDOTAPlayer *v13; // r15
  int CoachedTeamNum; // eax
  bool v15; // r14
  CEntityIdentity *m_pEntity; // rcx
  int v17; // edx
  __int16 v18; // si
  int v19; // edx
  CEntityIdentity *v20; // rcx
  CEntityIdentity *v21; // rcx
  CBaseModelEntity *m_pInstance; // rdi
  CGlobalVars *v23; // r14
  CGlobalVars *v24; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm1_8
  unsigned int tickcount; // r14d
  double v28; // xmm0_8
  void (__fastcall *v30)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, unsigned __int16 *, __int64); // [rsp+18h] [rbp-1C8h]
  CRecipientFilter *v31; // [rsp+28h] [rbp-1B8h]
  unsigned __int16 v35[8]; // [rsp+40h] [rbp-1A0h] BYREF
  int v36; // [rsp+50h] [rbp-190h]
  DOTA_OVERHEAD_ALERT v37; // [rsp+58h] [rbp-188h]
  int v38; // [rsp+5Ch] [rbp-184h]
  int32 m_Data; // [rsp+60h] [rbp-180h]
  CEntityIndex v40; // [rsp+64h] [rbp-17Ch]
  int32 v41; // [rsp+68h] [rbp-178h]
  CSingleUserRecipientFilter filtersingle; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v43; // [rsp+1A8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  if ( iMessageType == DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD
    && dota_debug_lasthit_timing.m_pParent->m_Value.m_nValue != 0
    && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v23 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v24 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v24 = gpGlobals;
      }
      m_flCurrentTime = v23->m_flCurrentTime;
    }
    else
    {
      v24 = 0;
      m_flCurrentTime = 0.0;
    }
    tickcount = v24->tickcount;
    v31 = *&m_flCurrentTime;
    v28 = Plat_FloatTime();
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  %f tick(%d) curtime(%f) OVERHEAD_ALERT_GOLD (%d)\n",
      "SV",
      tickcount,
      iValue,
      v28,
      *&v31);
  }
  if ( gpGlobals->maxClients > 0 )
  {
    for ( i = 1; gpGlobals->maxClients >= i; ++i )
    {
      while ( 1 )
      {
        v12 = UTIL_PlayerByIndex(i);
        v13 = v12;
        if ( v12 == 0 || (*(v12->_vptr_IHandleEntity + 140))(v12) == 0 )
          goto LABEL_17;
        CoachedTeamNum = CDOTAPlayer::GetCoachedTeamNum(v13);
        if ( CoachedTeamNum == 0 )
          CoachedTeamNum = v13->m_iTeamNum.m_Value;
        v15 = CoachedTeamNum == 1;
        if ( CoachedTeamNum == 1 && iMessageType == DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_XP )
          goto LABEL_17;
        *v35 = -1;
        if ( pTarget == 0 )
          break;
        m_pEntity = pTarget->m_pEntity;
        if ( m_pEntity == 0 )
          break;
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v35[0] = v18 | v35[0] & 0x8000;
        v19 = (v17 << 15) | v35[0] & 0x7FFF;
        *v35 = v19;
        if ( (v19 + 2) <= 1 )
          break;
        v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v35[0] >> 9) & 0x3F];
        if ( v20 == 0 )
          break;
        v21 = &v20[v35[0] & 0x1FF];
        if ( v21 == 0 )
          break;
        if ( v21->m_EHandle.m_Index != v19 )
          break;
        m_pInstance = v21->m_pInstance;
        if ( v21->m_pInstance == 0
          || m_pInstance->m_pCollision == 0
          || CBaseModelEntity::CanBeSeenByTeam(m_pInstance, CoachedTeamNum)
          || iMessageType == DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD )
        {
          break;
        }
        if ( gpGlobals->maxClients < ++i )
          return;
      }
      IsACoach = CDOTAPlayer::IsACoach(v13);
      if ( IsACoach )
      {
        if ( pTargetPlayer == 0 )
          goto LABEL_12;
        IsACoach = CDOTAPlayer::GetCoachedTeamNum(v13) == pTargetPlayer->m_iTeamNum.m_Value;
      }
      if ( pTargetPlayer == 0 || v13 == pTargetPlayer || IsACoach || v15 )
      {
LABEL_12:
        CRecipientFilter::CRecipientFilter(&filtersingle);
        filtersingle._vptr_IRecipientFilter = &off_3FCB0D0;
        CRecipientFilter::AddRecipient(&filtersingle, v13);
        CRecipientFilter::MakeReliable(&filtersingle);
        CDOTAUserMsg_OverheadEvent::CDOTAUserMsg_OverheadEvent(v35);
        *v35 = off_42B1570;
        v36 |= 3u;
        v37 = iMessageType;
        v38 = iValue;
        if ( pTargetPlayer != 0 )
        {
          v8.m_Data = CEntityInstance::GetEntityIndex(pTargetPlayer).m_Data;
          v36 |= 4u;
          m_Data = v8.m_Data;
        }
        v40.m_Data = CEntityInstance::GetEntityIndex(pTarget).m_Data;
        v36 |= 8u;
        if ( pSourcePlayer != 0 )
        {
          v9.m_Data = CEntityInstance::GetEntityIndex(pSourcePlayer).m_Data;
          v36 |= 0x10u;
          v41 = v9.m_Data;
        }
        v10 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_OverheadEvent_t>(bool)::s_hEvent;
        v11 = g_pGameEventSystem;
        v30 = *(*g_pGameEventSystem + 128LL);
        (*(*g_pNetworkMessages + 96LL))(
          g_pNetworkMessages,
          IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_OverheadEvent_t>(bool)::s_hEvent);
        v30(v11, 0, 0, &filtersingle, v10, v35, 48);
        *v35 = &off_42B13F0;
        CDOTAUserMsg_OverheadEvent::~CDOTAUserMsg_OverheadEvent(v35);
        filtersingle._vptr_IRecipientFilter = &off_3FCB0D0;
        CRecipientFilter::~CRecipientFilter(&filtersingle);
      }
LABEL_17:
      ;
    }
  }
}


// SendChatEventMessage  (line 2531, @0x00000000027c7390, libserver.so)
// calls: SendChatEventMessage
// callers: Host_Say, CDOTAGamerules::ClientMsg_MapLine, CDOTAGamerules::ClientMsg_Pause, CDOTAGamerules::AD_AddBannedHero, CDOTAGamerules::BroadcastItemDropBonusStatus, CDOTAGamerules::State_Enter_GAME_IN_PROGRESS, CDOTAGamerules::HeroPickState_Think_ALL_DRAFT_SELECT, CDOTAGamerules::Radar, CDOTAGamerules::Think, CDOTAHeroList::GiveTeamGoldReward, CDOTA_BaseNPC_HoldoutTower::Event_Killed
void __fastcall SendChatEventMessage(DOTA_CHAT_MESSAGE iMessageType, int iValue, CRecipientFilter *pFilter)
{
  SendChatEventMessage(iMessageType, iValue, -1, -1, pFilter);
}


// SendChatEventMessage  (line 2536, @0x00000000027c73b0, libserver.so)
// calls: SendChatEventMessage
// callers: CDOTABaseAbility::CastAbility, CDOTAGamerules::NotifyLeaverStatus, CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::SetGamePaused, CDOTAGamerules::CheckIdleAndDisconnectedPlayers, CDOTAGamerules::State_Think_POST_GAME, CDOTAGamerules::OnNumSpectatorsChanged, CDOTAGamerules::Glyph, CDOTAGamerules::BroadcastItemDropBonusStatus, CDOTAGamerules::State_Enter_GAME_IN_PROGRESS, CDOTAGamerules::MakeRandomHeroSelection, CDOTAGamerules::ClientDisconnected (29 total)
void __fastcall SendChatEventMessage(
        DOTA_CHAT_MESSAGE iMessageType,
        int iValue,
        int iPlayerID1,
        CRecipientFilter *pFilter)
{
  SendChatEventMessage(iMessageType, iValue, iPlayerID1, -1, pFilter);
}


// AddChatEventMessageToChatLog  (line 2541, @0x00000000027b4f60, libserver.so)  // inlines: GetDOTAChatMessage
// calls: CDOTA_PlayerResource::IsValidPlayer, CDOTA_PlayerResource::GetPlayerName, V_sprintf_safe<1024ul>, CDOTAGamerules::AddEventToChatLog, __stack_chk_fail
// callers: SendChatEventMessage
// strings: "%s(%d)->%s(%d): %s"
// globals: skChatMessageStrings
void __fastcall AddChatEventMessageToChatLog(
        DOTA_CHAT_MESSAGE iMessageType,
        int iValue,
        int iPlayerID1,
        int iPlayerID2)
{
  int v6; // eax
  const SChatMessageStringEntry *v7; // r8
  const SChatMessageStringEntry *v8; // r14
  const CDOTA_PlayerResource *v9; // rdi
  const char *v10; // r15
  const char *v11; // rax
  const char *PlayerName; // rax
  char sz[1024]; // [rsp+10h] [rbp-440h] BYREF
  unsigned __int64 v14; // [rsp+418h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v6 = 0;
  if ( iMessageType != DOTA_CHAT_MESSAGE::CHAT_MESSAGE_HERO_KILL )
  {
    v7 = &skChatMessageStrings[1];
    LOBYTE(v6) = 1;
    while ( iMessageType != v7->nMessage )
    {
      ++v6;
      ++v7;
      if ( v6 == 93 )
        return;
    }
  }
  else
  {
    v6 = 0;
  }
  v8 = &skChatMessageStrings[v6];
  if ( (v8->nFlags & 2) != 0 && g_pGameRules != 0 )
  {
    if ( g_pDOTAPlayerResource != 0 )
    {
      if ( CDOTA_PlayerResource::IsValidPlayer(g_pDOTAPlayerResource, iPlayerID1) )
      {
        PlayerName = CDOTA_PlayerResource::GetPlayerName(g_pDOTAPlayerResource, iPlayerID1);
        v9 = g_pDOTAPlayerResource;
        v10 = PlayerName;
        if ( g_pDOTAPlayerResource == 0 )
          goto LABEL_17;
        goto LABEL_11;
      }
      v9 = g_pDOTAPlayerResource;
    }
    else
    {
      v9 = 0;
    }
    v10 = "";
    if ( v9 != 0 )
    {
LABEL_11:
      if ( CDOTA_PlayerResource::IsValidPlayer(v9, iPlayerID2) )
      {
        v11 = CDOTA_PlayerResource::GetPlayerName(g_pDOTAPlayerResource, iPlayerID2);
        if ( iPlayerID1 == -1 )
        {
LABEL_13:
          V_sprintf_safe<1024ul>(sz, "%s", v8->pszMessage);
LABEL_14:
          CDOTAGamerules::AddEventToChatLog(g_pGameRules, iPlayerID1, sz);
          return;
        }
LABEL_18:
        if ( iPlayerID2 == -1 )
          V_sprintf_safe<1024ul>(sz, "%s(%d): %s", v10, iPlayerID1, v8->pszMessage);
        else
          V_sprintf_safe<1024ul>(sz, "%s(%d)->%s(%d): %s", v10, iPlayerID1, v11, iPlayerID2, v8->pszMessage);
        goto LABEL_14;
      }
    }
LABEL_17:
    v11 = "";
    if ( iPlayerID1 == -1 )
      goto LABEL_13;
    goto LABEL_18;
  }
}


// SendChatEventMessage  (line 2582, @0x00000000027c6e00, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_ChatEvent_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ChatEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>, PostEvent<CDOTAUserMsg_ChatEvent_t>, SendUserMessage<CDOTAUserMsg_ChatEvent_t>, set_has_playerid_1, set_has_playerid_2, set_has_playerid_3, set_has_playerid_4, set_has_playerid_5, set_has_playerid_6, set_has_type, set_has_value, set_has_value2, set_has_value3, set_playerid_1, set_playerid_2, set_playerid_3, set_playerid_4, set_playerid_5, set_playerid_6, set_type, set_value, set_value2, set_value3, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_ChatEvent_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_ChatEvent::CDOTAUserMsg_ChatEvent, AddChatEventMessageToChatLog, CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDOTAHeroList::DistributeRewardsForKill, CDOTA_BaseNPC_Barracks::Event_Killed
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent
void __fastcall SendChatEventMessage(
        DOTA_CHAT_MESSAGE iMessageType,
        CUtlVector<int,CUtlMemory<int,int> > *pValues,
        CUtlVector<int,CUtlMemory<int,int> > *pPlayerIDs,
        CRecipientFilter *pFilter)
{
  int v7; // eax
  int m_Size; // edx
  int *m_pMemory; // rsi
  int v10; // ecx
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // edx
  int *v17; // rcx
  int v18; // esi
  int v19; // edi
  int v20; // edi
  int v21; // esi
  int v22; // edi
  int v23; // esi
  int v24; // edi
  int v25; // esi
  int v26; // eax
  int v27; // edx
  IGameEventSystem *v28; // r15
  int *v29; // rax
  int v30; // ecx
  int v31; // edx
  int v32; // esi
  __int64 v33; // [rsp+10h] [rbp-1D0h]
  void (__fastcall *v34)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+18h] [rbp-1C8h]
  _QWORD v36[2]; // [rsp+30h] [rbp-1B0h] BYREF
  int v37; // [rsp+40h] [rbp-1A0h]
  DOTA_CHAT_MESSAGE v38; // [rsp+48h] [rbp-198h]
  int v39; // [rsp+4Ch] [rbp-194h]
  int v40; // [rsp+50h] [rbp-190h]
  int v41; // [rsp+54h] [rbp-18Ch]
  int v42; // [rsp+58h] [rbp-188h]
  int v43; // [rsp+5Ch] [rbp-184h]
  int v44; // [rsp+60h] [rbp-180h]
  int v45; // [rsp+64h] [rbp-17Ch]
  int v46; // [rsp+68h] [rbp-178h]
  int v47; // [rsp+6Ch] [rbp-174h]
  CBroadcastRecipientFilter filterbroadcast; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v49; // [rsp+1A8h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filterbroadcast);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterbroadcast);
  if ( pFilter == 0 )
    pFilter = &filterbroadcast;
  CRecipientFilter::MakeReliable(pFilter);
  CDOTAUserMsg_ChatEvent::CDOTAUserMsg_ChatEvent(v36);
  v36[0] = off_42B10F0;
  v7 = v37;
  v38 = iMessageType;
  v37 |= 1u;
  m_Size = pValues->m_Size;
  if ( pValues->m_Size <= 0 )
  {
    v39 = -1;
    v10 = v7 | 3;
    goto LABEL_26;
  }
  m_pMemory = pValues->m_Memory.m_pMemory;
  v10 = v7 | 3;
  v11 = *m_pMemory;
  v37 = v7 | 3;
  v39 = v11;
  if ( m_Size == 1 )
  {
LABEL_26:
    v46 = -1;
    v13 = v10;
    v14 = -1;
    BYTE1(v13) |= 1u;
    goto LABEL_7;
  }
  v12 = m_pMemory[1];
  v13 = v7 | 0x103;
  v37 = v13;
  v46 = v12;
  v14 = -1;
  if ( m_Size != 2 )
    v14 = m_pMemory[2];
LABEL_7:
  v15 = v13;
  v47 = v14;
  BYTE1(v15) = BYTE1(v13) | 2;
  v37 = v15;
  v16 = pPlayerIDs->m_Size;
  if ( pPlayerIDs->m_Size <= 0 )
  {
    v40 = -1;
    v18 = v13 | 0x204;
    goto LABEL_15;
  }
  v17 = pPlayerIDs->m_Memory.m_pMemory;
  v18 = v13 | 0x204;
  v19 = *v17;
  v37 = v13 | 0x204;
  v40 = v19;
  if ( v16 == 1 )
  {
LABEL_15:
    v41 = -1;
    v21 = v18 | 8;
    goto LABEL_16;
  }
  v20 = v17[1];
  v21 = v13 | 0x20C;
  v37 = v13 | 0x20C;
  v41 = v20;
  if ( v16 == 2 )
  {
LABEL_16:
    v42 = -1;
    v23 = v21 | 0x10;
    goto LABEL_17;
  }
  v22 = v17[2];
  v23 = v13 | 0x21C;
  v37 = v13 | 0x21C;
  v42 = v22;
  if ( v16 == 3 )
  {
LABEL_17:
    v43 = -1;
    v25 = v23 | 0x20;
    goto LABEL_18;
  }
  v24 = v17[3];
  v25 = v13 | 0x23C;
  v37 = v13 | 0x23C;
  v43 = v24;
  if ( v16 == 4 )
  {
LABEL_18:
    v27 = -1;
    v44 = -1;
    v26 = v25 | 0x40;
    goto LABEL_19;
  }
  v26 = v13 | 0x27C;
  v44 = v17[4];
  if ( v16 == 5 )
    v27 = -1;
  else
    v27 = v17[5];
LABEL_19:
  LOBYTE(v26) = v26 | 0x80;
  v45 = v27;
  v37 = v26;
  v28 = g_pGameEventSystem;
  v34 = *(*g_pGameEventSystem + 128LL);
  v33 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent;
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent);
  v34(v28, 0, 0, pFilter, v33, v36, 64);
  if ( pPlayerIDs->m_Size > 1 )
  {
    v29 = pPlayerIDs->m_Memory.m_pMemory;
    v30 = v29[1];
LABEL_21:
    v31 = *v29;
    goto LABEL_22;
  }
  if ( pPlayerIDs->m_Size == 1 )
  {
    v29 = pPlayerIDs->m_Memory.m_pMemory;
    v30 = -1;
    goto LABEL_21;
  }
  v30 = -1;
  v31 = -1;
LABEL_22:
  v32 = -1;
  if ( pValues->m_Size > 0 )
    v32 = *pValues->m_Memory.m_pMemory;
  AddChatEventMessageToChatLog(iMessageType, v32, v31, v30);
  v36[0] = &off_42B0F70;
  CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent(v36);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterbroadcast);
}


// SendChatEventMessage  (line 2608, @0x00000000027c71a0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_ChatEvent_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ChatEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>, PostEvent<CDOTAUserMsg_ChatEvent_t>, SendUserMessage<CDOTAUserMsg_ChatEvent_t>, set_has_playerid_2, set_has_type, set_playerid_1, set_playerid_2, set_type, set_value, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_ChatEvent_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_ChatEvent::CDOTAUserMsg_ChatEvent, AddChatEventMessageToChatLog, CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: SendChatEventMessage, CDOTA_BaseNPC::ActivateRuneEffect, CDOTAHeroList::GiveTeamGoldReward, CDOTAHeroList::DistributeRewardsForKill, CDOTA_Item_EmptyBottle::OnRune
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent
void __fastcall SendChatEventMessage(
        DOTA_CHAT_MESSAGE iMessageType,
        int iValue,
        int iPlayerID1,
        int iPlayerID2,
        CRecipientFilter *pFilter)
{
  IGameEventSystem *v7; // r14
  __int64 v8; // [rsp+10h] [rbp-1D0h]
  void (__fastcall *v9)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+18h] [rbp-1C8h]
  _QWORD v13[2]; // [rsp+30h] [rbp-1B0h] BYREF
  int v14; // [rsp+40h] [rbp-1A0h]
  DOTA_CHAT_MESSAGE v15; // [rsp+48h] [rbp-198h]
  int v16; // [rsp+4Ch] [rbp-194h]
  int v17; // [rsp+50h] [rbp-190h]
  int v18; // [rsp+54h] [rbp-18Ch]
  CBroadcastRecipientFilter filterbroadcast; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v20; // [rsp+1A8h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filterbroadcast);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterbroadcast);
  if ( pFilter == 0 )
    pFilter = &filterbroadcast;
  CRecipientFilter::MakeReliable(pFilter);
  CDOTAUserMsg_ChatEvent::CDOTAUserMsg_ChatEvent(v13);
  v15 = iMessageType;
  v13[0] = off_42B10F0;
  v16 = iValue;
  v14 |= 0xFu;
  v17 = iPlayerID1;
  v18 = iPlayerID2;
  v7 = g_pGameEventSystem;
  v9 = *(*g_pGameEventSystem + 128LL);
  v8 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent;
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent);
  v9(v7, 0, 0, pFilter, v8, v13, 64);
  AddChatEventMessageToChatLog(iMessageType, iValue, iPlayerID1, iPlayerID2);
  v13[0] = &off_42B0F70;
  CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent(v13);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterbroadcast);
}


// SendChatEventMessage  (line 2629, @0x00000000027c73d0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_ChatEvent_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ChatEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>, PostEvent<CDOTAUserMsg_ChatEvent_t>, SendUserMessage<CDOTAUserMsg_ChatEvent_t>, set_has_playerid_1, set_has_playerid_2, set_has_playerid_3, set_has_playerid_4, set_has_playerid_5, set_has_playerid_6, set_has_type, set_has_value, set_playerid_1, set_playerid_2, set_playerid_3, set_playerid_4, set_playerid_5, set_playerid_6, set_type, set_value, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_ChatEvent_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_ChatEvent::CDOTAUserMsg_ChatEvent, AddChatEventMessageToChatLog, CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDOTAHeroList::DistributeRewardsForKill
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent
void __fastcall SendChatEventMessage(
        DOTA_CHAT_MESSAGE iMessageType,
        int iValue,
        CUtlVector<int,CUtlMemory<int,int> > *pPlayerIDs,
        CRecipientFilter *pFilter)
{
  int v6; // eax
  int m_Size; // edx
  int *m_pMemory; // rcx
  int v9; // esi
  int v10; // edi
  int v11; // edi
  int v12; // esi
  int v13; // edi
  int v14; // esi
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // edx
  IGameEventSystem *v19; // r14
  int *v20; // rax
  int v21; // ecx
  int v22; // edx
  __int64 v23; // [rsp+8h] [rbp-1C8h]
  void (__fastcall *v24)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-1C0h]
  _QWORD v27[2]; // [rsp+20h] [rbp-1B0h] BYREF
  int v28; // [rsp+30h] [rbp-1A0h]
  DOTA_CHAT_MESSAGE v29; // [rsp+38h] [rbp-198h]
  int v30; // [rsp+3Ch] [rbp-194h]
  int v31; // [rsp+40h] [rbp-190h]
  int v32; // [rsp+44h] [rbp-18Ch]
  int v33; // [rsp+48h] [rbp-188h]
  int v34; // [rsp+4Ch] [rbp-184h]
  int v35; // [rsp+50h] [rbp-180h]
  int v36; // [rsp+54h] [rbp-17Ch]
  CBroadcastRecipientFilter filterbroadcast; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v38; // [rsp+198h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filterbroadcast);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterbroadcast);
  if ( pFilter == 0 )
    pFilter = &filterbroadcast;
  CRecipientFilter::MakeReliable(pFilter);
  CDOTAUserMsg_ChatEvent::CDOTAUserMsg_ChatEvent(v27);
  v27[0] = off_42B10F0;
  v6 = v28;
  v29 = iMessageType;
  v28 |= 3u;
  m_Size = pPlayerIDs->m_Size;
  v30 = iValue;
  if ( m_Size <= 0 )
  {
    v31 = -1;
    v9 = v6 | 7;
    goto LABEL_11;
  }
  m_pMemory = pPlayerIDs->m_Memory.m_pMemory;
  v9 = v6 | 7;
  v10 = *m_pMemory;
  v28 = v6 | 7;
  v31 = v10;
  if ( m_Size == 1 )
  {
LABEL_11:
    v32 = -1;
    v12 = v9 | 8;
    goto LABEL_12;
  }
  v11 = m_pMemory[1];
  v12 = v6 | 0xF;
  v28 = v6 | 0xF;
  v32 = v11;
  if ( m_Size == 2 )
  {
LABEL_12:
    v33 = -1;
    v14 = v12 | 0x10;
    goto LABEL_13;
  }
  v13 = m_pMemory[2];
  v14 = v6 | 0x1F;
  v28 = v6 | 0x1F;
  v33 = v13;
  if ( m_Size == 3 )
  {
LABEL_13:
    v34 = -1;
    v16 = v14 | 0x20;
    goto LABEL_14;
  }
  v15 = m_pMemory[3];
  v16 = v6 | 0x3F;
  v28 = v6 | 0x3F;
  v34 = v15;
  if ( m_Size == 4 )
  {
LABEL_14:
    v18 = -1;
    v35 = -1;
    v17 = v16 | 0x40;
    goto LABEL_15;
  }
  v17 = v6 | 0x7F;
  v35 = m_pMemory[4];
  if ( m_Size == 5 )
    v18 = -1;
  else
    v18 = m_pMemory[5];
LABEL_15:
  LOBYTE(v17) = v17 | 0x80;
  v36 = v18;
  v28 = v17;
  v19 = g_pGameEventSystem;
  v24 = *(*g_pGameEventSystem + 128LL);
  v23 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent;
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ChatEvent_t>(bool)::s_hEvent);
  v24(v19, 0, 0, pFilter, v23, v27, 64);
  if ( pPlayerIDs->m_Size <= 1 )
  {
    if ( pPlayerIDs->m_Size != 1 )
    {
      v21 = -1;
      v22 = -1;
      goto LABEL_18;
    }
    v20 = pPlayerIDs->m_Memory.m_pMemory;
    v21 = -1;
  }
  else
  {
    v20 = pPlayerIDs->m_Memory.m_pMemory;
    v21 = v20[1];
  }
  v22 = *v20;
LABEL_18:
  AddChatEventMessageToChatLog(iMessageType, iValue, v22, v21);
  v27[0] = &off_42B0F70;
  CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent(v27);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterbroadcast);
}


// ShowTutorialTip  (line 2654, @0x00000000027afe10, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_TutorialTipInfo_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_TutorialTipInfo_t>, FindOrCreateGameEvent<CDOTAUserMsg_TutorialTipInfo_t>, PostEvent<CDOTAUserMsg_TutorialTipInfo_t>, SendUserMessage<CDOTAUserMsg_TutorialTipInfo_t>, assign, length, set_has_name, set_has_progress, set_name, set_progress, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_TutorialTipInfo_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_TutorialTipInfo::CDOTAUserMsg_TutorialTipInfo, strlen, std::string::assign(char const*,ulong), CDOTAUserMsg_TutorialTipInfo::~CDOTAUserMsg_TutorialTipInfo, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Tutorial::IncrementTaskProgress, CDOTA_Tutorial::ParseLessonKeys, CDOTA_Tutorial::ReactiveTipFired
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialTipInfo_t>(bool)::s_hEvent
void __fastcall ShowTutorialTip(const char *pTipName, CRecipientFilter *pFilter, int iProgress)
{
  size_t v6; // rax
  __int64 v7; // r15
  IGameEventSystem *v8; // r14
  void (__fastcall *v9)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1A8h]
  _QWORD v10[2]; // [rsp+10h] [rbp-1A0h] BYREF
  int v11; // [rsp+20h] [rbp-190h]
  std::string *v12; // [rsp+28h] [rbp-188h]
  int iProgressa; // [rsp+30h] [rbp-180h]
  CBroadcastRecipientFilter filterbroadcast; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v15; // [rsp+178h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filterbroadcast);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterbroadcast);
  if ( pFilter == 0 )
    pFilter = &filterbroadcast;
  CRecipientFilter::MakeReliable(pFilter);
  CDOTAUserMsg_TutorialTipInfo::CDOTAUserMsg_TutorialTipInfo(v10);
  v11 |= 1u;
  v10[0] = off_42B1C30;
  v6 = strlen(pTipName);
  std::string::assign(v12, pTipName, v6);
  iProgressa = iProgress;
  v11 |= 2u;
  v7 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialTipInfo_t>(bool)::s_hEvent;
  v8 = g_pGameEventSystem;
  v9 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialTipInfo_t>(bool)::s_hEvent);
  v9(v8, 0, 0, pFilter, v7, v10, 40);
  v10[0] = &off_42B1AB0;
  CDOTAUserMsg_TutorialTipInfo::~CDOTAUserMsg_TutorialTipInfo(v10);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterbroadcast);
}


// HeroMaxLevel  (line 2669, @0x00000000027affc0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTAPlayer::GetAssignedHero, GetHeroMaxLevel, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::CanAbilityBeUpgraded
// callers: CDOTACustomGameEvents::InputLevelAllHeroesToMax, CDOTAPlayer::ClientCommand, OnGrinderHeroSpawnCompletion, CDOTA_Grinder::StartHeroes, dota_dev
void __fastcall HeroMaxLevel(CDOTAPlayer *pPlayer)
{
  unsigned __int16 v1; // cx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  CDOTA_BaseNPC *v8; // r13
  int v9; // ebx
  _BOOL8 v10; // rsi
  int v11; // r15d
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v13; // r12
  int v14; // r14d
  int i; // ebx

  if ( pPlayer != 0 )
  {
    if ( pPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v1 = 0x7FFF;
      v2 = 0x7FFF;
    }
    else
    {
      v1 = pPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v2 = v1;
    }
    v3 = (pPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
    if ( v3 + 2 > 1 )
    {
      v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
      if ( v4 != 0 )
      {
        v5 = &v4[v2 & 0x1FF];
        if ( v5 != 0 && v3 == v5->m_EHandle.m_Index )
        {
          m_pInstance = v5->m_pInstance;
          if ( v5->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            AssignedHero = CDOTAPlayer::GetAssignedHero(pPlayer);
            v8 = AssignedHero;
            if ( AssignedHero != 0 )
            {
              v9 = 0;
              if ( (AssignedHero->m_iUnitType & 1) != 0 )
              {
                while ( v9 < GetHeroMaxLevel() )
                {
                  v10 = v9++ == 0;
                  (*(v8->_vptr_IHandleEntity + 492))(v8, v10);
                }
                v11 = 0;
                while ( 1 )
                {
                  AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v8, v11);
                  v13 = AbilityByIndex;
                  if ( AbilityByIndex == 0 )
                    goto LABEL_24;
                  v14 = 7;
                  if ( (*(AbilityByIndex->_vptr_IHandleEntity + 214))(AbilityByIndex) == 0 )
                    goto LABEL_21;
                  if ( (*(v13->_vptr_IHandleEntity + 214))(v13) == 1 )
                  {
                    v14 = 4;
LABEL_21:
                    for ( i = 0; i < v14; ++i )
                    {
                      if ( CDOTABaseAbility::CanAbilityBeUpgraded(v13) != AbilityLearnResult_t::ABILITY_CAN_BE_UPGRADED )
                        break;
                      (*(v8->_vptr_IHandleEntity + 495))(v8, v13);
                    }
                    goto LABEL_24;
                  }
                  if ( (*(v13->_vptr_IHandleEntity + 214))(v13) == 2 )
                  {
LABEL_24:
                    if ( ++v11 == 24 )
                      return;
                  }
                  else
                  {
                    ++v11;
                    (*(v13->_vptr_IHandleEntity + 214))(v13);
                    if ( v11 == 24 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// HeroRefresh  (line 2720, @0x00000000027aae70, libserver.so)
// calls: CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::EndCooldown, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_Item::SetCurrentCharges
// callers: CDOTA_Grinder::FrameUpdateHeroes, dota_dev
void __fastcall HeroRefresh(CDOTA_BaseNPC_Hero *pHero)
{
  int v2; // r12d
  int v3; // eax
  float v4; // xmm1_4
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v6; // rbx
  int i; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v10; // r12

  v2 = 0;
  v3 = (*(pHero->_vptr_IHandleEntity + 156))(pHero);
  CDOTA_BaseNPC::ModifyHealth(pHero, v3, 0, 0, 0);
  CDOTA_BaseNPC::SetMana(pHero, v4);
  do
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(pHero, v2);
    v6 = AbilityByIndex;
    if ( AbilityByIndex != 0 && (*(AbilityByIndex->_vptr_IHandleEntity + 217))(AbilityByIndex) != 0 )
    {
      CDOTABaseAbility::EndCooldown(v6);
      (*(v6->_vptr_IHandleEntity + 318))(v6);
    }
    ++v2;
  }
  while ( v2 != 24 );
  for ( i = 0; i != 9; ++i )
  {
    Inventory = CDOTA_BaseNPC::GetInventory(pHero);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
    v10 = ItemInSlot;
    if ( ItemInSlot != 0 )
    {
      CDOTABaseAbility::EndCooldown(ItemInSlot);
      CDOTA_Item::SetCurrentCharges(v10, v10->m_iInitialCharges.m_Value);
    }
  }
}


// DOTADevCommandsAutocomplete  (line 2790, @0x00000000027bb930, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CUtlString>, Element, GrowMemory, _V_strstr, operator[], strstr
// calls: CUtlString::Format, strstr, CUtlMemory<CUtlString, int>::Grow
// strings: "dota_dev"
// globals: CDOTA_Grinder::sm_Factory, g_pszDOTADevCommands
void __fastcall DOTADevCommandsAutocomplete(
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  const char *v2; // r13
  const char **v4; // rbx
  int i; // r15d
  CUtlString *v6; // rax
  CUtlString *v7; // rdi
  int v8; // ecx
  char *v9; // rax
  int m_Size; // eax
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-38h]

  v2 = partial + 9;
  v4 = g_pszDOTADevCommands;
  p_m_Memory = &commands->m_Memory;
  for ( i = commands->m_Size; ; i = v8 )
  {
    v9 = strstr(*v4, v2);
    v8 = i;
    if ( v9 != 0 )
    {
      m_Size = i;
      if ( commands->m_Memory.m_nAllocationCount == i )
      {
        CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
        m_Size = commands->m_Size;
      }
      commands->m_Size = m_Size + 1;
      v6 = &commands->m_Memory.m_pMemory[i];
      if ( v6 != 0 )
      {
        v6->m_pString = 0;
        v7 = &commands->m_Memory.m_pMemory[i];
      }
      else
      {
        v7 = 0;
      }
      CUtlString::Format(v7, "%s %s", "dota_dev", *v4);
      v8 = commands->m_Size;
    }
    if ( v8 == 64 )
      break;
    if ( ++v4 == &CDOTA_Grinder::sm_Factory )
      break;
  }
}


// IsDevCommand  (line 2812, @0x00000000027b0280, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: strcmp
// callers: dota_dev
// globals: g_pszDOTADevCommands
bool __fastcall IsDevCommand(int iCommand, const char *pInput)
{
  const char *v2; // rdi

  if ( pInput == 0 )
    return 0;
  v2 = g_pszDOTADevCommands[iCommand];
  return pInput == v2 || strcmp(v2, pInput) == 0;
}


// EndGameImmediately  (line 2822, @0x00000000027b02d0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, Vector, operator CBaseEntity*
// calls: UTIL_GetCommandClient, Warning, UTIL_PlayerByIndex, CGameEntitySystem::FindEntityByClassname, CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// callers: DevForceGameEnd, CDOTA_BaseNPC_Building::Event_Killed, CDOTA_BaseNPC_Hero::Event_Killed
// strings: "\tNo client, finding a random bot to use for the player ID instead.\n", "npc_dota_fort", "Couldn't end game: invalid winning team %d\n", "\tCouldn't find a player.\n"
void __fastcall EndGameImmediately(int whichTeamWins)
{
  _BOOL4 v1; // r13d
  CBasePlayer *CommandClient; // rax
  int v3; // r13d
  CBasePlayer *v4; // rbx
  int i; // r12d
  CBasePlayer *v6; // rax
  unsigned __int16 v7; // dx
  int v8; // esi
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CBasePlayer *m_pInstance; // r12
  CBaseEntity *v13; // rbx
  CBaseEntity *EntityByClassname; // rax
  vec_t v15; // xmm1_4
  int Health; // [rsp+2Ch] [rbp-E4h]
  Vector v17; // [rsp+30h] [rbp-E0h] BYREF
  Vector v18; // [rsp+40h] [rbp-D0h] BYREF
  CTakeDamageInfo dmg; // [rsp+50h] [rbp-C0h] BYREF

  if ( (whichTeamWins - 2) > 1 )
  {
    Warning("Couldn't end game: invalid winning team %d\n", whichTeamWins);
  }
  else
  {
    v1 = whichTeamWins == 2;
    CommandClient = UTIL_GetCommandClient();
    v3 = v1 + 2;
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
LABEL_11:
      if ( v4[1].m_iMaxHealth.m_Value == -1 )
      {
        v7 = 0x7FFF;
        v8 = 0x7FFF;
      }
      else
      {
        v7 = v4[1].m_iMaxHealth.m_Value & 0x7FFF;
        v8 = v7;
      }
      v9 = (v4[1].m_iMaxHealth.m_Value >> 15 << 15) | v7 & 0x7FFF;
      LODWORD(dmg._vptr_CTakeDamageInfo) = v9;
      if ( (v9 + 2) <= 1
        || (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) == 0
        || (v11 = &v10[v8 & 0x1FF]) == 0
        || v9 != v11->m_EHandle.m_Index
        || (m_pInstance = v11->m_pInstance, v11->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC
        || (LOBYTE(m_pInstance->m_Local.m_skybox3d.fog.dirPrimary.m_Value.x) & 1) == 0 )
      {
        m_pInstance = v4;
      }
    }
    else
    {
      Warning("\tNo client, finding a random bot to use for the player ID instead.\n");
      if ( gpGlobals->maxClients > 0 )
      {
        for ( i = 2; ; ++i )
        {
          v6 = UTIL_PlayerByIndex((i - 1));
          v4 = v6;
          if ( v6 != 0 && (*(v6->_vptr_IHandleEntity + 140))(v6) != 0 )
          {
            if ( (*(v4->_vptr_IHandleEntity + 393))(v4) != -1 )
              goto LABEL_11;
            if ( i > gpGlobals->maxClients )
              break;
          }
          else if ( gpGlobals->maxClients < i )
          {
            break;
          }
        }
      }
      m_pInstance = 0;
      Warning("\tCouldn't find a player.\n");
    }
    v13 = 0;
    while ( 1 )
    {
      EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v13, "npc_dota_fort");
      v13 = EntityByClassname;
      if ( EntityByClassname == 0 )
        break;
      if ( v3 == EntityByClassname->m_iTeamNum.m_Value )
      {
        if ( m_pInstance == 0 )
          m_pInstance = EntityByClassname;
        Health = CBaseEntity::GetHealth(EntityByClassname);
        *&v18.x = (*(v13->_vptr_IHandleEntity + 62))(v13);
        v18.z = v15;
        v17.x = 0.0;
        v17.y = 0.0;
        v17.z = 1.0;
        CTakeDamageInfo::CTakeDamageInfo(&dmg, m_pInstance, m_pInstance, &v17, &v18, (Health + 100), 0, 0, 0);
        CBaseEntity::TakeDamage(v13, &dmg);
        CTakeDamageInfo::~CTakeDamageInfo(&dmg);
      }
    }
  }
}


// DevForceGameEnd  (line 2878, @0x00000000027b05d0, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::ForceGameStart, EndGameImmediately
// callers: CDOTAPlayer::ClientCommand, dota_dev
void __fastcall DevForceGameEnd(int whichTeamWins)
{
  if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[28] != 5 )
    CDOTAGamerules::ForceGameStart(g_pGameRules);
  EndGameImmediately(whichTeamWins);
}


// dota_dev  (line 2891, @0x00000000027cd420, libserver.so)  // inlines: AddToTail, Arg, CDOTABaseNPCCollector, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, DOTAGameRules, Element, FStrEq, ForEachBot<CDOTABaseNPCCollector>, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetTeamNumber, GetUnitName, GrowMemory, IndexToIdentity, IsControllableByPlayer, IsValid, LookupEntity, NetworkStateChanged, Set, SetCurrentXP, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, Vector, VectorAdd, _V_strcmp, atof, atoi, operator CBaseEntity*, operator CEntityInstance*, operator(), operator+, operator=<int>, operator[], ~CDOTABaseNPCCollector, ~CUtlVector
// calls: IsDevCommand, CDOTAGamerules::ForceGameStart, CDOTAGamerules::PrepareSpawners, Msg, UTIL_GetCommandClient, CDOTAPlayer::GetAssignedHero, FindClearSpaceForUnit, DevMsg(char const*,...), CDOTA_BaseNPC::Interrupt, strtol, GetXPNeededToReachNextLevel, V_atoi (30 total)
// strings: "Missing level count", "Not enough arguments", "Teleported hero to position: %f %f %f\n", "Grinder: testing heroes %d to %d\n", "Missing gold amount", "npc_dota_sentry_wards" (10 total)
// globals: g_CDOTA_Grinder, CEntityHandle::gm_pEntityList, g_pStringTableParticleEffectNames
void __fastcall dota_dev(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_nArgc; // r12d
  const char *v4; // rbx
  float v5; // xmm1_4
  float v6; // xmm1_4
  CBasePlayer *v7; // rax
  CDOTAPlayer *v8; // rbx
  CDOTA_BaseNPC_Hero *m_pInstance; // r12
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v14; // rbx
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  CDOTA_BaseNPC_Hero *v16; // r12
  const char *v17; // rdi
  int v18; // ebx
  int v19; // r13d
  _BOOL8 v20; // rsi
  int XPNeededToReachNextLevel; // ebx
  int v22; // r12d
  CBasePlayer *v23; // rax
  CDOTAPlayer *v24; // rbx
  CDOTAPlayer *v25; // rsi
  CBasePlayer *v26; // rax
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  CDOTA_BaseNPC *v31; // r12
  __int64 m_Size; // r13
  int v33; // eax
  CDOTA_BaseNPC **v34; // rax
  CBasePlayer *v35; // rax
  CBasePlayer *v36; // rbx
  const char *v37; // rdi
  int v38; // r12d
  int v39; // eax
  CBasePlayer *v40; // rax
  CDOTAPlayer *v41; // rbx
  __int64 k; // r14
  CDOTA_BaseNPC *v43; // r12
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  const char *v46; // rdi
  int v47; // ebx
  int v48; // r13d
  __m128d v49; // xmm0
  const char *v50; // rdi
  float v51; // xmm4_4
  __m128d v52; // xmm0
  int v53; // eax
  CHandle<CDOTA_BaseNPC_Hero> *v54; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v56; // rdx
  const char *m_pAsString; // rsi
  CEntityIdentity *v58; // rax
  CBasePlayer *v59; // rax
  CDOTAPlayer *v60; // rbx
  CDOTA_BaseNPC_Hero *v61; // rax
  CBasePlayer *v62; // rax
  float v63; // xmm1_4
  CBasePlayer *v64; // rbx
  char v65; // al
  __int64 v66; // r14
  __int64 v67; // rbx
  int v68; // r13d
  CHandle<CDOTA_BaseNPC_Hero> *v69; // rax
  uint32 v70; // ecx
  CEntityIdentity *v71; // rdx
  CEntityIdentity *v72; // rax
  CEntityInstance *v73; // rdi
  CDOTAGamerules *v74; // r12
  unsigned int j; // ebx
  unsigned int v76; // esi
  float v77; // xmm1_4
  CBasePlayer *v78; // rax
  CBasePlayer *v79; // rbx
  int m_Value; // edi
  __int64 v81; // r12
  int i; // ebx
  CDOTA_BaseNPC *v83; // rax
  const char *v84; // rdx
  CBasePlayer *v85; // rax
  CBasePlayer *v86; // rbx
  unsigned int v87; // eax
  const char *v88; // r12
  CBasePlayer *v89; // rax
  CDOTAPlayer *v90; // rbx
  CDOTAPlayer *v91; // rsi
  CBasePlayer *v92; // rax
  CDOTAPlayer *v93; // rbx
  CDOTAPlayer *v94; // rsi
  float v95; // [rsp+18h] [rbp-88h]
  float v96; // [rsp+20h] [rbp-80h]
  vec_t x; // [rsp+20h] [rbp-80h]
  Vector vPos; // [rsp+28h] [rbp-78h] BYREF
  int v99; // [rsp+34h] [rbp-6Ch]
  int v100; // [rsp+38h] [rbp-68h]
  CDOTABaseNPCCollector roster; // [rsp+40h] [rbp-60h] BYREF
  Vector v102; // 0:xmm0_8.8,8:xmm1_4.4

  m_nArgc = args->m_nArgc;
  if ( args->m_nArgc == 1 )
  {
    Msg("Not enough arguments");
    return;
  }
  if ( m_nArgc <= 1 )
  {
    if ( IsDevCommand(0, "") )
    {
LABEL_4:
      if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[28] != 5 )
      {
        CDOTAGamerules::ForceGameStart(g_pGameRules);
        CDOTAGamerules::PrepareSpawners(g_pGameRules, COERCE_DOUBLE(1065353216), v5);
      }
      return;
    }
    if ( !IsDevCommand(1, "") )
    {
      if ( !IsDevCommand(2, "") )
      {
        if ( IsDevCommand(3, "") )
        {
LABEL_24:
          CommandClient = UTIL_GetCommandClient();
          v14 = CommandClient;
          if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
          {
            AssignedHero = CDOTAPlayer::GetAssignedHero(v14);
            v16 = AssignedHero;
            if ( AssignedHero != 0 && (AssignedHero->m_iUnitType & 1) != 0 )
            {
              v17 = "";
              if ( args->m_nArgc > 2 )
                v17 = args->m_ppArgv[2];
              v18 = 0;
              v19 = strtol(v17, 0, 10);
              if ( v19 > 0 )
              {
                do
                {
                  v20 = v18++ == 0;
                  (*(v16->_vptr_IHandleEntity + 492))(v16, v20);
                }
                while ( v18 < v19 );
              }
              XPNeededToReachNextLevel = GetXPNeededToReachNextLevel(v16->m_iCurrentLevel.m_Value - 1);
              if ( XPNeededToReachNextLevel != v16->m_iCurrentXP.m_Value )
              {
                (*(v16->_vptr_IHandleEntity + 22))(v16, 4776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                v16->m_iCurrentXP.m_Value = XPNeededToReachNextLevel;
              }
            }
          }
          return;
        }
        if ( !IsDevCommand(4, "") )
        {
          if ( !IsDevCommand(5, "") )
          {
            if ( !IsDevCommand(9, "") )
            {
              if ( !IsDevCommand(6, "") )
              {
                if ( !IsDevCommand(7, "") )
                {
                  if ( !IsDevCommand(8, "") )
                  {
                    if ( !IsDevCommand(11, "") )
                    {
                      if ( !IsDevCommand(12, "") )
                      {
                        if ( !IsDevCommand(16, "") )
                        {
                          if ( IsDevCommand(13, "") )
                            goto LABEL_143;
                          v4 = "";
                          if ( !IsDevCommand(14, "") )
                          {
LABEL_140:
                            if ( IsDevCommand(15, v4) )
                            {
                              if ( m_nArgc == 3 )
                              {
                                v87 = V_atoi(args->m_ppArgv[2]);
                                (*(g_pStringTableParticleEffectNames->_vptr_INetworkStringTable + 9))(
                                  g_pStringTableParticleEffectNames,
                                  v87,
                                  1);
                              }
                              else
                              {
                                Msg("dota_dev missing_effect effect_index\n");
                              }
                            }
                            return;
                          }
LABEL_160:
                          Msg("Grinder: testing buildings\n");
                          if ( args->m_nArgc == 3 )
                          {
                            v88 = args->m_ppArgv[2];
                            v89 = UTIL_GetCommandClient();
                            v90 = v89;
                            if ( v89 != 0 && (*(v89->_vptr_IHandleEntity + 140))(v89) != 0 )
                              v91 = v90;
                            else
                              v91 = 0;
                            CDOTA_Grinder::StartBuildings(&g_CDOTA_Grinder, v91, v88);
                          }
                          else
                          {
                            v92 = UTIL_GetCommandClient();
                            v93 = v92;
                            if ( v92 != 0 && (*(v92->_vptr_IHandleEntity + 140))(v92) != 0 )
                              v94 = v93;
                            else
                              v94 = 0;
                            CDOTA_Grinder::StartBuildings(&g_CDOTA_Grinder, v94, 0);
                          }
                          return;
                        }
                        goto LABEL_135;
                      }
LABEL_138:
                      DevForceGameEnd(3);
                      return;
                    }
LABEL_134:
                    DevForceGameEnd(2);
                    return;
                  }
                  goto LABEL_121;
                }
                goto LABEL_103;
              }
              goto LABEL_98;
            }
            goto LABEL_64;
          }
          goto LABEL_69;
        }
        goto LABEL_50;
      }
LABEL_16:
      v7 = UTIL_GetCommandClient();
      v8 = v7;
      if ( v7 == 0 || (*(v7->_vptr_IHandleEntity + 140))(v7) == 0 )
        return;
      if ( args->m_nArgc != 3 || (v53 = strtol(args->m_ppArgv[2], 0, 10)) <= 0 || v53 > g_HeroList.m_hHeroList.m_Size )
      {
        m_pInstance = CDOTAPlayer::GetAssignedHero(v8);
        goto LABEL_20;
      }
      v54 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v53 - 1];
      m_Index = v54->m_Index;
      if ( v54->m_Index + 2 > 1 )
      {
        v56 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v54->m_Index) >> 9) & 0x3F];
        if ( v56 != 0 )
        {
          m_pInstance = 0;
          m_pAsString = "not found";
          v58 = &v56[v54->m_Index & 0x1FF];
          if ( v58 == 0 || m_Index != v58->m_EHandle.m_Index )
            goto LABEL_95;
          m_pInstance = v58->m_pInstance;
          if ( v58->m_pInstance == 0 )
          {
LABEL_97:
            m_pAsString = "not found";
LABEL_95:
            Msg("%s\n", m_pAsString);
LABEL_20:
            if ( m_pInstance != 0 )
            {
              v10 = v8->m_vecCrosshairTracePos.z + 5.0;
              if ( args->m_nArgc == 4 )
              {
                vPos.x = v8->m_vecCrosshairTracePos.z + 5.0;
                v49.m128d_f64[0] = strtod(args->m_ppArgv[2], 0);
                v50 = "";
                v51 = _mm_movedup_pd(v49).m128d_f64[0];
                if ( args->m_nArgc > 3 )
                  v50 = args->m_ppArgv[3];
                x = vPos.x;
                vPos.x = v51;
                v52.m128d_f64[0] = strtod(v50, 0);
                v10 = x;
                v11 = vPos.x;
                v12 = _mm_movedup_pd(v52).m128d_f64[0];
              }
              else
              {
                v11 = v8->m_vecCrosshairTracePos.x + 0.0;
                v12 = v8->m_vecCrosshairTracePos.y + 0.0;
              }
              *&roster.m_who.m_Size = __PAIR64__(LODWORD(v12), LODWORD(v11));
              v102.z = v10;
              *&v102.x = __PAIR64__(LODWORD(v12), LODWORD(v11));
              v95 = v11;
              v96 = v12;
              *&roster.m_who.m_Memory.m_pMemory = v10;
              vPos.x = v10;
              FindClearSpaceForUnit(m_pInstance, v102, 1);
              DevMsg("Teleported hero to position: %f %f %f\n", v95, v96, vPos.x);
              CDOTA_BaseNPC::Interrupt(m_pInstance);
            }
            return;
          }
          if ( (m_pInstance->m_iUnitType & 1) != 0 )
          {
            m_pAsString = "";
            if ( m_pInstance->m_iszUnitName.m_Value.u.m_Id != 0 )
              m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
            goto LABEL_95;
          }
        }
      }
      m_pInstance = 0;
      goto LABEL_97;
    }
  }
  else
  {
    v4 = args->m_ppArgv[1];
    if ( IsDevCommand(0, v4) )
      goto LABEL_4;
    if ( !IsDevCommand(1, v4) )
    {
      if ( !IsDevCommand(2, v4) )
      {
        if ( IsDevCommand(3, v4) )
        {
          if ( m_nArgc == 2 )
          {
LABEL_12:
            Msg("Missing level count");
            return;
          }
          goto LABEL_24;
        }
        if ( !IsDevCommand(4, v4) )
        {
          if ( !IsDevCommand(5, v4) )
          {
            if ( !IsDevCommand(9, v4) )
            {
              if ( !IsDevCommand(6, v4) )
              {
                if ( !IsDevCommand(7, v4) )
                {
                  if ( !IsDevCommand(8, v4) )
                  {
                    if ( !IsDevCommand(11, v4) )
                    {
                      if ( !IsDevCommand(12, v4) )
                      {
                        if ( !IsDevCommand(16, v4) )
                        {
                          if ( IsDevCommand(13, v4) )
                          {
                            if ( m_nArgc == 3 )
                            {
                              v22 = 10 * V_atoi(args->m_ppArgv[2]);
                              Msg("Grinder: testing heroes %d to %d\n", v22, v22 + 10);
                              v23 = UTIL_GetCommandClient();
                              v24 = v23;
                              if ( v23 != 0 && (*(v23->_vptr_IHandleEntity + 140))(v23) != 0 )
                                v25 = v24;
                              else
                                v25 = 0;
                              CDOTA_Grinder::StartHeroes(&g_CDOTA_Grinder, v25, v22, v22 + 10);
                              return;
                            }
LABEL_143:
                            Msg("dota_dev grinder_heroes <group_number>\n");
                            return;
                          }
                          if ( !IsDevCommand(14, v4) )
                            goto LABEL_140;
                          goto LABEL_160;
                        }
LABEL_135:
                        v85 = UTIL_GetCommandClient();
                        v86 = v85;
                        if ( v85 != 0 && (*(v85->_vptr_IHandleEntity + 140))(v85) != 0 )
                          DevForceGameEnd(v86->m_iTeamNum.m_Value);
                        return;
                      }
                      goto LABEL_138;
                    }
                    goto LABEL_134;
                  }
LABEL_121:
                  v78 = UTIL_GetCommandClient();
                  v79 = v78;
                  if ( v78 != 0 && (*(v78->_vptr_IHandleEntity + 140))(v78) != 0 )
                  {
                    roster.m_who.m_Size = 0;
                    roster.m_who.m_Memory.m_pMemory = 0;
                    roster.m_who.m_Memory.m_nAllocationCount = 0;
                    roster.m_who.m_Memory.m_nGrowSize = 0;
                    m_Value = v79->m_iTeamNum.m_Value;
                    vPos.z = 0.0;
                    v99 = 0;
                    v100 = 0;
                    FindUnitsInRadius(m_Value, &vPos.z, 0, -1.0, &roster, 3, 32, 0, 0, 0);
                    v81 = 0;
                    for ( i = 0; roster.m_who.m_Size > i; v81 += 4 )
                    {
                      v83 = CEntityHandle::operator CEntityInstance *((roster.m_who.m_Memory.m_pMemory + v81));
                      if ( v83 != 0 && v83->m_bIsDOTANPC )
                      {
                        v84 = v83->m_iszUnitName.m_Value.u.m_pAsString;
                        if ( v84 != 0
                          && (v84 == "npc_dota_sentry_wards"
                           || strcmp(v83->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_sentry_wards") == 0
                           || v84 == "npc_dota_observer_wards"
                           || strcmp(v83->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_observer_wards") == 0) )
                        {
                          CDOTA_BaseNPC::Kill(v83, 0, 0, 0.0, 0);
                        }
                      }
                      ++i;
                    }
                    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&roster);
                  }
                  return;
                }
LABEL_103:
                v62 = UTIL_GetCommandClient();
                v64 = v62;
                if ( v62 != 0 && (*(v62->_vptr_IHandleEntity + 140))(v62) != 0 )
                {
                  v65 = (*(v64->_vptr_IHandleEntity + 393))(v64);
                  if ( g_HeroList.m_hHeroList.m_Size > 0 )
                  {
                    v66 = 0;
                    v67 = 1LL << v65;
                    v68 = 0;
                    do
                    {
                      v69 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v66];
                      v70 = v69->m_Index;
                      if ( v69->m_Index + 2 > 1 )
                      {
                        v71 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v69->m_Index) >> 9) & 0x3F];
                        if ( v71 != 0 )
                        {
                          v72 = &v71[v69->m_Index & 0x1FF];
                          if ( v72 != 0 && v70 == v72->m_EHandle.m_Index )
                          {
                            v73 = v72->m_pInstance;
                            if ( v72->m_pInstance != 0
                              && (v73[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                              && (v67 & v73[61].m_hPrivateScope.m_hScope) != 0 )
                            {
                              HeroRefresh(v73);
                            }
                          }
                        }
                      }
                      ++v68;
                      ++v66;
                    }
                    while ( v68 < g_HeroList.m_hHeroList.m_Size );
                  }
                }
                v74 = g_pGameRules;
                if ( g_pGameRules != 0 )
                {
                  for ( j = 2; j != 14; ++j )
                  {
                    CDOTAGamerules::SetGlyphCooldown(v74, j, 0.0, v63);
                    v76 = j;
                    CDOTAGamerules::SetRadarCooldown(v74, v76, 0.0, v77);
                  }
                }
                return;
              }
LABEL_98:
              v59 = UTIL_GetCommandClient();
              v60 = v59;
              if ( v59 != 0 && (*(v59->_vptr_IHandleEntity + 140))(v59) != 0 )
              {
                v61 = CDOTAPlayer::GetAssignedHero(v60);
                if ( v61 != 0 && (v61->m_iUnitType & 1) != 0 )
                  (*(v61->_vptr_IHandleEntity + 494))(v61, 0, 0, 0);
              }
              return;
            }
            if ( m_nArgc == 2 )
            {
              Msg("Missing gold amount");
              return;
            }
LABEL_64:
            v35 = UTIL_GetCommandClient();
            v36 = v35;
            if ( v35 != 0 && (*(v35->_vptr_IHandleEntity + 140))(v35) != 0 )
            {
              v37 = "";
              if ( args->m_nArgc > 2 )
                v37 = args->m_ppArgv[2];
              v38 = strtol(v37, 0, 10);
              v39 = (*(v36->_vptr_IHandleEntity + 393))(v36);
              CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v39, v38, 0, 0);
            }
            return;
          }
LABEL_69:
          v40 = UTIL_GetCommandClient();
          v41 = v40;
          if ( v40 != 0 && (*(v40->_vptr_IHandleEntity + 140))(v40) != 0 )
            HeroMaxLevel(v41);
          return;
        }
        if ( m_nArgc == 2 )
          goto LABEL_12;
LABEL_50:
        v26 = UTIL_GetCommandClient();
        *&vPos.x = v26;
        if ( v26 != 0 && (*(v26->_vptr_IHandleEntity + 140))(v26) != 0 )
        {
          roster.m_who.m_Size = 0;
          roster.m_who.m_Memory.m_pMemory = 0;
          roster.m_who.m_Memory.m_nAllocationCount = 0;
          roster.m_who.m_Memory.m_nGrowSize = 0;
          m_Head = g_NextBotManager.m_botList.m_Head;
          roster.m_iTeamFilter = 3;
          roster.m_iTypeFilter = 1;
          roster.m_iFlagFilter = 0;
          roster.m_myTeam = -1;
          if ( m_Head != 0xFFFF )
          {
            m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
            do
            {
              v29 = m_Head;
              v30 = (*(m_pMemory[v29].m_Element->_vptr_INextBotEventResponder + 66))(m_pMemory[v29].m_Element);
              v31 = v30;
              if ( v30 == 0 || *(v30 + 339) == 0 )
                v31 = 0;
              if ( UnitFilter(v31, roster.m_iTeamFilter, roster.m_iTypeFilter, roster.m_iFlagFilter, roster.m_myTeam) == 0 )
              {
                m_Size = roster.m_who.m_Size;
                v33 = roster.m_who.m_Size;
                if ( roster.m_who.m_Size == roster.m_who.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&roster.m_who.m_Memory, 1);
                  v33 = roster.m_who.m_Size;
                }
                roster.m_who.m_Size = v33 + 1;
                v34 = &roster.m_who.m_Memory.m_pMemory[m_Size];
                if ( v34 != 0 )
                  *v34 = v31;
              }
              m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
              m_Head = m_pMemory[v29].m_Next;
            }
            while ( m_Head != 0xFFFF );
            for ( k = 0; roster.m_who.m_Size > k; ++k )
            {
              v43 = roster.m_who.m_Memory.m_pMemory[k];
              if ( v43 == 0 || (v43->m_iUnitType & 1) == 0 )
                v43 = 0;
              v44 = (*(**&vPos.x + 3144LL))(*&vPos.x);
              v45 = v43->m_iIsControllableByPlayer64.m_Value;
              if ( _bittest64(&v45, v44) && CBaseEntity::HasDebugBitsSet(v43, 0x20000u) )
              {
                v46 = "";
                if ( args->m_nArgc > 2 )
                  v46 = args->m_ppArgv[2];
                v47 = 0;
                v48 = strtol(v46, 0, 10);
                if ( v48 > 0 )
                {
                  do
                    (*(v43->_vptr_IHandleEntity + 492))(v43, v47++ == 0);
                  while ( v47 < v48 );
                }
              }
            }
          }
          CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::~CUtlVectorBase(&roster.m_who);
        }
        return;
      }
      goto LABEL_16;
    }
  }
  if ( g_pGameRules != 0 )
    CDOTAGamerules::PrepareSpawners(g_pGameRules, COERCE_DOUBLE(1065353216), v6);
}


// ExtractUnitName  (line 3170, @0x00000000027b0610, libserver.so)  // inlines: V_StripExtension<int>
// calls: _V_StripExtension
// callers: CDOTA_BaseNPC::GetUnitNameFromKeyValues
void __fastcall ExtractUnitName(const char *pszName, char *outname)
{
  _V_StripExtension(pszName, outname, 260);
}


// PointInTriangle  (line 3179, @0x00000000027b0620, libserver.so)  // inlines: Dot, DotProduct2D, Vector2DSubtract, operator-
// callers: DoCleaveAttack
bool __fastcall PointInTriangle(
        const Vector2D *const vPoint,
        const Vector2D *const vA,
        const Vector2D *const vB,
        const Vector2D *const vC)
{
  float y; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm3_4

  y = vA->y;
  v5 = vB->x - vA->x;
  v6 = vB->y - y;
  v7 = vC->x - vA->x;
  v8 = vC->y - y;
  v9 = vPoint->x - vA->x;
  v10 = vPoint->y - y;
  v11 = (v5 * v5) + (v6 * v6);
  v12 = (v5 * v7) + (v6 * v8);
  v13 = (v5 * v9) + (v6 * v10);
  v14 = (v7 * v7) + (v8 * v8);
  v15 = (v7 * v9) + (v8 * v10);
  v16 = 1.0 / ((v11 * v14) - (v12 * v12));
  v17 = ((v11 * v15) - (v12 * v13)) * v16;
  return v17 >= 0.0 && (v18 = ((v13 * v14) - (v15 * v12)) * v16) >= 0.0 && (v18 + v17) < 1.0;
}


// DoCleaveAttack  (line 3199, @0x00000000027cc900, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, NormalizeInPlace, ToDOTABaseNPC, Vector2D, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, PointInTriangle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, ApplyDamage (14 total)
// callers: CDOTA_ActionRunner::PerformAction_CleaveAttack, Script_DoCleaveAttack, CDOTA_Modifier_Kunkka_Tidebringer::OnAttackLanded, CDOTA_Modifier_Tiny_Grow::OnAttackLanded, CDOTA_Modifier_Sven_GreatCleave::OnAttackLanded, CDOTA_Modifier_Magnataur_Empower::OnAttackLanded, CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnAttackLanded, CDOTA_Modifier_Item_Battlefury::OnAttackLanded
// strings: "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall DoCleaveAttack(
        CDOTA_BaseNPC *pAttacker,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        float fDamage,
        float flStartingWidth,
        float flEndingWidth,
        float flDistance,
        const char *pszEffectName,
        const CModifierParams *const params)
{
  uint32 m_iUnitType; // eax
  const Vector *AbsOrigin; // r12
  const Vector *v12; // rax
  vec_t v13; // xmm4_4
  vec_t v14; // xmm0_4
  Vector *v15; // rax
  __int64 iRecord; // r12
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  const Vector *v22; // r12
  const Vector *v23; // rax
  vec_t v24; // xmm4_4
  vec_t v25; // xmm0_4
  float v26; // xmm1_4
  int m_Value; // edi
  float v28; // xmm9_4
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v30; // rbx
  __int16 v31; // cx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC *v33; // r12
  CEntityIdentity *v34; // rdx
  const Vector *v35; // rax
  CHandle<CBaseEntity> *v36; // rdx
  uint32 m_Index; // eax
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  float v41; // xmm0_4
  Vector *v42; // rax
  CDOTA_BaseNPC *m_pInstance; // rax
  unsigned int nHeroesKilled; // [rsp+28h] [rbp-208h]
  int iEffectIndexb; // [rsp+48h] [rbp-1E8h]
  int iEffectIndexa; // [rsp+48h] [rbp-1E8h]
  int iCleaveIndexb; // [rsp+4Ch] [rbp-1E4h]
  int iCleaveIndexa; // [rsp+4Ch] [rbp-1E4h]
  float flStartingWidthb; // [rsp+58h] [rbp-1D8h]
  Vector2D vCorner12D; // [rsp+60h] [rbp-1D0h] BYREF
  Vector2D vCorner22D; // [rsp+70h] [rbp-1C0h] BYREF
  Vector2D vCorner32D; // [rsp+80h] [rbp-1B0h] BYREF
  Vector2D vCorner42D; // [rsp+90h] [rbp-1A0h] BYREF
  Vector2D vPoint; // [rsp+A0h] [rbp-190h] BYREF
  Vector vDirection; // [rsp+B0h] [rbp-180h] BYREF
  Vector vPos; // [rsp+C0h] [rbp-170h] BYREF
  Vector vToTarget; // [rsp+D0h] [rbp-160h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+E0h] [rbp-150h] BYREF
  unsigned __int64 v67; // [rsp+1F8h] [rbp-38h]

  v67 = __readfsqword(0x28u);
  m_iUnitType = pTarget->m_iUnitType;
  if ( (m_iUnitType & 0x10) != 0 || (m_iUnitType & 0x193) == 0 )
  {
    return 0;
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pAttacker);
    v12 = CBaseEntity::GetAbsOrigin(pTarget);
    v13 = v12->y - AbsOrigin->y;
    v14 = v12->z - AbsOrigin->z;
    vDirection.x = v12->x - AbsOrigin->x;
    vDirection.y = v13;
    vDirection.z = v14;
    VectorNormalize(&vDirection);
    v15 = CBaseEntity::GetAbsOrigin(pAttacker);
    iRecord = params->iRecord;
    vPos = *v15;
    AttackRecordsManager = GetAttackRecordsManager();
    RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
    v19 = flStartingWidth;
    v20 = flEndingWidth;
    v21 = flDistance;
    if ( RecordByIndex != 0 && RecordByIndex->m_bTriggeredAttack )
    {
      v42 = CBaseEntity::GetAbsOrigin(pTarget);
      v21 = flDistance;
      v20 = flEndingWidth;
      vPos = *v42;
      v19 = flStartingWidth;
    }
    *&iEffectIndexb = v21;
    *&iCleaveIndexb = v20;
    flStartingWidthb = v19;
    v22 = CBaseEntity::GetAbsOrigin(pAttacker);
    v23 = CBaseEntity::GetAbsOrigin(pTarget);
    v24 = v23->x - v22->x;
    v25 = v23->y - v22->y;
    vToTarget.z = 0.0;
    vToTarget.x = v24;
    vToTarget.y = v25;
    VectorNormalize(&vToTarget);
    v26 = flStartingWidthb * -vToTarget.x;
    entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
    m_Value = pAttacker->m_iTeamNum.m_Value;
    v28 = -vToTarget.x * *&iCleaveIndexb;
    vCorner12D.x = (vToTarget.y * flStartingWidthb) + vPos.x;
    entities.m_Size = 0;
    entities.m_Memory.m_nAllocationCount = 64;
    vCorner12D.y = v26 + vPos.y;
    entities.m_Memory.m_nGrowSize = 0x80000000;
    vCorner22D.x = (vPos.x + (vToTarget.y * *&iCleaveIndexb)) + (vToTarget.x * *&iEffectIndexb);
    vCorner22D.y = (vPos.y + v28) + (vToTarget.y * *&iEffectIndexb);
    vCorner42D.x = vPos.x - (vToTarget.y * flStartingWidthb);
    vCorner32D.x = (vPos.x - (vToTarget.y * *&iCleaveIndexb)) + (vToTarget.x * *&iEffectIndexb);
    vCorner42D.y = vPos.y - v26;
    vCorner32D.y = (vPos.y - v28) + (vToTarget.y * *&iEffectIndexb);
    FindUnitsInRadius(m_Value, &vPos, pAttacker, *&iEffectIndexb + *&iCleaveIndexb, &entities, 2, 3, 16, 0, 0);
    if ( pszEffectName != 0 )
    {
      ParticleManager = GetParticleManager();
      iEffectIndexa = CDOTA_ParticleManager::CreateParticle(ParticleManager, pszEffectName, 1, pAttacker, 0, 0);
    }
    else
    {
      iEffectIndexa = -1;
    }
    if ( entities.m_Size > 0 )
    {
      v30 = 0;
      iCleaveIndexa = 1;
      nHeroesKilled = 0;
      while ( 1 )
      {
        v36 = &entities.m_Memory.m_pMemory[v30];
        m_Index = v36->m_Index;
        if ( v36->m_Index + 2 > 1
          && (v31 = v36->m_Index,
              (v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v36->m_Index) >> 9) & 0x3F]) != 0) )
        {
          v33 = 0;
          v34 = &v32[v31 & 0x1FF];
          if ( v34 == 0 )
            goto LABEL_13;
          if ( m_Index != v34->m_EHandle.m_Index )
            goto LABEL_13;
          m_pInstance = v34->m_pInstance;
          if ( v34->m_pInstance == 0 )
            goto LABEL_13;
          if ( !m_pInstance->m_bIsDOTANPC )
            goto LABEL_13;
          v33 = v34->m_pInstance;
          if ( pTarget != m_pInstance )
            goto LABEL_13;
LABEL_17:
          if ( entities.m_Size <= ++v30 )
            goto LABEL_24;
        }
        else
        {
          v33 = 0;
LABEL_13:
          v35 = CBaseEntity::GetAbsOrigin(v33);
          vPoint.x = v35->x;
          vPoint.y = v35->y;
          if ( !PointInTriangle(&vPoint, &vCorner12D, &vCorner22D, &vCorner32D)
            && !PointInTriangle(&vPoint, &vCorner12D, &vCorner32D, &vCorner42D) )
          {
            goto LABEL_17;
          }
          if ( !pAttacker->m_bIsIllusion.m_Value )
          {
            v41 = ApplyDamage(pAttacker, v33, pInflictor, fDamage, 1, 1282);
            if ( (v33->m_iUnitType & 1) != 0 && !v33->m_bIsIllusion.m_Value )
              nHeroesKilled += (*(v33->_vptr_IHandleEntity + 408))(v33, v41) == 0;
          }
          if ( iCleaveIndexa > 63 || iEffectIndexa == -1 )
            goto LABEL_17;
          v39 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(
            v39,
            iEffectIndexa,
            iCleaveIndexa++,
            v33,
            5,
            "attach_hitloc",
            vec3_invalid,
            1);
          if ( entities.m_Size <= ++v30 )
            goto LABEL_24;
        }
      }
    }
    nHeroesKilled = 0;
LABEL_24:
    if ( iEffectIndexa != -1 )
    {
      v40 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v40, iEffectIndexa);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  return nHeroesKilled;
}


// Script_DoCleaveAttack  (line 3289, @0x00000000027ccfa0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, DoCleaveAttack
__int64 __fastcall Script_DoCleaveAttack(
        HSCRIPT hAttacker,
        HSCRIPT hTarget,
        HSCRIPT hAbility,
        float fDamage,
        float flStartingWidth,
        float flEndingWidth,
        float flDistance,
        const char *pszEffectName)
{
  __int64 (__fastcall *v11)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v13; // rax
  CDOTA_BaseNPC *v14; // r14
  __int64 (__fastcall *v15)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v16; // rax
  __int64 v17; // rax
  CDOTA_BaseNPC *v18; // r13
  __int64 (__fastcall *v19)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *v20; // rax
  const void *v21; // rax
  CDOTABaseAbility *v22; // rax
  CDOTABaseAbility *v23; // rdx
  float flDistanceb; // [rsp+8h] [rbp-48h]
  float flDistancec; // [rsp+8h] [rbp-48h]
  float flDistancea; // [rsp+8h] [rbp-48h]
  float flEndingWidthb; // [rsp+Ch] [rbp-44h]
  float flEndingWidthc; // [rsp+Ch] [rbp-44h]
  float flEndingWidtha; // [rsp+Ch] [rbp-44h]
  float flStartingWidthb; // [rsp+18h] [rbp-38h]
  float flStartingWidthc; // [rsp+18h] [rbp-38h]
  float flStartingWidtha; // [rsp+18h] [rbp-38h]

  if ( hAttacker == 0 )
    goto LABEL_4;
  flDistanceb = flDistance;
  flEndingWidthb = flEndingWidth;
  flStartingWidthb = flStartingWidth;
  v11 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  v13 = v11(g_pScriptVM, hAttacker, Script);
  flStartingWidth = flStartingWidthb;
  flEndingWidth = flEndingWidthb;
  flDistance = flDistanceb;
  if ( v13 == 0 )
    goto LABEL_4;
  if ( *(v13 + 339) != 0 )
    v14 = v13;
  else
LABEL_4:
    v14 = 0;
  if ( hTarget == 0 )
    goto LABEL_14;
  flDistancec = flDistance;
  flEndingWidthc = flEndingWidth;
  flStartingWidthc = flStartingWidth;
  v15 = *(*g_pScriptVM + 208LL);
  v16 = GetScriptDesc<CEntityInstance>(0);
  v17 = v15(g_pScriptVM, hTarget, v16);
  flStartingWidth = flStartingWidthc;
  flEndingWidth = flEndingWidthc;
  flDistance = flDistancec;
  if ( v17 == 0 )
    goto LABEL_14;
  if ( *(v17 + 339) != 0 )
    v18 = v17;
  else
LABEL_14:
    v18 = 0;
  if ( hAbility == 0 )
    goto LABEL_15;
  flDistancea = flDistance;
  flEndingWidtha = flEndingWidth;
  flStartingWidtha = flStartingWidth;
  v19 = *(*g_pScriptVM + 208LL);
  v20 = GetScriptDesc<CEntityInstance>(0);
  v21 = v19(g_pScriptVM, hAbility, v20);
  flStartingWidth = flStartingWidtha;
  flEndingWidth = flEndingWidtha;
  flDistance = flDistancea;
  if ( v21 != 0 )
  {
    v22 = __dynamic_cast(v21, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    flDistance = flDistancea;
    flEndingWidth = flEndingWidtha;
    v23 = v22;
    flStartingWidth = flStartingWidtha;
  }
  else
  {
LABEL_15:
    v23 = 0;
  }
  return DoCleaveAttack(
           v14,
           v18,
           v23,
           fDamage,
           flStartingWidth,
           flEndingWidth,
           flDistance,
           pszEffectName,
           &CModifierParams::s_Default);
}


// DoSplashAttack  (line 3298, @0x00000000027cd160, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, ApplyDamage, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Modifier_Magnataur_Empower::OnAttackLanded, CDOTA_Modifier_Magnataur_Empower_Aura_Buff::OnAttackLanded
// strings: "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall DoSplashAttack(
        CDOTA_BaseNPC *pAttacker,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        float fDamage,
        float fRadius,
        const char *pszEffectName,
        const CModifierParams *const params)
{
  uint32 m_iUnitType; // eax
  const Vector *AbsOrigin; // rax
  __int64 v11; // rdx
  int m_Value; // edi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  __int64 v15; // rbx
  int v16; // r14d
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *v19; // r12
  CEntityIdentity *v20; // rdx
  CDOTA_ParticleManager *v21; // rax
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  float v24; // xmm0_4
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *m_pInstance; // rax
  unsigned int nHeroesKilled; // [rsp+28h] [rbp-78h]
  Vector vPos; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-50h] BYREF

  m_iUnitType = pTarget->m_iUnitType;
  if ( (m_iUnitType & 0x10) != 0 || (m_iUnitType & 0x193) == 0 )
  {
    return 0;
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    v11 = *&AbsOrigin->x;
    m_Value = pAttacker->m_iTeamNum.m_Value;
    entities.m_Size = 0;
    *&vPos.x = v11;
    *&AbsOrigin = AbsOrigin->z;
    entities.m_Memory.m_pMemory = 0;
    LODWORD(vPos.z) = AbsOrigin;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    FindUnitsInRadius(m_Value, &vPos, pAttacker, fRadius, &entities, 2, 3, 16, 0, 0);
    if ( pszEffectName != 0 )
    {
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, pszEffectName, 1, pTarget, 0, 0);
    }
    else
    {
      Particle = -1;
    }
    if ( entities.m_Size > 0 )
    {
      v15 = 0;
      v16 = 1;
      nHeroesKilled = 0;
      while ( 1 )
      {
        v22 = &entities.m_Memory.m_pMemory[v15];
        m_Index = v22->m_Index;
        if ( v22->m_Index + 2 <= 1 )
          break;
        v17 = v22->m_Index;
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
        if ( v18 == 0 )
          break;
        v19 = 0;
        v20 = &v18[v17 & 0x1FF];
        if ( v20 == 0
          || m_Index != v20->m_EHandle.m_Index
          || (m_pInstance = v20->m_pInstance, v20->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC
          || (v19 = v20->m_pInstance, pTarget != m_pInstance) )
        {
          if ( pAttacker->m_bIsIllusion.m_Value )
            goto LABEL_11;
          goto LABEL_16;
        }
LABEL_13:
        if ( ++v15 >= entities.m_Size )
          goto LABEL_22;
      }
      v19 = 0;
      if ( pAttacker->m_bIsIllusion.m_Value )
      {
LABEL_11:
        if ( Particle != -1 )
        {
          v21 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v21, Particle, v16++, v19, 5, "attach_hitloc", vec3_invalid, 1);
        }
        goto LABEL_13;
      }
LABEL_16:
      v24 = ApplyDamage(pAttacker, v19, pInflictor, fDamage, 1, 256);
      if ( (v19->m_iUnitType & 1) != 0 && !v19->m_bIsIllusion.m_Value )
        nHeroesKilled += (*(v19->_vptr_IHandleEntity + 408))(v19, v24) == 0;
      goto LABEL_11;
    }
    nHeroesKilled = 0;
LABEL_22:
    if ( Particle != -1 )
    {
      v26 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v26, Particle);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  return nHeroesKilled;
}


// Purge  (line 3359, @0x00000000027b0730, libserver.so)
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTABaseAbility::GetCaster, CDOTA_Buff::Destroy
// callers: CDOTA_Ability_SatyrTrickster_Purge::OnSpellStart, CDOTA_BaseNPC::Script_Purge, CDOTA_Ability_Juggernaut_BladeFury::OnSpellStart, CDOTA_Modifier_Puck_PhaseShift::OnCreated, CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::OnCreated, CDOTA_Modifier_Morphling_Hybrid_Hide::OnCreated, CDOTA_Modifier_Razor_UnstableCurrent::OnAbilityExecuted, CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart, CDOTA_Modifier_Tidehunter_KrakenShell::OnTakeDamage, CDOTA_Ability_Ursa_Enrage::OnSpellStart, CDOTA_Ability_Life_Stealer_Assimilate::OnSpellStart, CDOTA_Ability_Invoker_Tornado::OnProjectileHit (38 total)
int __fastcall Purge(CDOTA_BaseNPC *pTarget, CDOTABaseAbility *pPurgeAbility, int nPurgeFlags)
{
  int v3; // ebx
  char v4; // r13
  int v5; // r14d
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v8; // r15
  CDOTA_BaseNPC *Caster; // rax
  int v11; // [rsp+8h] [rbp-48h]
  int v12; // [rsp+Ch] [rbp-44h]
  int v13; // [rsp+10h] [rbp-40h]
  int v14; // [rsp+14h] [rbp-3Ch]

  v3 = pTarget->m_ModifierManager.m_bufflist.m_Size - 1;
  if ( v3 < 0 )
    return 0;
  v4 = nPurgeFlags;
  v5 = 0;
  p_m_ModifierManager = &pTarget->m_ModifierManager;
  v13 = nPurgeFlags & 0x20;
  v11 = nPurgeFlags & 8;
  v12 = nPurgeFlags & 4;
  v14 = nPurgeFlags & 2;
  do
  {
    BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v3, 0);
    v8 = BuffByIndex;
    if ( BuffByIndex != 0
      && (*(BuffByIndex + 138) & 4) == 0
      && (*(BuffByIndex->_vptr_CDOTA_Buff + 23))(BuffByIndex) == 0
      && ((*(v8->_vptr_CDOTA_Buff + 14))(v8) != 0 || (v4 & 0x10) != 0 && (*(v8->_vptr_CDOTA_Buff + 15))(v8) != 0)
      && ((*(v8->_vptr_CDOTA_Buff + 12))(v8) != 0 || v14 != 0)
      && ((*(v8->_vptr_CDOTA_Buff + 12))(v8) == 0 || v12 != 0)
      && (v13 == 0 || v8->m_iCreationFrame == gpGlobals->framecount)
      && ((*(v8->_vptr_CDOTA_Buff + 16))(v8) == 0 || v11 != 0) )
    {
      Caster = 0;
      if ( pPurgeAbility != 0 )
        Caster = CDOTABaseAbility::GetCaster(pPurgeAbility);
      ++v5;
      CDOTA_Buff::Destroy(v8, 1, Caster, pPurgeAbility);
    }
    --v3;
  }
  while ( v3 != -1 );
  return v5;
}


// MinimapEvent  (line 3406, @0x00000000027c7aa0, libserver.so)  // inlines: CDOTAUserMsg_MinimapEvent_t, CEntityHandle, CHandle, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_MinimapEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>, GetEHandle, GetEntryIndex, GetGlobalDOTATeam, GetSerialNumber, PostEvent<CDOTAUserMsg_MinimapEvent_t>, SendUserMessage<CDOTAUserMsg_MinimapEvent_t>, Set, set_duration, set_entity_handle, set_event_type, set_has_duration, set_has_event_type, set_x, set_y, ~CDOTAUserMsg_MinimapEvent_t, ~CNetMessagePB, ~CTeamRecipientFilter, ~CUserMessagePB
// calls: CTeamRecipientFilter::CTeamRecipientFilter, GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam, CDOTAUserMsg_MinimapEvent::CDOTAUserMsg_MinimapEvent, Server_EHandleToInt, CDOTAUserMsg_MinimapEvent::~CDOTAUserMsg_MinimapEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Modifier_Radar_Thinker::OnIntervalThink, CDOTA_Tutorial::AddTaskLocation, CDOTA_Tutorial::AddCameraTaskLocation, CDOTA_Tutorial::UpdateTutorialState, CDOTA_Tutorial::ClearAllTasks, Script_MinimapEvent, CDOTA_BaseNPC_Building::OnTakeDamage_Alive, CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_Ability_Furion_Teleportation::OnAbilityPhaseInterrupted, CDOTA_Ability_Furion_Teleportation::OnAbilityPhaseStart, CDOTA_Ability_AbyssalUnderlord_DarkRift::OnSpellStart, CDOTA_Ability_Wisp_Relocate::OnSpellStart (16 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>(bool)::s_hEvent
void __fastcall MinimapEvent(
        int iTeam,
        CDOTA_BaseNPC *pEventEntity,
        int iX,
        int iY,
        int iEventType,
        int iEventDuration)
{
  CTeam *GlobalTeam; // rax
  int v10; // ecx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // si
  __int64 v13; // r14
  IGameEventSystem *v14; // r13
  void (__fastcall *v15)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, _QWORD *, __int64); // r15
  int iEventTypeb; // [rsp+Ch] [rbp-1B4h]
  EHANDLE hIn; // [rsp+10h] [rbp-1B0h] BYREF
  _QWORD v20[2]; // [rsp+20h] [rbp-1A0h] BYREF
  int v21; // [rsp+30h] [rbp-190h]
  int v22; // [rsp+38h] [rbp-188h]
  uint32 v23; // [rsp+3Ch] [rbp-184h]
  int v24; // [rsp+40h] [rbp-180h]
  int v25; // [rsp+44h] [rbp-17Ch]
  int v26; // [rsp+48h] [rbp-178h]
  CTeamRecipientFilter filterbroadcast; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v28; // [rsp+188h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  CTeamRecipientFilter::CTeamRecipientFilter(&filterbroadcast, iTeam, 0);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filterbroadcast, GlobalTeam);
  CDOTAUserMsg_MinimapEvent::CDOTAUserMsg_MinimapEvent(v20);
  v10 = v21;
  hIn.m_Index = -1;
  v20[0] = off_42B1330;
  v21 |= 1u;
  v22 = iEventType;
  if ( pEventEntity != 0 )
  {
    m_pEntity = pEventEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hIn.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
    }
  }
  iEventTypeb = v10;
  v23 = Server_EHandleToInt(&hIn);
  v24 = iX / 4;
  v13 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>(bool)::s_hEvent;
  v21 = iEventTypeb | 0x1F;
  v25 = iY / 4;
  v26 = iEventDuration;
  v14 = g_pGameEventSystem;
  v15 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>(bool)::s_hEvent);
  v15(v14, 0, 0, &filterbroadcast, v13, v20, 48);
  v20[0] = &off_42B11B0;
  CDOTAUserMsg_MinimapEvent::~CDOTAUserMsg_MinimapEvent(v20);
  filterbroadcast._vptr_IRecipientFilter = &off_3FF4590;
  CRecipientFilter::~CRecipientFilter(&filterbroadcast);
}


// MinimapEventLocal  (line 3420, @0x00000000027c76c0, libserver.so)  // inlines: CDOTAUserMsg_MinimapEvent_t, CEntityHandle, CHandle, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_MinimapEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>, Get, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, PostEvent<CDOTAUserMsg_MinimapEvent_t>, SendUserMessage<CDOTAUserMsg_MinimapEvent_t>, Set, ToDOTAPlayer, set_duration, set_entity_handle, set_event_type, set_has_duration, set_has_event_type, set_x, set_y, ~CDOTAUserMsg_MinimapEvent_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CDOTAUserMsg_MinimapEvent::CDOTAUserMsg_MinimapEvent, Server_EHandleToInt, CDOTAUserMsg_MinimapEvent::~CDOTAUserMsg_MinimapEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::PurchaseItems
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>(bool)::s_hEvent
void __fastcall MinimapEventLocal(CDOTA_BaseNPC *pEventEntity, int iX, int iY, int iEventType, int iEventDuration)
{
  uint32 m_Index; // ecx
  uint32 v10; // esi
  unsigned __int16 v11; // dx
  int v12; // r8d
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  unsigned __int16 v16; // dx
  int v17; // ecx
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  const CEntityInstance *m_pInstance; // r14
  int v22; // ecx
  CEntityIdentity *m_pEntity; // rax
  __int16 v24; // si
  __int64 v25; // r12
  IGameEventSystem *v26; // rbx
  void (__fastcall *v27)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r13
  int iEventTypeb; // [rsp+1Ch] [rbp-1B4h]
  EHANDLE hIn; // [rsp+20h] [rbp-1B0h] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-1A0h] BYREF
  int v32; // [rsp+40h] [rbp-190h]
  int v33; // [rsp+48h] [rbp-188h]
  uint32 v34; // [rsp+4Ch] [rbp-184h]
  int v35; // [rsp+50h] [rbp-180h]
  int v36; // [rsp+54h] [rbp-17Ch]
  int v37; // [rsp+58h] [rbp-178h]
  CSingleUserRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v39; // [rsp+198h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  if ( pEventEntity != 0 )
  {
    m_Index = pEventEntity->m_hOwnerEntity.m_Value.m_Index;
    v10 = m_Index >> 15;
    if ( m_Index == -1 )
    {
      v11 = 0x7FFF;
      v12 = 0x7FFF;
    }
    else
    {
      v11 = pEventEntity->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v12 = v11;
    }
    v13 = (v10 << 15) | v11 & 0x7FFF;
    LODWORD(v31[0]) = v13;
    if ( (v13 + 2) > 1 )
    {
      v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
      if ( v14 != 0 )
      {
        v15 = &v14[v12 & 0x1FF];
        if ( v15 != 0 && v13 == v15->m_EHandle.m_Index && v15->m_pInstance != 0 )
        {
          if ( m_Index == -1 )
          {
            v16 = 0x7FFF;
            v17 = 0x7FFF;
          }
          else
          {
            v16 = pEventEntity->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
            v17 = v16;
          }
          v18 = (v10 << 15) | v16 & 0x7FFF;
          LODWORD(v31[0]) = v18;
          if ( (v18 + 2) > 1 )
          {
            v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9];
            if ( v19 != 0 )
            {
              v20 = &v19[v17 & 0x1FF];
              if ( v20 != 0 && v18 == v20->m_EHandle.m_Index )
              {
                m_pInstance = v20->m_pInstance;
                if ( v20->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v20->m_pInstance) != 0 )
                {
                  CRecipientFilter::CRecipientFilter(&filter);
                  filter._vptr_IRecipientFilter = &off_3FCB0D0;
                  CRecipientFilter::AddRecipient(&filter, m_pInstance);
                  CDOTAUserMsg_MinimapEvent::CDOTAUserMsg_MinimapEvent(v31);
                  v22 = v32;
                  hIn.m_Index = -1;
                  v31[0] = off_42B1330;
                  v32 |= 1u;
                  v33 = iEventType;
                  m_pEntity = pEventEntity->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v24 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    hIn.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                | v24 & 0x7FFF;
                  }
                  iEventTypeb = v22;
                  v34 = Server_EHandleToInt(&hIn);
                  v37 = iEventDuration;
                  v35 = iX / 4;
                  v25 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>(bool)::s_hEvent;
                  v32 = iEventTypeb | 0x1F;
                  v36 = iY / 4;
                  v26 = g_pGameEventSystem;
                  v27 = *(*g_pGameEventSystem + 128LL);
                  (*(*g_pNetworkMessages + 96LL))(
                    g_pNetworkMessages,
                    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MinimapEvent_t>(bool)::s_hEvent);
                  v27(v26, 0, 0, &filter, v25, v31, 48);
                  v31[0] = &off_42B11B0;
                  CDOTAUserMsg_MinimapEvent::~CDOTAUserMsg_MinimapEvent(v31);
                  filter._vptr_IRecipientFilter = &off_3FCB0D0;
                  CRecipientFilter::~CRecipientFilter(&filter);
                }
              }
            }
          }
        }
      }
    }
  }
}


// DOTA_EmitSoundLocationWithCaster  (line 3470, @0x00000000027b38e0, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityIndex, CUtlMemory, CUtlVector, CUtlVectorBase, CanBeSeenByTeam, EmitSound_t, GetGlobalDOTATeam, Purge, RemoveAll, SoundEventGuid_t, ~CBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CDOTA_BaseNPC::FindReplacementSound, CBaseModelEntity::CanBeSeenByTeam, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CDOTAFogOfWarSystem::IsLocationVisible, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CUtlMemory<Vector, int>::Purge, DOTA_EmitSoundLocation, __stack_chk_fail (14 total)
// callers: Script_EmitSoundLocationWithCaster, CDOTA_Modifier_Lina_LightStrikeArray_Thinker::OnIntervalThink, CDOTA_Ability_Bloodseeker_Bloodbath::OnSpellStart, CDOTA_Ability_CrystalMaiden_CrystalNova::OnSpellStart, CDOTA_Ability_Nevermore_Shadowraze::OnSpellStart, CDOTA_Modifier_Kunkka_Torrent_Thinker::OnIntervalThink, CDOTA_Ability_Earthshaker_Fissure::OnSpellStart, CDOTA_Ability_ShadowShaman_MassSerpentWard::OnSpellStart, CDOTA_Ability_Zuus_LightningBolt::CastLightningBolt, CDOTA_Ability_Enigma_BlackHole::OnSpellStart, CDOTA_Modifier_Pugna_NetherBlast_Thinker::OnIntervalThink, CDOTA_Ability_Sniper_Shrapnel::OnSpellStart (37 total)
SndOpEventGuid_t __fastcall DOTA_EmitSoundLocationWithCaster(
        const Vector *const vOrigin,
        const char *pszSoundName,
        CDOTA_BaseNPC *pCaster)
{
  int v6; // ebx
  SndOpEventGuid_t v7; // rbx
  CTeam *GlobalTeam; // rax
  EmitSound_t ep; // [rsp+0h] [rbp-1D0h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+198h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( pCaster == 0 )
    return DOTA_EmitSoundLocation(vOrigin, pszSoundName, 1);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  ep.m_bEmitCloseCaption = 1;
  ep.m_flVolume = 1.0;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  ep.m_nFlags = 0;
  ep.m_nPitch = 100;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  ep.m_pSoundName = CDOTA_BaseNPC::FindReplacementSound(pCaster, pszSoundName);
  v6 = 2;
  ep.m_pOrigin = vOrigin;
  do
  {
    if ( !CBaseModelEntity::CanBeSeenByTeam(pCaster, v6)
      && !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, v6, vOrigin, 0.0) )
    {
      GlobalTeam = GetGlobalTeam(v6);
      CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
    }
    ++v6;
  }
  while ( v6 != 4 );
  v7 = CBaseEntity::EmitSound(&filter, 0, &ep);
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  return v7;
}


// DOTA_EmitSoundLocation  (line 3497, @0x00000000027b36b0, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityIndex, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, GetGlobalDOTATeam, Purge, RemoveAll, SoundEventGuid_t, ~CBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CDOTAFogOfWarSystem::IsLocationVisible, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformAction_FireSound, CDOTA_Ability_BlackDragon_Fireball::OnSpellStart, DOTA_EmitSoundLocationWithCaster, CDOTA_Ability_AncientApparition_IceBlast::OnProjectileHit_ExtraData, CDOTA_Ability_AntiMage_Blink::OnSpellStart, CDOTA_Ability_Kunkka_GhostShip::OnSpellStart, CDOTA_Ability_Puck_IllusoryOrb::OnSpellStart, CDOTA_Ability_Kunkka_GhostShip::OnProjectileHit_ExtraData, CDOTA_Modifier_SandKing_SandStorm::OnCreated, CDOTA_Ability_Earthshaker_Fissure::OnSpellStart, CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnSpellStart, CDOTA_Modifier_Tiny_Toss::UpdateVerticalMotion (45 total)
SndOpEventGuid_t __fastcall DOTA_EmitSoundLocation(
        const Vector *const vOrigin,
        const char *pszSoundName,
        bool bVisible)
{
  int i; // ebx
  SndOpEventGuid_t v7; // rbx
  CTeam *GlobalTeam; // rax
  EmitSound_t ep; // [rsp+0h] [rbp-1D0h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+198h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  ep.m_flVolume = 1.0;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  ep.m_nFlags = 0;
  ep.m_nPitch = 100;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  ep.m_pSoundName = pszSoundName;
  ep.m_pOrigin = vOrigin;
  if ( bVisible )
  {
    for ( i = 2; i != 4; ++i )
    {
      if ( !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, i, vOrigin, 0.0) )
      {
        GlobalTeam = GetGlobalTeam(i);
        CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
      }
    }
  }
  v7 = CBaseEntity::EmitSound(&filter, 0, &ep);
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  return v7;
}


// DOTA_EmitSound  (line 3522, @0x00000000027b08c0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAPVSFilter, CEntityHandle, Get, GetEntryIndex, GetGlobalDOTATeam, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTAPlayer, ~CBroadcastRecipientFilter, ~CDOTAPVSFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CBaseEntity::GetAbsOrigin, CDOTAPVSFilter::AddRecipientsByDOTAPVS, CBaseModelEntity::CanBeSeenByTeam, CEntityHandle::GetHandleEntity, CDOTA_BaseNPC::UnitEmitSound, CRecipientFilter::~CRecipientFilter, GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam, CRecipientFilter::RemoveRecipientsByTeam, CBaseEntity::GetTeam (18 total)
// callers: CDOTA_ActionRunner::PerformAction_AnimationAttack, CDOTA_ActionRunner::PerformAction_Blink, CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart, CDOTA_Ability_Creature_Fire_Breath::OnSpellStart, CDOTA_Item_GreaterClarity::OnSpellStart, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, CDOTA_Ability_CentaurKhan_WarStomp::OnAbilityPhaseStart, CDOTA_Ability_Spawnlord_Master_Stomp::OnAbilityPhaseStart, CDOTA_Ability_PolarFurbolgUrsaWarrior_ThunderClap::OnAbilityPhaseStart, CDOTA_Ability_HarpyStorm_ChainLightning::OnSpellStart, CDOTA_Ability_SatyrHellcaller_Shockwave::OnProjectileHit, CDOTA_Ability_EnragedWildkin_Tornado::OnSpellStart (385 total)
SndOpEventGuid_t __fastcall DOTA_EmitSound(int iFlags, const char *pszSoundName, CDOTA_BaseNPC *pUnit)
{
  char v5; // r12
  unsigned __int16 v6; // dx
  int v7; // esi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  unsigned __int16 v11; // cx
  int v12; // edi
  uint32 v13; // eax
  CEntityInstance *v14; // rdx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  int v17; // ecx
  unsigned __int16 v18; // dx
  int v19; // edi
  int v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CTeam *GlobalTeam; // rax
  CTeam *v24; // rax
  CTeam *v25; // rax
  CTeam *v26; // rax
  CTeam *v27; // rax
  CTeam *Team; // rax
  CTeam *v29; // rax
  CTeam *v30; // rax
  CTeam *v31; // rax
  IHandleEntity *HandleEntity; // rax
  IHandleEntity *v33; // rax
  const CEntityInstance *m_pInstance; // r12
  CRecipientFilter *pFilter; // [rsp+0h] [rbp-2D0h]
  const Vector *iTeamb; // [rsp+8h] [rbp-2C8h]
  int iTeam; // [rsp+8h] [rbp-2C8h]
  SndOpEventGuid_t iTeamc; // [rsp+8h] [rbp-2C8h]
  const CEntityInstance *iTeama; // [rsp+8h] [rbp-2C8h]
  CBroadcastRecipientFilter filterbroadcast; // [rsp+20h] [rbp-2B0h] BYREF
  CDOTAPVSFilter filternearby; // [rsp+160h] [rbp-170h] BYREF
  unsigned __int64 v42; // [rsp+298h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  if ( pszSoundName == 0 || pUnit == 0 )
    return 0xFFFFFFFF00000000LL;
  v5 = iFlags;
  CRecipientFilter::CRecipientFilter(&filterbroadcast);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterbroadcast);
  iTeamb = CBaseEntity::GetAbsOrigin(pUnit);
  CRecipientFilter::CRecipientFilter(&filternearby);
  filternearby._vptr_IRecipientFilter = &off_42B2CB0;
  CDOTAPVSFilter::AddRecipientsByDOTAPVS(&filternearby, iTeamb);
  if ( (v5 & 2) != 0 )
  {
    if ( (v5 & 4) != 0 )
    {
      Team = CBaseEntity::GetTeam(pUnit);
      CRecipientFilter::RemoveRecipientsNotOnTeam(&filternearby, Team);
      v29 = CBaseEntity::GetTeam(pUnit);
      CRecipientFilter::AddRecipientsByTeam(&filternearby, v29);
    }
    else if ( (v5 & 0x20) != 0 )
    {
      CRecipientFilter::AddAllPlayers(&filternearby);
      v30 = CBaseEntity::GetTeam(pUnit);
      CRecipientFilter::RemoveRecipientsByTeam(&filternearby, v30);
    }
    GlobalTeam = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filternearby, GlobalTeam);
    pFilter = &filternearby;
    goto LABEL_9;
  }
  if ( (v5 & 4) != 0 )
  {
    v25 = CBaseEntity::GetTeam(pUnit);
    CRecipientFilter::RemoveRecipientsNotOnTeam(&filterbroadcast, v25);
    v26 = CBaseEntity::GetTeam(pUnit);
    CRecipientFilter::AddRecipientsByTeam(&filterbroadcast, v26);
  }
  else
  {
    if ( (v5 & 0x20) == 0 )
    {
      if ( (v5 & 1) != 0 )
      {
        CRecipientFilter::RemoveAllRecipients(&filterbroadcast);
        HandleEntity = CEntityHandle::GetHandleEntity(&pUnit->m_hOwnerEntity.m_Value);
        iTeama = HandleEntity;
        if ( HandleEntity != 0
          && ((*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0
           || (v33 = CEntityHandle::GetHandleEntity(&pUnit->m_hOwnerEntity.m_Value)) != 0
           && (iTeama = CEntityHandle::GetHandleEntity(&v33[67]._vptr_IHandleEntity + 1)) != 0
           && (*(iTeama->_vptr_IHandleEntity + 140))(iTeama) != 0) )
        {
          CRecipientFilter::AddRecipient(&filterbroadcast, iTeama);
        }
      }
      goto LABEL_8;
    }
    CRecipientFilter::AddAllPlayers(&filterbroadcast);
    v31 = CBaseEntity::GetTeam(pUnit);
    CRecipientFilter::RemoveRecipientsByTeam(&filterbroadcast, v31);
  }
  v27 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filterbroadcast, v27);
LABEL_8:
  pFilter = &filterbroadcast;
LABEL_9:
  if ( (v5 & 8) != 0 )
  {
    for ( iTeam = 2; iTeam != 4; ++iTeam )
    {
      if ( !CBaseModelEntity::CanBeSeenByTeam(pUnit, iTeam) )
      {
        v24 = GetGlobalTeam(iTeam);
        CRecipientFilter::RemoveRecipientsByTeam(pFilter, v24);
      }
    }
  }
  if ( (v5 & 0x10) != 0 )
  {
    if ( pUnit->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = pUnit->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    v8 = (pUnit->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
    if ( v8 + 2 > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v10->m_pInstance) != 0 )
            goto LABEL_55;
        }
      }
    }
    if ( CEntityHandle::GetHandleEntity(&pUnit->m_hOwnerEntity.m_Value) != 0 )
    {
      if ( pUnit->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v11 = 0x7FFF;
        v12 = 0x7FFF;
      }
      else
      {
        v11 = pUnit->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v12 = v11;
      }
      v13 = (pUnit->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
      v14 = 0;
      if ( v13 + 2 > 1 )
      {
        v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
        if ( v15 != 0 )
        {
          v16 = &v15[v12 & 0x1FF];
          if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
            v14 = v16->m_pInstance;
        }
      }
      v17 = HIDWORD(v14[11].m_pEntity) >> 15;
      if ( HIDWORD(v14[11].m_pEntity) == -1 )
      {
        v18 = 0x7FFF;
        v19 = 0x7FFF;
      }
      else
      {
        v18 = WORD2(v14[11].m_pEntity) & 0x7FFF;
        v19 = v18;
      }
      v20 = (v17 << 15) | v18 & 0x7FFF;
      if ( (v20 + 2) > 1 )
      {
        v21 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v19 >> 9];
        if ( v21 != 0 )
        {
          v22 = &v21[v19 & 0x1FF];
          if ( v22 != 0 && v20 == v22->m_EHandle.m_Index )
          {
            m_pInstance = v22->m_pInstance;
            if ( v22->m_pInstance != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 140))(v22->m_pInstance, g_pEntitySystem) != 0 )
            {
LABEL_55:
              CRecipientFilter::RemoveRecipient(&filterbroadcast, m_pInstance);
            }
          }
        }
      }
    }
  }
  iTeamc = CDOTA_BaseNPC::UnitEmitSound(pUnit, pszSoundName, 0.0, 0, pFilter);
  filternearby._vptr_IRecipientFilter = &off_42B2CB0;
  CRecipientFilter::~CRecipientFilter(&filternearby);
  filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterbroadcast);
  return iTeamc;
}


// RollPercentage  (line 3628, @0x00000000027a7410, libserver.so)
// calls: RandomInt
// callers: DamageImpact, CDOTA_BaseNPC_Creature::Event_Killed, CDOTA_Ability_Holdout_Omnislash::OnProjectileHit, CDOTA_Modifier_Nian_GreaterBash::OnAttackLanded, CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierPreAttack_CriticalStrike, CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnIntervalThink, CDOTA_Modifier_Item_Javelin::GetModifierProcAttack_BonusDamage_Magical
bool __fastcall RollPercentage(int iPercentage)
{
  return RandomInt(1, 100) <= iPercentage;
}


// SortHeroesAlphabetical  (line 3633, @0x00000000027b0ed0, libserver.so)
// calls: wcscoll
int __fastcall SortHeroesAlphabetical(const herolist_sort_t *a, const herolist_sort_t *b)
{
  int v2; // eax
  int v3; // edx

  v2 = wcscoll(a->pwszHeroName, b->pwszHeroName);
  v3 = 1;
  if ( v2 != 0 )
    return v2;
  return v3;
}


// SortHeroesAlphabetical  (line 3642, @0x00000000027b0ef0, libserver.so)
// calls: strcoll
int __fastcall SortHeroesAlphabetical(const herolist_sort_ascii_t *a, const herolist_sort_ascii_t *b)
{
  int v2; // eax
  int v3; // edx

  v2 = strcoll(a->pszHeroName, b->pszHeroName);
  v3 = 1;
  if ( v2 != 0 )
    return v2;
  return v3;
}


// RollPseudoRandomPercentage  (line 3656, @0x00000000027b0f10, libserver.so)  // inlines: GetFloat, RollPercentage
// calls: CDOTA_BaseNPC::GetPseudoRandomNode, RandomFloat, RandomInt, CDOTA_BaseNPC::AddNewPseudoRandomNode
// callers: CDOTA_ActionRunner::PerformAction_Random, CDOTA_Modifier_GiantWolf_CriticalStrike::GetModifierPreAttack_CriticalStrike, CDOTA_Modifier_AlphaWolf_CriticalStrike::GetModifierPreAttack_CriticalStrike, CDOTA_Modifier_Special_Bonus_20_Bash::OnAttackLanded, DamageImpact, CDOTA_Modifier_Juggernaut_BladeDance::GetModifierPreAttack_CriticalStrike, CDOTA_Modifier_Holdout_BladeFury::OnIntervalThink, CDOTA_Modifier_Axe_CounterHelix::OnAttackLanded, CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked, CDOTA_Modifier_SkeletonKing_MortalStrike::GetModifierPreAttack_CriticalStrike, CDOTA_Modifier_Tiny_CraggyExterior::OnAttackLanded, CDOTA_Modifier_FacelessVoid_Backtrack::GetModifierAvoidDamage (44 total)
bool __fastcall RollPseudoRandomPercentage(unsigned int nPercentage, DotaPseudoRandomType type, CDOTA_BaseNPC *pUnit)
{
  bool result; // al
  CDOTAPseudoRandom *PseudoRandomNode; // r13
  float v7; // xmm0_4
  float m_flCurrentChance; // xmm1_4

  if ( type == DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_NONE )
    return nPercentage >= RandomInt(1, 100);
  if ( pUnit == 0 )
    return 0;
  if ( nPercentage == 100 )
    return 1;
  result = 0;
  if ( nPercentage != 0 )
  {
    PseudoRandomNode = CDOTA_BaseNPC::GetPseudoRandomNode(pUnit, type);
    if ( PseudoRandomNode == 0 )
    {
      PseudoRandomNode = CDOTA_BaseNPC::AddNewPseudoRandomNode(pUnit, type);
      PseudoRandomNode->m_flCurrentChance = nPercentage;
    }
    v7 = RandomFloat(0.0, 100.0);
    m_flCurrentChance = PseudoRandomNode->m_flCurrentChance;
    if ( PseudoRandomNode->m_flCurrentChance <= v7 )
    {
      PseudoRandomNode->m_flCurrentChance = (nPercentage * dota_random_strength.m_pParent->m_Value.m_fValue)
                                          + m_flCurrentChance;
      return 0;
    }
    else
    {
      PseudoRandomNode->m_flCurrentChance = m_flCurrentChance
                                          - ((100.0 - nPercentage) * dota_random_strength.m_pParent->m_Value.m_fValue);
      return 1;
    }
  }
  return result;
}


// DOTA_SaveEntityDataDesc  (line 3702, @0x00000000027b1050, libserver.so)  // inlines: String, ToCStr
// calls: ExtractKeyValueFromField, KeyValues::SetString, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// callers: CDOTABaseAbility::OnSaveState, CDOTA_BaseNPC::OnSaveState
// strings: "DOTA_SaveEntityDataDesc:  field %s::%s marked FTYPEDESC_SAVE, but not a valid KeyValue fi
void __fastcall DOTA_SaveEntityDataDesc(CBaseEntity *pEntity, KeyValues *pKey)
{
  __int64 v3; // r15
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r13
  const char *v8; // rdx
  const char **v9; // rax
  char szValue[264]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v12; // [rsp+118h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  v3 = (*(pEntity->_vptr_IHandleEntity + 34))(pEntity);
  if ( v3 != 0 )
  {
    while ( 1 )
    {
      v4 = *(v3 + 8);
      if ( v4 > 0 )
        break;
LABEL_12:
      v3 = *(v3 + 24);
      if ( v3 == 0 )
        return;
    }
    v5 = 0;
    v6 = 104 * ((v4 - 1) + 1LL);
    while ( 1 )
    {
      v7 = *v3 + v5;
      if ( v7 == 0 || (*(v7 + 22) & 2) == 0 )
        goto LABEL_4;
      if ( !ExtractKeyValueFromField(pEntity, *(v3 + 16), (*v3 + v5), szValue, 260) )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
          LoggingSystem_Log(
            LOG_SERVER,
            0,
            "DOTA_SaveEntityDataDesc:  field %s::%s marked FTYPEDESC_SAVE, but not a valid KeyValue field\n",
            *(v3 + 16),
            *(v7 + 8));
        goto LABEL_4;
      }
      if ( *v7 == 2 )
      {
        v8 = "";
        v9 = (pEntity + *(v7 + 16));
        if ( *v9 != 0 )
          v8 = *v9;
        v5 += 104;
        KeyValues::SetString(pKey, *(v7 + 8), v8);
        if ( v5 == v6 )
          goto LABEL_12;
      }
      else
      {
        KeyValues::SetString(pKey, *(v7 + 8), szValue);
LABEL_4:
        v5 += 104;
        if ( v5 == v6 )
          goto LABEL_12;
      }
    }
  }
}


// DOTA_LoadEntityDataDesc  (line 3733, @0x00000000027b11e0, libserver.so)
// calls: KeyValues::GetString, ParseKeyvalue
// callers: CDOTABaseAbility::OnLoadState, CDOTA_BaseNPC::OnLoadState
void __fastcall DOTA_LoadEntityDataDesc(CBaseEntity *pEntity, KeyValues *pKey)
{
  __int64 i; // r12
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r13
  const char *String; // rax

  for ( i = (*(pEntity->_vptr_IHandleEntity + 34))(pEntity); i != 0; i = *(i + 24) )
  {
    v4 = *(i + 8);
    if ( v4 > 0 )
    {
      v5 = 0;
      v6 = 104 * ((v4 - 1) + 1LL);
      do
      {
        while ( 1 )
        {
          v7 = *i + v5;
          if ( v7 != 0 && (*(v7 + 22) & 2) != 0 )
            break;
          v5 += 104;
          if ( v5 == v6 )
            goto LABEL_8;
        }
        v5 += 104;
        String = KeyValues::GetString(pKey, *(v7 + 8), " ", 0, 0);
        ParseKeyvalue(pEntity, *i, *(i + 8), *(v7 + 8), String);
      }
      while ( v5 != v6 );
    }
LABEL_8:
    ;
  }
}


// CDOTA_UnitFilterCache::GameShutdown  (line 3755, @0x00000000027b4b00, libserver.so)
// calls: CGameEntitySystem::RemoveListenerEntity, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll
void __fastcall CDOTA_UnitFilterCache::GameShutdown(
        CDOTA_UnitFilterCache *const this,
        const EventGameShutdown_t *const msg)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_unitcategories; // r12
  __int64 v3; // rbx
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v4; // rdi

  m_unitcategories = this->m_unitcategories;
  v3 = 0;
  CGameEntitySystem::RemoveListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
  do
  {
    v4 = &m_unitcategories[v3++];
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(v4);
  }
  while ( v3 != 6 );
}


// CDOTA_UnitFilterCache::GameInit  (line 3766, @0x00000000027b4b50, libserver.so)
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CGameEntitySystem::AddListenerEntity
void __fastcall CDOTA_UnitFilterCache::GameInit(CDOTA_UnitFilterCache *const this, const EventGameInit_t *const msg)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_unitcategories; // r12
  __int64 i; // rbx
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v5; // rdi

  m_unitcategories = this->m_unitcategories;
  for ( i = 0; i != 6; ++i )
  {
    v5 = &m_unitcategories[i];
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(v5);
  }
  CGameEntitySystem::AddListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
}


// CDOTA_UnitFilterCache::OnEntitySpawned  (line 3778, @0x00000000027bb3a0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: CDOTA_UnitFilterCache::AddNewlyCreatedEntity
void __fastcall CDOTA_UnitFilterCache::OnEntitySpawned(
        CDOTA_UnitFilterCache *const this,
        CEntityInstance *pEntityInstance)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  EHANDLE hEntity; // [rsp+0h] [rbp-10h] BYREF

  hEntity.m_Index = -1;
  if ( pEntityInstance != 0 )
  {
    m_pEntity = pEntityInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hEntity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  CDOTA_UnitFilterCache::AddNewlyCreatedEntity(this, &hEntity);
}


// CDOTA_UnitFilterCache::AddNewlyCreatedEntity  (line 3788, @0x00000000027bb330, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_UnitFilterCache::AddEntity
// callers: CDOTA_UnitFilterCache::OnEntitySpawned
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_UnitFilterCache::AddNewlyCreatedEntity(CDOTA_UnitFilterCache *const this, _DWORD *hEntity)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *m_pInstance; // rsi

  if ( (*hEntity + 2) > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F]) != 0
    && (v3 = &v2[*hEntity & 0x1FF]) != 0
    && *hEntity == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    CDOTA_UnitFilterCache::AddEntity(this, m_pInstance);
  }
  else
  {
    CDOTA_UnitFilterCache::AddEntity(this, 0);
  }
}


// CDOTA_UnitFilterCache::GetUnitsInCategory  (line 3794, @0x00000000027b12b0, libserver.so)
const CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *__fastcall CDOTA_UnitFilterCache::GetUnitsInCategory(
        CDOTA_UnitFilterCache *const this,
        int iCategory)
{
  return &this->m_unitcategories[iCategory];
}


// CDOTA_UnitFilterCache::FrameUpdatePreEntityThink  (line 3801, @0x00000000027bb570, libserver.so)
// calls: CDOTA_UnitFilterCache::UpdateUnitsThisFrame
void __fastcall CDOTA_UnitFilterCache::FrameUpdatePreEntityThink(
        CDOTA_UnitFilterCache *const this,
        const EventServerPreEntityThink_t *const msg)
{
  CDOTA_UnitFilterCache::UpdateUnitsThisFrame(this);
}


// CDOTA_UnitFilterCache::UpdateUnitsThisFrame  (line 3807, @0x00000000027bb420, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Purge, RemoveAll, ToDOTABaseNPC, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, NextBotManager::CollectAllBots, CDOTA_UnitFilterCache::AddEntity, CUtlMemory<INextBot*, int>::Purge, CUtlVectorBase<INextBot*, CUtlMemory<INextBot*, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_UnitFilterCache::FrameUpdatePreEntityThink
void __fastcall CDOTA_UnitFilterCache::UpdateUnitsThisFrame(CDOTA_UnitFilterCache *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_unitcategories; // r12
  __int64 v3; // rbx
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v4; // rdi
  __int64 v5; // r12
  CDOTA_BaseNPC *v6; // rsi
  __int64 v7; // rax
  CUtlVectorFixedGrowableCompat<INextBot*,1024ul> botVector; // [rsp+0h] [rbp-2040h] BYREF
  unsigned __int64 v9; // [rsp+2018h] [rbp-28h]

  m_unitcategories = this->m_unitcategories;
  v3 = 0;
  v9 = __readfsqword(0x28u);
  do
  {
    v4 = (m_unitcategories + v3);
    v3 += 24;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(v4);
  }
  while ( v3 != 144 );
  botVector.m_Size = 0;
  botVector.m_Memory.m_nAllocationCount = 1024;
  botVector.m_Memory.m_nGrowSize = 0x80000000;
  botVector.m_Memory.m_pMemory = &botVector.m_FixedMemory;
  NextBotManager::CollectAllBots(&g_NextBotManager, &botVector);
  v5 = 0;
  LOBYTE(v3) = 0;
  if ( botVector.m_Size > 0 )
  {
    do
    {
      v7 = (*(botVector.m_Memory.m_pMemory[v5]->_vptr_INextBotEventResponder + 66))(botVector.m_Memory.m_pMemory[v5]);
      if ( v7 != 0 && *(v7 + 339) != 0 )
        v6 = v7;
      else
        v6 = 0;
      CDOTA_UnitFilterCache::AddEntity(this, v6);
      LODWORD(v3) = v3 + 1;
      ++v5;
    }
    while ( botVector.m_Size > v3 );
  }
  botVector.m_Size = 0;
  if ( (botVector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<INextBot *,int>::Purge(&botVector.m_Memory);
    if ( (botVector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<INextBot *,int>::Purge(&botVector.m_Memory);
  }
}


// CDOTA_UnitFilterCache::AddEntity  (line 3826, @0x00000000027bafc0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CDOTA_UnitFilterCache::AddNewlyCreatedEntity, CDOTA_UnitFilterCache::UpdateUnitsThisFrame
void __fastcall CDOTA_UnitFilterCache::AddEntity(CDOTA_UnitFilterCache *const this, CDOTA_BaseNPC *pNPC)
{
  uint32 m_iUnitType; // r12d
  CEntityIdentity *m_pEntity; // rax
  __int16 v6; // cx
  __int64 m_Size; // r14
  int v8; // eax
  CHandle<CBaseEntity> *v9; // rax
  CEntityIdentity *v10; // rax
  __int16 v11; // cx
  __int64 v12; // r14
  int v13; // eax
  CHandle<CBaseEntity> *v14; // rax
  CEntityIdentity *v15; // rax
  __int16 v16; // cx
  __int64 v17; // r14
  int v18; // eax
  CHandle<CBaseEntity> *v19; // rax
  CEntityIdentity *v20; // rax
  __int16 v21; // cx
  __int64 v22; // r14
  int v23; // eax
  CHandle<CBaseEntity> *v24; // rax
  CEntityIdentity *v25; // rax
  __int16 v26; // cx
  __int64 v27; // r12
  int v28; // eax
  CHandle<CBaseEntity> *v29; // rax
  int v30; // [rsp+0h] [rbp-30h]
  int v31; // [rsp+0h] [rbp-30h]
  int v32; // [rsp+0h] [rbp-30h]
  int v33; // [rsp+0h] [rbp-30h]
  int v34; // [rsp+0h] [rbp-30h]

  if ( pNPC != 0 )
  {
    m_iUnitType = pNPC->m_iUnitType;
    if ( (m_iUnitType & 3) != 0 )
    {
      m_pEntity = pNPC->m_pEntity;
      v30 = -1;
      if ( m_pEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v30 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
      }
      m_Size = this->m_unitcategories[0].m_Size;
      v8 = this->m_unitcategories[0].m_Size;
      if ( m_Size == this->m_unitcategories[0].m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_unitcategories[0].m_Memory, 1);
        v8 = this->m_unitcategories[0].m_Size;
      }
      this->m_unitcategories[0].m_Size = v8 + 1;
      v9 = &this->m_unitcategories[0].m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        v9->m_Index = v30;
    }
    if ( (m_iUnitType & 0x80u) != 0 )
    {
      v10 = pNPC->m_pEntity;
      v31 = -1;
      if ( v10 != 0 )
      {
        v11 = 0x7FFF;
        if ( v10->m_EHandle.m_Index != -1 )
          v11 = v10->m_EHandle.m_Index & 0x7FFF;
        v31 = (((v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1)) << 15) | v11 & 0x7FFF;
      }
      v12 = this->m_unitcategories[1].m_Size;
      v13 = this->m_unitcategories[1].m_Size;
      if ( v12 == this->m_unitcategories[1].m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_unitcategories[1].m_Memory, 1);
        v13 = this->m_unitcategories[1].m_Size;
      }
      this->m_unitcategories[1].m_Size = v13 + 1;
      v14 = &this->m_unitcategories[1].m_Memory.m_pMemory[v12];
      if ( v14 != 0 )
        v14->m_Index = v31;
    }
    if ( (m_iUnitType & 0x10) != 0 )
    {
      v15 = pNPC->m_pEntity;
      v32 = -1;
      if ( v15 != 0 )
      {
        v16 = 0x7FFF;
        if ( v15->m_EHandle.m_Index != -1 )
          v16 = v15->m_EHandle.m_Index & 0x7FFF;
        v32 = (((v15->m_EHandle.m_Index >> 15) - (v15->m_flags & 1)) << 15) | v16 & 0x7FFF;
      }
      v17 = this->m_unitcategories[2].m_Size;
      v18 = this->m_unitcategories[2].m_Size;
      if ( v17 == this->m_unitcategories[2].m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_unitcategories[2].m_Memory, 1);
        v18 = this->m_unitcategories[2].m_Size;
      }
      this->m_unitcategories[2].m_Size = v18 + 1;
      v19 = &this->m_unitcategories[2].m_Memory.m_pMemory[v17];
      if ( v19 != 0 )
        v19->m_Index = v32;
    }
    if ( (m_iUnitType & 0x100) != 0 )
    {
      v20 = pNPC->m_pEntity;
      v33 = -1;
      if ( v20 != 0 )
      {
        v21 = 0x7FFF;
        if ( v20->m_EHandle.m_Index != -1 )
          v21 = v20->m_EHandle.m_Index & 0x7FFF;
        v33 = (((v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1)) << 15) | v21 & 0x7FFF;
      }
      v22 = this->m_unitcategories[4].m_Size;
      v23 = this->m_unitcategories[4].m_Size;
      if ( v22 == this->m_unitcategories[4].m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_unitcategories[4].m_Memory, 1);
        v23 = this->m_unitcategories[4].m_Size;
      }
      this->m_unitcategories[4].m_Size = v23 + 1;
      v24 = &this->m_unitcategories[4].m_Memory.m_pMemory[v22];
      if ( v24 != 0 )
        v24->m_Index = v33;
    }
    if ( (m_iUnitType & 0x193) == 0 )
    {
      v25 = pNPC->m_pEntity;
      v34 = -1;
      if ( v25 != 0 )
      {
        v26 = 0x7FFF;
        if ( v25->m_EHandle.m_Index != -1 )
          v26 = v25->m_EHandle.m_Index & 0x7FFF;
        v34 = (((v25->m_EHandle.m_Index >> 15) - (v25->m_flags & 1)) << 15) | v26 & 0x7FFF;
      }
      v27 = this->m_unitcategories[5].m_Size;
      v28 = this->m_unitcategories[5].m_Size;
      if ( v27 == this->m_unitcategories[5].m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_unitcategories[5].m_Memory, 1);
        v28 = this->m_unitcategories[5].m_Size;
      }
      this->m_unitcategories[5].m_Size = v28 + 1;
      v29 = &this->m_unitcategories[5].m_Memory.m_pMemory[v27];
      if ( v29 != 0 )
        v29->m_Index = v34;
    }
  }
}


// CDOTA_Grinder::CDOTA_Grinder  (line 3856, @0x00000000027b12d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: _GLOBAL__sub_I__unity_dota_08.cpp
void __fastcall CDOTA_Grinder::CDOTA_Grinder(CDOTA_Grinder *const this)
{
  this->_vptr_IGameSystem = off_42B45D0;
  this->m_Buildings.m_Size = 0;
  this->m_Buildings.m_Memory.m_pMemory = 0;
  this->m_Buildings.m_Memory.m_nAllocationCount = 0;
  this->m_Buildings.m_Memory.m_nGrowSize = 0;
  this->m_nMode = CDOTA_Grinder::Mode::GRINDER_OFF;
}


// CDOTA_Grinder::StartHeroes  (line 3861, @0x00000000027b1310, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, GetAssignedHero, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, Instance, IsUsed, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: ConVar::SetValue, DOTACommander, CDOTA_Commander::GetUnusedBotName, CBaseEntity::ClearFlags, CBaseEntity::AddFlag, CDOTAGamerules::MakeRandomHeroSelection, HeroMaxLevel, Msg
// callers: dota_dev
// strings: "Failed to create Grinder Bot.\n"
void __fastcall CDOTA_Grinder::StartHeroes(
        CDOTA_Grinder *const this,
        CDOTAPlayer *pPlayer,
        int nStartIndex,
        int nEndIndex)
{
  float v4; // xmm0_4
  uint32 v6; // ecx
  unsigned __int16 v7; // dx
  int v8; // esi
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // rax
  __int64 (__fastcall *v13)(IVEngineServer2 *, const char *); // r15
  CDOTA_Commander *v14; // rax
  const char *UnusedBotName; // rax
  int v16; // eax
  __int64 v17; // rsi
  CGameEntitySystem *v18; // rdx
  CEntityIdentity *v19; // rcx
  __int64 v20; // rdx
  int (**vptr_IEntityResourceManifestBuilder)(...); // r12
  int v22; // eax
  unsigned __int16 v23; // cx
  int v24; // esi
  int v25; // eax
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CEntityInstance *v28; // rax

  v4 = 0.0;
  this->m_nMode = CDOTA_Grinder::Mode::GRINDER_HEROES;
  this->m_nNextHeroIndex = nStartIndex;
  this->m_nEndHeroIndex = nEndIndex;
  this->m_nNextAbilityIndex = 0x7FFFFFFF;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flNextTick = v4;
  this->m_pPlayer = pPlayer;
  v6 = pPlayer->m_hAssignedHero.m_Value.m_Index >> 15;
  if ( pPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v7 = 0x7FFF;
    v8 = 0x7FFF;
  }
  else
  {
    v7 = pPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v8 = v7;
  }
  v9 = (v6 << 15) | v7 & 0x7FFF;
  if ( (v9 + 2) <= 1
    || (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) == 0
    || (v11 = &v10[v8 & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (m_pInstance = v11->m_pInstance, v11->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    m_pInstance = 0;
  }
  this->m_pInitialHero = m_pInstance;
  ConVar::SetValue(&dota_bot_disable, 0);
  v13 = *(*engine + 376LL);
  v14 = DOTACommander();
  UnusedBotName = CDOTA_Commander::GetUnusedBotName(v14);
  v16 = v13(engine, UnusedBotName);
  v18 = g_pGameEntitySystem;
  if ( v16 <= 0x7FFE
    && (v19 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9]) != 0
    && (v20 = v16 & 0x1FF, v17 = 8 * v20, (v18 = &v19[v20]) != 0)
    && v16 == (*&v18->m_EntityList.m_Lock.gap0 & 0x7FFF)
    && (vptr_IEntityResourceManifestBuilder = v18->_vptr_IEntityResourceManifestBuilder,
        v18->_vptr_IEntityResourceManifestBuilder != 0)
    && (*(*vptr_IEntityResourceManifestBuilder + 140))(v18->_vptr_IEntityResourceManifestBuilder) != 0 )
  {
    CBaseEntity::ClearFlags(vptr_IEntityResourceManifestBuilder);
    CBaseEntity::AddFlag(vptr_IEntityResourceManifestBuilder, 384);
    (*(*vptr_IEntityResourceManifestBuilder + 70))(vptr_IEntityResourceManifestBuilder, 3);
    (*(*vptr_IEntityResourceManifestBuilder + 400))(vptr_IEntityResourceManifestBuilder, 1);
    v22 = (*(*vptr_IEntityResourceManifestBuilder + 393))(vptr_IEntityResourceManifestBuilder);
    CDOTAGamerules::MakeRandomHeroSelection(g_pGameRules, v22, 1, -1, 0);
    if ( *(vptr_IEntityResourceManifestBuilder + 1205) == -1 )
    {
      v23 = 0x7FFF;
      v24 = 0x7FFF;
    }
    else
    {
      v23 = *(vptr_IEntityResourceManifestBuilder + 2410) & 0x7FFF;
      v24 = v23;
    }
    v25 = (*(vptr_IEntityResourceManifestBuilder + 1205) >> 15 << 15) | v23 & 0x7FFF;
    if ( (v25 + 2) <= 1
      || (v26 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v24 >> 9]) == 0
      || (v27 = &v26[v24 & 0x1FF]) == 0
      || v25 != v27->m_EHandle.m_Index
      || (v28 = v27->m_pInstance, v27->m_pInstance == 0)
      || BYTE3(v28[7]._vptr_IHandleEntity) == 0
      || (v28[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    {
      v28 = 0;
    }
    this->m_pInitialHero = v28;
    HeroMaxLevel(vptr_IEntityResourceManifestBuilder);
  }
  else
  {
    Msg("Failed to create Grinder Bot.\n", v17, v18);
  }
}


// CDOTA_Grinder::StartBuildings  (line 3891, @0x00000000027bfae0, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlSymbolLarge, CopyConstruct<CEntityHandle>, DOTAGameRules, Element, GetEHandle, GetEntityName, GetEntryIndex, GetGameTime, GetSerialNumber, GrowMemory, NextEntByClass<CDOTA_BaseNPC_Building>, Set, entindex, operator=, operator[]
// calls: CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CEntityInstance::GetEntityIndex, CGameEntitySystem::NextEnt, __dynamic_cast, V_stricmp_fast, CUtlMemory<CEntityHandle, int>::Grow
// callers: dota_dev
// strings: "dota_grinder_snap_to_damage 1", "dota_creeps_no_spawning 1"
void __fastcall CDOTA_Grinder::StartBuildings(CDOTA_Grinder *const this, CDOTAPlayer *pPlayer, const char *pEntName)
{
  CBaseEntity *v3; // r15
  void (__fastcall *v6)(IVEngineServer2 *, _QWORD, const char *); // r13
  CEntityIndex v7; // eax
  void (__fastcall *v8)(IVEngineServer2 *, _QWORD, const char *); // r12
  CEntityIndex v9; // eax
  CGameEntitySystem *v10; // rbx
  CBaseEntity *Ent; // r14
  CBaseEntity *v12; // rax
  const char *m_pAsString; // rdi
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // si
  __int64 m_Size; // rbx
  int v17; // eax
  CEntityHandle *v18; // rax
  float v19; // xmm0_4
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-58h]
  int h; // [rsp+20h] [rbp-40h]

  v3 = 0;
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&this->m_Buildings);
  this->m_pPlayer = pPlayer;
  v6 = *(*engine + 288LL);
  v7.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
  v6(engine, v7.m_Data, "dota_grinder_snap_to_damage 1");
  v8 = *(*engine + 288LL);
  v9.m_Data = CEntityInstance::GetEntityIndex(this->m_pPlayer).m_Data;
  v8(engine, v9.m_Data, "dota_creeps_no_spawning 1");
  p_m_Memory = &this->m_Buildings.m_Memory;
  while ( 1 )
  {
    v10 = g_pGameEntitySystem;
    Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, v3);
    if ( Ent == 0 )
      break;
    while ( 1 )
    {
      v12 = __dynamic_cast(Ent, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Building, 0);
      v3 = v12;
      if ( v12 != 0 )
        break;
      Ent = CGameEntitySystem::NextEnt(v10, Ent);
      if ( Ent == 0 )
        goto LABEL_18;
    }
    if ( pEntName != 0 )
    {
      m_pAsString = v12->m_pEntity->m_name.u.m_pAsString;
      if ( m_pAsString == 0 )
        m_pAsString = "";
      if ( V_stricmp_fast(m_pAsString, pEntName) != 0 )
        continue;
    }
    m_pEntity = v3->m_pEntity;
    h = -1;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    m_Size = this->m_Buildings.m_Size;
    v17 = this->m_Buildings.m_Size;
    if ( m_Size == this->m_Buildings.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityHandle,int>::Grow(p_m_Memory, 1);
      v17 = this->m_Buildings.m_Size;
    }
    this->m_Buildings.m_Size = v17 + 1;
    v18 = &this->m_Buildings.m_Memory.m_pMemory[m_Size];
    if ( v18 != 0 )
      v18->m_Index = h;
  }
LABEL_18:
  v19 = 0.0;
  this->m_nMode = CDOTA_Grinder::Mode::GRINDER_BUILDINGS;
  this->m_nDamageLimit = 100;
  if ( g_pGameRules != 0 )
    v19 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flNextTick = v19;
}


// CDOTA_Grinder::NextBuilding  (line 3918, @0x00000000027b1660, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, FastRemove, GetEntityNameAsCStr, GetGameTime, String, Tail, ToDOTABaseNPC, ToDOTABuilding, operator[]
// calls: CGameEntitySystem::GetBaseEntity, Msg, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer
// callers: CDOTA_Grinder::FrameUpdateBuildings
// strings: "Grinder damaging: %s\n"
void __fastcall CDOTA_Grinder::NextBuilding(CDOTA_Grinder *const this)
{
  int m_Size; // eax
  CBaseEntity *BaseEntity; // rax
  const CBaseEntity *v4; // r12
  float v5; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  const Vector *AbsOrigin; // rax
  const Vector *v9; // rax
  CEntityHandle hEnt; // [rsp+0h] [rbp-30h] BYREF

  this->m_nDamageLimit = 100;
  m_Size = this->m_Buildings.m_Size;
  if ( m_Size > 0 )
  {
    this->m_Buildings.m_Size = m_Size - 1;
    if ( m_Size != 1 )
    {
      hEnt.m_Index = this->m_Buildings.m_Memory.m_pMemory[m_Size - 2].m_Index;
      BaseEntity = CGameEntitySystem::GetBaseEntity(g_pGameEntitySystem, &hEnt);
      v4 = BaseEntity;
      if ( BaseEntity != 0 && BaseEntity->m_bIsDOTANPC && (BaseEntity[2].m_hEffectEntity.m_Value.m_Index & 0x14) != 0 )
      {
        m_pEntity = BaseEntity->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_name.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_name.u.m_pAsString;
        Msg("Grinder damaging: %s\n", m_pAsString);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
        CDOTAFogOfWarSystem::AddTempViewer(
          &g_DOTAFogOfWarSystem,
          FoWViewerType_t::FOWVIEWERTYPE_ENDGAME,
          2,
          AbsOrigin,
          1500.0,
          180.0,
          0);
        v9 = CBaseEntity::GetAbsOrigin(v4);
        CDOTAFogOfWarSystem::AddTempViewer(
          &g_DOTAFogOfWarSystem,
          FoWViewerType_t::FOWVIEWERTYPE_ENDGAME,
          3,
          v9,
          1500.0,
          180.0,
          0);
      }
      v5 = 6.0;
      if ( g_pGameRules != 0 )
        v5 = *&g_pGameRules[18].m_szQuestName[20] + 6.0;
      this->m_flNextTick = v5;
    }
  }
}


// OnGrinderHeroSpawnCompletion  (line 3939, @0x00000000027b01b0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: __dynamic_cast, HeroMaxLevel
void __fastcall OnGrinderHeroSpawnCompletion(CDOTA_BaseNPC *pEntity, const CEntityKeyValues *pKeyValues)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTAPlayer *v7; // rax

  if ( pEntity->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = pEntity->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (pEntity->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
      {
        v7 = __dynamic_cast(v6->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAPlayer, 0);
        if ( v7 != 0 )
          HeroMaxLevel(v7);
      }
    }
  }
}


// CDOTA_Grinder::FrameUpdateHeroes  (line 3948, @0x00000000027b1790, libserver.so)  // inlines: Bind, CDotaNPCSpawnerContext, CEntityHandle, CEntitySpawnerContext, CEntitySpawnerContextBase, CUtlDelegate, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, DOTAGameRules, FastDelegate2, GetAssignedHero, GetEHandle, GetEntityNameAsCStr, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, Set, SetCursorCastTarget, SetMementoFrom, String, ToDOTABaseNPC, ToDOTABaseNPCHero, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, operator CBaseEntity*, operator=, ~CDotaNPCSpawnerContext, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase
// calls: __stack_chk_fail, CDOTA_BaseNPC::GetAbilityCount, HeroRefresh, FindClearSpaceForUnitAroundEntity, CDOTA_BaseNPC::GetAbilityByIndex, Msg, CDOTA_BaseNPC::CastAbilityImmediately, DOTAGameManager, CDOTAGameManager::GetFirstHero, CDOTAGameManager::GetNextHero, CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo (20 total)
// callers: CDOTA_Grinder::FrameUpdatePreEntityThink
// strings: "Grinder: Playing ability: %s\n", "Grinder: Spawning hero: %s\n", "Grinder: Batch finished.  Reload map before continuing.\n"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnGrinderHeroSpawnCompletion(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall CDOTA_Grinder::FrameUpdateHeroes(CDOTA_Grinder *const this)
{
  CDOTAPlayer *m_pPlayer; // r13
  uint32 m_Index; // ecx
  uint32 v4; // esi
  unsigned __int16 v5; // dx
  int v6; // r8d
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *v10; // rax
  unsigned __int16 v11; // dx
  int v12; // ecx
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *m_pInstance; // r15
  int m_nNextAbilityIndex; // ebx
  int v18; // ebx
  int v19; // esi
  CDOTABaseAbility *AbilityByIndex; // r14
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  double v23; // xmm0_8
  CDOTA_BaseNPC_Hero *m_pInitialHero; // rax
  CEntityIdentity *v25; // rdx
  int v26; // eax
  __int16 v27; // cx
  int v28; // eax
  float v29; // xmm0_4
  int m_nNextHeroIndex; // r14d
  CDOTAGameManager *v31; // rax
  CDOTAGameManager *v32; // rax
  KeyValues *FirstHero; // rbx
  CDOTAGameManager *v34; // rax
  int v35; // eax
  bool v36; // zf
  int Health; // eax
  float v38; // xmm1_4
  const char *Name; // rax
  const char *v40; // rax
  float v41; // xmm0_4
  CTakeDamageInfo info; // [rsp+0h] [rbp-160h] BYREF
  CDotaNPCSpawnerContext ctx; // [rsp+90h] [rbp-D0h] BYREF
  unsigned __int64 v44; // [rsp+128h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  m_pPlayer = this->m_pPlayer;
  if ( m_pPlayer == 0 )
    goto LABEL_8;
  m_Index = m_pPlayer->m_hAssignedHero.m_Value.m_Index;
  v4 = m_Index >> 15;
  if ( m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = m_pPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  v7 = (v4 << 15) | v5 & 0x7FFF;
  LODWORD(info._vptr_CTakeDamageInfo) = v7;
  if ( (v7 + 2) > 1
    && (v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9]) != 0
    && (v9 = &v8[v6 & 0x1FF]) != 0
    && v7 == v9->m_EHandle.m_Index
    && (v10 = v9->m_pInstance, v9->m_pInstance != 0)
    && BYTE3(v10[7]._vptr_IHandleEntity) != 0
    && (v10[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    if ( m_Index == -1 )
    {
      v11 = 0x7FFF;
      v12 = 0x7FFF;
    }
    else
    {
      v11 = m_pPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v12 = v11;
    }
    v13 = (v4 << 15) | v11 & 0x7FFF;
    LODWORD(info._vptr_CTakeDamageInfo) = v13;
    if ( (v13 + 2) <= 1
      || (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9]) == 0
      || (v15 = &v14[v12 & 0x1FF]) == 0
      || v13 != v15->m_EHandle.m_Index
      || (m_pInstance = v15->m_pInstance, v15->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
      || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    {
      m_pInstance = 0;
    }
    m_nNextAbilityIndex = this->m_nNextAbilityIndex;
    if ( m_nNextAbilityIndex >= CDOTA_BaseNPC::GetAbilityCount(m_pInstance) || this->m_nNextAbilityIndex > 5 )
    {
      this->m_nNextAbilityIndex = 0;
      m_nNextHeroIndex = this->m_nNextHeroIndex;
      v31 = DOTAGameManager();
      CDOTAGameManager::GetFirstHero(v31);
      v32 = DOTAGameManager();
      FirstHero = CDOTAGameManager::GetFirstHero(v32);
      if ( FirstHero == 0 )
        goto LABEL_50;
      while ( m_nNextHeroIndex != 0 )
      {
        v34 = DOTAGameManager();
        --m_nNextHeroIndex;
        FirstHero = CDOTAGameManager::GetNextHero(v34, FirstHero);
        if ( FirstHero == 0 )
          goto LABEL_50;
      }
      v35 = this->m_nNextHeroIndex;
      if ( v35 == this->m_nEndHeroIndex )
      {
LABEL_50:
        Msg("Grinder: Batch finished.  Reload map before continuing.\n");
        this->m_nMode = CDOTA_Grinder::Mode::GRINDER_OFF;
      }
      else
      {
        v36 = this->m_pInitialHero == m_pInstance;
        this->m_nNextHeroIndex = v35 + 1;
        if ( !v36 )
        {
          Health = CBaseEntity::GetHealth(m_pInstance);
          CTakeDamageInfo::CTakeDamageInfo(&info, 0, 0, Health, 0, 0);
          CBaseEntity::OnTakeDamage(m_pInstance, &info);
          CTakeDamageInfo::~CTakeDamageInfo(&info);
          CDOTA_BaseNPC_Hero::SetTimeUntilRespawn(m_pInstance, v38);
        }
        Name = KeyValues::GetName(FirstHero);
        Msg("Grinder: Spawning hero: %s\n", Name);
        *&info.m_vecDamageForce.x = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
        *&info.m_vecDamageForce.z = 0;
        CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
        ctx.m_pParent = 0;
        ctx.m_pCompletionListener = 0;
        ctx.m_callback.m_Closure.m_pFunction.__pfn = *&info.m_vecDamageForce.x;
        ctx.m_callback.m_Closure.m_pFunction.__delta = *&info.m_vecDamageForce.z;
        ctx.m_callback.m_Closure.m_pthis = OnGrinderHeroSpawnCompletion;
        v40 = KeyValues::GetName(FirstHero);
        DOTA_Hero_Spawn(v40, m_pPlayer, &ctx);
        v41 = 0.2;
        if ( g_pGameRules != 0 )
          v41 = *&g_pGameRules[18].m_szQuestName[20] + 0.2;
        this->m_flNextTick = v41;
        CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
      }
    }
    else
    {
      HeroRefresh(m_pInstance);
      HeroRefresh(this->m_pInitialHero);
      FindClearSpaceForUnitAroundEntity(m_pInstance, this->m_pInitialHero);
LABEL_24:
      v18 = this->m_nNextAbilityIndex;
      while ( CDOTA_BaseNPC::GetAbilityCount(m_pInstance) > v18 )
      {
        v19 = this->m_nNextAbilityIndex;
        if ( v19 > 5 )
          break;
        AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, v19);
        v18 = this->m_nNextAbilityIndex + 1;
        this->m_nNextAbilityIndex = v18;
        if ( AbilityByIndex != 0 && !AbilityByIndex->m_bHidden.m_Value )
        {
          if ( (*(AbilityByIndex->_vptr_IHandleEntity + 214))(AbilityByIndex) == 2 )
            goto LABEL_24;
          m_pEntity = AbilityByIndex->m_pEntity;
          m_pAsString = "";
          if ( m_pEntity->m_name.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_name.u.m_pAsString;
          *&v23 = Msg("Grinder: Playing ability: %s\n", m_pAsString).m128_u64[0];
          m_pInitialHero = this->m_pInitialHero;
          if ( m_pInitialHero != 0 && (v25 = m_pInitialHero->m_pEntity) != 0 )
          {
            v26 = (v25->m_EHandle.m_Index >> 15) - (v25->m_flags & 1);
            v27 = 0x7FFF;
            if ( v25->m_EHandle.m_Index != -1 )
              v27 = v25->m_EHandle.m_Index & 0x7FFF;
            LOWORD(m_pInstance[64].m_iszPrivateVScripts.u.m_Id) = v27
                                                                | m_pInstance[64].m_iszPrivateVScripts.u.m_Id & 0x8000;
            LODWORD(m_pInstance[64].m_iszPrivateVScripts.u.m_Id) = (v26 << 15)
                                                                 | m_pInstance[64].m_iszPrivateVScripts.u.m_Id & 0x7FFF;
          }
          else
          {
            LODWORD(m_pInstance[64].m_iszPrivateVScripts.u.m_Id) = -1;
          }
          v28 = (*(m_pPlayer->_vptr_IHandleEntity + 393))(m_pPlayer, v23);
          CDOTA_BaseNPC::CastAbilityImmediately(m_pInstance, AbilityByIndex, v28);
          v29 = 3.0;
          if ( g_pGameRules != 0 )
            v29 = *&g_pGameRules[18].m_szQuestName[20] + 3.0;
          this->m_flNextTick = v29;
          return;
        }
      }
    }
  }
  else
  {
LABEL_8:
    this->m_nMode = CDOTA_Grinder::Mode::GRINDER_OFF;
  }
}


// CDOTA_Grinder::FrameUpdateBuildings  (line 4023, @0x00000000027b1ce0, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, GetEntityNameAsCStr, GetGameTime, String, Tail, ToDOTABaseNPC, ToDOTABuilding, entindex, operator[]
// calls: CEntityInstance::GetEntityIndex, CGameEntitySystem::GetBaseEntity, CDOTA_Grinder::NextBuilding, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CBaseEntity::GetHealth, CTakeDamageInfo::~CTakeDamageInfo, Msg, _Unwind_Resume
// callers: CDOTA_Grinder::FrameUpdatePreEntityThink
// strings: "dota_grinder_snap_to_damage 0", "dota_creeps_no_spawning 0", "Grinder DAMAGE LIMIT EXCEEDED?!?: %s\n"
void __fastcall CDOTA_Grinder::FrameUpdateBuildings(CDOTA_Grinder *const this)
{
  int m_Size; // eax
  void (__fastcall *v3)(IVEngineServer2 *, _QWORD, const char *); // r13
  CEntityIndex v4; // eax
  void (__fastcall *v5)(IVEngineServer2 *, _QWORD, const char *); // r13
  CEntityIndex v6; // eax
  CBaseEntity *BaseEntity; // rax
  CBaseEntity *v8; // r12
  int v9; // eax
  float v10; // xmm0_4
  int m_nDamageLimit; // eax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CTakeDamageInfo info; // [rsp+0h] [rbp-B0h] BYREF

  m_Size = this->m_Buildings.m_Size;
  if ( m_Size == 0 )
  {
    this->m_nMode = CDOTA_Grinder::Mode::GRINDER_OFF;
    v3 = *(*engine + 288LL);
    v4.m_Data = CEntityInstance::GetEntityIndex(this->m_pPlayer).m_Data;
    v3(engine, v4.m_Data, "dota_grinder_snap_to_damage 0");
    v5 = *(*engine + 288LL);
    v6.m_Data = CEntityInstance::GetEntityIndex(this->m_pPlayer).m_Data;
    v5(engine, v6.m_Data, "dota_creeps_no_spawning 0");
    return;
  }
  LODWORD(info._vptr_CTakeDamageInfo) = this->m_Buildings.m_Memory.m_pMemory[m_Size - 1].m_Index;
  BaseEntity = CGameEntitySystem::GetBaseEntity(g_pGameEntitySystem, &info);
  v8 = BaseEntity;
  if ( BaseEntity == 0 || !BaseEntity->m_bIsDOTANPC || (BaseEntity[2].m_hEffectEntity.m_Value.m_Index & 0x14) == 0 )
  {
    CDOTA_Grinder::NextBuilding(this);
    return;
  }
  v9 = (*(BaseEntity->_vptr_IHandleEntity + 156))(BaseEntity);
  CTakeDamageInfo::CTakeDamageInfo(&info, 0, 0, (v9 / 20), 0, 0);
  CBaseEntity::TakeDamage(v8, &info);
  v10 = 0.1;
  if ( g_pGameRules != 0 )
    v10 = *&g_pGameRules[18].m_szQuestName[20] + 0.1;
  m_nDamageLimit = this->m_nDamageLimit;
  this->m_flNextTick = v10;
  this->m_nDamageLimit = --m_nDamageLimit;
  if ( m_nDamageLimit <= 0 )
  {
    m_pEntity = v8->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_name.u.m_pAsString;
    Msg("Grinder DAMAGE LIMIT EXCEEDED?!?: %s\n", m_pAsString);
  }
  else if ( CBaseEntity::GetHealth(v8) > 0 )
  {
    CTakeDamageInfo::~CTakeDamageInfo(&info);
    return;
  }
  CDOTA_Grinder::NextBuilding(this);
  CTakeDamageInfo::~CTakeDamageInfo(&info);
}


// CDOTA_Grinder::FrameUpdatePreEntityThink  (line 4060, @0x00000000027b1ec0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, IsGamePaused
// calls: CDOTA_Grinder::FrameUpdateBuildings, CDOTA_Grinder::FrameUpdateHeroes
void __fastcall CDOTA_Grinder::FrameUpdatePreEntityThink(
        CDOTA_Grinder *const this,
        const EventServerPreEntityThink_t *const msg)
{
  CDOTA_Grinder::Mode m_nMode; // eax
  float m_flNextTick; // xmm1_4
  float v4; // xmm0_4

  m_nMode = this->m_nMode;
  if ( m_nMode != CDOTA_Grinder::Mode::GRINDER_OFF )
  {
    if ( g_pGameRules != 0 )
    {
      if ( g_pGameRules[19].m_szQuestName[29] != 0 )
        return;
      m_flNextTick = this->m_flNextTick;
      v4 = *&g_pGameRules[18].m_szQuestName[20];
    }
    else
    {
      m_flNextTick = this->m_flNextTick;
      v4 = 0.0;
    }
    if ( m_flNextTick <= v4 )
    {
      if ( m_nMode == CDOTA_Grinder::Mode::GRINDER_HEROES )
      {
        CDOTA_Grinder::FrameUpdateHeroes(this);
      }
      else if ( m_nMode == CDOTA_Grinder::Mode::GRINDER_BUILDINGS )
      {
        CDOTA_Grinder::FrameUpdateBuildings(this);
      }
    }
  }
}


// OnCreateBotWearingItemSpawnComplete  (line 4083, @0x00000000027aebe0, libserver.so)  // inlines: AssignTo, Base, CEntityHandle, Element, FindKeyHash, Get, GetValue, GetValue<CEntityInstance*>, operator[]
// calls: OnCreateUnitSpawnComplete, CDOTA_BaseNPC::SetControllableByPlayer, CEntityHandle::operator CEntityInstance*, __dynamic_cast, VariantFieldTypeName, Warning
// strings: "No free conversion of %s variant to CEntityInstance * right now\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall OnCreateBotWearingItemSpawnComplete(CDOTA_BaseNPC *pDOTANPC, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rax
  int16 m_type; // dx
  void *v11; // rdi
  int v12; // eax
  uint32 m_int; // eax
  CEntityInstance *v14; // rdi
  const char *v15; // rax
  CEntityHandle v16; // [rsp+0h] [rbp-20h] BYREF

  OnCreateUnitSpawnComplete(pDOTANPC, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_14:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      goto LABEL_12;
    goto LABEL_15;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -1429279605 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_14;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -1429279605 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
  {
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
LABEL_15:
  m_int = p_m_value->m_int;
  if ( m_type != 13 )
  {
    v15 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to CEntityInstance * right now\n", v15);
    goto LABEL_12;
  }
  v16.m_Index = m_int;
  v14 = CEntityHandle::operator CEntityInstance *(&v16);
  if ( v14 == 0 )
    goto LABEL_12;
  v11 = __dynamic_cast(v14, &`typeinfo for'CEntityInstance, &`typeinfo for'CDOTAPlayer, 0);
LABEL_13:
  v12 = (*(*v11 + 3144LL))(v11);
  CDOTA_BaseNPC::SetControllableByPlayer(pDOTANPC, v12, 0);
}


// dota_create_bot_wearing_item  (line 4092, @0x00000000027be810, libserver.so)  // inlines: Arg, Bind, CDotaNPCSpawnerContext, CEntityKeyValuesModifyScope, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlDelegate, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, FastDelegate2, GetTeamNumber, SetMementoFrom, SetValue<short unsigned int>, ToDOTAPlayer, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, operator[], ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope
// calls: CDOTAGamerules::IsCheatMode, UTIL_GetCommandClient, DOTA_ServerHasEntitySpace, V_atoi, ItemSystem, CEconItemSchema::GetItemDefinition, __dynamic_cast, Msg, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue<short unsigned int>, CEntityKeyValuesModifyScope::Release (17 total)
// strings: "Failed to find identify hero from the item.\n", "Not enough edict slots remaining to create entity!\n", "Failed to find specified item definition.\n"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnCreateBotWearingItemSpawnComplete(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall dota_create_bot_wearing_item(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v3; // rbx
  const char *v4; // rdi
  unsigned __int16 v5; // r13
  CEconItemSystem *v6; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  CDOTAItemDefinition *v8; // rax
  const CDOTAItemDefinition *v9; // r12
  int m_Value; // r13d
  const char *ItemHeroName; // rax
  unsigned __int16 value; // [rsp+1Eh] [rbp-F2h] BYREF
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+20h] [rbp-F0h] BYREF
  CDotaNPCSpawnerContext spawnerCtx; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v16; // [rsp+D8h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( args->m_nArgc == 2 && CDOTAGamerules::IsCheatMode() )
  {
    CommandClient = UTIL_GetCommandClient();
    v3 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( DOTA_ServerHasEntitySpace() )
      {
        v4 = "";
        if ( args->m_nArgc > 1 )
          v4 = args->m_ppArgv[1];
        v5 = V_atoi(v4);
        v6 = ItemSystem();
        ItemDefinition = CEconItemSchema::GetItemDefinition(&v6->m_itemSchema, v5, 0);
        if ( ItemDefinition != 0
          && (v8 = __dynamic_cast(
                     ItemDefinition,
                     &`typeinfo for'CEconItemDefinition,
                     &`typeinfo for'CDOTAItemDefinition,
                     0),
              v9 = v8,
              v8 != 0) )
        {
          if ( (*(v8->_vptr_IEconItemDefinition + 26))(v8) == 0
            || (*(v9->_vptr_IEconItemDefinition + 27))(v9, 0) == 1000 )
          {
            Msg("Failed to find identify hero from the item.\n");
          }
          else
          {
            CEntityKeyValues::CEntityKeyValues(&spawnerCtx.m_entityKeyValues);
            spawnerCtx.m_pParent = 0;
            spawnerCtx.m_pCompletionListener = 0;
            memset(&sg, 0, sizeof(sg));
            spawnerCtx.m_callback.m_Closure.m_pFunction.__pfn = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
            spawnerCtx.m_callback.m_Closure.m_pFunction.__delta = 0;
            spawnerCtx.m_callback.m_Closure.m_pthis = OnCreateBotWearingItemSpawnComplete;
            CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, &spawnerCtx.m_entityKeyValues);
            sg.m_pContext = &spawnerCtx;
            value = v5;
            CEntityKeyValues::SetValue<unsigned short>(&spawnerCtx.m_entityKeyValues, -509197357, &value);
            CEntityKeyValuesModifyScope::Release(&sg.m_sg);
            m_Value = v3->m_iTeamNum.m_Value;
            ItemHeroName = CDOTAItemDefinition::GetItemHeroName(v9, 0);
            DebugCreateUnit(v3, ItemHeroName, m_Value, 1, &spawnerCtx);
            CEntityKeyValues::~CEntityKeyValues(&spawnerCtx.m_entityKeyValues);
          }
        }
        else
        {
          Msg("Failed to find specified item definition.\n");
        }
      }
      else
      {
        Msg("Not enough edict slots remaining to create entity!\n", args);
      }
    }
  }
}


// OnCreateBotWearingSetSpawnComplete  (line 4133, @0x00000000027b4cf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: OnCreateUnitSpawnComplete, CEntityKeyValues::GetValue<CEntityInstance*>, __dynamic_cast, CDOTA_BaseNPC::SetControllableByPlayer, CEntityKeyValues::GetValue<int>, ItemSystem, CEconItemSchema::GetItemDefinition, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, ItemGeneration, CItemGeneration::GenerateItemFromDefIndex
// globals: INVALID_ITEM_DEF_INDEX, CEntityHandle::gm_pEntityList
void __fastcall OnCreateBotWearingSetSpawnComplete(CDOTA_BaseNPC *pDOTANPC, const CEntityKeyValues *pKeyValues)
{
  CEntityInstance *v4; // rax
  void *v5; // rdi
  int v6; // eax
  item_definition_index_t v7; // bx
  CEconItemSystem *v8; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  _QWORD *v10; // rax
  const QAngle *AbsAngles; // r12
  const Vector *AbsOrigin; // rbx
  CItemGeneration *v13; // rax
  CBaseEntity *ItemFromDefIndex; // r12
  __int64 i; // rbx
  CHandle<CEconWearable> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // r14
  __int64 v22; // rax
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-58h]
  item_definition_index_t iDefIndex; // [rsp+10h] [rbp-50h]
  int b; // [rsp+14h] [rbp-4Ch]
  __int64 v28; // [rsp+18h] [rbp-48h]
  CEntityInstance *defaultValue[7]; // [rsp+28h] [rbp-38h] BYREF

  OnCreateUnitSpawnComplete(pDOTANPC, pKeyValues);
  defaultValue[0] = 0;
  v4 = CEntityKeyValues::GetValue<CEntityInstance *>(pKeyValues, -1429279605, defaultValue);
  if ( v4 != 0 )
    v5 = __dynamic_cast(v4, &`typeinfo for'CEntityInstance, &`typeinfo for'CDOTAPlayer, 0);
  else
    v5 = 0;
  v6 = (*(*v5 + 3144LL))(v5);
  CDOTA_BaseNPC::SetControllableByPlayer(pDOTANPC, v6, 0);
  LODWORD(defaultValue[0]) = INVALID_ITEM_DEF_INDEX.m_Data;
  v7.m_Data = CEntityKeyValues::GetValue<int>(pKeyValues, -509197357, defaultValue);
  v8 = ItemSystem();
  ItemDefinition = CEconItemSchema::GetItemDefinition(&v8->m_itemSchema, v7, 0);
  if ( ItemDefinition != 0 )
    v10 = __dynamic_cast(ItemDefinition, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0);
  else
    v10 = 0;
  v25 = 0;
  b = 0;
  v28 = v10[25];
  if ( *v28 > 0 )
  {
    do
    {
      AbsAngles = CBaseEntity::GetAbsAngles(pDOTANPC);
      AbsOrigin = CBaseEntity::GetAbsOrigin(pDOTANPC);
      iDefIndex.m_Data = (***(*(v28 + 8) + v25))(*(*(v28 + 8) + v25));
      v13 = ItemGeneration();
      ItemFromDefIndex = CItemGeneration::GenerateItemFromDefIndex(v13, iDefIndex, AbsOrigin, AbsAngles, 0);
      if ( ItemFromDefIndex != 0 )
      {
        for ( i = 0; pDOTANPC->m_hMyWearables.m_Vector.m_Size > i; ++i )
        {
          while ( 1 )
          {
            v16 = &pDOTANPC->m_hMyWearables.m_Vector.m_Memory.m_pMemory[i];
            m_Index = v16->m_Index;
            if ( v16->m_Index + 2 > 1 )
            {
              v18 = v16->m_Index;
              v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
              if ( v19 != 0 )
              {
                v20 = &v19[v18 & 0x1FF];
                if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
                {
                  m_pInstance = v20->m_pInstance;
                  if ( v20->m_pInstance != 0 )
                  {
                    v22 = (*(m_pInstance->_vptr_IHandleEntity + 265))(v20->m_pInstance);
                    v23 = *((*(*(v22 + 104) + 96LL))(v22 + 104) + 408);
                    v24 = (*(ItemFromDefIndex->_vptr_IHandleEntity + 265))(ItemFromDefIndex);
                    if ( v23 == *((*(*(v24 + 104) + 96LL))(v24 + 104) + 408) )
                      break;
                  }
                }
              }
            }
            if ( pDOTANPC->m_hMyWearables.m_Vector.m_Size <= ++i )
              goto LABEL_17;
          }
          (*(m_pInstance->_vptr_IHandleEntity + 272))(m_pInstance, pDOTANPC);
        }
LABEL_17:
        (*(ItemFromDefIndex->_vptr_IHandleEntity + 262))(ItemFromDefIndex, pDOTANPC);
      }
      ++b;
      v25 += 8;
    }
    while ( *v28 > b );
  }
}


// dota_create_bot_wearing_set  (line 4174, @0x00000000027be590, libserver.so)  // inlines: Arg, Bind, CDotaNPCSpawnerContext, CEntityKeyValuesModifyScope, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlDelegate, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, FastDelegate2, GetTeamNumber, SetMementoFrom, SetValue<short unsigned int>, ToDOTAPlayer, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, operator[], ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope
// calls: CDOTAGamerules::IsCheatMode, UTIL_GetCommandClient, DOTA_ServerHasEntitySpace, V_atoi, ItemSystem, CEconItemSchema::GetItemDefinition, __dynamic_cast, Msg, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue<short unsigned int>, CEntityKeyValuesModifyScope::Release (17 total)
// strings: "Failed to find identify hero from the item.\n", "Not enough edict slots remaining to create entity!\n", "Specified item is not a bundle.\n", "Failed to find specified item definition.\n"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnCreateBotWearingSetSpawnComplete(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall dota_create_bot_wearing_set(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v3; // rbx
  const char *v4; // rdi
  unsigned __int16 v5; // r13
  CEconItemSystem *v6; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  CDOTAItemDefinition *v8; // rax
  const CDOTAItemDefinition *v9; // r12
  int m_Value; // r13d
  const char *ItemHeroName; // rax
  unsigned __int16 value; // [rsp+1Eh] [rbp-F2h] BYREF
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+20h] [rbp-F0h] BYREF
  CDotaNPCSpawnerContext spawnerCtx; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v16; // [rsp+D8h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( args->m_nArgc == 2 && CDOTAGamerules::IsCheatMode() )
  {
    CommandClient = UTIL_GetCommandClient();
    v3 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( DOTA_ServerHasEntitySpace() )
      {
        v4 = "";
        if ( args->m_nArgc > 1 )
          v4 = args->m_ppArgv[1];
        v5 = V_atoi(v4);
        v6 = ItemSystem();
        ItemDefinition = CEconItemSchema::GetItemDefinition(&v6->m_itemSchema, v5, 0);
        if ( ItemDefinition != 0
          && (v8 = __dynamic_cast(
                     ItemDefinition,
                     &`typeinfo for'CEconItemDefinition,
                     &`typeinfo for'CDOTAItemDefinition,
                     0),
              v9 = v8,
              v8 != 0) )
        {
          if ( v8->m_BundleInfo != 0 )
          {
            if ( (*(v8->_vptr_IEconItemDefinition + 26))(v8) == 0
              || (*(v9->_vptr_IEconItemDefinition + 27))(v9, 0) == 1000 )
            {
              Msg("Failed to find identify hero from the item.\n");
            }
            else
            {
              CEntityKeyValues::CEntityKeyValues(&spawnerCtx.m_entityKeyValues);
              spawnerCtx.m_pParent = 0;
              spawnerCtx.m_pCompletionListener = 0;
              memset(&sg, 0, sizeof(sg));
              spawnerCtx.m_callback.m_Closure.m_pFunction.__pfn = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
              spawnerCtx.m_callback.m_Closure.m_pFunction.__delta = 0;
              spawnerCtx.m_callback.m_Closure.m_pthis = OnCreateBotWearingSetSpawnComplete;
              CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, &spawnerCtx.m_entityKeyValues);
              sg.m_pContext = &spawnerCtx;
              value = v5;
              CEntityKeyValues::SetValue<unsigned short>(&spawnerCtx.m_entityKeyValues, -509197357, &value);
              CEntityKeyValuesModifyScope::Release(&sg.m_sg);
              m_Value = v3->m_iTeamNum.m_Value;
              ItemHeroName = CDOTAItemDefinition::GetItemHeroName(v9, 0);
              DebugCreateUnit(v3, ItemHeroName, m_Value, 1, &spawnerCtx);
              CEntityKeyValues::~CEntityKeyValues(&spawnerCtx.m_entityKeyValues);
            }
          }
          else
          {
            Msg("Specified item is not a bundle.\n");
          }
        }
        else
        {
          Msg("Failed to find specified item definition.\n");
        }
      }
      else
      {
        Msg("Not enough edict slots remaining to create entity!\n", args);
      }
    }
  }
}


// DOTA_ServerHasEntitySpace  (line 4275, @0x00000000027b1f30, libserver.so)  // inlines: GetInt
// calls: CGameEntitySystem::NumberOfEntities
// callers: CDOTAGamerules::OnDemoHero, DOTA_ExecuteOrders, dota_test_npc, dota_create_unit, dota_create_bot_wearing_set, dota_create_bot_wearing_item, DOTA_CreateIllusions, CDOTA_Ability_Invoker_IceWall::OnSpellStart, CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnIntervalThink
bool __cdecl DOTA_ServerHasEntitySpace()
{
  return 0x4000 - CGameEntitySystem::NumberOfEntities(g_pGameEntitySystem, 0) > dota_entity_count_grace_threshold.m_pParent->m_Value.m_nValue;
}


// Script_CreateModifierThinker  (line 4280, @0x00000000027b6090, libserver.so)  // inlines: AssignTo, CVariantBase, EntityToHScript, Float, Get, GetPublicScriptScope, TempString, ToDOTAAbility, ToDOTABaseNPC, ToEnt, ToHScript, ToString, operator float, ~CVariantBase
// calls: HScriptToEntity<CBaseEntity>, __dynamic_cast, KeyValues::KeyValues, KeyValues::SetString, KeyValues::SetFloat, Thinker_Create, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::~KeyValues, V_snprintf, VariantFieldTypeName, Warning, CEntityInstance::CreatePublicScriptScope (14 total)
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d"
// globals: jpt_27B637B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_27B6613
HSCRIPT __fastcall Script_CreateModifierThinker(
        HSCRIPT hCaster,
        HSCRIPT hAbility,
        const char *pszScriptName,
        HSCRIPT table,
        Vector vOrigin,
        int nTeam,
        bool bPhantomBlocker)
{
  CBaseEntity *v9; // rax
  CBaseEntity *v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  unsigned int v13; // r12d
  __int64 v14; // rax
  float v15; // xmm1_4
  const char *m_uint64; // rsi
  const char *v17; // rsi
  CDOTA_BaseNPC *v18; // rax
  CEntityInstance *v19; // rbx
  HSCRIPT m_hScope; // rax
  HSCRIPT v21; // rbx
  const char *v23; // rax
  const char *v24; // rcx
  double m_float; // xmm0_8
  const char *v26; // rax
  const char *v27; // rax
  double m_float64; // xmm0_8
  const char *v29; // rcx
  CDOTABaseAbility *pAbility; // [rsp+10h] [rbp-C0h]
  CBaseEntity *pEntity; // [rsp+18h] [rbp-B8h]
  char *value; // [rsp+30h] [rbp-A0h]
  int v36; // [rsp+44h] [rbp-8Ch]
  ScriptVariant_t vKey; // [rsp+60h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+70h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  if ( (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem) == 0 )
    return 0;
  v9 = HScriptToEntity<CBaseEntity>(hCaster);
  if ( v9 != 0 && v9->m_bIsDOTANPC )
    pEntity = v9;
  else
    pEntity = 0;
  v10 = HScriptToEntity<CBaseEntity>(hAbility);
  if ( v10 != 0 )
    pAbility = __dynamic_cast(v10, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  else
    pAbility = 0;
  KeyValues::KeyValues(&kv, pszScriptName);
  vKey.m_flags = 0;
  vValue.m_type = 0;
  vKey.m_type = 0;
  vKey.m_uint64 = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  v11 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
  v36 = (*(*v11 + 280LL))(v11, table);
  if ( v36 > 0 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
      v13 = (*(*v14 + 296LL))(v14, table, v13, &vKey, &vValue);
      if ( vValue.m_type == 30 )
        break;
      if ( vValue.m_type == 2 )
      {
        v27 = VariantFieldTypeName(2);
        Warning("No conversion from %s to string at the moment!\n", v27);
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        value = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
LABEL_14:
        if ( vKey.m_type == 30 )
        {
          m_uint64 = vKey.m_uint64;
        }
        else
        {
          switch ( vKey.m_type )
          {
            case 0:
              goto LABEL_30;
            case 1:
              m_float = vKey.m_float;
              goto LABEL_36;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8),
                *(vKey.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
              break;
            case 6:
              v24 = "true";
              if ( vKey.m_char == 0 )
                v24 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v24);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vKey.m_char,
                BYTE1(vKey.m_int),
                BYTE2(vKey.m_uint),
                HIBYTE(vKey.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vKey.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vKey.m_uint64);
              break;
            case 0x22:
              m_float = vKey.m_float64;
LABEL_36:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
              break;
            default:
              v23 = VariantFieldTypeName(vKey.m_type);
              Warning("No conversion from %s to string at the moment!\n", v23);
LABEL_30:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        KeyValues::SetString(&kv, m_uint64, value);
        if ( vValue.m_type == 34 )
          goto LABEL_17;
LABEL_11:
        if ( ++v12 == v36 )
          goto LABEL_20;
      }
      else
      {
        if ( vValue.m_type != 34 )
          goto LABEL_11;
LABEL_17:
        if ( vKey.m_type == 30 )
        {
          v17 = vKey.m_uint64;
        }
        else
        {
          switch ( vKey.m_type )
          {
            case 0:
              goto LABEL_49;
            case 1:
              m_float64 = vKey.m_float;
              goto LABEL_53;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8),
                *(vKey.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
              break;
            case 6:
              v29 = "true";
              if ( vKey.m_char == 0 )
                v29 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v29);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vKey.m_char,
                BYTE1(vKey.m_int),
                BYTE2(vKey.m_uint),
                HIBYTE(vKey.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vKey.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vKey.m_uint64);
              break;
            case 0x22:
              m_float64 = vKey.m_float64;
LABEL_53:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
              break;
            default:
              v26 = VariantFieldTypeName(vKey.m_type);
              Warning("No conversion from %s to string at the moment!\n", v26);
LABEL_49:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          v17 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        KeyValues::SetFloat(&kv, v17, v15);
        if ( ++v12 == v36 )
          goto LABEL_20;
      }
    }
    value = vValue.m_uint64;
    goto LABEL_14;
  }
LABEL_20:
  v18 = Thinker_Create(pEntity, pAbility, pszScriptName, &kv, vOrigin, nTeam, bPhantomBlocker, 1, 0);
  v19 = v18;
  if ( v18 != 0 )
  {
    m_hScope = v18->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v19, 0);
      m_hScope = v19->m_pEntity->m_hPublicScope.m_hScope;
    }
    v21 = m_hScope;
  }
  else
  {
    v21 = 0;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  KeyValues::~KeyValues(&kv);
  return v21;
}


// UnitOrderToMsgUnitOrder  (line 4318, @0x00000000027b5140, libserver.so)  // inlines: Add, GetRaw, VectorToCMsgVector, add_units, mutable_position, operator!=, set_ability_index, set_has_ability_index, set_has_issuer, set_has_order_type, set_has_position, set_has_queue, set_has_sequence_number, set_has_target_index, set_has_x, set_has_y, set_has_z, set_issuer, set_order_type, set_queue, set_sequence_number, set_target_index, set_x, set_y, set_z
// calls: google::protobuf::RepeatedField<int>::Reserve, operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
void __fastcall UnitOrderToMsgUnitOrder(const CUnitOrders *const unitOrder, CDOTAMsg_UnitOrder *const msgUnitOrder)
{
  int v4; // ecx
  int v5; // eax
  int m_nOrderType; // edx
  __int64 v7; // r15
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rsi
  int32 m_Data; // r14d
  int32 v12; // edx
  int32 v13; // edx
  CMsgVector *v14; // rax
  int v15; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  bool m_bQueue; // dl
  int v19; // ecx
  int m_nOrderSequenceNumber; // edx
  CMsgVector *v21; // r12
  google::protobuf::RepeatedField<int> *v22; // [rsp+8h] [rbp-38h]

  v4 = *(msgUnitOrder + 4);
  v5 = v4 | 3;
  *(msgUnitOrder + 6) = unitOrder->m_nIssuerPlayerIndex;
  *(msgUnitOrder + 4) = v4 | 1;
  m_nOrderType = unitOrder->m_nOrderType;
  *(msgUnitOrder + 4) = v4 | 3;
  *(msgUnitOrder + 7) = m_nOrderType;
  if ( unitOrder->m_nUnits.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    v22 = (msgUnitOrder + 32);
    do
    {
      v10 = *(msgUnitOrder + 10);
      m_Data = unitOrder->m_nUnits.m_Memory.m_pMemory[v7].m_Data;
      if ( v10 == *(msgUnitOrder + 11) )
      {
        google::protobuf::RepeatedField<int>::Reserve(v22, v10 + 1);
        v10 = *(msgUnitOrder + 10);
      }
      v9 = *(msgUnitOrder + 4);
      ++v8;
      *(msgUnitOrder + 10) = v10 + 1;
      ++v7;
      *(v9 + 4 * v10) = m_Data;
    }
    while ( unitOrder->m_nUnits.m_Size > v8 );
    v5 = *(msgUnitOrder + 4);
  }
  v12 = unitOrder->m_nTargetIndex.m_Data;
  if ( v12 != 0 )
  {
    v5 |= 8u;
    *(msgUnitOrder + 12) = v12;
    *(msgUnitOrder + 4) = v5;
  }
  v13 = unitOrder->m_nAbilityIndex.m_Data;
  if ( v13 != 0 )
  {
    v5 |= 0x10u;
    *(msgUnitOrder + 13) = v13;
    *(msgUnitOrder + 4) = v5;
  }
  if ( vec3_origin.x != unitOrder->m_vPosition.x
    || vec3_origin.y != unitOrder->m_vPosition.y
    || vec3_origin.z != unitOrder->m_vPosition.z )
  {
    *(msgUnitOrder + 4) = v5 | 0x20;
    v14 = *(msgUnitOrder + 7);
    if ( v14 == 0 )
    {
      v21 = operator new(0x28u);
      CMsgVector::CMsgVector(v21);
      *(msgUnitOrder + 7) = v21;
      v14 = v21;
    }
    v15 = *(v14 + 4);
    *(v14 + 6) = LODWORD(unitOrder->m_vPosition.x);
    *(v14 + 4) = v15 | 1;
    y = unitOrder->m_vPosition.y;
    *(v14 + 4) = v15 | 3;
    *(v14 + 7) = y;
    z = unitOrder->m_vPosition.z;
    *(v14 + 4) = v15 | 7;
    *(v14 + 8) = z;
    v5 = *(msgUnitOrder + 4);
  }
  m_bQueue = unitOrder->m_bQueue;
  v19 = v5;
  LOBYTE(v5) = v5 | 0xC0;
  *(msgUnitOrder + 4) = v19 | 0x40;
  *(msgUnitOrder + 64) = m_bQueue;
  m_nOrderSequenceNumber = unitOrder->m_nOrderSequenceNumber;
  *(msgUnitOrder + 4) = v5;
  *(msgUnitOrder + 17) = m_nOrderSequenceNumber;
}


// MsgUnitOrderToUnitOrder  (line 4344, @0x00000000027bfcf0, libserver.so)  // inlines: AddToTail, CMsgVectorToVector, CopyConstruct<CEntityIndex>, Element, EnsureCapacity, GrowMemory, Init, Min<int>, RemoveAll, Reset, SetRaw, memcpy, operator=, operator[], position, units
// calls: CUtlMemory<CEntityIndex, int>::Grow, memcpy
// callers: CDOTAPlayer::AddExecuteOrders
void __fastcall MsgUnitOrderToUnitOrder(const CDOTAMsg_UnitOrder *const msgUnitOrder, CUnitOrders *const unitOrder)
{
  int v3; // r12d
  uint32 m_nGrowSize; // eax
  CEntityIndex *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  CEntityIndex *v10; // rax
  __int64 m_Size; // r13
  int32 v12; // ecx
  int v13; // eax
  vec_t *v14; // rax
  vec_t v15; // xmm2_4
  vec_t v16; // xmm0_4
  CEntityIndex *m_pMemory; // r13
  CEntityIndex *v18; // rax
  int32 v19; // [rsp+Ch] [rbp-34h]

  v3 = 256;
  unitOrder->m_nOrderType = 0;
  unitOrder->m_nUnits.m_Size = 0;
  unitOrder->m_nTargetIndex.m_Data = 0;
  unitOrder->m_nAbilityIndex.m_Data = 0;
  unitOrder->m_bQueue = 0;
  unitOrder->m_vPosition = vec3_origin;
  unitOrder->m_nIssuerPlayerIndex = *(msgUnitOrder + 6);
  unitOrder->m_nOrderType = *(msgUnitOrder + 7);
  if ( *(msgUnitOrder + 10) <= 255 )
    v3 = *(msgUnitOrder + 10);
  if ( v3 > unitOrder->m_nUnits.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = unitOrder->m_nUnits.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = unitOrder->m_nUnits.m_Memory.m_pMemory;
        v18 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v3);
        unitOrder->m_nUnits.m_Memory.m_pMemory = v18;
        if ( m_pMemory != 0 )
          memcpy(v18, m_pMemory, 4LL * unitOrder->m_nUnits.m_Memory.m_nAllocationCount);
        unitOrder->m_nUnits.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v6 = unitOrder->m_nUnits.m_Memory.m_pMemory;
        v7 = *g_pMemAlloc;
        if ( v6 != 0 )
          unitOrder->m_nUnits.m_Memory.m_pMemory = (*(v7 + 8))(g_pMemAlloc, v6, 4LL * v3);
        else
          unitOrder->m_nUnits.m_Memory.m_pMemory = (*v7)(g_pMemAlloc, 4LL * v3);
      }
      unitOrder->m_nUnits.m_Memory.m_nAllocationCount = v3;
    }
  }
  if ( v3 > 0 )
  {
    v8 = 4LL * (v3 - 1) + 4;
    v9 = 0;
    do
    {
      m_Size = unitOrder->m_nUnits.m_Size;
      v12 = *(*(msgUnitOrder + 4) + v9);
      v13 = unitOrder->m_nUnits.m_Size;
      if ( m_Size == unitOrder->m_nUnits.m_Memory.m_nAllocationCount )
      {
        v19 = *(*(msgUnitOrder + 4) + v9);
        CUtlMemory<CEntityIndex,int>::Grow(&unitOrder->m_nUnits.m_Memory, 1);
        v13 = unitOrder->m_nUnits.m_Size;
        v12 = v19;
      }
      unitOrder->m_nUnits.m_Size = v13 + 1;
      v10 = &unitOrder->m_nUnits.m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
        v10->m_Data = v12;
      v9 += 4;
    }
    while ( v9 != v8 );
  }
  unitOrder->m_nTargetIndex.m_Data = *(msgUnitOrder + 12);
  unitOrder->m_nAbilityIndex.m_Data = *(msgUnitOrder + 13);
  v14 = *(msgUnitOrder + 7);
  if ( v14 == 0 )
    v14 = *&CDOTAMsg_UnitOrder::default_instance_->oneof_decl_count_;
  v15 = v14[7];
  v16 = v14[6];
  unitOrder->m_vPosition.z = v14[8];
  unitOrder->m_vPosition.y = v15;
  unitOrder->m_vPosition.x = v16;
  unitOrder->m_bQueue = *(msgUnitOrder + 64);
  unitOrder->m_nOrderSequenceNumber = *(msgUnitOrder + 17);
}


