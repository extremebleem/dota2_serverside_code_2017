
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CombatLog_Localize  (line 69, @0x000000000246e680, libserver.so)  // inlines: V_wcsncpy<int>
// calls: UTIL_VarArgs, _V_wcsncpy_bytes
// callers: GenerateLogStringForDamage, GenerateLogStringForHeal, GenerateLogStringForDeath, GenerateLogStringForModifierAdd, GenerateLogStringForModifierRemove, GenerateLogStringForAbility, GenerateLogStringForPurchase
// strings: "#%s", "#DOTA_ItemName_%s", "#DOTA_Tooltip_Ability_%s", "#DOTA_Tooltip_%s"
void __fastcall CombatLog_Localize(const char *pToken, wchar_t *pBuffer, int iBufferSizeInBytes)
{
  __int64 (__fastcall *v6)(ILocalize *, char *); // r13
  char *v7; // rax
  __int64 v8; // rax
  __int64 (__fastcall *v9)(ILocalize *, char *); // r13
  char *v10; // rax
  __int64 (__fastcall *v11)(ILocalize *, char *); // r13
  char *v12; // rax
  __int64 (__fastcall *v13)(ILocalize *, char *); // r13
  char *v14; // rax

  v6 = *(*g_pLocalize + 104LL);
  v7 = UTIL_VarArgs("#%s", pToken);
  v8 = v6(g_pLocalize, v7);
  if ( v8 != 0 )
    goto LABEL_2;
  v9 = *(*g_pLocalize + 104LL);
  v10 = UTIL_VarArgs("#DOTA_ItemName_%s", pToken);
  v8 = v9(g_pLocalize, v10);
  if ( v8 != 0
    || (v11 = *(*g_pLocalize + 104LL),
        v12 = UTIL_VarArgs("#DOTA_Tooltip_Ability_%s", pToken),
        (v8 = v11(g_pLocalize, v12)) != 0)
    || (v13 = *(*g_pLocalize + 104LL), v14 = UTIL_VarArgs("#DOTA_Tooltip_%s", pToken), (v8 = v13(g_pLocalize, v14)) != 0) )
  {
LABEL_2:
    _V_wcsncpy_bytes(pBuffer, v8, iBufferSizeInBytes);
  }
  else
  {
    (*(*g_pLocalize + 120LL))(g_pLocalize, pToken, pBuffer, iBufferSizeInBytes);
  }
}


// GenerateLogStringForDamage  (line 102, @0x000000000246ea90, libserver.so)  // inlines: GetName, V_wcscat_safe<256ul>
// calls: DOTA_CombatLog_Record::GetColorForName, CombatLog_Localize, V_snwprintf, _V_wcsncat
// callers: GetStringForCombatLogEntry
// strings: "#dota_combat_log_illusion", "#dota_combat_log_hits_with", "#dota_combat_log_is_hit", "#dota_combat_log_hits", "#dota_combat_log_is_hit_with"
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, g_DOTACombatLogRecord, GenerateLogStringForDamage(wchar_t *,int,int,int,int,int,int,bool,bool,int,int,int)::target_buffer, damageColor, healColor, GenerateLogStringForDamage(wchar_t *,int,int,int,int,int,int,bool,bool,int,int,int)::inflictor_buffer, inflictorColor, GenerateLogStringForDamage(wchar_t *,int,int,int,int,int,int,bool,bool,int,int,int)::attacker_buffer
void __fastcall GenerateLogStringForDamage(
        wchar_t *wcOutput,
        int iBufferSizeInBytes,
        int iMinute,
        int iSecond,
        int iMillisecond,
        int iTarget,
        int iAttacker,
        bool bAttackerIllusion,
        bool bTargetIllusion,
        int iInflictor,
        int iValue,
        int iHealth)
{
  const char *v12; // r12
  __int64 v14; // rax
  Color ColorForName; // eax
  const char *v16; // r12
  Color v17; // r15d
  __int64 v18; // rax
  const char *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rdi
  const char *v23; // r13
  __int64 v24; // rax
  Color v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  void (__fastcall *v28)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *); // r13
  __int64 v29; // rax
  __int64 v30; // rax
  ILocalize *v31; // rdi
  wchar_t *v32; // r9
  wchar_t *v33; // [rsp+0h] [rbp-F70h]
  const wchar_t *pwcIllusion; // [rsp+20h] [rbp-F50h]
  void (__fastcall *v35)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *); // [rsp+28h] [rbp-F48h]
  wchar_t wcDamage[64]; // [rsp+40h] [rbp-F30h] BYREF
  wchar_t wcHealth[128]; // [rsp+140h] [rbp-E30h] BYREF
  wchar_t wcTarget[256]; // [rsp+340h] [rbp-C30h] BYREF
  wchar_t wcInflictor[256]; // [rsp+740h] [rbp-830h] BYREF
  wchar_t wcAttacker[268]; // [rsp+B40h] [rbp-430h] BYREF

  v12 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v14 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1,
            iSecond,
            iMillisecond);
    if ( v14 != 0 )
      v12 = v14;
  }
  ColorForName = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v12);
  v16 = "";
  v17 = ColorForName;
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v18 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1);
    if ( v18 != 0 )
      v16 = v18;
  }
  CombatLog_Localize(
    v16,
    GenerateLogStringForDamage(wchar_t *,int,int,int,int,int,int,bool,bool,int,int,int)::target_buffer,
    1024);
  pwcIllusion = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_illusion");
  V_snwprintf(wcTarget, 256, &unk_336C3C8, v17._color[0], v17._color[1], v17._color[2]);
  _V_wcsncat(
    wcTarget,
    GenerateLogStringForDamage(wchar_t *,int,int,int,int,int,int,bool,bool,int,int,int)::target_buffer,
    256,
    0xFFFFFFFFLL);
  if ( bTargetIllusion )
    _V_wcsncat(wcTarget, pwcIllusion, 256, 0xFFFFFFFFLL);
  _V_wcsncat(wcTarget, &unk_336C260, 256, 0xFFFFFFFFLL);
  V_snwprintf(wcDamage, 64, &unk_336C440, damageColor._color[0], damageColor._color[1], damageColor._color[2]);
  if ( iHealth <= 0 )
    wcHealth[0] = 0;
  else
    V_snwprintf(wcHealth, 128, &unk_336C4D8, healColor._color[0], healColor._color[1], healColor._color[2]);
  if ( iInflictor == 0 )
  {
    wcInflictor[0] = 0;
    if ( iAttacker == 0 )
    {
      v28 = *(*g_pLocalize + 144LL);
      v29 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_is_hit");
      v28(g_pLocalize, wcOutput, iBufferSizeInBytes, v29, 3, wcTarget, wcDamage, wcHealth);
      return;
    }
    goto LABEL_16;
  }
  v19 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v20 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iInflictor,
            1);
    if ( v20 != 0 )
      v19 = v20;
  }
  CombatLog_Localize(
    v19,
    GenerateLogStringForDamage(wchar_t *,int,int,int,int,int,int,bool,bool,int,int,int)::inflictor_buffer,
    1024);
  V_snwprintf(
    wcInflictor,
    256,
    &unk_336C3C8,
    inflictorColor._color[0],
    inflictorColor._color[1],
    inflictorColor._color[2]);
  _V_wcsncat(
    wcInflictor,
    GenerateLogStringForDamage(wchar_t *,int,int,int,int,int,int,bool,bool,int,int,int)::inflictor_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcInflictor, &unk_336C260, 256, 0xFFFFFFFFLL);
  if ( iAttacker != 0 )
  {
LABEL_16:
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v21 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iAttacker,
              1);
      v22 = "";
      if ( v21 != 0 )
        v22 = v21;
    }
    else
    {
      v22 = "";
    }
    CombatLog_Localize(
      v22,
      GenerateLogStringForDamage(wchar_t *,int,int,int,int,int,int,bool,bool,int,int,int)::attacker_buffer,
      1024);
    v23 = "";
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v24 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iAttacker,
              1);
      if ( v24 != 0 )
        v23 = v24;
    }
    v25 = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v23);
    V_snwprintf(wcAttacker, 256, &unk_336C3C8, v25._color[0], v25._color[1], v25._color[2]);
    _V_wcsncat(
      wcAttacker,
      GenerateLogStringForDamage(wchar_t *,int,int,int,int,int,int,bool,bool,int,int,int)::attacker_buffer,
      256,
      0xFFFFFFFFLL);
    if ( bAttackerIllusion )
      _V_wcsncat(wcAttacker, pwcIllusion, 256, 0xFFFFFFFFLL);
    _V_wcsncat(wcAttacker, &unk_336C260, 256, 0xFFFFFFFFLL);
    v26 = *g_pLocalize;
    v35 = *(*g_pLocalize + 144LL);
    if ( iInflictor != 0 )
    {
      v27 = (*(v26 + 112))(g_pLocalize, "#dota_combat_log_hits_with");
      v35(g_pLocalize, wcOutput, iBufferSizeInBytes, v27, 5, wcAttacker, wcTarget, wcInflictor, wcDamage, wcHealth);
      return;
    }
    v30 = (*(v26 + 112))(g_pLocalize, "#dota_combat_log_hits");
    v31 = g_pLocalize;
    v32 = wcAttacker;
    v33 = wcTarget;
    goto LABEL_30;
  }
  v35 = *(*g_pLocalize + 144LL);
  v30 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_is_hit_with");
  v31 = g_pLocalize;
  v32 = wcTarget;
  v33 = wcInflictor;
LABEL_30:
  (v35)(v31, wcOutput, iBufferSizeInBytes, v30, 4, v32, v33, wcDamage, wcHealth);
}


// GenerateLogStringForHeal  (line 211, @0x000000000246efd0, libserver.so)  // inlines: GetName, V_wcscat_safe<256ul>
// calls: CombatLog_Localize, DOTA_CombatLog_Record::GetColorForName, V_snwprintf, _V_wcsncat
// callers: GetStringForCombatLogEntry
// strings: "#dota_combat_log_minion_heals", "#dota_combat_log_healed", "#dota_combat_log_heals"
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, GenerateLogStringForHeal(wchar_t *,int,int,int,int,int,int,int,int,int)::target_buffer, g_DOTACombatLogRecord, healColor, GenerateLogStringForHeal(wchar_t *,int,int,int,int,int,int,int,int,int)::inflictor_buffer, inflictorColor, GenerateLogStringForHeal(wchar_t *,int,int,int,int,int,int,int,int,int)::healer_buffer
void __fastcall GenerateLogStringForHeal(
        wchar_t *wcOutput,
        int iBufferSizeInBytes,
        int iMinute,
        int iSecond,
        int iMillisecond,
        int iHealer,
        int iTarget,
        int iInflictor,
        int iValue,
        int iHealth)
{
  const char *v12; // r13
  __int64 v13; // rax
  const char *v14; // r13
  __int64 v15; // rax
  Color ColorForName; // eax
  const char *v17; // r12
  __int64 v18; // rax
  const char *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // eax
  const char *v22; // r8
  Color v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  void (__fastcall *v26)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, int); // r14
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+8h] [rbp-F68h]
  Color v30; // [rsp+28h] [rbp-F48h]
  Color v31; // [rsp+30h] [rbp-F40h]
  void (__fastcall *v32)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *); // [rsp+30h] [rbp-F40h]
  void (__fastcall *v33)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *, wchar_t *); // [rsp+30h] [rbp-F40h]
  wchar_t wcHealAmount[64]; // [rsp+40h] [rbp-F30h] BYREF
  wchar_t wcHealth[128]; // [rsp+140h] [rbp-E30h] BYREF
  wchar_t wcTarget[256]; // [rsp+340h] [rbp-C30h] BYREF
  wchar_t wcInflictor[256]; // [rsp+740h] [rbp-830h] BYREF
  wchar_t wcHealer[268]; // [rsp+B40h] [rbp-430h] BYREF

  v12 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v13 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1,
            iSecond,
            iMillisecond);
    if ( v13 != 0 )
      v12 = v13;
  }
  CombatLog_Localize(v12, GenerateLogStringForHeal(wchar_t *,int,int,int,int,int,int,int,int,int)::target_buffer, 1024);
  v14 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v15 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1);
    if ( v15 != 0 )
      v14 = v15;
  }
  ColorForName = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v14);
  V_snwprintf(wcTarget, 256, &unk_336C3C8, ColorForName._color[0], ColorForName._color[1], ColorForName._color[2]);
  _V_wcsncat(
    wcTarget,
    GenerateLogStringForHeal(wchar_t *,int,int,int,int,int,int,int,int,int)::target_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcTarget, &unk_336C260, 256, 0xFFFFFFFFLL);
  V_snwprintf(wcHealAmount, 64, &unk_336C440, healColor._color[0], healColor._color[1], healColor._color[2]);
  if ( iHealth > 0 )
  {
    v29 = iHealth;
    V_snwprintf(wcHealth, 128, &unk_336C4D8, healColor._color[0], healColor._color[1], healColor._color[2]);
    if ( iInflictor != 0 )
      goto LABEL_9;
LABEL_21:
    v26 = *(*g_pLocalize + 144LL);
    v27 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_healed");
    v26(g_pLocalize, wcOutput, iBufferSizeInBytes, v27, 2, wcTarget, wcHealAmount, v29);
    return;
  }
  wcHealth[0] = 0;
  if ( iInflictor == 0 )
    goto LABEL_21;
LABEL_9:
  v17 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v18 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iInflictor,
            1);
    if ( v18 != 0 )
      v17 = v18;
  }
  CombatLog_Localize(
    v17,
    GenerateLogStringForHeal(wchar_t *,int,int,int,int,int,int,int,int,int)::inflictor_buffer,
    1024);
  V_snwprintf(
    wcInflictor,
    256,
    &unk_336C3C8,
    inflictorColor._color[0],
    inflictorColor._color[1],
    inflictorColor._color[2]);
  _V_wcsncat(
    wcInflictor,
    GenerateLogStringForHeal(wchar_t *,int,int,int,int,int,int,int,int,int)::inflictor_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcInflictor, &unk_336C260, 256, 0xFFFFFFFFLL);
  if ( iHealer != 0 )
  {
    v19 = "";
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v20 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iHealer,
              1);
      v19 = "";
      if ( v20 != 0 )
        v19 = v20;
    }
    v21 = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v19);
    v22 = "";
    v23 = v21;
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v30 = v21;
      v24 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iHealer,
              1,
              v21);
      v22 = "";
      v23 = v30;
      if ( v24 != 0 )
        v22 = v24;
    }
    v31 = v23;
    CombatLog_Localize(
      v22,
      GenerateLogStringForHeal(wchar_t *,int,int,int,int,int,int,int,int,int)::healer_buffer,
      1024);
    V_snwprintf(wcHealer, 256, &unk_336C3C8, v31._color[0], v31._color[1], v31._color[2]);
    _V_wcsncat(
      wcHealer,
      GenerateLogStringForHeal(wchar_t *,int,int,int,int,int,int,int,int,int)::healer_buffer,
      256,
      0xFFFFFFFFLL);
    _V_wcsncat(wcHealer, &unk_336C260, 256, 0xFFFFFFFFLL);
    v32 = *(*g_pLocalize + 144LL);
    v25 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_minion_heals");
    v32(g_pLocalize, wcOutput, iBufferSizeInBytes, v25, 5, wcHealer, wcInflictor, wcTarget, wcHealAmount, wcHealth);
  }
  else
  {
    v33 = *(*g_pLocalize + 144LL);
    v28 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_heals");
    v33(g_pLocalize, wcOutput, iBufferSizeInBytes, v28, 4, wcInflictor, wcTarget, wcHealAmount, wcHealth);
  }
}


// GenerateLogStringForDeath  (line 290, @0x000000000246f460, libserver.so)  // inlines: GetName, V_wcscat_safe<256ul>
// calls: CombatLog_Localize, DOTA_CombatLog_Record::GetColorForName, V_snwprintf, _V_wcsncat
// callers: GetStringForCombatLogEntry
// strings: "#dota_combat_log_killed_by", "#dota_combat_log_killed"
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, GenerateLogStringForDeath(wchar_t *,int,int,int,int,int,int,int)::target_buffer, g_DOTACombatLogRecord, GenerateLogStringForDeath(wchar_t *,int,int,int,int,int,int,int)::inflictor_buffer, inflictorColor, GenerateLogStringForDeath(wchar_t *,int,int,int,int,int,int,int)::attacker_buffer
void __fastcall GenerateLogStringForDeath(
        wchar_t *wcOutput,
        int iBufferSizeInBytes,
        int iMinute,
        int iSecond,
        int iMillisecond,
        int iTarget,
        int iAttacker,
        int iInflictor)
{
  const char *v10; // r13
  __int64 v12; // rax
  const char *v13; // r13
  __int64 v14; // rax
  Color ColorForName; // eax
  const char *v16; // r13
  __int64 v17; // rax
  wchar_t *v18; // r13
  __int64 v19; // rax
  const char *v20; // rdi
  const char *v21; // r13
  __int64 v22; // rax
  Color v23; // eax
  ILocalize *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  void (__fastcall *v27)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *); // r13
  __int64 v28; // rax
  __int64 v29; // rax
  void (__fastcall *v30)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *); // [rsp+18h] [rbp-C38h]
  wchar_t wcTarget[256]; // [rsp+20h] [rbp-C30h] BYREF
  wchar_t wcInflictor[256]; // [rsp+420h] [rbp-830h] BYREF
  wchar_t wcAttacker[268]; // [rsp+820h] [rbp-430h] BYREF

  v10 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v12 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1,
            iSecond,
            iMillisecond);
    if ( v12 != 0 )
      v10 = v12;
  }
  CombatLog_Localize(v10, GenerateLogStringForDeath(wchar_t *,int,int,int,int,int,int,int)::target_buffer, 1024);
  v13 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v14 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1);
    if ( v14 != 0 )
      v13 = v14;
  }
  ColorForName = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v13);
  V_snwprintf(wcTarget, 256, &unk_336C3C8, ColorForName._color[0], ColorForName._color[1], ColorForName._color[2]);
  _V_wcsncat(
    wcTarget,
    GenerateLogStringForDeath(wchar_t *,int,int,int,int,int,int,int)::target_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcTarget, &unk_336C260, 256, 0xFFFFFFFFLL);
  if ( iInflictor == 0 )
  {
    wcInflictor[0] = 0;
    if ( iAttacker == 0 )
    {
      v27 = *(*g_pLocalize + 144LL);
      v28 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_killed");
      v27(g_pLocalize, wcOutput, iBufferSizeInBytes, v28, 1, wcTarget);
      return;
    }
    goto LABEL_12;
  }
  v16 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v17 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iInflictor,
            1);
    if ( v17 != 0 )
      v16 = v17;
  }
  CombatLog_Localize(v16, GenerateLogStringForDeath(wchar_t *,int,int,int,int,int,int,int)::inflictor_buffer, 1024);
  v18 = wcInflictor;
  V_snwprintf(
    wcInflictor,
    256,
    &unk_336C3C8,
    inflictorColor._color[0],
    inflictorColor._color[1],
    inflictorColor._color[2]);
  _V_wcsncat(
    wcInflictor,
    GenerateLogStringForDeath(wchar_t *,int,int,int,int,int,int,int)::inflictor_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcInflictor, &unk_336C260, 256, 0xFFFFFFFFLL);
  if ( iAttacker != 0 )
  {
LABEL_12:
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v19 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iAttacker,
              1);
      v20 = "";
      if ( v19 != 0 )
        v20 = v19;
    }
    else
    {
      v20 = "";
    }
    CombatLog_Localize(v20, GenerateLogStringForDeath(wchar_t *,int,int,int,int,int,int,int)::attacker_buffer, 1024);
    v21 = "";
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v22 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iAttacker,
              1);
      if ( v22 != 0 )
        v21 = v22;
    }
    v23 = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v21);
    v18 = wcAttacker;
    V_snwprintf(wcAttacker, 256, &unk_336C3C8, v23._color[0], v23._color[1], v23._color[2]);
    _V_wcsncat(
      wcAttacker,
      GenerateLogStringForDeath(wchar_t *,int,int,int,int,int,int,int)::attacker_buffer,
      256,
      0xFFFFFFFFLL);
    _V_wcsncat(wcAttacker, &unk_336C260, 256, 0xFFFFFFFFLL);
    v24 = g_pLocalize;
    v25 = *g_pLocalize;
    v30 = *(*g_pLocalize + 144LL);
    if ( iInflictor != 0 )
    {
      v26 = (*(v25 + 112))(g_pLocalize, "#dota_combat_log_killed_by");
      v30(g_pLocalize, wcOutput, iBufferSizeInBytes, v26, 3, wcTarget, wcAttacker, wcInflictor);
      return;
    }
    goto LABEL_23;
  }
  v24 = g_pLocalize;
  v25 = *g_pLocalize;
  v30 = *(*g_pLocalize + 144LL);
LABEL_23:
  v29 = (*(v25 + 112))(v24, "#dota_combat_log_killed_by");
  (v30)(g_pLocalize, wcOutput, iBufferSizeInBytes, v29, 2, wcTarget, v18);
}


// GenerateLogStringForModifierAdd  (line 363, @0x000000000246f820, libserver.so)  // inlines: GetName, V_wcscat_safe<256ul>
// calls: CombatLog_Localize, DOTA_CombatLog_Record::GetColorForName, V_snwprintf, _V_wcsncat
// callers: GetStringForCombatLogEntry
// strings: "#dota_combat_log_receives_debuff_from", "#dota_combat_log_receives_debuff", "#dota_combat_log_illusion", "#dota_combat_log_receives_buff", "#dota_combat_log_receives_buff_from"
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, GenerateLogStringForModifierAdd(wchar_t *,int,int,int,int,int,int,bool,bool,int,int)::target_buffer, GenerateLogStringForModifierAdd(wchar_t *,int,int,int,int,int,int,bool,bool,int,int)::inflictor_buffer, g_DOTACombatLogRecord, inflictorColor, GenerateLogStringForModifierAdd(wchar_t *,int,int,int,int,int,int,bool,bool,int,int)::attacker_buffer
void __fastcall GenerateLogStringForModifierAdd(
        wchar_t *wcOutput,
        int iBufferSizeInBytes,
        int iMinute,
        int iSecond,
        int iMillisecond,
        int iTarget,
        int iAttacker,
        bool bAttackerIllusion,
        bool bTargetIllusion,
        int iInflictor,
        int iValue)
{
  const char *v12; // r13
  __int64 v14; // rax
  const char *v15; // r13
  __int64 v16; // rax
  const char *v17; // r13
  __int64 v18; // rax
  Color ColorForName; // eax
  const char *v20; // r14
  __int64 v21; // rax
  const char *v22; // r14
  __int64 v23; // rax
  Color v24; // eax
  const char *v25; // rsi
  __int64 v26; // rax
  const char *v27; // rsi
  void (__fastcall *v28)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *); // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void (__fastcall *v32)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *); // [rsp+10h] [rbp-C40h]
  wchar_t wcTarget[256]; // [rsp+20h] [rbp-C30h] BYREF
  wchar_t wcBuff[256]; // [rsp+420h] [rbp-830h] BYREF
  wchar_t wcAttacker[268]; // [rsp+820h] [rbp-430h] BYREF

  v12 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v14 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1,
            iSecond,
            iMillisecond);
    if ( v14 != 0 )
      v12 = v14;
  }
  CombatLog_Localize(
    v12,
    GenerateLogStringForModifierAdd(wchar_t *,int,int,int,int,int,int,bool,bool,int,int)::target_buffer,
    1024);
  v15 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v16 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iInflictor,
            1);
    if ( v16 != 0 )
      v15 = v16;
  }
  CombatLog_Localize(
    v15,
    GenerateLogStringForModifierAdd(wchar_t *,int,int,int,int,int,int,bool,bool,int,int)::inflictor_buffer,
    1024);
  v17 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v18 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1);
    if ( v18 != 0 )
      v17 = v18;
  }
  ColorForName = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v17);
  V_snwprintf(wcTarget, 256, &unk_336C3C8, ColorForName._color[0], ColorForName._color[1], ColorForName._color[2]);
  _V_wcsncat(
    wcTarget,
    GenerateLogStringForModifierAdd(wchar_t *,int,int,int,int,int,int,bool,bool,int,int)::target_buffer,
    256,
    0xFFFFFFFFLL);
  if ( bTargetIllusion )
  {
    v30 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_illusion");
    _V_wcsncat(wcTarget, v30, 256, 0xFFFFFFFFLL);
  }
  _V_wcsncat(wcTarget, &unk_336C260, 256, 0xFFFFFFFFLL);
  V_snwprintf(wcBuff, 256, &unk_336C3C8, inflictorColor._color[0], inflictorColor._color[1], inflictorColor._color[2]);
  _V_wcsncat(
    wcBuff,
    GenerateLogStringForModifierAdd(wchar_t *,int,int,int,int,int,int,bool,bool,int,int)::inflictor_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcBuff, &unk_336C260, 256, 0xFFFFFFFFLL);
  if ( iAttacker != 0 )
  {
    v20 = "";
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v21 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iAttacker,
              1);
      if ( v21 != 0 )
        v20 = v21;
    }
    CombatLog_Localize(
      v20,
      GenerateLogStringForModifierAdd(wchar_t *,int,int,int,int,int,int,bool,bool,int,int)::attacker_buffer,
      1024);
    v22 = "";
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v23 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iAttacker,
              1);
      if ( v23 != 0 )
        v22 = v23;
    }
    v24 = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v22);
    V_snwprintf(wcAttacker, 256, &unk_336C3C8, v24._color[0], v24._color[1], v24._color[2]);
    _V_wcsncat(
      wcAttacker,
      GenerateLogStringForModifierAdd(wchar_t *,int,int,int,int,int,int,bool,bool,int,int)::attacker_buffer,
      256,
      0xFFFFFFFFLL);
    if ( bAttackerIllusion )
    {
      v31 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_illusion");
      _V_wcsncat(wcAttacker, v31, 256, 0xFFFFFFFFLL);
    }
    _V_wcsncat(wcAttacker, &unk_336C260, 256, 0xFFFFFFFFLL);
    v25 = "#dota_combat_log_receives_debuff_from";
    v32 = *(*g_pLocalize + 144LL);
    if ( iValue <= 0 )
      v25 = "#dota_combat_log_receives_buff_from";
    v26 = (*(*g_pLocalize + 112LL))(g_pLocalize, v25);
    v32(g_pLocalize, wcOutput, iBufferSizeInBytes, v26, 3, wcTarget, wcBuff, wcAttacker);
  }
  else
  {
    v27 = "#dota_combat_log_receives_debuff";
    v28 = *(*g_pLocalize + 144LL);
    if ( iValue <= 0 )
      v27 = "#dota_combat_log_receives_buff";
    v29 = (*(*g_pLocalize + 112LL))(g_pLocalize, v27);
    v28(g_pLocalize, wcOutput, iBufferSizeInBytes, v29, 2, wcTarget, wcBuff);
  }
}


// GenerateLogStringForModifierRemove  (line 443, @0x000000000246fc00, libserver.so)  // inlines: GetName, V_wcscat_safe<256ul>
// calls: CombatLog_Localize, DOTA_CombatLog_Record::GetColorForName, V_snwprintf, _V_wcsncat
// callers: GetStringForCombatLogEntry
// strings: "#dota_combat_log_loses_debuff", "#dota_combat_log_loses_buff"
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, GenerateLogStringForModifierRemove(wchar_t *,int,int,int,int,int,int,int)::target_buffer, GenerateLogStringForModifierRemove(wchar_t *,int,int,int,int,int,int,int)::inflictor_buffer, g_DOTACombatLogRecord, inflictorColor
void __fastcall GenerateLogStringForModifierRemove(
        wchar_t *wcOutput,
        int iBufferSizeInBytes,
        int iMinute,
        int iSecond,
        int iMillisecond,
        int iTarget,
        int iInflictor,
        int iValue)
{
  const char *v11; // rbx
  __int64 v12; // rax
  const char *v13; // rbx
  __int64 v14; // rax
  const char *v15; // rbx
  __int64 v16; // rax
  Color ColorForName; // eax
  const char *v18; // rsi
  __int64 v19; // rax
  void (__fastcall *v20)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *); // [rsp+8h] [rbp-838h]
  wchar_t wcTarget[256]; // [rsp+10h] [rbp-830h] BYREF
  wchar_t wcBuff[268]; // [rsp+410h] [rbp-430h] BYREF

  v11 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v12 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1,
            iSecond,
            iMillisecond);
    if ( v12 != 0 )
      v11 = v12;
  }
  CombatLog_Localize(
    v11,
    GenerateLogStringForModifierRemove(wchar_t *,int,int,int,int,int,int,int)::target_buffer,
    1024);
  v13 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v14 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iInflictor,
            1);
    if ( v14 != 0 )
      v13 = v14;
  }
  CombatLog_Localize(
    v13,
    GenerateLogStringForModifierRemove(wchar_t *,int,int,int,int,int,int,int)::inflictor_buffer,
    1024);
  v15 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v16 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1);
    if ( v16 != 0 )
      v15 = v16;
  }
  ColorForName = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v15);
  V_snwprintf(wcTarget, 256, &unk_336C3C8, ColorForName._color[0], ColorForName._color[1], ColorForName._color[2]);
  _V_wcsncat(
    wcTarget,
    GenerateLogStringForModifierRemove(wchar_t *,int,int,int,int,int,int,int)::target_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcTarget, &unk_336C260, 256, 0xFFFFFFFFLL);
  V_snwprintf(wcBuff, 256, &unk_336C3C8, inflictorColor._color[0], inflictorColor._color[1], inflictorColor._color[2]);
  _V_wcsncat(
    wcBuff,
    GenerateLogStringForModifierRemove(wchar_t *,int,int,int,int,int,int,int)::inflictor_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcBuff, &unk_336C260, 256, 0xFFFFFFFFLL);
  v20 = *(*g_pLocalize + 144LL);
  if ( iValue <= 0 )
    v18 = "#dota_combat_log_loses_buff";
  else
    v18 = "#dota_combat_log_loses_debuff";
  v19 = (*(*g_pLocalize + 112LL))(g_pLocalize, v18);
  v20(g_pLocalize, wcOutput, iBufferSizeInBytes, v19, 2, wcTarget, wcBuff);
}


// GenerateLogStringForAbility  (line 480, @0x000000000246fe10, libserver.so)  // inlines: GetName, V_wcscat_safe<256ul>
// calls: CombatLog_Localize, DOTA_CombatLog_Record::GetColorForName, V_snwprintf, _V_wcsncat
// callers: GetStringForCombatLogEntry
// strings: "#dota_combat_log_ability_cast_target", "dota_combat_log_item_cast_target", "#dota_combat_log_ability_triggered", "#dota_combat_log_ability_triggered_target", "#dota_combat_log_ability_toggle_off", "#dota_combat_log_ability_toggle_on" (8 total)
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, GenerateLogStringForAbility(wchar_t *,int,int,int,int,int,int,int,int,bool)::attacker_buffer, GenerateLogStringForAbility(wchar_t *,int,int,int,int,int,int,int,int,bool)::ability_buffer, g_DOTACombatLogRecord, abilityColor, GenerateLogStringForAbility(wchar_t *,int,int,int,int,int,int,int,int,bool)::target_buffer
void __fastcall GenerateLogStringForAbility(
        wchar_t *wcOutput,
        int iBufferSizeInBytes,
        int iMinute,
        int iSecond,
        int iMillisecond,
        int iTarget,
        int iAttacker,
        int iInflictor,
        int iValue,
        bool bIsItem)
{
  const char *v13; // r12
  __int64 v14; // rax
  const char *v15; // r12
  __int64 v16; // rax
  const char *v17; // r12
  __int64 v18; // rax
  Color ColorForName; // eax
  const char *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  const char *v23; // r8
  Color v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  const char *v27; // rsi
  __int64 v28; // rax
  const char *v29; // rsi
  ILocalize *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  const char *v34; // rsi
  void (__fastcall *v35)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *); // r13
  __int64 v36; // rax
  Color v37; // [rsp+18h] [rbp-C48h]
  Color v38; // [rsp+20h] [rbp-C40h]
  void (__fastcall *v39)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *); // [rsp+20h] [rbp-C40h]
  void (__fastcall *v40)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *); // [rsp+28h] [rbp-C38h]
  void (__fastcall *v41)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *); // [rsp+28h] [rbp-C38h]
  wchar_t wcAttacker[256]; // [rsp+30h] [rbp-C30h] BYREF
  wchar_t wcAbility[256]; // [rsp+430h] [rbp-830h] BYREF
  wchar_t wcTarget[268]; // [rsp+830h] [rbp-430h] BYREF

  v13 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v14 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iAttacker,
            1,
            iSecond,
            iMillisecond);
    if ( v14 != 0 )
      v13 = v14;
  }
  CombatLog_Localize(
    v13,
    GenerateLogStringForAbility(wchar_t *,int,int,int,int,int,int,int,int,bool)::attacker_buffer,
    1024);
  v15 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v16 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iInflictor,
            1);
    if ( v16 != 0 )
      v15 = v16;
  }
  CombatLog_Localize(
    v15,
    GenerateLogStringForAbility(wchar_t *,int,int,int,int,int,int,int,int,bool)::ability_buffer,
    1024);
  v17 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v18 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iAttacker,
            1);
    if ( v18 != 0 )
      v17 = v18;
  }
  ColorForName = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v17);
  V_snwprintf(wcAttacker, 256, &unk_336C3C8, ColorForName._color[0], ColorForName._color[1], ColorForName._color[2]);
  _V_wcsncat(
    wcAttacker,
    GenerateLogStringForAbility(wchar_t *,int,int,int,int,int,int,int,int,bool)::attacker_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcAttacker, &unk_336C260, 256, 0xFFFFFFFFLL);
  V_snwprintf(wcAbility, 256, &unk_336C3C8, abilityColor._color[0], abilityColor._color[1], abilityColor._color[2]);
  _V_wcsncat(
    wcAbility,
    GenerateLogStringForAbility(wchar_t *,int,int,int,int,int,int,int,int,bool)::ability_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcAbility, &unk_336C260, 256, 0xFFFFFFFFLL);
  if ( iTarget != 0 )
  {
    v20 = "";
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v21 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iTarget,
              1);
      v20 = "";
      if ( v21 != 0 )
        v20 = v21;
    }
    v22 = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v20);
    v23 = "";
    v24 = v22;
    if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
    {
      v37 = v22;
      v25 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
              DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
              iTarget,
              1,
              v22);
      v23 = "";
      v24 = v37;
      if ( v25 != 0 )
        v23 = v25;
    }
    v38 = v24;
    CombatLog_Localize(
      v23,
      GenerateLogStringForAbility(wchar_t *,int,int,int,int,int,int,int,int,bool)::target_buffer,
      1024);
    V_snwprintf(wcTarget, 256, &unk_336C3C8, v38._color[0], v38._color[1], v38._color[2]);
    _V_wcsncat(
      wcTarget,
      GenerateLogStringForAbility(wchar_t *,int,int,int,int,int,int,int,int,bool)::target_buffer,
      256,
      0xFFFFFFFFLL);
    _V_wcsncat(wcTarget, &unk_336C260, 256, 0xFFFFFFFFLL);
    if ( iValue == 3 )
    {
      v41 = *(*g_pLocalize + 144LL);
      v33 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_ability_triggered_target");
      v41(g_pLocalize, wcOutput, iBufferSizeInBytes, v33, 3, wcAttacker, wcAbility, wcTarget);
    }
    else
    {
      v26 = *g_pLocalize;
      v27 = "dota_combat_log_item_cast_target";
      if ( !bIsItem )
        v27 = "#dota_combat_log_ability_cast_target";
      v39 = *(v26 + 144);
      v28 = (*(v26 + 112))(g_pLocalize, v27);
      v39(g_pLocalize, wcOutput, iBufferSizeInBytes, v28, 3, wcAttacker, wcAbility, wcTarget);
    }
    return;
  }
  if ( iValue == 1 )
  {
    v29 = "#dota_combat_log_ability_toggle_off";
    v30 = g_pLocalize;
    v31 = *g_pLocalize;
    v40 = *(*g_pLocalize + 144LL);
    goto LABEL_27;
  }
  if ( iValue > 1 )
  {
    if ( iValue == 2 )
    {
      v29 = "#dota_combat_log_ability_toggle_on";
      v30 = g_pLocalize;
      v31 = *g_pLocalize;
      v40 = *(*g_pLocalize + 144LL);
    }
    else
    {
      if ( iValue != 3 )
        return;
      v29 = "#dota_combat_log_ability_triggered";
      v30 = g_pLocalize;
      v31 = *g_pLocalize;
      v40 = *(*g_pLocalize + 144LL);
    }
LABEL_27:
    v32 = (*(v31 + 112))(v30, v29);
    v40(g_pLocalize, wcOutput, iBufferSizeInBytes, v32, 2, wcAttacker, wcAbility);
    return;
  }
  if ( iValue == 0 )
  {
    v34 = "#dota_combat_log_item_cast";
    if ( !bIsItem )
      v34 = "#dota_combat_log_ability_cast";
    v35 = *(*g_pLocalize + 144LL);
    v36 = (*(*g_pLocalize + 112LL))(g_pLocalize, v34);
    v35(g_pLocalize, wcOutput, iBufferSizeInBytes, v36, 2, wcAttacker, wcAbility);
  }
}


// GenerateLogStringForPurchase  (line 575, @0x00000000024702f0, libserver.so)  // inlines: GetName, V_wcscat_safe<256ul>
// calls: CombatLog_Localize, DOTA_CombatLog_Record::GetColorForName, V_snwprintf, _V_wcsncat
// callers: GetStringForCombatLogEntry
// strings: "#dota_combat_log_purchase"
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames, GenerateLogStringForPurchase(wchar_t *,int,int,int,int,int,int)::target_buffer, GenerateLogStringForPurchase(wchar_t *,int,int,int,int,int,int)::itemname_buffer, g_DOTACombatLogRecord, itemColor
void __fastcall GenerateLogStringForPurchase(
        wchar_t *wcOutput,
        int iBufferSizeInBytes,
        int iMinute,
        int iSecond,
        int iMillisecond,
        int iTarget,
        int iValue)
{
  const char *v9; // rbx
  __int64 v10; // rax
  const char *v11; // rbx
  __int64 v12; // rax
  const char *v13; // rbx
  __int64 v14; // rax
  Color ColorForName; // eax
  void (__fastcall *v16)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *); // r13
  __int64 v17; // rax
  wchar_t wcTarget[256]; // [rsp+10h] [rbp-830h] BYREF
  wchar_t wcItem[268]; // [rsp+410h] [rbp-430h] BYREF

  v9 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v10 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1,
            iSecond,
            iMillisecond);
    if ( v10 != 0 )
      v9 = v10;
  }
  CombatLog_Localize(v9, GenerateLogStringForPurchase(wchar_t *,int,int,int,int,int,int)::target_buffer, 1024);
  v11 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v12 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iValue,
            1);
    if ( v12 != 0 )
      v11 = v12;
  }
  CombatLog_Localize(v11, GenerateLogStringForPurchase(wchar_t *,int,int,int,int,int,int)::itemname_buffer, 1024);
  v13 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v14 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
            DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
            iTarget,
            1);
    if ( v14 != 0 )
      v13 = v14;
  }
  ColorForName = DOTA_CombatLog_Record::GetColorForName(&g_DOTACombatLogRecord, v13);
  V_snwprintf(wcTarget, 256, &unk_336C3C8, ColorForName._color[0], ColorForName._color[1], ColorForName._color[2]);
  _V_wcsncat(
    wcTarget,
    GenerateLogStringForPurchase(wchar_t *,int,int,int,int,int,int)::target_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcTarget, &unk_336C260, 256, 0xFFFFFFFFLL);
  V_snwprintf(wcItem, 256, &unk_336C3C8, itemColor._color[0], itemColor._color[1], itemColor._color[2]);
  _V_wcsncat(
    wcItem,
    GenerateLogStringForPurchase(wchar_t *,int,int,int,int,int,int)::itemname_buffer,
    256,
    0xFFFFFFFFLL);
  _V_wcsncat(wcItem, &unk_336C260, 256, 0xFFFFFFFFLL);
  v16 = *(*g_pLocalize + 144LL);
  v17 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_purchase");
  v16(g_pLocalize, wcOutput, iBufferSizeInBytes, v17, 2, wcTarget, wcItem);
}


// GenerateLogStringForPlayerStats  (line 602, @0x000000000246e7a0, libserver.so)
// calls: CDOTA_PlayerResource::GetPlayerName, V_snwprintf
// callers: GetStringForCombatLogEntry
// strings: "#dota_combat_log_playerstats"
// globals: GenerateLogStringForPlayerStats(wchar_t *,int,int,int,int,int,int,int,int,float,float)::player_name, damageColor, goldColor, xpColor
void __fastcall GenerateLogStringForPlayerStats(
        wchar_t *wcOutput,
        unsigned int iBufferSizeInBytes,
        int iMinute,
        int iSecond,
        int iMillisecond,
        int nPlayerID,
        float flGPM,
        float flXPM,
        int nKills,
        int nDeaths,
        int nAssists)
{
  void (__fastcall *v13)(ILocalize *, const char *, wchar_t *, __int64); // r12
  const char *PlayerName; // rax
  __int64 v15; // rax
  void (__fastcall *flXPMa)(ILocalize *, wchar_t *, _QWORD, __int64, __int64, wchar_t *, wchar_t *, wchar_t *); // [rsp+28h] [rbp-338h]
  wchar_t wcKDA[64]; // [rsp+30h] [rbp-330h] BYREF
  wchar_t wcGXPM[140]; // [rsp+130h] [rbp-230h] BYREF

  if ( g_pDOTAPlayerResource != 0 )
  {
    v13 = *(*g_pLocalize + 120LL);
    PlayerName = CDOTA_PlayerResource::GetPlayerName(g_pDOTAPlayerResource, nPlayerID);
    v13(
      g_pLocalize,
      PlayerName,
      GenerateLogStringForPlayerStats(wchar_t *,int,int,int,int,int,int,int,int,float,float)::player_name,
      1024);
    V_snwprintf(
      wcKDA,
      64,
      &unk_336C1C0,
      damageColor._color[0],
      damageColor._color[1],
      damageColor._color[2],
      nKills,
      nDeaths,
      nAssists);
    V_snwprintf(
      wcGXPM,
      128,
      &unk_336C280,
      goldColor._color[0],
      goldColor._color[1],
      goldColor._color[2],
      xpColor._color[0],
      xpColor._color[1],
      xpColor._color[2]);
    flXPMa = *(*g_pLocalize + 144LL);
    v15 = (*(*g_pLocalize + 112LL))(g_pLocalize, "#dota_combat_log_playerstats");
    flXPMa(
      g_pLocalize,
      wcOutput,
      iBufferSizeInBytes,
      v15,
      3,
      GenerateLogStringForPlayerStats(wchar_t *,int,int,int,int,int,int,int,int,float,float)::player_name,
      wcKDA,
      wcGXPM);
  }
}


// GetStringForCombatLogEntry  (line 622, @0x00000000024704e0, libserver.so)
// calls: floorf, GenerateLogStringForPlayerStats, GenerateLogStringForDamage, GenerateLogStringForHeal, GenerateLogStringForModifierAdd, GenerateLogStringForModifierRemove, GenerateLogStringForDeath, GenerateLogStringForAbility, GenerateLogStringForPurchase
// globals: jpt_247057D
void __fastcall GetStringForCombatLogEntry(
        const CMsgDOTACombatLogEntry *const entry,
        wchar_t *pBuffer,
        int iBufferSizeInBytes)
{
  int v6; // r15d
  int v7; // r14d
  float v8; // xmm0_4
  float v9; // xmm0_4
  int v10; // eax
  int v11; // r8d
  float x; // [rsp+3Ch] [rbp-34h]

  x = *(entry + 15);
  v6 = floorf(x / 60.0);
  v7 = floorf(x - (v6 * 60.0));
  v8 = floorf(x);
  v9 = floorf(100.0 * (x - v8));
  v10 = *(entry + 6);
  v11 = v9;
  switch ( v10 )
  {
    case 0:
      GenerateLogStringForDamage(
        pBuffer,
        iBufferSizeInBytes,
        v6,
        v7,
        v11,
        *(entry + 7),
        *(entry + 9),
        *(entry + 48),
        *(entry + 50),
        *(entry + 11),
        *(entry + 13),
        *(entry + 14));
      break;
    case 1:
      GenerateLogStringForHeal(
        pBuffer,
        iBufferSizeInBytes,
        v6,
        v7,
        v11,
        *(entry + 9),
        *(entry + 7),
        *(entry + 11),
        *(entry + 13),
        *(entry + 14));
      break;
    case 2:
      GenerateLogStringForModifierAdd(
        pBuffer,
        iBufferSizeInBytes,
        v6,
        v7,
        v11,
        *(entry + 7),
        *(entry + 9),
        *(entry + 48),
        *(entry + 50),
        *(entry + 11),
        *(entry + 13));
      break;
    case 3:
      GenerateLogStringForModifierRemove(
        pBuffer,
        iBufferSizeInBytes,
        v6,
        v7,
        v11,
        *(entry + 7),
        *(entry + 11),
        *(entry + 13));
      break;
    case 4:
      GenerateLogStringForDeath(pBuffer, iBufferSizeInBytes, v6, v7, v11, *(entry + 7), *(entry + 9), *(entry + 11));
      break;
    case 5:
    case 6:
    case 13:
      GenerateLogStringForAbility(
        pBuffer,
        iBufferSizeInBytes,
        v6,
        v7,
        v11,
        *(entry + 7),
        *(entry + 9),
        *(entry + 11),
        *(entry + 13),
        v10 == 6);
      break;
    case 11:
      GenerateLogStringForPurchase(pBuffer, iBufferSizeInBytes, v6, v7, v11, *(entry + 7), *(entry + 13));
      break;
    case 14:
      GenerateLogStringForPlayerStats(
        pBuffer,
        iBufferSizeInBytes,
        v6,
        v7,
        v11,
        *(entry + 7),
        *(entry + 17),
        *(entry + 18),
        *(entry + 8),
        *(entry + 9),
        *(entry + 10));
      break;
    default:
      return;
  }
}


// DOTA_CombatLog_Record::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 685, @0x000000000246e930, libserver.so)
void __cdecl DOTA_CombatLog_Record::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// DOTA_CombatLog_Record::DOTA_CombatLog_Record  (line 691, @0x0000000002473cc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ~CAutoGameSystem, ~CUtlVector
// calls: CountdownTimer::CountdownTimer, CUtlVectorBase<SCombatLogReference, CUtlMemory<SCombatLogReference, int> >::~CUtlVectorBase, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase, IGameSystem::~IGameSystem, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
void __fastcall DOTA_CombatLog_Record::DOTA_CombatLog_Record(DOTA_CombatLog_Record *const this)
{
  CountdownTimer *p_m_DeathShowTimer; // rdi

  this->_vptr_IGameSystem = &off_40DF950;
  p_m_DeathShowTimer = &this->m_DeathShowTimer;
  *&p_m_DeathShowTimer[-3].m_bUseGlobalsTime = 0;
  p_m_DeathShowTimer[-2]._vptr_CountdownTimer = 0;
  p_m_DeathShowTimer[-2].m_duration.m_Value = 0.0;
  LODWORD(p_m_DeathShowTimer[-2].m_timestamp.m_Value) = 0x4000;
  *&p_m_DeathShowTimer[-2].m_bUseGlobalsTime = 0;
  p_m_DeathShowTimer[-1]._vptr_CountdownTimer = 0;
  p_m_DeathShowTimer[-1].m_duration.m_Value = 0.0;
  p_m_DeathShowTimer[-1].m_timestamp.m_Value = 0.0;
  CountdownTimer::CountdownTimer(p_m_DeathShowTimer);
  this->m_vecFightInfo.m_Size = 0;
  this->m_vecFightInfo.m_Memory.m_pMemory = 0;
  this->m_vecFightInfo.m_Memory.m_nAllocationCount = 0;
  this->m_vecFightInfo.m_Memory.m_nGrowSize = 0;
  this->m_vecActiveFights.m_Size = 0;
  this->m_vecActiveFights.m_Memory.m_pMemory = 0;
  this->m_vecActiveFights.m_Memory.m_nAllocationCount = 0;
  this->m_vecActiveFights.m_Memory.m_nGrowSize = 0;
  this->m_hCombatLog = 0;
}


// DOTA_CombatLog_Record::Init  (line 703, @0x0000000002462600, libserver.so)
bool __fastcall DOTA_CombatLog_Record::Init(DOTA_CombatLog_Record *const this)
{
  return 1;
}


// DOTA_CombatLog_Record::Clear  (line 708, @0x0000000002473ba0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlVectorBase<sFightInfo, CUtlMemory<sFightInfo, int> >::RemoveAll, CUtlMemory<unsigned char, int>::Purge
void __fastcall DOTA_CombatLog_Record::Clear(DOTA_CombatLog_Record *const this)
{
  CUtlVector<sFightInfo,CUtlMemory<sFightInfo,int> > *p_m_vecFightInfo; // rdi
  bool v3; // zf

  p_m_vecFightInfo = &this->m_vecFightInfo;
  p_m_vecFightInfo[-3].m_Memory.m_nAllocationCount = 0;
  CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::RemoveAll(p_m_vecFightInfo);
  CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::RemoveAll(&this->m_vecActiveFights);
  v3 = (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MemoryStack.m_Size = 0;
  if ( v3 )
    CUtlMemory<unsigned char,int>::Purge(&this->m_MemoryStack.m_Memory);
}


// DOTA_CombatLog_Record::GameInit  (line 718, @0x0000000002462610, libserver.so)
void __fastcall DOTA_CombatLog_Record::GameInit(DOTA_CombatLog_Record *const this, const EventGameInit_t *const msg)
{
  this->m_bScanPending = 0;
}


// DOTA_CombatLog_Record::GameShutdown  (line 752, @0x0000000002473bf0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlVectorBase<sFightInfo, CUtlMemory<sFightInfo, int> >::RemoveAll, CUtlMemory<sFightInfo, int>::Purge, CUtlMemory<unsigned char, int>::Purge, CUtlMemory<SCombatLogReference, int>::Purge
void __fastcall DOTA_CombatLog_Record::GameShutdown(
        DOTA_CombatLog_Record *const this,
        const EventGameShutdown_t *const msg)
{
  bool v3; // zf

  this->m_vecEntryReferences.m_Size = 0;
  if ( (this->m_vecEntryReferences.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<SCombatLogReference,int>::Purge(&this->m_vecEntryReferences.m_Memory);
  v3 = (this->m_MemoryStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MemoryStack.m_Size = 0;
  if ( v3 )
    CUtlMemory<unsigned char,int>::Purge(&this->m_MemoryStack.m_Memory);
  CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::RemoveAll(&this->m_vecFightInfo);
  if ( (this->m_vecFightInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<sFightInfo,int>::Purge(&this->m_vecFightInfo.m_Memory);
  CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::RemoveAll(&this->m_vecActiveFights);
  if ( (this->m_vecActiveFights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<sFightInfo,int>::Purge(&this->m_vecActiveFights.m_Memory);
  if ( this->m_hCombatLog != 0 )
  {
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem);
    this->m_hCombatLog = 0;
  }
}


// DOTA_CombatLog_Record::Update  (line 773, @0x0000000002462620, libserver.so)
void __fastcall DOTA_CombatLog_Record::Update(DOTA_CombatLog_Record *const this, const EventClientUpdate_t *const msg)
{
  ;
}


// DOTA_CombatLog_Record::InitializeStringTable  (line 831, @0x000000000246e940, libserver.so)
void __fastcall DOTA_CombatLog_Record::InitializeStringTable(DOTA_CombatLog_Record *const this)
{
  ;
}


// DOTA_CombatLog_Record::ShowDeathLog  (line 988, @0x000000000246e950, libserver.so)  // inlines: NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now
void __fastcall DOTA_CombatLog_Record::ShowDeathLog(DOTA_CombatLog_Record *const this, float a2, float fDelay)
{
  CountdownTimer *p_m_DeathShowTimer; // r12
  double v5; // xmm0_8
  float v6; // [rsp+8h] [rbp-18h]

  p_m_DeathShowTimer = &this->m_DeathShowTimer;
  *&v5 = CountdownTimer::Now(&this->m_DeathShowTimer) + a2;
  if ( *&v5 != this->m_DeathShowTimer.m_timestamp.m_Value )
  {
    v6 = *&v5;
    (*(this->m_DeathShowTimer._vptr_CountdownTimer + 2))(p_m_DeathShowTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v5 = LODWORD(v6);
    this->m_DeathShowTimer.m_timestamp.m_Value = v6;
  }
  if ( a2 != this->m_DeathShowTimer.m_duration.m_Value )
  {
    (*(this->m_DeathShowTimer._vptr_CountdownTimer + 2))(p_m_DeathShowTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v5, a2);
    this->m_DeathShowTimer.m_duration.m_Value = a2;
  }
}


// DOTA_CombatLog_Record::GetColorForName  (line 994, @0x000000000246ea00, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: CDOTA_PlayerResource::HasSelectedHero, CDOTA_PlayerResource::GetSelectedHeroName, strcmp, CDOTA_PlayerResource::GetPlayerColor
// callers: GenerateLogStringForDamage, GenerateLogStringForHeal, GenerateLogStringForDeath, GenerateLogStringForModifierAdd, GenerateLogStringForModifierRemove, GenerateLogStringForAbility, GenerateLogStringForPurchase
Color __fastcall DOTA_CombatLog_Record::GetColorForName(DOTA_CombatLog_Record *const this, const char *pName)
{
  int i; // ebx
  const char *SelectedHeroName; // rax

  for ( i = 0; i != 24; ++i )
  {
    if ( CDOTA_PlayerResource::HasSelectedHero(g_pDOTAPlayerResource, i) )
    {
      SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, i);
      if ( SelectedHeroName == pName || strcmp(SelectedHeroName, pName) == 0 )
        return CDOTA_PlayerResource::GetPlayerColor(g_pDOTAPlayerResource, i);
    }
  }
  return -1;
}


// DOTA_CombatLog_Record::GetName  (line 1011, @0x00000000024707a0, libserver.so)
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
const char *__fastcall DOTA_CombatLog_Record::GetName(const DOTA_CombatLog_Record *const this, int iIndex)
{
  const char *v2; // rbx
  const char *v3; // rax

  v2 = "";
  if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
  {
    v3 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
           DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
           iIndex,
           1);
    if ( v3 != 0 )
      return v3;
  }
  return v2;
}


// DOTA_CombatLog_Record::FindNameIndex  (line 1026, @0x00000000024707e0, libserver.so)
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
int __fastcall DOTA_CombatLog_Record::FindNameIndex(DOTA_CombatLog_Record *const this, const char *pszName)
{
  if ( pszName != 0 )
    return (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames);
  else
    return 0xFFFF;
}


// DOTA_CombatLog_Record::HandleCombatLogData  (line 1169, @0x0000000002490bb0, libserver.so)
// calls: DOTA_CombatLog_Record::AddEntry, DOTA_CombatLog_Record::ProcessEntry
// callers: BroadcastCombatLogMessage
void __fastcall DOTA_CombatLog_Record::HandleCombatLogData(
        DOTA_CombatLog_Record *const this,
        const CMsgDOTACombatLogEntry *const msg)
{
  int v3; // eax

  v3 = DOTA_CombatLog_Record::AddEntry(this, msg);
  if ( v3 != -1 )
    DOTA_CombatLog_Record::ProcessEntry(this, v3);
}


// DOTA_CombatLog_Record::ProcessEntry  (line 1227, @0x000000000248fd00, libserver.so)  // inlines: AddHeroDeath, AddInvolvedHero, AddToTail, CopyConstruct<sFightInfo>, Element, FindEventTimeDelta, GetAttackingHero, GetEntryType, GetTargetHero, GrowMemory, HasInvolvedHero, operator[], sFightInfo
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, DOTA_CombatLog_Record::GetEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, memcpy, CUtlVectorBase<sFightInfo, CUtlMemory<sFightInfo, int> >::Remove, DOTA_CombatLog_Record::FindTeamNumberForName, DOTA_CombatLog_Record::GetAttackingHero, DOTA_CombatLog_Record::FindEventTimeDelta, _Unwind_Resume, CUtlMemory<sFightInfo, int>::Grow
// callers: DOTA_CombatLog_Record::HandleCombatLogData
void __fastcall DOTA_CombatLog_Record::ProcessEntry(DOTA_CombatLog_Record *const this, int iEntry)
{
  int v4; // eax
  int m_Size; // eax
  char v6; // r13
  __int64 v7; // r14
  int iLastEntry; // r13d
  __int64 v9; // r13
  sFightInfo *v10; // r15
  int v11; // eax
  int n; // r12d
  __int64 v13; // r11
  int v14; // r13d
  int v15; // r9d
  __int64 v16; // r10
  sFightInfo *v17; // rdi
  sFightInfo *v18; // rsi
  sFightInfo *v19; // rcx
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // rdx
  unsigned __int64 v25; // r12
  sFightInfo *v26; // rcx
  int v27; // r9d
  sFightInfo *v28; // rax
  __int64 v29; // rax
  int v30; // esi
  int v31; // r9d
  __int64 ii; // rax
  int v33; // esi
  int v34; // eax
  sFightInfo *v35; // rax
  int v36; // esi
  int v37; // r12d
  unsigned int v38; // ecx
  sFightInfo *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  sFightInfo *v43; // rcx
  sFightInfo *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  int iFirstEntry; // edx
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // r12
  sFightInfo *v51; // rcx
  int TeamNumberForName; // r14d
  int v53; // eax
  sFightInfo *v54; // rax
  sFightInfo *v55; // rdx
  __int64 v56; // rdx
  int v57; // ecx
  int v58; // r13d
  sFightInfo *v59; // r13
  float v60; // xmm1_4
  __int64 v61; // r13
  sFightInfo *m_pMemory; // rdx
  int v63; // esi
  int *deathHeroNames; // rax
  int *involvedHeroNames; // rdx
  int *v66; // rdi
  int *v67; // rcx
  __int64 v68; // rax
  int v69; // edx
  int *v70; // rcx
  sFightInfo *v71; // rax
  __int64 i; // rax
  int v73; // edx
  int v74; // edx
  __int64 v75; // rax
  __int64 j; // rax
  int v77; // edx
  __int64 k; // rax
  int v79; // edx
  __int64 m; // rax
  int v81; // edx
  int v82; // r15d
  uint16 m_unType; // ax
  int v84; // r13d
  int AttackingHero; // eax
  sFightInfo *v86; // rdx
  sFightInfo *v87; // rdx
  int v88; // eax
  sFightInfo *v89; // rdi
  __int64 v90; // rax
  int v91; // edx
  __int64 v92; // rdx
  int v93; // ecx
  int nAttackerTeamNumber; // [rsp+8h] [rbp-528h]
  sFightInfo *nAttackerTeamNumbera; // [rsp+8h] [rbp-528h]
  float v96; // [rsp+18h] [rbp-518h]
  int iActiveFightIndex; // [rsp+28h] [rbp-508h]
  __int64 iActiveFightIndexa; // [rsp+28h] [rbp-508h]
  int iName; // [rsp+30h] [rbp-500h]
  int iNamea; // [rsp+30h] [rbp-500h]
  int nAttackingHero; // [rsp+40h] [rbp-4F0h]
  int v103; // [rsp+48h] [rbp-4E8h]
  _BYTE v104[24]; // [rsp+50h] [rbp-4E0h] BYREF
  unsigned int v105; // [rsp+68h] [rbp-4C8h]
  int v106; // [rsp+6Ch] [rbp-4C4h]
  int v107; // [rsp+74h] [rbp-4BCh]
  char v108; // [rsp+81h] [rbp-4AFh]
  char v109; // [rsp+82h] [rbp-4AEh]
  char v110; // [rsp+83h] [rbp-4ADh]
  float v111; // [rsp+8Ch] [rbp-4A4h]
  _BYTE v112[60]; // [rsp+140h] [rbp-3F0h] BYREF
  float v113; // [rsp+17Ch] [rbp-3B4h]
  float v114; // [rsp+19Ch] [rbp-394h]
  _BYTE v115[24]; // [rsp+230h] [rbp-300h] BYREF
  unsigned int v116; // [rsp+248h] [rbp-2E8h]
  int v117; // [rsp+24Ch] [rbp-2E4h]
  int v118; // [rsp+254h] [rbp-2DCh]
  char v119; // [rsp+261h] [rbp-2CFh]
  char v120; // [rsp+262h] [rbp-2CEh]
  char v121; // [rsp+263h] [rbp-2CDh]
  float v122; // [rsp+26Ch] [rbp-2C4h]
  sFightInfo firstEntry; // [rsp+320h] [rbp-210h] BYREF
  _BYTE v124[28]; // [rsp+410h] [rbp-120h] BYREF
  int v125; // [rsp+42Ch] [rbp-104h]
  int v126; // [rsp+434h] [rbp-FCh]
  char v127; // [rsp+441h] [rbp-EFh]
  char v128; // [rsp+442h] [rbp-EEh]
  char v129; // [rsp+443h] [rbp-EDh]
  float v130; // [rsp+44Ch] [rbp-E4h]
  float v131; // [rsp+46Ch] [rbp-C4h]

  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v104);
  DOTA_CombatLog_Record::GetEntry(this, iEntry, v104);
  v103 = -1;
  if ( v109 == 0 )
  {
    v4 = -1;
    if ( v110 != 0 )
      v4 = v106;
    v103 = v4;
  }
  if ( v108 != 0 )
    nAttackingHero = v107;
  else
    nAttackingHero = DOTA_CombatLog_Record::GetAttackingHero(this, v104);
  if ( v105 != 4 || v103 == -1 )
  {
LABEL_8:
    m_Size = this->m_vecActiveFights.m_Size;
    goto LABEL_9;
  }
  v61 = this->m_vecActiveFights.m_Size;
  if ( v61 > 0 )
  {
    m_pMemory = this->m_vecActiveFights.m_Memory.m_pMemory;
    v63 = 0;
    deathHeroNames = m_pMemory->deathHeroNames;
    involvedHeroNames = m_pMemory->involvedHeroNames;
    do
    {
      v66 = deathHeroNames - 26;
      if ( nAttackingHero != -1 )
      {
        v67 = involvedHeroNames;
        do
        {
          if ( nAttackingHero == *v67 )
          {
LABEL_124:
            v68 = 0;
            while ( 1 )
            {
              v69 = v66[v68 + 26];
              if ( v103 == v69 )
                goto LABEL_10;
              if ( v69 == -1 )
              {
                v66[v68 + 26] = v103;
                goto LABEL_8;
              }
              if ( ++v68 == 24 )
                goto LABEL_10;
            }
          }
          ++v67;
        }
        while ( v67 != deathHeroNames );
      }
      v70 = involvedHeroNames;
      do
      {
        if ( v103 == *v70 )
          goto LABEL_124;
        ++v70;
      }
      while ( v70 != deathHeroNames );
      ++v63;
      deathHeroNames += 52;
      involvedHeroNames += 52;
    }
    while ( v63 != v61 );
  }
  v71 = firstEntry.involvedHeroNames;
  do
  {
    v71->iFirstEntry = -1;
    v71 = (v71 + 4);
    v71->involvedHeroNames[21] = -1;
  }
  while ( v71 != firstEntry.deathHeroNames );
  for ( i = 0; i != 24; ++i )
  {
    v73 = firstEntry.involvedHeroNames[i];
    if ( v103 == v73 )
      break;
    if ( v73 == -1 )
    {
      firstEntry.involvedHeroNames[i] = v103;
      break;
    }
  }
  for ( j = 0; j != 24; ++j )
  {
    v77 = firstEntry.deathHeroNames[j];
    if ( v103 == v77 )
      break;
    if ( v77 == -1 )
    {
      firstEntry.deathHeroNames[j] = v103;
      break;
    }
  }
  if ( nAttackingHero != -1 )
  {
    for ( k = 0; k != 24; ++k )
    {
      v79 = firstEntry.involvedHeroNames[k];
      if ( nAttackingHero == v79 )
        break;
      if ( v79 == -1 )
      {
        firstEntry.involvedHeroNames[k] = nAttackingHero;
        break;
      }
    }
  }
  v82 = iEntry - 1;
  if ( iEntry - 1 < 0 )
    goto LABEL_196;
  iActiveFightIndexa = v82;
  while ( 1 )
  {
    m_unType = this->m_vecEntryReferences.m_Memory.m_pMemory[iActiveFightIndexa].m_unType;
    if ( m_unType > 1u && (m_unType - 4) > 2u )
      goto LABEL_193;
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v124);
    DOTA_CombatLog_Record::GetEntry(this, v82, v124);
    if ( (v111 - dota_combatlog_fight_idle_time.m_pParent->m_Value.m_fValue) > v130 )
      break;
    v84 = -1;
    if ( v128 == 0 && v129 != 0 )
      v84 = v125;
    if ( v127 != 0 )
      AttackingHero = v126;
    else
      AttackingHero = DOTA_CombatLog_Record::GetAttackingHero(this, v124);
    if ( v84 != -1 )
    {
      v86 = firstEntry.involvedHeroNames;
      while ( v84 != v86->iFirstEntry )
      {
        v86 = (v86 + 4);
        if ( firstEntry.deathHeroNames == v86 )
          goto LABEL_188;
      }
      v92 = 0;
      if ( AttackingHero == -1 )
        goto LABEL_192;
      do
      {
        v93 = firstEntry.involvedHeroNames[v92];
        if ( AttackingHero == v93 )
          break;
        if ( v93 == -1 )
        {
          firstEntry.involvedHeroNames[v92] = AttackingHero;
          break;
        }
        ++v92;
      }
      while ( v92 != 24 );
LABEL_189:
      v87 = firstEntry.involvedHeroNames;
      while ( AttackingHero != v87->iFirstEntry )
      {
        v87 = (v87 + 4);
        if ( firstEntry.deathHeroNames == v87 )
          goto LABEL_192;
      }
      v90 = 0;
      if ( v84 != -1 )
      {
        while ( 1 )
        {
          v91 = firstEntry.involvedHeroNames[v90];
          if ( v84 == v91 )
            break;
          if ( v91 == -1 )
          {
            firstEntry.involvedHeroNames[v90] = v84;
            goto LABEL_192;
          }
          if ( ++v90 == 24 )
            goto LABEL_192;
        }
      }
      goto LABEL_192;
    }
LABEL_188:
    if ( AttackingHero != -1 )
      goto LABEL_189;
LABEL_192:
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v124);
LABEL_193:
    --iActiveFightIndexa;
    if ( --v82 == -1 )
    {
      v61 = this->m_vecActiveFights.m_Size;
      goto LABEL_196;
    }
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v124);
  v61 = this->m_vecActiveFights.m_Size;
LABEL_196:
  v88 = v61;
  if ( v61 == this->m_vecActiveFights.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<sFightInfo,int>::Grow(&this->m_vecActiveFights.m_Memory, 1);
    v88 = this->m_vecActiveFights.m_Size;
  }
  m_Size = v88 + 1;
  this->m_vecActiveFights.m_Size = m_Size;
  v89 = &this->m_vecActiveFights.m_Memory.m_pMemory[v61];
  if ( v89 != 0 )
  {
    firstEntry.fStartTime = 0.0;
    firstEntry.fEndTime = 0.0;
    firstEntry.iFirstEntry = iEntry;
    firstEntry.iLastEntry = iEntry;
    memcpy(v89, &firstEntry, sizeof(sFightInfo));
    m_Size = this->m_vecActiveFights.m_Size;
  }
LABEL_9:
  if ( m_Size <= 0 )
    goto LABEL_60;
LABEL_10:
  v6 = 0;
  iActiveFightIndex = 0;
  while ( 2 )
  {
    if ( v105 <= 1 )
      goto LABEL_90;
    if ( v105 != 4 )
    {
      if ( v105 - 5 > 1 )
        goto LABEL_14;
LABEL_90:
      if ( nAttackingHero == -1 )
        goto LABEL_27;
    }
    if ( v103 != -1 )
    {
      v49 = 0;
      v50 = iActiveFightIndex;
      v51 = &this->m_vecActiveFights.m_Memory.m_pMemory[v50];
      while ( v103 != v51->involvedHeroNames[v49] )
      {
        if ( ++v49 == 24 )
          goto LABEL_14;
      }
      if ( v105 == 4 )
      {
        for ( m = 0; m != 24; ++m )
        {
          v81 = v51->deathHeroNames[m];
          if ( v103 == v81 )
            break;
          if ( v81 == -1 )
          {
            v51->deathHeroNames[m] = v103;
            break;
          }
        }
      }
      TeamNumberForName = DOTA_CombatLog_Record::FindTeamNumberForName(this, nAttackingHero);
      v53 = DOTA_CombatLog_Record::FindTeamNumberForName(this, v103);
      if ( v53 == 3 && TeamNumberForName == 2 || v53 == 2 && TeamNumberForName == 3 )
      {
        v54 = &this->m_vecActiveFights.m_Memory.m_pMemory[v50];
        v55 = v54;
        if ( nAttackingHero == -1 )
        {
LABEL_105:
          v55->iLastEntry = iEntry;
        }
        else
        {
          v56 = 0;
          while ( 1 )
          {
            v57 = v54->involvedHeroNames[v56];
            if ( nAttackingHero == v57 )
            {
LABEL_104:
              v55 = &this->m_vecActiveFights.m_Memory.m_pMemory[v50];
              goto LABEL_105;
            }
            if ( v57 == -1 )
              break;
            if ( ++v56 == 24 )
              goto LABEL_104;
          }
          v54->involvedHeroNames[v56] = nAttackingHero;
          this->m_vecActiveFights.m_Memory.m_pMemory[v50].iLastEntry = iEntry;
        }
      }
    }
LABEL_14:
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v112);
    v7 = iActiveFightIndex;
    DOTA_CombatLog_Record::GetEntry(this, this->m_vecActiveFights.m_Memory.m_pMemory[v7].iLastEntry, v112);
    if ( v111 <= (v113 + dota_combatlog_fight_idle_time.m_pParent->m_Value.m_fValue) )
      goto LABEL_26;
    iLastEntry = this->m_vecActiveFights.m_Memory.m_pMemory[v7].iLastEntry;
    if ( iLastEntry < 0 )
      goto LABEL_21;
    while ( 2 )
    {
      CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v115);
      DOTA_CombatLog_Record::GetEntry(this, iLastEntry, v115);
      if ( v116 <= 1 || v116 - 4 <= 2 )
      {
        v37 = -1;
        if ( v120 == 0 && v121 != 0 )
          v37 = v117;
        if ( v119 != 0 )
        {
          v38 = v116;
          iName = v118;
        }
        else
        {
          iName = DOTA_CombatLog_Record::GetAttackingHero(this, v115);
          v38 = v116;
        }
        if ( v38 == 4 || iName != -1 )
        {
          if ( v37 != -1 )
          {
            v39 = &this->m_vecActiveFights.m_Memory.m_pMemory[v7];
            v40 = 0;
            while ( v37 != v39->involvedHeroNames[v40] )
            {
              if ( ++v40 == 24 )
                goto LABEL_18;
            }
            v41 = 0;
            if ( v38 == 4 )
            {
              do
              {
                v48 = v39->deathHeroNames[v41];
                if ( v37 == v48 )
                  break;
                if ( v48 == -1 )
                {
                  v39->deathHeroNames[v41] = v37;
                  break;
                }
                ++v41;
              }
              while ( v41 != 24 );
            }
            nAttackerTeamNumber = DOTA_CombatLog_Record::FindTeamNumberForName(this, iName);
            v42 = DOTA_CombatLog_Record::FindTeamNumberForName(this, v37);
            if ( v42 == 3 && nAttackerTeamNumber == 2 || v42 == 2 && nAttackerTeamNumber == 3 )
            {
              v43 = &this->m_vecActiveFights.m_Memory.m_pMemory[v7];
              v44 = v43;
              if ( iName != -1 )
              {
                v45 = 0;
                while ( 1 )
                {
                  v46 = v43->involvedHeroNames[v45];
                  if ( iName == v46 )
                  {
LABEL_81:
                    v44 = &this->m_vecActiveFights.m_Memory.m_pMemory[v7];
                    goto LABEL_82;
                  }
                  if ( v46 == -1 )
                    break;
                  if ( ++v45 == 24 )
                    goto LABEL_81;
                }
                v43->involvedHeroNames[v45] = iName;
                v44 = &this->m_vecActiveFights.m_Memory.m_pMemory[v7];
              }
LABEL_82:
              iFirstEntry = iLastEntry;
              if ( v44->iFirstEntry <= iLastEntry )
                iFirstEntry = v44->iFirstEntry;
              v44->iFirstEntry = iFirstEntry;
            }
          }
          break;
        }
LABEL_20:
        --iLastEntry;
        CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v115);
        if ( iLastEntry == -1 )
          goto LABEL_21;
        continue;
      }
      break;
    }
LABEL_18:
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(&firstEntry);
    DOTA_CombatLog_Record::GetEntry(
      this,
      this->m_vecActiveFights.m_Memory.m_pMemory[iActiveFightIndex].iFirstEntry,
      &firstEntry);
    if ( (*&firstEntry.involvedHeroNames[13] - dota_combatlog_fight_idle_time.m_pParent->m_Value.m_fValue) <= v122 )
    {
      CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(&firstEntry);
      goto LABEL_20;
    }
    nAttackerTeamNumbera = &this->m_vecActiveFights.m_Memory.m_pMemory[v7];
    v58 = nAttackerTeamNumbera->iFirstEntry;
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v124);
    DOTA_CombatLog_Record::GetEntry(this, v58, v124);
    v96 = v131 - 3.0;
    if ( v58 > 0 && v58 < this->m_vecEntryReferences.m_Size )
    {
      iNamea = v58;
      while ( 1 )
      {
        DOTA_CombatLog_Record::GetEntry(this, iNamea, v124);
        if ( v96 > v131 )
          break;
        if ( --iNamea == 0 || iNamea >= this->m_vecEntryReferences.m_Size )
          goto LABEL_115;
      }
      v58 = iNamea;
    }
LABEL_115:
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v124);
    nAttackerTeamNumbera->iFirstEntry = v58;
    v59 = &this->m_vecActiveFights.m_Memory.m_pMemory[v7];
    v59->iLastEntry = DOTA_CombatLog_Record::FindEventTimeDelta(this, v59->iLastEntry, 1.0, v60);
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(&firstEntry);
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v115);
LABEL_21:
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v124);
    DOTA_CombatLog_Record::GetEntry(
      this,
      this->m_vecActiveFights.m_Memory.m_pMemory[iActiveFightIndex].iFirstEntry,
      v124);
    DOTA_CombatLog_Record::GetEntry(this, this->m_vecActiveFights.m_Memory.m_pMemory[v7].iLastEntry, v112);
    this->m_vecActiveFights.m_Memory.m_pMemory[v7].fStartTime = v131 - this->m_fTimeDelta;
    this->m_vecActiveFights.m_Memory.m_pMemory[v7].fEndTime = v114 - this->m_fTimeDelta;
    v9 = this->m_vecFightInfo.m_Size;
    v10 = this->m_vecActiveFights.m_Memory.m_pMemory;
    v11 = this->m_vecFightInfo.m_Size;
    if ( v9 == this->m_vecFightInfo.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<sFightInfo,int>::Grow(&this->m_vecFightInfo.m_Memory, 1);
      v11 = this->m_vecFightInfo.m_Size;
    }
    this->m_vecFightInfo.m_Size = v11 + 1;
    if ( &this->m_vecFightInfo.m_Memory.m_pMemory[v9] != 0 )
      memcpy(
        &this->m_vecFightInfo.m_Memory.m_pMemory[v9],
        &v10[v7],
        sizeof(this->m_vecFightInfo.m_Memory.m_pMemory[v9]));
    v6 = 1;
    CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::Remove(&this->m_vecActiveFights, iActiveFightIndex--);
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v124);
LABEL_26:
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v112);
LABEL_27:
    if ( this->m_vecActiveFights.m_Size > ++iActiveFightIndex )
      continue;
    break;
  }
  if ( v6 != 0 )
  {
    for ( n = this->m_vecFightInfo.m_Size; n > 0; n = this->m_vecFightInfo.m_Size )
    {
      v13 = 0;
      v14 = 0;
LABEL_33:
      v16 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( v15 != v14 )
        {
          v17 = this->m_vecFightInfo.m_Memory.m_pMemory;
          v18 = &v17[v13];
          v19 = &v17[v16];
          if ( v17[v16].iLastEntry >= v17[v13].iFirstEntry && v19->iFirstEntry <= v18->iLastEntry )
            break;
        }
LABEL_31:
        ++v15;
        ++v16;
        if ( v15 == n )
        {
          ++v14;
          ++v13;
          if ( v14 == n )
            goto LABEL_60;
          goto LABEL_33;
        }
      }
      v20 = 0;
      while ( 1 )
      {
        v21 = v18->involvedHeroNames[v20];
        if ( v21 != -1 )
          break;
LABEL_143:
        v74 = v19->involvedHeroNames[v20];
        v75 = 0;
        if ( v74 != -1 )
        {
          while ( v74 != v18->involvedHeroNames[v75] )
          {
            if ( ++v75 == 24 )
              goto LABEL_148;
          }
          goto LABEL_42;
        }
LABEL_148:
        if ( ++v20 == 24 )
          goto LABEL_31;
      }
      v22 = 0;
      while ( v21 != v19->involvedHeroNames[v22] )
      {
        if ( ++v22 == 24 )
          goto LABEL_143;
      }
LABEL_42:
      v23 = 0;
      v24 = v14;
      v25 = v15;
      v26 = &v17[v25];
      do
      {
LABEL_43:
        v27 = v17[v24].deathHeroNames[v23];
        v28 = &v17[v24];
        if ( v27 != -1 )
        {
          v29 = 0;
          while ( 1 )
          {
            v30 = v26->deathHeroNames[v29];
            if ( v27 == v30 )
            {
LABEL_48:
              v28 = &v17[v24];
              goto LABEL_49;
            }
            if ( v30 == -1 )
              break;
            if ( ++v29 == 24 )
              goto LABEL_48;
          }
          v26->deathHeroNames[v29] = v27;
          v17 = this->m_vecFightInfo.m_Memory.m_pMemory;
          v28 = &v17[v24];
          v26 = &v17[v25];
        }
LABEL_49:
        v31 = v28->involvedHeroNames[v23];
        if ( v31 != -1 )
        {
          for ( ii = 0; ii != 24; ++ii )
          {
            v33 = v26->involvedHeroNames[ii];
            if ( v31 == v33 )
              break;
            if ( v33 == -1 )
            {
              v26->involvedHeroNames[ii] = v31;
              ++v23;
              v17 = this->m_vecFightInfo.m_Memory.m_pMemory;
              v26 = &v17[v25];
              if ( v23 != 24 )
                goto LABEL_43;
              goto LABEL_55;
            }
          }
        }
        ++v23;
      }
      while ( v23 != 24 );
LABEL_55:
      v34 = v26->iFirstEntry;
      if ( v17[v14].iFirstEntry <= v26->iFirstEntry )
        v34 = v17[v14].iFirstEntry;
      v26->iFirstEntry = v34;
      v35 = this->m_vecFightInfo.m_Memory.m_pMemory;
      v36 = v35[v25].iLastEntry;
      if ( v35[v24].iLastEntry >= v36 )
        v36 = v35[v24].iLastEntry;
      v35[v25].iLastEntry = v36;
      CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(&firstEntry);
      DOTA_CombatLog_Record::GetEntry(this, this->m_vecFightInfo.m_Memory.m_pMemory[v25].iFirstEntry, &firstEntry);
      CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v124);
      DOTA_CombatLog_Record::GetEntry(this, this->m_vecFightInfo.m_Memory.m_pMemory[v25].iLastEntry, v124);
      this->m_vecFightInfo.m_Memory.m_pMemory[v25].fStartTime = *&firstEntry.involvedHeroNames[21] - this->m_fTimeDelta;
      this->m_vecFightInfo.m_Memory.m_pMemory[v25].fEndTime = v131 - this->m_fTimeDelta;
      CUtlVectorBase<sFightInfo,CUtlMemory<sFightInfo,int>>::Remove(&this->m_vecFightInfo, v14);
      CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v124);
      CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(&firstEntry);
    }
  }
LABEL_60:
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v104);
}


// DOTA_CombatLog_Record::GetGoldDelta  (line 1519, @0x000000000248f4e0, libserver.so)  // inlines: GetEntryType
// calls: DOTA_CombatLog_Record::FindNameForPlayerID, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, DOTA_CombatLog_Record::GetEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_CombatLog::DoCombatAnalysis
int __fastcall DOTA_CombatLog_Record::GetGoldDelta(
        DOTA_CombatLog_Record *const this,
        int iPlayerID,
        int iStartEntry,
        int iEndEntry)
{
  __int64 v7; // r12
  int nGold; // [rsp+8h] [rbp-128h]
  int iHeroName; // [rsp+Ch] [rbp-124h]
  _BYTE v11[28]; // [rsp+10h] [rbp-120h] BYREF
  int v12; // [rsp+2Ch] [rbp-104h]
  int v13; // [rsp+44h] [rbp-ECh]
  int v14; // [rsp+68h] [rbp-C8h]

  iHeroName = DOTA_CombatLog_Record::FindNameForPlayerID(this, iPlayerID);
  if ( iStartEntry > iEndEntry )
    return 0;
  nGold = 0;
  v7 = iStartEntry;
  do
  {
    while ( this->m_vecEntryReferences.m_Memory.m_pMemory[v7].m_unType != 8 )
    {
      ++iStartEntry;
      ++v7;
      if ( iEndEntry < iStartEntry )
        return nGold;
    }
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v11);
    DOTA_CombatLog_Record::GetEntry(this, iStartEntry, v11);
    if ( iHeroName == v12 && (v14 - 1) <= 0xB && ((1LL << (v14 - 1)) & 0x803) != 0 )
      nGold += v13;
    ++iStartEntry;
    ++v7;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v11);
  }
  while ( iEndEntry >= iStartEntry );
  return nGold;
}


// DOTA_CombatLog_Record::GetXPDelta  (line 1552, @0x000000000248f5f0, libserver.so)  // inlines: GetEntryType
// calls: DOTA_CombatLog_Record::FindNameForPlayerID, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, DOTA_CombatLog_Record::GetEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: CDOTA_CombatLog::DoCombatAnalysis
int __fastcall DOTA_CombatLog_Record::GetXPDelta(
        DOTA_CombatLog_Record *const this,
        int iPlayerID,
        int iStartEntry,
        int iEndEntry)
{
  __int64 v7; // r12
  int nXP; // [rsp+8h] [rbp-128h]
  int iHeroName; // [rsp+Ch] [rbp-124h]
  _BYTE v11[28]; // [rsp+10h] [rbp-120h] BYREF
  int v12; // [rsp+2Ch] [rbp-104h]
  int v13; // [rsp+44h] [rbp-ECh]
  int v14; // [rsp+74h] [rbp-BCh]

  iHeroName = DOTA_CombatLog_Record::FindNameForPlayerID(this, iPlayerID);
  if ( iStartEntry > iEndEntry )
    return 0;
  nXP = 0;
  v7 = iStartEntry;
  do
  {
    while ( this->m_vecEntryReferences.m_Memory.m_pMemory[v7].m_unType != 10 )
    {
      ++iStartEntry;
      ++v7;
      if ( iEndEntry < iStartEntry )
        return nXP;
    }
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v11);
    DOTA_CombatLog_Record::GetEntry(this, iStartEntry, v11);
    if ( iHeroName == v12 && v14 == 1 )
      nXP += v13;
    ++iStartEntry;
    ++v7;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v11);
  }
  while ( iEndEntry >= iStartEntry );
  return nXP;
}


// DOTA_CombatLog_Record::GetDamageDone  (line 1576, @0x000000000248f6f0, libserver.so)  // inlines: GetAttackingHero, GetEntryType, GetTargetHero
// calls: DOTA_CombatLog_Record::FindNameForPlayerID, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, DOTA_CombatLog_Record::GetEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, DOTA_CombatLog_Record::GetAttackingHero, _Unwind_Resume
int __fastcall DOTA_CombatLog_Record::GetDamageDone(
        DOTA_CombatLog_Record *const this,
        int iPlayerID,
        int iStartEntry,
        int iEndEntry,
        int iAbilityName,
        const int *pHeroFilter,
        int nHeroFilterSize)
{
  __int64 v11; // r12
  const int *v12; // r14
  int AttackingHero; // eax
  const int *v15; // rax
  int iHeroName; // [rsp+Ch] [rbp-144h]
  const int *v17; // [rsp+10h] [rbp-140h]
  int nDamage; // [rsp+20h] [rbp-130h]
  _BYTE v21[28]; // [rsp+30h] [rbp-120h] BYREF
  int v22; // [rsp+4Ch] [rbp-104h]
  int v23; // [rsp+54h] [rbp-FCh]
  int v24; // [rsp+5Ch] [rbp-F4h]
  char v25; // [rsp+61h] [rbp-EFh]
  char v26; // [rsp+62h] [rbp-EEh]
  char v27; // [rsp+63h] [rbp-EDh]
  int v28; // [rsp+64h] [rbp-ECh]

  iHeroName = DOTA_CombatLog_Record::FindNameForPlayerID(this, iPlayerID);
  if ( iStartEntry <= iEndEntry )
  {
    nDamage = 0;
    v11 = iStartEntry;
    v17 = pHeroFilter + 1;
    v12 = &pHeroFilter[nHeroFilterSize - 1 + 1];
    while ( 1 )
    {
      while ( this->m_vecEntryReferences.m_Memory.m_pMemory[v11].m_unType != 0 )
      {
        ++iStartEntry;
        ++v11;
        if ( iEndEntry < iStartEntry )
          return nDamage;
      }
      CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v21);
      DOTA_CombatLog_Record::GetEntry(this, iStartEntry, v21);
      if ( iAbilityName == -1 || v24 == iAbilityName )
      {
        AttackingHero = v23;
        if ( v25 == 0 )
          AttackingHero = DOTA_CombatLog_Record::GetAttackingHero(this, v21);
        if ( v26 != 0 || v27 == 0 || iHeroName != AttackingHero || v22 == -1 )
          goto LABEL_7;
        if ( pHeroFilter == 0 )
          goto LABEL_21;
        if ( nHeroFilterSize > 0 )
          break;
      }
LABEL_7:
      ++iStartEntry;
      ++v11;
      CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v21);
      if ( iEndEntry < iStartEntry )
        return nDamage;
    }
    if ( *pHeroFilter != v22 )
    {
      v15 = v17;
      while ( v15 != v12 )
      {
        if ( *v15++ == v22 )
          goto LABEL_21;
      }
      goto LABEL_7;
    }
LABEL_21:
    nDamage += v28;
    goto LABEL_7;
  }
  return 0;
}


// DOTA_CombatLog_Record::GetItemsUsed  (line 1622, @0x000000000248fc80, libserver.so)
// calls: DOTA_CombatLog_Record::FindNameForPlayerID, DOTA_CombatLog_Record::GetInflictorForAttacker
void __fastcall DOTA_CombatLog_Record::GetItemsUsed(
        DOTA_CombatLog_Record *const this,
        int iPlayerID,
        int iStartEntry,
        int iEndEntry,
        CUtlVector<sCombatLogUsageCount,CUtlMemory<sCombatLogUsageCount,int> > *pItemsUsed)
{
  int NameForPlayerID; // eax

  NameForPlayerID = DOTA_CombatLog_Record::FindNameForPlayerID(this, iPlayerID);
  DOTA_CombatLog_Record::GetInflictorForAttacker(this, NameForPlayerID, iStartEntry, iEndEntry, 6, pItemsUsed);
}


// DOTA_CombatLog_Record::GetAbilitiesUsed  (line 1629, @0x000000000248fcc0, libserver.so)
// calls: DOTA_CombatLog_Record::FindNameForPlayerID, DOTA_CombatLog_Record::GetInflictorForAttacker
void __fastcall DOTA_CombatLog_Record::GetAbilitiesUsed(
        DOTA_CombatLog_Record *const this,
        int iPlayerID,
        int iStartEntry,
        int iEndEntry,
        CUtlVector<sCombatLogUsageCount,CUtlMemory<sCombatLogUsageCount,int> > *pAbilitiesUsed)
{
  int NameForPlayerID; // eax

  NameForPlayerID = DOTA_CombatLog_Record::FindNameForPlayerID(this, iPlayerID);
  DOTA_CombatLog_Record::GetInflictorForAttacker(this, NameForPlayerID, iStartEntry, iEndEntry, 5, pAbilitiesUsed);
}


// DOTA_CombatLog_Record::UsedBuyback  (line 1636, @0x000000000248f8b0, libserver.so)  // inlines: GetEntryType
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, DOTA_CombatLog_Record::GetEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
bool __fastcall DOTA_CombatLog_Record::UsedBuyback(
        DOTA_CombatLog_Record *const this,
        int iPlayerID,
        int iStartEntry,
        int iEndEntry)
{
  __int64 v6; // r12
  int v7; // ebx
  _BYTE v10[52]; // [rsp+10h] [rbp-120h] BYREF
  int v11; // [rsp+44h] [rbp-ECh]

  v6 = iStartEntry;
  v7 = iStartEntry;
  if ( iStartEntry > iEndEntry )
    return 0;
  while ( 1 )
  {
    while ( this->m_vecEntryReferences.m_Memory.m_pMemory[v6].m_unType != 12 )
    {
      ++v7;
      ++v6;
      if ( iEndEntry < v7 )
        return 0;
    }
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v10);
    DOTA_CombatLog_Record::GetEntry(this, v7, v10);
    if ( v11 == iPlayerID )
      break;
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v10);
    ++v7;
    ++v6;
    if ( iEndEntry < v7 )
      return 0;
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v10);
  return 1;
}


// DOTA_CombatLog_Record::AddEntry  (line 1656, @0x0000000002483570, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CopyConstruct<SCombatLogReference>, Element, GrowMemory, InsertMultipleBefore, V_memcpy, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, memcpy, operator[], size, ~basic_string
// calls: google::protobuf::MessageLite::SerializeAsString(void), memcpy, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ShiftElementsRight, CUtlMemory<SCombatLogReference, int>::Grow, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: DOTA_CombatLog_Record::HandleCombatLogData
int __fastcall DOTA_CombatLog_Record::AddEntry(
        DOTA_CombatLog_Record *const this,
        const CMsgDOTACombatLogEntry *const entry)
{
  char *M_p; // rsi
  int v5; // r14d
  int m_Size; // r12d
  size_t v7; // rdx
  uint16 v8; // r13
  int v9; // r15d
  int v10; // eax
  SCombatLogReference *v11; // rax
  char *v12; // rdi
  int v14; // r15d
  int v15; // eax
  int v16; // edx
  char v17; // [rsp+1Fh] [rbp-41h] BYREF
  std::string stringToAdd; // [rsp+20h] [rbp-40h] BYREF

  google::protobuf::MessageLite::SerializeAsString(&stringToAdd);
  M_p = stringToAdd._M_dataplus._M_p;
  v5 = *(entry + 6);
  m_Size = this->m_MemoryStack.m_Size;
  v7 = *(stringToAdd._M_dataplus._M_p - 3);
  v8 = v7;
  if ( v7 != 0 )
  {
    v14 = v7;
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::GrowVector(&this->m_MemoryStack, v7);
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::ShiftElementsRight(&this->m_MemoryStack, m_Size, v14);
    M_p = stringToAdd._M_dataplus._M_p;
    v7 = *(stringToAdd._M_dataplus._M_p - 3);
  }
  memcpy(&this->m_MemoryStack.m_Memory.m_pMemory[m_Size], M_p, v7);
  v9 = this->m_vecEntryReferences.m_Size;
  v10 = v9;
  if ( v9 == this->m_vecEntryReferences.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<SCombatLogReference,int>::Grow(&this->m_vecEntryReferences.m_Memory, 1);
    v10 = this->m_vecEntryReferences.m_Size;
  }
  this->m_vecEntryReferences.m_Size = v10 + 1;
  v11 = &this->m_vecEntryReferences.m_Memory.m_pMemory[v9];
  if ( v11 != 0 )
  {
    v11->m_unType = v5;
    v11->m_unSize = v8;
    v11->m_unOffset = m_Size;
  }
  v12 = stringToAdd._M_dataplus._M_p - 24;
  if ( stringToAdd._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v15 = _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF);
    }
    else
    {
      v16 = *(stringToAdd._M_dataplus._M_p - 2);
      *(stringToAdd._M_dataplus._M_p - 2) = v16 - 1;
      v15 = v16;
    }
    if ( v15 <= 0 )
      std::string::_Rep::_M_destroy(v12, &v17);
  }
  return v9;
}


// DOTA_CombatLog_Record::GetEntry  (line 1676, @0x0000000002470810, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, operator[], ~basic_string
// calls: std::string::string(char const*,ulong,std::allocator<char> const&), google::protobuf::MessageLite::ParseFromString(std::string const&), std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: DOTA_CombatLog_Record::GetGoldDelta, DOTA_CombatLog_Record::GetXPDelta, DOTA_CombatLog_Record::GetDamageDone, DOTA_CombatLog_Record::UsedBuyback, DOTA_CombatLog_Record::FindEventTimeDelta, DOTA_CombatLog_Record::GetInflictorForAttacker, DOTA_CombatLog_Record::ProcessEntry
void __fastcall DOTA_CombatLog_Record::GetEntry(
        DOTA_CombatLog_Record *const this,
        int iEntry,
        CMsgDOTACombatLogEntry *pEntry)
{
  SCombatLogReference *v4; // rax
  char *v5; // rdi
  int v6; // eax
  int v7; // edx
  char v8; // [rsp+Fh] [rbp-31h] BYREF
  std::string stringToParse; // [rsp+10h] [rbp-30h] BYREF

  v4 = &this->m_vecEntryReferences.m_Memory.m_pMemory[iEntry];
  std::string::string(&stringToParse, &this->m_MemoryStack.m_Memory.m_pMemory[v4->m_unOffset], v4->m_unSize, &v8);
  google::protobuf::MessageLite::ParseFromString(pEntry, &stringToParse);
  v5 = stringToParse._M_dataplus._M_p - 24;
  if ( stringToParse._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v6 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v7 = *(stringToParse._M_dataplus._M_p - 2);
      *(stringToParse._M_dataplus._M_p - 2) = v7 - 1;
      v6 = v7;
    }
    if ( v6 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v8);
  }
}


// DOTA_CombatLog_Record::FindTeamNumberForName  (line 1685, @0x0000000002470960, libserver.so)
// calls: DOTA_CombatLog_Record::FindPlayerIDForName, CDOTA_PlayerResource::GetTeam
// callers: DOTA_CombatLog_Record::ProcessEntry
int __fastcall DOTA_CombatLog_Record::FindTeamNumberForName(DOTA_CombatLog_Record *const this, int iName)
{
  int PlayerIDForName; // eax

  if ( iName == -1 )
    return -1;
  PlayerIDForName = DOTA_CombatLog_Record::FindPlayerIDForName(this, iName);
  if ( PlayerIDForName == -1 )
    return -1;
  else
    return CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, PlayerIDForName);
}


// DOTA_CombatLog_Record::FindPlayerIDForName  (line 1699, @0x00000000024708c0, libserver.so)  // inlines: FStrEq, GetName, _V_strcmp
// calls: strcmp, CDOTA_PlayerResource::NumTeamPlayers, CDOTA_PlayerResource::GetSelectedHeroName
// callers: DOTA_CombatLog_Record::FindTeamNumberForName, DOTA_CombatLog_Record::GetAttackingHero
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
int __fastcall DOTA_CombatLog_Record::FindPlayerIDForName(const DOTA_CombatLog_Record *const this, int iName)
{
  const CDOTA_PlayerResource *v2; // rdi
  int i; // r12d
  const char *v5; // rbx
  __int64 v6; // rax
  const char *SelectedHeroName; // rax

  v2 = g_pDOTAPlayerResource;
  if ( g_pDOTAPlayerResource != 0 )
  {
    for ( i = 0; i < CDOTA_PlayerResource::NumTeamPlayers(v2); ++i )
    {
      v5 = "";
      if ( DOTA_CombatLog_Record::sm_pStringTableCombatLogNames != 0 )
      {
        v6 = (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 9))(
               DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
               iName,
               1);
        if ( v6 != 0 )
          v5 = v6;
      }
      SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, i);
      if ( SelectedHeroName == v5 || strcmp(SelectedHeroName, v5) == 0 )
        return i;
      v2 = g_pDOTAPlayerResource;
    }
  }
  return -1;
}


// DOTA_CombatLog_Record::FindNameForPlayerID  (line 1719, @0x00000000024709d0, libserver.so)  // inlines: FindNameIndex
// calls: CDOTA_PlayerResource::GetSelectedHeroName
// callers: DOTA_CombatLog_Record::GetGoldDelta, DOTA_CombatLog_Record::GetXPDelta, DOTA_CombatLog_Record::GetDamageDone, DOTA_CombatLog_Record::GetItemsUsed, DOTA_CombatLog_Record::GetAbilitiesUsed
// globals: DOTA_CombatLog_Record::sm_pStringTableCombatLogNames
int __fastcall DOTA_CombatLog_Record::FindNameForPlayerID(DOTA_CombatLog_Record *const this, int iPlayerID)
{
  const char *SelectedHeroName; // rax

  SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, iPlayerID);
  if ( SelectedHeroName != 0 )
    return (*(DOTA_CombatLog_Record::sm_pStringTableCombatLogNames->_vptr_INetworkStringTable + 12))(
             DOTA_CombatLog_Record::sm_pStringTableCombatLogNames,
             SelectedHeroName);
  else
    return 0xFFFF;
}


// DOTA_CombatLog_Record::GetAttackingHero  (line 1728, @0x00000000024709a0, libserver.so)
// calls: DOTA_CombatLog_Record::FindPlayerIDForName
// callers: DOTA_CombatLog_Record::GetAttackingHero, DOTA_CombatLog_Record::GetDamageDone, DOTA_CombatLog_Record::ProcessEntry
int __fastcall DOTA_CombatLog_Record::GetAttackingHero(
        const DOTA_CombatLog_Record *const this,
        const CMsgDOTACombatLogEntry *const entry)
{
  int result; // eax

  result = DOTA_CombatLog_Record::FindPlayerIDForName(this, *(entry + 10));
  if ( result != -1 )
    return *(entry + 10);
  return result;
}


// DOTA_CombatLog_Record::GetAttackingHero  (line 1728, @0x0000000002470a10, libserver.so)
// calls: DOTA_CombatLog_Record::GetAttackingHero
int __fastcall DOTA_CombatLog_Record::GetAttackingHero(
        const DOTA_CombatLog_Record *const this,
        const CMsgDOTACombatLogEntry *const entry)
{
  if ( *(entry + 49) != 0 )
    return *(entry + 9);
  else
    return DOTA_CombatLog_Record::GetAttackingHero(this, entry);
}


// DOTA_CombatLog_Record::GetTargetHero  (line 1746, @0x0000000002470a30, libserver.so)
int __fastcall DOTA_CombatLog_Record::GetTargetHero(
        const DOTA_CombatLog_Record *const this,
        const CMsgDOTACombatLogEntry *const entry)
{
  if ( *(entry + 50) != 0 || *(entry + 51) == 0 )
    return -1;
  else
    return *(entry + 7);
}


// DOTA_CombatLog_Record::FindEventTimeDelta  (line 1753, @0x000000000248f980, libserver.so)
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, DOTA_CombatLog_Record::GetEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, _Unwind_Resume
// callers: DOTA_CombatLog_Record::ProcessEntry
__int64 __fastcall DOTA_CombatLog_Record::FindEventTimeDelta(
        DOTA_CombatLog_Record *const this,
        int iEntry,
        float a3,
        float fTimeDelta)
{
  int v6; // r12d
  int v7; // r12d
  int v8; // ebx
  float fTargetTimea; // [rsp+Ch] [rbp-124h]
  _BYTE v12[92]; // [rsp+10h] [rbp-120h] BYREF
  float v13; // [rsp+6Ch] [rbp-C4h]

  v6 = -(a3 < 0.0);
  CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v12);
  v7 = v6 | 1;
  DOTA_CombatLog_Record::GetEntry(this, iEntry, v12);
  if ( iEntry > 0 && iEntry < this->m_vecEntryReferences.m_Size )
  {
    v8 = iEntry;
    fTargetTimea = v13 + a3;
    do
    {
      DOTA_CombatLog_Record::GetEntry(this, v8, v12);
      if ( v7 == 1 )
      {
        if ( v13 > fTargetTimea )
        {
          iEntry = v8;
          break;
        }
      }
      else if ( v7 == -1 && fTargetTimea > v13 )
      {
        iEntry = v8;
        break;
      }
      v8 += v7;
    }
    while ( v8 > 0 && v8 < this->m_vecEntryReferences.m_Size );
  }
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v12);
  return iEntry;
}


// DOTA_CombatLog_Record::GetInflictorForAttacker  (line 1777, @0x000000000248fa90, libserver.so)  // inlines: AddToTail, CopyConstruct<sCombatLogUsageCount>, Element, GetEntryType, GrowMemory, end, operator[]
// calls: CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, DOTA_CombatLog_Record::GetEntry, CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CUtlMemory<sCombatLogUsageCount, int>::Grow, _Unwind_Resume
// callers: DOTA_CombatLog_Record::GetItemsUsed, DOTA_CombatLog_Record::GetAbilitiesUsed
void __fastcall DOTA_CombatLog_Record::GetInflictorForAttacker(
        DOTA_CombatLog_Record *const this,
        int iHeroName,
        int iStartEntry,
        int iEndEntry,
        int iEntryType,
        CUtlVector<sCombatLogUsageCount,CUtlMemory<sCombatLogUsageCount,int> > *pInflictors)
{
  __int64 v9; // r12
  int v10; // ebx
  sCombatLogUsageCount *m_pMemory; // rax
  sCombatLogUsageCount *v12; // rdx
  char v13; // cl
  int v14; // eax
  sCombatLogUsageCount *v15; // rax
  CUtlVectorBase<sCombatLogUsageCount,CUtlMemory<sCombatLogUsageCount,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-148h]
  int v17; // [rsp+10h] [rbp-140h]
  int v18; // [rsp+14h] [rbp-13Ch]
  int m_Size; // [rsp+20h] [rbp-130h]
  _BYTE v22[36]; // [rsp+30h] [rbp-120h] BYREF
  int v23; // [rsp+54h] [rbp-FCh]
  int v24; // [rsp+5Ch] [rbp-F4h]
  int v25; // [rsp+7Ch] [rbp-D4h]

  v9 = iStartEntry;
  v10 = iStartEntry;
  p_m_Memory = &pInflictors->m_Memory;
  while ( iEndEntry >= v10 )
  {
    while ( iEntryType != this->m_vecEntryReferences.m_Memory.m_pMemory[v9].m_unType )
    {
      ++v10;
      ++v9;
      if ( iEndEntry < v10 )
        return;
    }
    CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v22);
    DOTA_CombatLog_Record::GetEntry(this, v10, v22);
    if ( v23 != iHeroName )
      goto LABEL_12;
    m_pMemory = pInflictors->m_Memory.m_pMemory;
    m_Size = pInflictors->m_Size;
    v12 = &m_pMemory[pInflictors->m_Size];
    if ( m_pMemory != v12 )
    {
      v13 = 0;
      do
      {
        while ( m_pMemory->iAbility != v24 )
        {
          if ( v12 == ++m_pMemory )
            goto LABEL_11;
        }
        ++m_pMemory->iCount;
        ++m_pMemory;
        v13 = 1;
      }
      while ( v12 != m_pMemory );
LABEL_11:
      if ( v13 != 0 )
        goto LABEL_12;
      m_Size = pInflictors->m_Size;
    }
    v18 = v25;
    v17 = v24;
    v14 = m_Size;
    if ( pInflictors->m_Memory.m_nAllocationCount == m_Size )
    {
      CUtlMemory<sCombatLogUsageCount,int>::Grow(p_m_Memory, 1);
      v14 = pInflictors->m_Size;
    }
    pInflictors->m_Size = v14 + 1;
    v15 = &pInflictors->m_Memory.m_pMemory[m_Size];
    if ( v15 != 0 )
    {
      v15->iCount = 1;
      v15->iAbility = v17;
      v15->iLevel = v18;
      CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v22);
      goto LABEL_13;
    }
LABEL_12:
    CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v22);
LABEL_13:
    ++v10;
    ++v9;
  }
}


